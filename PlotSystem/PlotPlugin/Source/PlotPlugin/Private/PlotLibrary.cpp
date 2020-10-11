#include "PlotLibrary.h"
#include "PlotPlugin.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

void UPlotLibrary::PlayPlot(UObject* WorldContextObject, FSoftObjectPath InPlotPath)
{
	UWorld* World = WorldContextObject->GetWorld();
	check(World);

	UPlotPlugin* PlotPlugin = Cast<UPlotPlugin>(InPlotPath.TryLoad());
	if (PlotPlugin)
	{
		PlotPlugin->PlotOuter = World;
		PlotPlugin->Start();
	}
}

UPlotWidget* UPlotLibrary::GetPlotWidget(UObject* WorldContextObject)
{
	TArray<UUserWidget*> OutWidget;
	UWidgetBlueprintLibrary::GetAllWidgetsOfClass(WorldContextObject, OutWidget, UPlotWidget::StaticClass());
	if (OutWidget.Num() > 0)
	{
		return Cast<UPlotWidget>(OutWidget[0]);
	}
	return nullptr;
}
