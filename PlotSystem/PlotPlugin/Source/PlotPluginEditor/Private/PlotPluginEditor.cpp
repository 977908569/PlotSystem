#include "PlotPluginEditor.h"
#include "EditorStyle.h"
#include "PropertyEditorModule.h"
#include "GraphEditorActions.h"
#include "PlotPlugin.h"
#include "PlotPluginGraph.h"
#include "PlotPluginActions.h"
#include "EdGraphSchema_PlotPlugin.h"
#include "ScopedTransaction.h"
#include "EdGraphUtilities.h"
#include "PlotPluginGraphTypes.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Framework/Commands/GenericCommands.h"
#include "Widgets/Docking/SDockTab.h"
#include "HAL/PlatformApplicationMisc.h"


#define LOCTEXT_NAMESPACE "PlotPluginEditor"

const FName FPlotPluginEditor::ToolkitFName(TEXT("PlotPluginEditor"));
const FName FPlotPluginEditor::PropertiesTabId(TEXT("PlotPluginEditor_Properties"));
const FName FPlotPluginEditor::GraphEditorTabId(TEXT("PlotPluginEditor_GraphEditor"));

FPlotPluginEditor::FPlotPluginEditor()
{
	UEditorEngine* Editor = (UEditorEngine*)GEngine;
	if (Editor != nullptr)
	{
		Editor->RegisterForUndo(this);
	}
	OnClassListUpdatedDelegateHandle = FPlotPluginGraphNodeClassHelper::OnPackageListUpdated.AddRaw(this, &FPlotPluginEditor::OnClassListUpdated);
}

FPlotPluginEditor::~FPlotPluginEditor()
{
	UEditorEngine* Editor = (UEditorEngine*)GEngine;
	if (Editor)
	{
		Editor->UnregisterForUndo(this);
	}

	FPlotPluginGraphNodeClassHelper::OnPackageListUpdated.Remove(OnClassListUpdatedDelegateHandle);
}

void FPlotPluginEditor::InitPlotPluginEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UPlotPlugin* InAsset)
{
	SetPlotPluginAsset(InAsset);
	FGraphEditorCommands::Register();
	FPlotPluginEditorActions::Register();
	const bool bIsUpdatable = false;
	const bool bIsLockable = false;
	const bool bAllowSearch = false;
	const bool bHideSelectionTip = true;

	FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs(bIsUpdatable, bIsLockable, bAllowSearch, FDetailsViewArgs::HideNameArea, bHideSelectionTip);
	DetailsViewArgs.bAllowSearch = false;
	DetailsViewArgs.bHideSelectionTip = false;
	DetailsViewArgs.bLockable = false;

	DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	DetailsView->SetIsPropertyEditingEnabledDelegate(FIsPropertyEditingEnabled::CreateSP(this, &FPlotPluginEditor::IsPropertyEditable));
	DetailsView->OnFinishedChangingProperties().AddSP(this, &FPlotPluginEditor::OnFinishedChangingProperties);

	const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout(
		"Standalone_PlotPluginEditor_Layout_v2")
		->AddArea
		(
			FTabManager::NewPrimaryArea()
			->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewStack()
				->SetSizeCoefficient(0.1f)
				->SetHideTabWell(true)
				->AddTab(GetToolbarTabId(), ETabState::OpenedTab)
			)
			->Split
			(
				FTabManager::NewSplitter()
				->SetOrientation(Orient_Horizontal)
				->SetSizeCoefficient(0.9)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.7)
					->SetHideTabWell(true)
					->AddTab(GraphEditorTabId, ETabState::OpenedTab)
				)
				->Split
				(
					FTabManager::NewStack()
					->SetSizeCoefficient(0.3)
					->AddTab(PropertiesTabId, ETabState::OpenedTab)
				)
			)
		);
	// Init
	FAssetEditorToolkit::InitAssetEditor(Mode, InitToolkitHost, PlotPluginEditorAppIdentifier, StandaloneDefaultLayout, true, true, InAsset);
}

void FPlotPluginEditor::RestorePlot() const
{
	UPlotPluginGraph* MyGraph = Cast<UPlotPluginGraph>(PlotPluginAsset->PlotGraph);
	if (MyGraph == nullptr)
	{
		PlotPluginAsset->PlotGraph = FBlueprintEditorUtils::CreateNewGraph(PlotPluginAsset, TEXT("PlotPluginGraph"), UPlotPluginGraph::StaticClass(), UEdGraphSchema_PlotPlugin::StaticClass());
		MyGraph = Cast<UPlotPluginGraph>(PlotPluginAsset->PlotGraph);
		MyGraph->OnCreated();
	}
	else
	{
		MyGraph->OnLoaded();
	}
	MyGraph->Initialize();
}

TSharedRef<SGraphEditor> FPlotPluginEditor::CreateGraphEditorWidget(UEdGraph* InGraph)
{
	check(InGraph != nullptr);
	if (!GraphEditorCommands.IsValid())
	{
		CreateCommandList();
	}
	SGraphEditor::FGraphEditorEvents InEvents;
	InEvents.OnSelectionChanged = SGraphEditor::FOnSelectionChanged::CreateSP(
		this, &FPlotPluginEditor::OnSelectedNodesChanged);
	// Make title bar
	TSharedRef<SWidget> TitleBarWidget =
		SNew(SBorder)
		.BorderImage(FEditorStyle::GetBrush(TEXT("Graph.TitleBackground")))
		.HAlign(HAlign_Fill)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.HAlign(HAlign_Center)
		.FillWidth(1.f)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("GraphLabel", "Plot Plugin Window"))
		.TextStyle(FEditorStyle::Get(), TEXT("GraphBreadcrumbButtonText"))
		]
		];

	// Make full graph editor
	const bool bGraphIsEditable = InGraph->bEditable;
	return SNew(SGraphEditor)
		.AdditionalCommands(GraphEditorCommands)
		.IsEditable(this, &FPlotPluginEditor::InEditingMode, bGraphIsEditable)
		.Appearance(this, &FPlotPluginEditor::GetGraphAppearance)
		.TitleBar(TitleBarWidget)
		.GraphToEdit(InGraph)
		.GraphEvents(InEvents);
}

bool FPlotPluginEditor::InEditingMode(bool bGraphIsEditable) const
{
	return true;
}

void FPlotPluginEditor::RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(
		LOCTEXT("WorkspaceMenu_PlotPluginAssetEditor", "Plot Plugin Editor"));

	FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

	InTabManager->RegisterTabSpawner(PropertiesTabId, FOnSpawnTab::CreateSP(this, &FPlotPluginEditor::SpawnProperties))
		.SetDisplayName(LOCTEXT("PropertiesTab", "Details"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef())
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));

	InTabManager->RegisterTabSpawner(GraphEditorTabId,
		FOnSpawnTab::CreateSP(this, &FPlotPluginEditor::SpawnGraphEditor))
		.SetDisplayName(LOCTEXT("PlotGraphTab", "Plot Plugin Graph"))
		.SetGroup(WorkspaceMenuCategory.ToSharedRef())
		.SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));
}

void FPlotPluginEditor::UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);
	InTabManager->UnregisterTabSpawner(PropertiesTabId);
	InTabManager->UnregisterTabSpawner(GraphEditorTabId);
}

FName FPlotPluginEditor::GetToolkitFName() const
{
	return ToolkitFName;
}

FText FPlotPluginEditor::GetBaseToolkitName() const
{
	return LOCTEXT("AppLabel", "Plot Plugin Editor");
}

FText FPlotPluginEditor::GetToolkitToolTipText() const
{
	return LOCTEXT("ToolTip", "Plot Plugin Editor");
}

FString FPlotPluginEditor::GetWorldCentricTabPrefix() const
{
	return LOCTEXT("WorldCentricTabPrefix", "PlotPluginDatabase ").ToString();
}

FLinearColor FPlotPluginEditor::GetWorldCentricTabColorScale() const
{
	return FColor::Red;
}

UPlotPlugin* FPlotPluginEditor::GetPlotPluginAsset()
{
	return PlotPluginAsset;
}

void FPlotPluginEditor::SetPlotPluginAsset(UPlotPlugin* InCustomAsset)
{
	PlotPluginAsset = InCustomAsset;
}

FGraphPanelSelectionSet FPlotPluginEditor::GetSelectedNodes() const
{
	FGraphPanelSelectionSet CurrentSelection;
	if (const TSharedPtr<SGraphEditor> FocusedGraphEd = UpdateGraphEdPtr.Pin())
	{
		CurrentSelection = FocusedGraphEd->GetSelectedNodes();
	}
	return CurrentSelection;
}

void FPlotPluginEditor::OnSelectedNodesChanged(const TSet<UObject*>& NewSelection)
{
	for (const auto Obj : NewSelection)
	{
		if (DetailsView.IsValid())
		{
			DetailsView->SetObject(Cast<UPlotPluginGraphNode>(Obj)->NodeInstance);
			break;
		}
	}
}

void FPlotPluginEditor::PostUndo(bool bSuccess)
{
	if (bSuccess)
	{
		// Clear selection, to avoid holding refs to nodes that go away
		if (TSharedPtr<SGraphEditor> CurrentGraphEditor = UpdateGraphEdPtr.Pin())
		{
			CurrentGraphEditor->ClearSelectionSet();
			CurrentGraphEditor->NotifyGraphChanged();
		}
		FSlateApplication::Get().DismissAllMenus();
	}
}

void FPlotPluginEditor::PostRedo(bool bSuccess)
{
	if (bSuccess)
	{
		// Clear selection, to avoid holding refs to nodes that go away
		if (TSharedPtr<SGraphEditor> CurrentGraphEditor = UpdateGraphEdPtr.Pin())
		{
			CurrentGraphEditor->ClearSelectionSet();
			CurrentGraphEditor->NotifyGraphChanged();
		}
		FSlateApplication::Get().DismissAllMenus();
	}
}

void FPlotPluginEditor::CreateCommandList()
{
	if (GraphEditorCommands.IsValid())
	{
		return;
	}
	GraphEditorCommands = MakeShareable(new FUICommandList);

	GraphEditorCommands->MapAction(FGenericCommands::Get().SelectAll,
		FExecuteAction::CreateRaw(this, &FPlotPluginEditor::SelectAllNodes),
		FCanExecuteAction::CreateRaw(this, &FPlotPluginEditor::CanSelectAllNodes)
	);

	GraphEditorCommands->MapAction(FGenericCommands::Get().Delete,
		FExecuteAction::CreateRaw(this, &FPlotPluginEditor::DeleteSelectedNodes),
		FCanExecuteAction::CreateRaw(this, &FPlotPluginEditor::CanDeleteNodes)
	);

	GraphEditorCommands->MapAction(FGenericCommands::Get().Copy,
		FExecuteAction::CreateRaw(this, &FPlotPluginEditor::CopySelectedNodes),
		FCanExecuteAction::CreateRaw(this, &FPlotPluginEditor::CanCopyNodes)
	);

	GraphEditorCommands->MapAction(FGenericCommands::Get().Cut,
		FExecuteAction::CreateRaw(this, &FPlotPluginEditor::CutSelectedNodes),
		FCanExecuteAction::CreateRaw(this, &FPlotPluginEditor::CanCutNodes)
	);

	GraphEditorCommands->MapAction(FGenericCommands::Get().Paste,
		FExecuteAction::CreateRaw(this, &FPlotPluginEditor::PasteNodes),
		FCanExecuteAction::CreateRaw(this, &FPlotPluginEditor::CanPasteNodes)
	);

	GraphEditorCommands->MapAction(FGenericCommands::Get().Duplicate,
		FExecuteAction::CreateRaw(this, &FPlotPluginEditor::DuplicateNodes),
		FCanExecuteAction::CreateRaw(this, &FPlotPluginEditor::CanDuplicateNodes)
	);
}

void FPlotPluginEditor::SelectAllNodes()
{
	if (TSharedPtr<SGraphEditor> CurrentGraphEditor = UpdateGraphEdPtr.Pin())
	{
		CurrentGraphEditor->SelectAllNodes();
	}
}

bool FPlotPluginEditor::CanSelectAllNodes()
{
	return true;
}

void FPlotPluginEditor::DeleteSelectedNodes()
{
	TSharedPtr<SGraphEditor> CurrentGraphEditor = UpdateGraphEdPtr.Pin();
	if (!CurrentGraphEditor.IsValid())
	{
		return;
	}

	const FScopedTransaction Transaction(FGenericCommands::Get().Delete->GetDescription());
	CurrentGraphEditor->GetCurrentGraph()->Modify();

	const FGraphPanelSelectionSet SelectedNodes = CurrentGraphEditor->GetSelectedNodes();
	CurrentGraphEditor->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator NodeIt(SelectedNodes); NodeIt; ++NodeIt)
	{
		if (UEdGraphNode* Node = Cast<UEdGraphNode>(*NodeIt))
		{
			if (Node->CanUserDeleteNode())
			{
				Node->Modify();
				Node->DestroyNode();
			}
		}
	}
}

bool FPlotPluginEditor::CanDeleteNodes()
{
	// If any of the nodes can be deleted then we should allow deleting
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();
	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter);
		if (Node && Node->CanUserDeleteNode())
		{
			return true;
		}
	}

	return false;
}

void FPlotPluginEditor::DeleteSelectedDuplicatableNodes()
{
	TSharedPtr<SGraphEditor> CurrentGraphEditor = UpdateGraphEdPtr.Pin();
	if (!CurrentGraphEditor.IsValid())
	{
		return;
	}

	const FGraphPanelSelectionSet OldSelectedNodes = CurrentGraphEditor->GetSelectedNodes();
	CurrentGraphEditor->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(OldSelectedNodes); SelectedIter; ++SelectedIter)
	{
		UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter);
		if (Node && Node->CanDuplicateNode())
		{
			CurrentGraphEditor->SetNodeSelection(Node, true);
		}
	}

	// Delete the duplicatable nodes
	DeleteSelectedNodes();

	CurrentGraphEditor->ClearSelectionSet();

	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(OldSelectedNodes); SelectedIter; ++SelectedIter)
	{
		if (UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter))
		{
			CurrentGraphEditor->SetNodeSelection(Node, true);
		}
	}
}

void FPlotPluginEditor::CutSelectedNodes()
{
	CopySelectedNodes();
	DeleteSelectedDuplicatableNodes();
}

bool FPlotPluginEditor::CanCutNodes()
{
	return CanCopyNodes() && CanDeleteNodes();
}

void FPlotPluginEditor::CopySelectedNodes()
{
	// Export the selected nodes and place the text on the clipboard
	FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();
	TArray<UPlotPluginGraphNode*> SubNodes;
	FString ExportedText;
	int32 CopySubNodeIndex = 0;
	for (FGraphPanelSelectionSet::TIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter);
		UPlotPluginGraphNode* PlotNode = Cast<UPlotPluginGraphNode>(Node);
		if (Node == nullptr)
		{
			SelectedIter.RemoveCurrent();
			continue;
		}
		Node->PrepareForCopying();
		if (PlotNode)
		{
			PlotNode->CopySubNodeIndex = CopySubNodeIndex;

			// append all subnodes for selection
			for (int32 Idx = 0; Idx < PlotNode->SubNodes.Num(); Idx++)
			{
				PlotNode->SubNodes[Idx]->CopySubNodeIndex = CopySubNodeIndex;
				SubNodes.Add(PlotNode->SubNodes[Idx]);
			}
			CopySubNodeIndex++;
		}
	}
	for (int32 Idx = 0; Idx < SubNodes.Num(); Idx++)
	{
		SelectedNodes.Add(SubNodes[Idx]);
		SubNodes[Idx]->PrepareForCopying();
	}

	FEdGraphUtilities::ExportNodesToText(SelectedNodes, ExportedText);
	FPlatformApplicationMisc::ClipboardCopy(*ExportedText);

	for (FGraphPanelSelectionSet::TIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		UPlotPluginGraphNode* Node = Cast<UPlotPluginGraphNode>(*SelectedIter);
		if (Node)
		{
			Node->PostCopyNode();
		}
	}
}

bool FPlotPluginEditor::CanCopyNodes()
{
	// If any of the nodes can be duplicated then we should allow copying
	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();
	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		UEdGraphNode* Node = Cast<UEdGraphNode>(*SelectedIter);
		if (Node && Node->CanDuplicateNode())
		{
			return true;
		}
	}
	return false;
}

void FPlotPluginEditor::PasteNodes()
{
	if (TSharedPtr<SGraphEditor> CurrentGraphEditor = UpdateGraphEdPtr.Pin())
	{
		PasteNodesHere(CurrentGraphEditor->GetPasteLocation());
	}
}

void FPlotPluginEditor::PasteNodesHere(const FVector2D& Location)
{
	TSharedPtr<SGraphEditor> CurrentGraphEditor = UpdateGraphEdPtr.Pin();
	if (!CurrentGraphEditor.IsValid())
	{
		return;
	}
	// Undo/Redo support
	const FScopedTransaction Transaction(FGenericCommands::Get().Paste->GetDescription());
	UEdGraph* EdGraph = CurrentGraphEditor->GetCurrentGraph();
	UPlotPluginGraph* PlotGraph = Cast<UPlotPluginGraph>(EdGraph);

	EdGraph->Modify();
	if (PlotGraph)
	{
		PlotGraph->LockUpdates();
	}

	UPlotPluginGraphNode* SelectedParent = NULL;
	bool bHasMultipleNodesSelected = false;

	const FGraphPanelSelectionSet SelectedNodes = GetSelectedNodes();
	for (FGraphPanelSelectionSet::TConstIterator SelectedIter(SelectedNodes); SelectedIter; ++SelectedIter)
	{
		UPlotPluginGraphNode* Node = Cast<UPlotPluginGraphNode>(*SelectedIter);
		if (Node && Node->IsSubNode())
		{
			Node = Node->ParentNode;
		}

		if (Node)
		{
			if (SelectedParent == nullptr)
			{
				SelectedParent = Node;
			}
			else
			{
				bHasMultipleNodesSelected = true;
				break;
			}
		}
	}
	// Clear the selection set (newly pasted stuff will be selected)
	CurrentGraphEditor->ClearSelectionSet();

	// Grab the text to paste from the clipboard.
	FString TextToImport;
	FPlatformApplicationMisc::ClipboardPaste(TextToImport);

	// Import the nodes
	TSet<UEdGraphNode*> PastedNodes;
	FEdGraphUtilities::ImportNodesFromText(EdGraph, TextToImport, /*out*/ PastedNodes);

	//Average position of nodes so we can move them while still maintaining relative distances to each other
	FVector2D AvgNodePosition(0.0f, 0.0f);

	// Number of nodes used to calculate AvgNodePosition
	int32 AvgCount = 0;

	for (TSet<UEdGraphNode*>::TIterator It(PastedNodes); It; ++It)
	{
		UEdGraphNode* EdNode = *It;
		UPlotPluginGraphNode* AINode = Cast<UPlotPluginGraphNode>(EdNode);
		if (EdNode && (AINode == nullptr || !AINode->IsSubNode()))
		{
			AvgNodePosition.X += EdNode->NodePosX;
			AvgNodePosition.Y += EdNode->NodePosY;
			++AvgCount;
		}
	}

	if (AvgCount > 0)
	{
		float InvNumNodes = 1.0f / float(AvgCount);
		AvgNodePosition.X *= InvNumNodes;
		AvgNodePosition.Y *= InvNumNodes;
	}

	bool bPastedParentNode = false;

	TMap<int32, UPlotPluginGraphNode*> ParentMap;
	for (TSet<UEdGraphNode*>::TIterator It(PastedNodes); It; ++It)
	{
		UEdGraphNode* PasteNode = *It;
		UPlotPluginGraphNode* PasteAINode = Cast<UPlotPluginGraphNode>(PasteNode);

		if (PasteNode && (PasteAINode == nullptr || !PasteAINode->IsSubNode()))
		{
			bPastedParentNode = true;

			// Select the newly pasted stuff
			CurrentGraphEditor->SetNodeSelection(PasteNode, true);

			PasteNode->NodePosX = (PasteNode->NodePosX - AvgNodePosition.X) + Location.X;
			PasteNode->NodePosY = (PasteNode->NodePosY - AvgNodePosition.Y) + Location.Y;

			PasteNode->SnapToGrid(16);

			// Give new node a different Guid from the old one
			PasteNode->CreateNewGuid();

			if (PasteAINode)
			{
				PasteAINode->RemoveAllSubNodes();
				ParentMap.Add(PasteAINode->CopySubNodeIndex, PasteAINode);
			}
		}
	}

	for (TSet<UEdGraphNode*>::TIterator It(PastedNodes); It; ++It)
	{
		UPlotPluginGraphNode* PasteNode = Cast<UPlotPluginGraphNode>(*It);
		if (PasteNode && PasteNode->IsSubNode())
		{
			PasteNode->NodePosX = 0;
			PasteNode->NodePosY = 0;

			// remove subnode from graph, it will be referenced from parent node
			PasteNode->DestroyNode();

			PasteNode->ParentNode = ParentMap.FindRef(PasteNode->CopySubNodeIndex);
			if (PasteNode->ParentNode)
			{
				PasteNode->ParentNode->AddSubNode(PasteNode, EdGraph);
			}
			else if (!bHasMultipleNodesSelected && !bPastedParentNode && SelectedParent)
			{
				PasteNode->ParentNode = SelectedParent;
				SelectedParent->AddSubNode(PasteNode, EdGraph);
			}
		}
	}

	if (PlotGraph)
	{
		PlotGraph->UpdateClassData();
		PlotGraph->OnNodesPasted(TextToImport);
		PlotGraph->UnlockUpdates();
	}

	// Update UI
	CurrentGraphEditor->NotifyGraphChanged();

	UObject* GraphOwner = EdGraph->GetOuter();
	if (GraphOwner)
	{
		GraphOwner->PostEditChange();
		GraphOwner->MarkPackageDirty();
	}
}

bool FPlotPluginEditor::CanPasteNodes()
{
	const TSharedPtr<SGraphEditor> CurrentGraphEditor = UpdateGraphEdPtr.Pin();
	if (!CurrentGraphEditor.IsValid())
	{
		return false;
	}
	FString ClipboardContent;
	FPlatformApplicationMisc::ClipboardPaste(ClipboardContent);
	return FEdGraphUtilities::CanImportNodesFromText(CurrentGraphEditor->GetCurrentGraph(), ClipboardContent);
}

void FPlotPluginEditor::DuplicateNodes()
{
	CopySelectedNodes();
	PasteNodes();
}

bool FPlotPluginEditor::CanDuplicateNodes()
{
	return CanCopyNodes();
}

void FPlotPluginEditor::OnClassListUpdated()
{

}
void FPlotPluginEditor::OnGraphEditorFocused(const TSharedRef<SGraphEditor>& InGraphEditor)
{
	UpdateGraphEdPtr = InGraphEditor;
	FGraphPanelSelectionSet CurrentSelection;
	CurrentSelection = InGraphEditor->GetSelectedNodes();
	OnSelectedNodesChanged(CurrentSelection);
}

void FPlotPluginEditor::OnFinishedChangingProperties(const FPropertyChangedEvent& PropertyChangedEvent)
{
	PlotPluginAsset->PlotGraph->GetSchema()->ForceVisualizationCacheClear();
}

FGraphAppearanceInfo FPlotPluginEditor::GetGraphAppearance() const
{
	FGraphAppearanceInfo AppearanceInfo;
	AppearanceInfo.CornerText = LOCTEXT("AppearanceCornerText", "PLOT PLUGIN");
	return AppearanceInfo;
}

TSharedRef<SDockTab> FPlotPluginEditor::SpawnProperties(const FSpawnTabArgs& Args)
{
	return SNew(SDockTab)
		.Icon(FEditorStyle::GetBrush("GenericEditor.Tabs.Properties"))
		.Label(LOCTEXT("GenericDetailsTitle", "Details"))
		.TabColorScale(GetTabColorScale())
		[
			DetailsView.ToSharedRef()
		];
}

TSharedRef<SDockTab> FPlotPluginEditor::SpawnGraphEditor(const FSpawnTabArgs& Args)
{
	check(Args.GetTabId() == GraphEditorTabId);
	RestorePlot();
	const auto GraphWidget = CreateGraphEditorWidget(PlotPluginAsset->PlotGraph);
	OnGraphEditorFocused(GraphWidget);

	return SNew(SDockTab)
		.Icon(FEditorStyle::GetBrush("GenericEditor.Tabs.Properties"))
		.Label(LOCTEXT("GenericDetailsTitle", "Details11"))
		.TabColorScale(GetTabColorScale())
		[
			GraphWidget
		];
}
bool FPlotPluginEditor::IsPropertyEditable()
{
	TSharedPtr<SGraphEditor> FocusedGraphEd = UpdateGraphEdPtr.Pin();
	return FocusedGraphEd.IsValid() && FocusedGraphEd->GetCurrentGraph() && FocusedGraphEd->GetCurrentGraph()->bEditable;
}

void FPlotPluginEditor::SaveAsset_Execute()
{
	if (PlotPluginAsset)
	{
		const auto Graph = Cast<UPlotPluginGraph>(PlotPluginAsset->PlotGraph);
		if (Graph)
		{
			Graph->OnSave();
		}
	}
	// save it
	IPlotPluginEditor::SaveAsset_Execute();
}
#undef LOCTEXT_NAMESPACE
