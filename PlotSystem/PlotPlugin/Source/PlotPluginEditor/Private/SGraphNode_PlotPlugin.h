#pragma once
#include "SGraphNode.h"
#include "Editor/GraphEditor/Private/DragNode.h"
#include "SGraphPin.h"
#include "PlotPluginGraphNode.h"
/**
 * Pin
 */
class SPlotPluginPin : public SGraphPin
{
public:
	SLATE_BEGIN_ARGS(SPlotPluginPin) {}
	SLATE_END_ARGS()
		void Construct(const FArguments& InArgs, UEdGraphPin* InPin);
protected:
	FSlateColor GetPinColor() const override;
	TSharedRef<SWidget>	GetDefaultValueWidget() override;
	const FSlateBrush* GetPinBorder() const;
};

/**
 * Graph Node
 */
class FDragPlotPluginGraphNode : public FDragNode
{
public:
	DRAG_DROP_OPERATOR_TYPE(FDragPlotGraphNode, FDragNode)
		static TSharedRef<FDragPlotPluginGraphNode> New(const TSharedRef<SGraphPanel>& InGraphPanel, const TSharedRef<SGraphNode>& InDraggedNode);
	static TSharedRef<FDragPlotPluginGraphNode> New(const TSharedRef<SGraphPanel>& InGraphPanel, const TArray< TSharedRef<SGraphNode> >& InDraggedNodes);
	UPlotPluginGraphNode* GetDropTargetNode() const;
	double StartTime;

protected:
	typedef FDragNode Super;
};

/**
 * Plot Node
 */
class SGraphNode_PlotPlugin :public SGraphNode
{
public:
	SLATE_BEGIN_ARGS(SGraphNode_PlotPlugin) {}
	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs, UPlotPluginGraphNode* InNode);

	void CreatePinWidgets() override;
	void UpdateGraphNode() override;

	virtual const FSlateBrush* GetNodeStyle() const;
	virtual FSlateColor GetBackgroundColor() const;
	virtual FSlateColor GetBorderBackgroundColor() const;
	FString GetNodeComment() const override;

	//~ Begin SGraphNode Interface
	TSharedPtr<SToolTip> GetComplexTooltip() override;
	void OnDragEnter(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	FReply OnDragOver(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
	void OnDragLeave(const FDragDropEvent& DragDropEvent) override;
	FReply OnMouseMove(const FGeometry& SenderGeometry, const FPointerEvent& MouseEvent) override;
	void SetOwner(const TSharedRef<SGraphPanel>& OwnerPanel) override;
	void AddPin(const TSharedRef<SGraphPin>& PinToAdd) override;
	//~ End SGraphNode Interface

	/** handle mouse down on the node */
	FReply OnMouseDown(const FGeometry& SenderGeometry, const FPointerEvent& MouseEvent);

	/** adds subnode widget inside current node */
	virtual void AddSubNode(TSharedPtr<SGraphNode> SubNodeWidget);

	/** gets decorator or service node if one is found under mouse cursor */
	TSharedPtr<SGraphNode> GetSubNodeUnderCursor(const FGeometry& WidgetGeometry, const FPointerEvent& MouseEvent);

	/** gets drag over marker visibility */
	EVisibility GetDragOverMarkerVisibility() const;

	/** sets drag marker visible or collapsed on this node */
	void SetDragMarker(bool bEnabled);

protected:
	TArray< TSharedPtr<SGraphNode> > SubNodes;
	uint32 bDragMarkerVisible : 1;

	virtual FText GetDescription() const;
	virtual EVisibility GetDescriptionVisibility() const;

	virtual EVisibility GetConditionVisibility() const;
	virtual FText GetConditionNum() const;

	virtual EVisibility GetItemIconVisibility() const;
	virtual EVisibility GetEventVisibility() const;

	virtual FText GetPreviewCornerText() const;
	virtual const FSlateBrush* GetNameIcon() const;

	TSharedPtr<SHorizontalBox> OutputPinBox;
	TSharedPtr<SBorder> NodeBody;
	TSharedPtr<SInlineEditableTextBlock> InlineEditableText;
};
