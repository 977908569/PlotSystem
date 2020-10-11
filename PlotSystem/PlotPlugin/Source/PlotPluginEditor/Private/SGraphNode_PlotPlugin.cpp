#include "SGraphNode_PlotPlugin.h"
#include "SGraphPanel.h"
#include "Editor.h"
#include "PlotPluginGraphNode.h"
#include "PlotPluginColors.h"
#include "SCommentBubble.h"
#include "GraphEditorSettings.h"
#include "ScopedTransaction.h"
#include "PlotPluginGraph.h"
#include "Widgets/Text/SInlineEditableTextBlock.h"
#include "Widgets/Images/SImage.h"
#include "PlotNodeData.h"
#include "PlotPluginEditorStyle.h"
#include "PlotPluginNode.h"


void SPlotPluginPin::Construct(const FArguments& InArgs, UEdGraphPin* InPin)
{
	this->SetCursor(EMouseCursor::Default);
	bShowLabel = true;

	GraphPinObj = InPin;
	check(GraphPinObj != NULL);

	const UEdGraphSchema* Schema = GraphPinObj->GetSchema();
	check(Schema);

	SBorder::Construct(SBorder::FArguments()
		.BorderImage(this, &SPlotPluginPin::GetPinBorder)
		.BorderBackgroundColor(this, &SPlotPluginPin::GetPinColor)
		.OnMouseButtonDown(this, &SPlotPluginPin::OnPinMouseDown)
		.Cursor(this, &SPlotPluginPin::GetPinCursor)
		.Padding(FMargin(10.0f))
	);
}

FSlateColor SPlotPluginPin::GetPinColor() const
{
	return FSlateColor(IsHovered() ? PlotColors::Pin::Hover : PlotColors::Pin::Default);
}

TSharedRef<SWidget> SPlotPluginPin::GetDefaultValueWidget()
{
	return SNew(STextBlock);
}

const FSlateBrush* SPlotPluginPin::GetPinBorder() const
{
	return FEditorStyle::GetBrush(TEXT("Graph.StateNode.Body"));
}

TSharedRef<FDragPlotPluginGraphNode> FDragPlotPluginGraphNode::New(const TSharedRef<SGraphPanel>& InGraphPanel,
	const TSharedRef<SGraphNode>& InDraggedNode)
{
	TSharedRef<FDragPlotPluginGraphNode> Operation = MakeShareable(new FDragPlotPluginGraphNode);
	Operation->StartTime = FPlatformTime::Seconds();
	Operation->GraphPanel = InGraphPanel;
	Operation->DraggedNodes.Add(InDraggedNode);
	// adjust the decorator away from the current mouse location a small amount based on cursor size
	Operation->DecoratorAdjust = FSlateApplication::Get().GetCursorSize();
	Operation->Construct();
	return Operation;
}

TSharedRef<FDragPlotPluginGraphNode> FDragPlotPluginGraphNode::New(const TSharedRef<SGraphPanel>& InGraphPanel,
	const TArray<TSharedRef<SGraphNode>>& InDraggedNodes)
{
	TSharedRef<FDragPlotPluginGraphNode> Operation = MakeShareable(new FDragPlotPluginGraphNode);
	Operation->StartTime = FPlatformTime::Seconds();
	Operation->GraphPanel = InGraphPanel;
	Operation->DraggedNodes = InDraggedNodes;
	Operation->DecoratorAdjust = FSlateApplication::Get().GetCursorSize();
	Operation->Construct();
	return Operation;
}

UPlotPluginGraphNode* FDragPlotPluginGraphNode::GetDropTargetNode() const
{
	return Cast<UPlotPluginGraphNode>(GetHoveredNode());
}

void SGraphNode_PlotPlugin::CreatePinWidgets()
{
	auto StateNode = CastChecked<UPlotPluginGraphNode>(GraphNode);

	for (int32 PinIdx = 0; PinIdx < StateNode->Pins.Num(); PinIdx++)
	{
		UEdGraphPin* MyPin = StateNode->Pins[PinIdx];
		if (!MyPin->bHidden)
		{
			TSharedPtr<SGraphPin> NewPin = SNew(SPlotPluginPin, MyPin);
			AddPin(NewPin.ToSharedRef());
		}
	}
}

void SGraphNode_PlotPlugin::UpdateGraphNode()
{
	bDragMarkerVisible = false;
	InputPins.Empty();
	OutputPins.Empty();

	RightNodeBox.Reset();
	LeftNodeBox.Reset();
	OutputPinBox.Reset();

	TSharedPtr<SNodeTitle> NodeTitle = SNew(SNodeTitle, GraphNode);
	TSharedPtr<STextBlock> DescriptionText;

	const FMargin NodePadding = FMargin(1.0f);

	GetOrAddSlot(ENodeZone::Center)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Center)
		[
			SNew(SBorder)
			.BorderImage(this, &SGraphNode_PlotPlugin::GetNodeStyle)
		.OnMouseButtonDown(this, &SGraphNode_PlotPlugin::OnMouseDown)
		.Padding(0.0f)
		[
			SNew(SOverlay)

			// Pins and node details
		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SVerticalBox)

			// INPUT PIN AREA
		+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SBox)
			.MinDesiredHeight(NodePadding.Top)
		[
			SAssignNew(LeftNodeBox, SVerticalBox)
		]
		]

	// STATE NAME AREA
	+ SVerticalBox::Slot()
		.Padding(FMargin(NodePadding.Left, 0.0f, NodePadding.Right, 0.0f))
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SAssignNew(NodeBody, SBorder)
			.BorderBackgroundColor(this, &SGraphNode_PlotPlugin::GetBackgroundColor)
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Center)
		.Visibility(EVisibility::SelfHitTestInvisible)
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.Padding(FMargin(1.0f, 0.0f, 1.0f, 0.0f))
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SAssignNew(InlineEditableText, SInlineEditableTextBlock)
			.Style(FEditorStyle::Get(), "Graph.StateNode.NodeTitleInlineEditableText")
		.Text(NodeTitle.Get(), &SNodeTitle::GetHeadTitle)
		.OnVerifyTextChanged(this, &SGraphNode_PlotPlugin::OnVerifyNameTextChanged)
		.OnTextCommitted(this, &SGraphNode_PlotPlugin::OnNameTextCommited)
		.IsReadOnly(this, &SGraphNode_PlotPlugin::IsNameReadOnly)
		.IsSelected(this, &SGraphNode_PlotPlugin::IsSelectedExclusively)
		]
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			NodeTitle.ToSharedRef()
		]
		]
		]
		]

	////Event Tag
	//+ SVerticalBox::Slot()
	//	.AutoHeight()
	//	.Padding(0, 4)
	//	[
	//		SNew(SHorizontalBox)
	//		+ SHorizontalBox::Slot()
	//	.AutoWidth()
	//	[
	//		SNew(SHorizontalBox)
	//		+ SHorizontalBox::Slot()
	//	.AutoWidth()
	//	.VAlign(VAlign_Center)
	//	[
	//		SNew(SImage)
	//		.Image(FPlotPluginEditorStyle::Get()->GetBrush(TEXT("EventIcon")))
	//	.Visibility(this, &SGraphNode_PlotPlugin::GetEventVisibility)
	//	]
	//	]
	//	]
		]
		]
		]
		]

	// OUTPUT PIN AREA
	+ SVerticalBox::Slot()
		.AutoHeight()
		[
			SNew(SBox)
			.MinDesiredHeight(NodePadding.Bottom)
		[
			SAssignNew(RightNodeBox, SVerticalBox)
			+ SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.Padding(20.0f, 0.0f)
		.FillHeight(1.0f)
		[
			SAssignNew(OutputPinBox, SHorizontalBox)
		]
		]
		]
		]

	// Drag marker overlay
	+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Top)
		[
			SNew(SBorder)
			.BorderBackgroundColor(PlotColors::Action::DragMarker)
		.ColorAndOpacity(PlotColors::Action::DragMarker)
		.BorderImage(FEditorStyle::GetBrush("BTEditor.Graph.BTNode.Body"))
		.Visibility_Lambda([this]() -> EVisibility { return bDragMarkerVisible ? EVisibility::Visible : EVisibility::Hidden; })
		[
			SNew(SBox)
			.HeightOverride(4)
		]
		]
		]
		];

	// Comment
	{
		TSharedPtr<SCommentBubble> CommentBubble;
		const FSlateColor CommentColor = GetDefault<UGraphEditorSettings>()->DefaultCommentNodeTitleColor;

		SAssignNew(CommentBubble, SCommentBubble)
			.GraphNode(GraphNode)
			.Text(this, &SGraphNode::GetNodeComment)
			.OnTextCommitted(this, &SGraphNode::OnCommentTextCommitted)
			.ColorAndOpacity(CommentColor)
			.AllowPinning(true)
			.EnableTitleBarBubble(true)
			.EnableBubbleCtrls(true)
			.GraphLOD(this, &SGraphNode::GetCurrentLOD)
			.IsGraphNodeHovered(this, &SGraphNode::IsHovered);

		GetOrAddSlot(ENodeZone::TopCenter)
			.SlotOffset(TAttribute<FVector2D>(CommentBubble.Get(), &SCommentBubble::GetOffset))
			.SlotSize(TAttribute<FVector2D>(CommentBubble.Get(), &SCommentBubble::GetSize))
			.AllowScaling(TAttribute<bool>(CommentBubble.Get(), &SCommentBubble::IsScalingAllowed))
			.VAlign(VAlign_Top)
			[
				CommentBubble.ToSharedRef()
			];
	}

	// PIN
	CreatePinWidgets();
}

const FSlateBrush* SGraphNode_PlotPlugin::GetNodeStyle() const
{
	UPlotPluginGraphNode* PlotGraphNode = Cast<UPlotPluginGraphNode>(GraphNode);
	if (PlotGraphNode && PlotGraphNode->bRootNode)
	{
		return  FPlotPluginEditorStyle::Get()->GetBrush("RootNodeStyle");
	}
	return FPlotPluginEditorStyle::Get()->GetBrush("NormalNodeStyle");
}

FSlateColor SGraphNode_PlotPlugin::GetBackgroundColor() const
{
	auto NodeColor = PlotColors::NodeBody::Default;
	UPlotPluginGraphNode* PlotGraphNode = Cast<UPlotPluginGraphNode>(GraphNode);
	if (!PlotGraphNode) return NodeColor;
	if (PlotGraphNode->bRootNode)
	{
		NodeColor = PlotColors::NodeBody::Root;
	}
	return NodeColor;
}

FSlateColor SGraphNode_PlotPlugin::GetBorderBackgroundColor() const
{
	const auto SelfNode = Cast<UPlotPluginGraphNode>(GraphNode);
	const auto ParentNode = SelfNode ? Cast<UPlotPluginGraphNode>(SelfNode->ParentNode) : nullptr;

	const auto bSelectedSubNode = ParentNode && GetOwnerPanel()->SelectionManager.SelectedNodes.Contains(SelfNode);

	return bSelectedSubNode ? PlotColors::NodeBorder::Selected : PlotColors::NodeBorder::Root;
}

FString SGraphNode_PlotPlugin::GetNodeComment() const
{
	FString RStr = TEXT("");
	const auto SelfNode = Cast<UPlotPluginGraphNode>(GraphNode);
	if (SelfNode)
	{
		const auto PNode = Cast<UPlotPluginNode>(SelfNode->NodeInstance);
		if (PNode && PNode->PlotNodeData)
		{
			RStr += PNode->PlotNodeData->GetDesc();
		}
	}
	return  RStr;
}

void SGraphNode_PlotPlugin::Construct(const FArguments& InArgs, UPlotPluginGraphNode* InNode)
{
	SetCursor(EMouseCursor::CardinalCross);
	GraphNode = InNode;
	UpdateGraphNode();
	bDragMarkerVisible = false;
}

void SGraphNode_PlotPlugin::AddSubNode(TSharedPtr<SGraphNode> SubNodeWidget)
{
	SubNodes.Add(SubNodeWidget);
}

FText SGraphNode_PlotPlugin::GetDescription() const
{
	return  FText::FromString(TEXT(""));
}

EVisibility SGraphNode_PlotPlugin::GetDescriptionVisibility() const
{
	// LOD this out once things get too small
	TSharedPtr<SGraphPanel> MyOwnerPanel = GetOwnerPanel();
	return (!MyOwnerPanel.IsValid() || MyOwnerPanel->GetCurrentLOD() > EGraphRenderingLOD::LowDetail) ? EVisibility::Visible : EVisibility::Collapsed;
}

EVisibility SGraphNode_PlotPlugin::GetConditionVisibility() const
{
	const auto SelfNode = Cast<UPlotPluginGraphNode>(GraphNode);
	if (SelfNode)
	{
		const auto PNode = Cast<UPlotPluginNode>(SelfNode->NodeInstance);
		if (PNode)
			return 	EVisibility::Visible;
	}
	return  EVisibility::Collapsed;
}

FText SGraphNode_PlotPlugin::GetConditionNum() const
{
	const auto SelfNode = Cast<UPlotPluginGraphNode>(GraphNode);
	if (SelfNode)
	{
		const auto PNode = Cast<UPlotPluginNode>(SelfNode->NodeInstance);
		if (PNode && PNode->PlotNodeData)
		{

		}
	}
	return  FText::FromString("");
}

void SGraphNode_PlotPlugin::AddPin(const TSharedRef<SGraphPin>& PinToAdd)
{
	PinToAdd->SetOwner(SharedThis(this));
	const UEdGraphPin* PinObj = PinToAdd->GetPinObj();
	const bool bAdvancedParameter = PinObj && PinObj->bAdvancedView;
	if (bAdvancedParameter)
	{
		PinToAdd->SetVisibility(TAttribute<EVisibility>(PinToAdd, &SGraphPin::IsPinVisibleAsAdvanced));
	}

	if (PinToAdd->GetDirection() == EEdGraphPinDirection::EGPD_Input)
	{
		LeftNodeBox->AddSlot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.FillHeight(1.0f)
			.Padding(20.0f, 0.0f)
			[
				PinToAdd
			];
		InputPins.Add(PinToAdd);
	}
	else // Direction == EEdGraphPinDirection::EGPD_Output
	{
		OutputPinBox->AddSlot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			.FillWidth(1.0f)
			[
				PinToAdd
			];
		OutputPins.Add(PinToAdd);
	}
}

FReply SGraphNode_PlotPlugin::OnMouseMove(const FGeometry& SenderGeometry, const FPointerEvent& MouseEvent)
{
	if (MouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton) && !(GEditor->bIsSimulatingInEditor || GEditor->PlayWorld))
	{
		//if we are holding mouse over a subnode
		UPlotPluginGraphNode* TestNode = Cast<UPlotPluginGraphNode>(GraphNode);
		if (TestNode && TestNode->IsSubNode())
		{
			const TSharedRef<SGraphPanel>& Panel = GetOwnerPanel().ToSharedRef();
			const TSharedRef<SGraphNode>& Node = SharedThis(this);
			return FReply::Handled().BeginDragDrop(FDragPlotPluginGraphNode::New(Panel, Node));
		}
	}
	if (!MouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton) && bDragMarkerVisible)
	{
		SetDragMarker(false);
	}

	return FReply::Unhandled();
}

FReply SGraphNode_PlotPlugin::OnMouseDown(const FGeometry& SenderGeometry, const FPointerEvent& MouseEvent)
{
	UPlotPluginGraphNode* TestNode = Cast<UPlotPluginGraphNode>(GraphNode);
	if (TestNode && TestNode->IsSubNode())
	{
		GetOwnerPanel()->SelectionManager.ClickedOnNode(GraphNode, MouseEvent);
		return FReply::Handled();
	}
	return FReply::Unhandled();
}

TSharedPtr<SGraphNode> SGraphNode_PlotPlugin::GetSubNodeUnderCursor(const FGeometry& WidgetGeometry, const FPointerEvent& MouseEvent)
{
	TSharedPtr<SGraphNode> ResultNode;

	// We just need to find the one WidgetToFind among our descendants.
	TSet< TSharedRef<SWidget> > SubWidgetsSet;
	for (int32 i = 0; i < SubNodes.Num(); i++)
	{
		SubWidgetsSet.Add(SubNodes[i].ToSharedRef());
	}

	TMap<TSharedRef<SWidget>, FArrangedWidget> Result;
	FindChildGeometries(WidgetGeometry, SubWidgetsSet, Result);

	if (Result.Num() > 0)
	{
		FArrangedChildren ArrangedChildren(EVisibility::Visible);
		Result.GenerateValueArray(ArrangedChildren.GetInternalArray());

		const int32 HoveredIndex = SWidget::FindChildUnderMouse(ArrangedChildren, MouseEvent);
		if (HoveredIndex != INDEX_NONE)
		{
			ResultNode = StaticCastSharedRef<SGraphNode>(ArrangedChildren[HoveredIndex].Widget);
		}
	}
	return ResultNode;
}

void SGraphNode_PlotPlugin::SetDragMarker(bool bEnabled)
{
	bDragMarkerVisible = bEnabled;
}

EVisibility SGraphNode_PlotPlugin::GetDragOverMarkerVisibility() const
{
	return bDragMarkerVisible ? EVisibility::Visible : EVisibility::Collapsed;
}

void SGraphNode_PlotPlugin::OnDragEnter(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	// Is someone dragging a node?
	TSharedPtr<FDragNode> DragConnectionOp = DragDropEvent.GetOperationAs<FDragNode>();
	if (DragConnectionOp.IsValid())
	{
		// Inform the Drag and Drop operation that we are hovering over this node.
		TSharedPtr<SGraphNode> SubNode = GetSubNodeUnderCursor(MyGeometry, DragDropEvent);
		DragConnectionOp->SetHoveredNode(SubNode.IsValid() ? SubNode : SharedThis(this));

		UPlotPluginGraphNode* TestNode = Cast<UPlotPluginGraphNode>(GraphNode);
		if (DragConnectionOp->IsValidOperation() && TestNode && TestNode->IsSubNode())
		{
			SetDragMarker(true);
		}
	}

	SGraphNode::OnDragEnter(MyGeometry, DragDropEvent);
}

FReply SGraphNode_PlotPlugin::OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	// Is someone dragging a node?
	TSharedPtr<FDragNode> DragConnectionOp = DragDropEvent.GetOperationAs<FDragNode>();
	if (DragConnectionOp.IsValid())
	{
		// Inform the Drag and Drop operation that we are hovering over this node.
		TSharedPtr<SGraphNode> SubNode = GetSubNodeUnderCursor(MyGeometry, DragDropEvent);
		DragConnectionOp->SetHoveredNode(SubNode.IsValid() ? SubNode : SharedThis(this));
	}
	return SGraphNode::OnDragOver(MyGeometry, DragDropEvent);
}

void SGraphNode_PlotPlugin::OnDragLeave(const FDragDropEvent& DragDropEvent)
{
	TSharedPtr<FDragNode> DragConnectionOp = DragDropEvent.GetOperationAs<FDragNode>();
	if (DragConnectionOp.IsValid())
	{
		// Inform the Drag and Drop operation that we are not hovering any pins
		DragConnectionOp->SetHoveredNode(TSharedPtr<SGraphNode>(NULL));
	}

	SetDragMarker(false);
	SGraphNode::OnDragLeave(DragDropEvent);
}

FReply SGraphNode_PlotPlugin::OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent)
{
	SetDragMarker(false);

	TSharedPtr<FDragPlotPluginGraphNode> DragNodeOp = DragDropEvent.GetOperationAs<FDragPlotPluginGraphNode>();
	if (DragNodeOp.IsValid())
	{
		if (!DragNodeOp->IsValidOperation())
		{
			return FReply::Handled();
		}

		const float DragTime = float(FPlatformTime::Seconds() - DragNodeOp->StartTime);
		if (DragTime < 0.5f)
		{
			return FReply::Handled();
		}

		UPlotPluginGraphNode* MyNode = Cast<UPlotPluginGraphNode>(GraphNode);
		if (MyNode == nullptr || MyNode->IsSubNode())
		{
			return FReply::Unhandled();
		}

		const FScopedTransaction Transaction(NSLOCTEXT("UnrealEd", "GraphEd_DragDropNode", "Drag&Drop Node"));
		bool bReorderOperation = true;

		const TArray< TSharedRef<SGraphNode> >& DraggedNodes = DragNodeOp->GetNodes();
		for (int32 Idx = 0; Idx < DraggedNodes.Num(); Idx++)
		{
			UPlotPluginGraphNode* DraggedNode = Cast<UPlotPluginGraphNode>(DraggedNodes[Idx]->GetNodeObj());
			if (DraggedNode && DraggedNode->ParentNode)
			{
				if (DraggedNode->ParentNode != GraphNode)
				{
					bReorderOperation = false;
				}

				DraggedNode->ParentNode->RemoveSubNode(DraggedNode);
			}
		}

		UPlotPluginGraphNode* DropTargetNode = DragNodeOp->GetDropTargetNode();
		const int32 InsertIndex = MyNode->FindSubNodeDropIndex(DropTargetNode);

		for (int32 Idx = 0; Idx < DraggedNodes.Num(); Idx++)
		{
			UPlotPluginGraphNode* DraggedTestNode = Cast<UPlotPluginGraphNode>(DraggedNodes[Idx]->GetNodeObj());
			DraggedTestNode->Modify();
			DraggedTestNode->ParentNode = MyNode;

			MyNode->Modify();
			MyNode->InsertSubNodeAt(DraggedTestNode, InsertIndex);
		}

		if (bReorderOperation)
		{
			UpdateGraphNode();
		}
		else
		{
			UPlotPluginGraph* MyGraph = MyNode->GetPlotPluginGraph();
			if (MyGraph)
			{
				MyGraph->OnSubNodeDropped();
			}
		}
	}
	return SGraphNode::OnDrop(MyGeometry, DragDropEvent);
}

TSharedPtr<SToolTip> SGraphNode_PlotPlugin::GetComplexTooltip()
{
	return NULL;
}

EVisibility SGraphNode_PlotPlugin::GetItemIconVisibility() const
{
	const auto SelfNode = Cast<UPlotPluginGraphNode>(GraphNode);
	if (SelfNode)
	{
		const auto PNode = Cast<UPlotPluginNode>(SelfNode->NodeInstance);

	}
	return  EVisibility::Collapsed;
}

EVisibility SGraphNode_PlotPlugin::GetEventVisibility() const
{
	const auto SelfNode = Cast<UPlotPluginGraphNode>(GraphNode);
	if (SelfNode)
	{
		const auto PNode = Cast<UPlotPluginNode>(SelfNode->NodeInstance);
		if (PNode && PNode->PlotNodeData && (PNode->EnterEvents.Num() > 0 || PNode->ExitEvents.Num() > 0))
		{
			return 	EVisibility::Visible;
		}
	}
	return  EVisibility::Collapsed;
}

FText SGraphNode_PlotPlugin::GetPreviewCornerText() const
{
	return FText::GetEmpty();
}

const FSlateBrush* SGraphNode_PlotPlugin::GetNameIcon() const
{
	return FEditorStyle::GetBrush(TEXT("Graph.StateNode.Icon"));
}

void SGraphNode_PlotPlugin::SetOwner(const TSharedRef<SGraphPanel>& OwnerPanel)
{
	SGraphNode::SetOwner(OwnerPanel);

	for (auto& ChildWidget : SubNodes)
	{
		if (ChildWidget.IsValid())
		{
			ChildWidget->SetOwner(OwnerPanel);
			OwnerPanel->AttachGraphEvents(ChildWidget);
		}
	}
}
