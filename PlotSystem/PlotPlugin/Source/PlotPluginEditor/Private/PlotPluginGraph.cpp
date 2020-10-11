#include "PlotPluginGraph.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraph/EdGraphSchema.h"
#include "PlotPluginGraphNode.h"
#include "UObject/UObjectHash.h"
#include "PlotPlugin.h"
#include "PlotPluginNode.h"
#include "PlotPluginGraphNode_Root.h"

namespace PlotHelpers {
	UEdGraphPin* FindGraphNodePin(UEdGraphNode* Node, EEdGraphPinDirection Dir)
	{
		UEdGraphPin* Pin = nullptr;
		for (int32 Idx = 0; Idx < Node->Pins.Num(); Idx++)
		{
			if (Node->Pins[Idx]->Direction == Dir)
			{
				Pin = Node->Pins[Idx];
				break;
			}
		}
		return Pin;
	}
	UPlotPluginGraphNode* SpawnMissingGraphNodesWorker(UPlotPluginNodeBase* Node, UPlotPluginGraph* Graph)
	{
		if (!Node) return nullptr;
		UPlotPluginGraphNode* GraphNode = nullptr;

		if (Node->bRootNode)
		{
			FGraphNodeCreator<UPlotPluginGraphNode_Root> NodeBuilder(*Graph);
			GraphNode = NodeBuilder.CreateNode();
			NodeBuilder.Finalize();
		}
		else
		{
			FGraphNodeCreator<UPlotPluginGraphNode> NodeBuilder(*Graph);
			GraphNode = NodeBuilder.CreateNode();
			NodeBuilder.Finalize();
		}

		if (GraphNode)
		{
			GraphNode->NodeInstance = Node;
			GraphNode->bRootNode = Node->bRootNode;

			const auto OutputPin = FindGraphNodePin(GraphNode, EGPD_Output);
			for (int32 Idx = 0; Idx < Node->Links.Num(); ++Idx)
			{
				const auto M = Node->Links[Idx];
				if (!M) continue;
				const auto ChildGraphNode = SpawnMissingGraphNodesWorker(M, Graph);
				const auto ChildInputPin = FindGraphNodePin(ChildGraphNode, EGPD_Input);
				OutputPin->MakeLinkTo(ChildInputPin);
			}
		}
		return GraphNode;
	}

	/*
	 *Create By Node
	 */
	UPlotPluginNodeBase* CreateNodeFromGraph(UPlotPluginGraph* PlotGraph, UPlotPluginGraphNode* Node, TArray<UPlotPluginGraphNode*>& HasCratedNode)
	{
		HasCratedNode.Add(Node);
		const auto Ret = Cast<UPlotPluginNodeBase>(Node->NodeInstance);
		Ret->Links.Empty();
		Ret->Rename(nullptr, PlotGraph->GetPlotPlugin());
		for (int32 PinIndex = 0; PinIndex < Node->Pins.Num(); ++PinIndex)
		{
			const auto Pin = Node->Pins[PinIndex];
			if (Pin->Direction != EGPD_Output) continue;
			for (int32 Index = 0; Index < Pin->LinkedTo.Num(); ++Index)
			{
				const auto GraphNode = Cast<UPlotPluginGraphNode>(Pin->LinkedTo[Index]->GetOwningNode());
				if (!GraphNode) continue;
				UPlotPluginNodeBase* AddNode = nullptr;
				if (HasCratedNode.Contains(GraphNode))
				{
					AddNode = Cast<UPlotPluginNodeBase>(GraphNode->NodeInstance);
				}
				else
				{
					AddNode = CreateNodeFromGraph(PlotGraph, GraphNode, HasCratedNode);
				}
				if (AddNode)
					Ret->Links.Add(AddNode);
			}
		}
		return Ret;
	}

	void SpawnMissingNodes(UPlotPlugin* Asset, UPlotPluginGraph* Graph)
	{
		if (!Asset || !Graph) return;
		UPlotPluginGraphNode* RootNode = nullptr;
		//find root
		for (int32 Idx = 0; Idx < Graph->Nodes.Num(); Idx++)
		{
			RootNode = Cast<UPlotPluginGraphNode>(Graph->Nodes[Idx]);
			if (RootNode && RootNode->bRootNode)
			{
				break;
			}
		}
		//Create all node
		UPlotPluginNodeBase* Node = Cast<UPlotPluginNodeBase>(Asset->PlotRootNode);
		UPlotPluginGraphNode* SpawnedtNode = SpawnMissingGraphNodesWorker(Node, Graph);
		//Link  Root->Normal
		if (RootNode && SpawnedtNode)
		{
			UEdGraphPin* RootOutPin = FindGraphNodePin(RootNode, EGPD_Output);
			UEdGraphPin* SpawnedInPin = FindGraphNodePin(SpawnedtNode, EGPD_Input);
			RootOutPin->MakeLinkTo(SpawnedInPin);
		}
	}
}

UPlotPluginGraph::UPlotPluginGraph()
{
	bLockUpdates = false;
}

void UPlotPluginGraph::OnSave()
{
	UpdateAsset();
}

UPlotPlugin* UPlotPluginGraph::GetPlotPlugin() const
{
	return  Cast<UPlotPlugin>(GetOuter());
}

void UPlotPluginGraph::OnCreated()
{
	MarkVersion();
	PlotHelpers::SpawnMissingNodes(GetPlotPlugin(), this);
}

void UPlotPluginGraph::OnLoaded()
{
	for (const auto N : Nodes)
	{
		if (const auto Node = Cast<UPlotPluginGraphNode>(N))
		{
			for (const auto Sub : Node->SubNodes)
			{
				Sub->ParentNode = Node;
			}
		}
	}
}

void UPlotPluginGraph::Initialize()
{
	UpdateVersion();
}

void UPlotPluginGraph::UpdateAsset(int32 UpdateFlags)
{
	if (bLockUpdates) return;
	CreatePlotFromGraph();
}

void UPlotPluginGraph::UpdateVersion()
{
	if (GraphVersion == 1)
	{
		return;
	}
	MarkVersion();
	Modify();
}

void UPlotPluginGraph::MarkVersion()
{
	GraphVersion = 1;
}

void UPlotPluginGraph::OnSubNodeDropped()
{
	NotifyGraphChanged();
}

void UPlotPluginGraph::OnNodesPasted(const FString& ImportStr)
{
	// empty in base class
}

void UpdatePlotGraphNodeErrorMessage(UPlotPluginGraphNode& Node)
{
	// Broke out setting error message in to own function so it can be reused when iterating nodes collection.
	if (Node.NodeInstance)
	{
		Node.ErrorMessage = FPlotPluginGraphNodeClassHelper::GetDeprecationMessage(Node.NodeInstance->GetClass());
	}
	else
	{
		// Null instance. Do we have any meaningful class data?
		FString StoredClassName = Node.ClassData.GetClassName();
		StoredClassName.RemoveFromEnd(TEXT("_C"));

		if (!StoredClassName.IsEmpty())
		{
			// There is class data here but the instance was not be created.
			static const FString IsMissingClassMessage(" class missing. Referenced by ");
			Node.ErrorMessage = StoredClassName + IsMissingClassMessage + Node.GetFullName();
		}
	}

	if (Node.HasErrors())
	{
		UE_LOG(LogTemp, Error, TEXT("%s"), *Node.ErrorMessage);
	}
}

void UPlotPluginGraph::RemoveOrphanedNodes()
{
	TSet<UObject*> NodeInstances;
	CollectAllNodeInstances(NodeInstances);

	NodeInstances.Remove(nullptr);

	// Obtain a list of all nodes actually in the asset and discard unused nodes
	TArray<UObject*> AllInners;
	const bool bIncludeNestedObjects = false;
	GetObjectsWithOuter(GetOuter(), AllInners, bIncludeNestedObjects);
	for (auto InnerIt = AllInners.CreateConstIterator(); InnerIt; ++InnerIt)
	{
		UObject* TestObject = *InnerIt;
		if (!NodeInstances.Contains(TestObject) && CanRemoveNestedObject(TestObject))
		{
			OnNodeInstanceRemoved(TestObject);

			TestObject->SetFlags(RF_Transient);
			TestObject->Rename(NULL, GetTransientPackage(), REN_DontCreateRedirectors | REN_NonTransactional | REN_ForceNoResetLoaders);
		}
	}
}

void UPlotPluginGraph::UpdateClassData()
{
	for (int32 Idx = 0; Idx < Nodes.Num(); Idx++)
	{
		UPlotPluginGraphNode* Node = Cast<UPlotPluginGraphNode>(Nodes[Idx]);
		if (Node)
		{
			Node->UpdateNodeClassData();

			for (int32 SubIdx = 0; SubIdx < Node->SubNodes.Num(); SubIdx++)
			{
				if (Node->SubNodes[SubIdx])
				{
					Node->UpdateNodeClassData();
				}
			}
		}
	}
}

bool UPlotPluginGraph::IsLocked() const
{
	return bLockUpdates;
}

void UPlotPluginGraph::LockUpdates()
{
	bLockUpdates = true;
}

void UPlotPluginGraph::UnlockUpdates()
{
	bLockUpdates = false;
	UpdateAsset();
}

void UPlotPluginGraph::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
}

void UPlotPluginGraph::CollectAllNodeInstances(TSet<UObject*>& NodeInstances)
{
	for (int32 Idx = 0; Idx < Nodes.Num(); Idx++)
	{
		UPlotPluginGraphNode* MyNode = Cast<UPlotPluginGraphNode>(Nodes[Idx]);
		if (MyNode)
		{
			NodeInstances.Add(MyNode->NodeInstance);

			for (int32 SubIdx = 0; SubIdx < MyNode->SubNodes.Num(); SubIdx++)
			{
				if (MyNode->SubNodes[SubIdx])
				{
					NodeInstances.Add(MyNode->SubNodes[SubIdx]->NodeInstance);
				}
			}
		}
	}
}

bool UPlotPluginGraph::CanRemoveNestedObject(UObject* TestObject) const
{
	return !TestObject->IsA(UEdGraphNode::StaticClass()) &&
		!TestObject->IsA(UEdGraph::StaticClass()) &&
		!TestObject->IsA(UEdGraphSchema::StaticClass());
}

void UPlotPluginGraph::OnNodeInstanceRemoved(UObject* NodeInstance)
{
	// empty in base class
}

UEdGraphPin* UPlotPluginGraph::FindGraphNodePin(UEdGraphNode* Node, const EEdGraphPinDirection Dir)
{
	UEdGraphPin* Pin = nullptr;
	for (int32 Idx = 0; Idx < Node->Pins.Num(); Idx++)
	{
		if (Node->Pins[Idx]->Direction == Dir)
		{
			Pin = Node->Pins[Idx];
			break;
		}
	}
	return Pin;
}

/*
 * Create Plot From Graph
 */
bool UPlotPluginGraph::CreatePlotFromGraph()
{
	const auto Plot = GetPlotPlugin();
	if (!Plot) return false;
	IdCreator.Reset();
	UPlotPluginGraphNode* RootGraphNode = nullptr;
	for (const auto N : Nodes)
	{
		if (const auto Node = Cast<UPlotPluginGraphNode>(N))
		{
			UPlotPluginNodeBase* PlotNode = Cast<UPlotPluginNodeBase>(Node->NodeInstance);
			PlotNode->NodeId = IdCreator.CreateId();
			// Is Root Node
			if (Node->bRootNode)
			{
				RootGraphNode = Node;
			}
		}
	}
	//Not Find Root Node 
	if (!RootGraphNode) return false;
	TArray<UPlotPluginGraphNode*> CreatedNode;
	Plot->PlotRootNode = PlotHelpers::CreateNodeFromGraph(this, RootGraphNode, CreatedNode);
	return true;
}
