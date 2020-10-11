#include "PlotEvent.h"
#include "PlotPlugin.h"

UWorld* UPlotEvent::GetWorld() const
{
	if (GetTypedOuter<UPlotPlugin>())
		return  GetTypedOuter<UPlotPlugin>()->GetWorld();
	else
		return nullptr;
}

UPlotPlugin* UPlotEvent::GetPlotPlugin() const
{
	return  GetTypedOuter<UPlotPlugin>();
}
