#pragma once
#include "PlotPluginGraphNode.h"
#include "PlotPluginGraphNode_Root.generated.h"
/**
 * Root Node Graph
 */
UCLASS()
class PLOTPLUGINEDITOR_API UPlotPluginGraphNode_Root :public UPlotPluginGraphNode
{
	GENERATED_BODY()
public:
	void AllocateDefaultPins() override;

	FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
};
