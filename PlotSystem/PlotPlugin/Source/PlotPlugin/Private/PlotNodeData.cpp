#include "PlotNodeData.h"
#include "PlotPlugin.h"

UPlotNodeData::UPlotNodeData()
{
}

UWorld* UPlotNodeData::GetWorld() const
{
	if (GetTypedOuter<UPlotPlugin>())
		return  GetTypedOuter<UPlotPlugin>()->GetWorld();
	else
		return nullptr;
}

FString UPlotNodeData::GetDataDes_Implementation()
{
	return GetDesc();
}

void UPlotNodeData::Do()
{
	OnDo();
}

UPlotPlugin* UPlotNodeData::GetPlugin() const
{
	return Cast<UPlotPlugin>(GetOuter()->GetOuter());
}

UPlotPluginNode* UPlotNodeData::GetNode() const
{
	return Cast<UPlotPluginNode>(GetOuter());
}



