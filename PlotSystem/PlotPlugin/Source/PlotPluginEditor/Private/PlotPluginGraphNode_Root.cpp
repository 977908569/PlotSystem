#include "PlotPluginGraphNode_Root.h"
#include "PlotPluginEditorTypes.h"
#define LOCTEXT_NAMESPACE "UPlotPluginNode_Root"
void UPlotPluginGraphNode_Root::AllocateDefaultPins()
{
	CreatePin(EGPD_Output, UPlotPluginEditorTypes::PinCategory_MultipleNodes, TEXT("Out"));
}

FText UPlotPluginGraphNode_Root::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("START", "START");
}
#undef  LOCTEXT_NAMESPACE
