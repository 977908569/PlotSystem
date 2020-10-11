#include "PlotPlugin.h"

#include "PlotLibrary.h"

UPlotPlugin::UPlotPlugin()
{
	/**
	 * Create Root Node
	 */
	PlotRootNode = CreateDefaultSubobject<UPlotPluginNodeRoot>(TEXT("Plot_RootNode"));
	PlotRootNode->bRootNode = true;
}

void UPlotPlugin::Start()
{
	CheckOpenWidget();
	if (PlotRootNode && PlotRootNode->Links.Num() > 0)
	{
		if (UPlotPluginNode* FirstNode = Cast<UPlotPluginNode>(PlotRootNode->Links[0]))
		{
			FirstNode->Enter();
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Start Failed..."));
	}
}

void UPlotPlugin::End() const
{
	UWorld* World = GetWorld();
	check(World);
	const auto Widget = UPlotLibrary::GetPlotWidget(World);
	if (Widget)
	{
		Widget->RemoveFromParent();
	}
}

UWorld* UPlotPlugin::GetWorld() const
{
	if (PlotOuter.IsValid())
	{
		return PlotOuter->GetWorld();
	}
	return Super::GetWorld();
}

void UPlotPlugin::CheckOpenWidget()
{
	UWorld* World = GetWorld();
	check(World);
	const auto Widget = UPlotLibrary::GetPlotWidget(World);
	if (Widget == nullptr)
	{
		UClass* WidgetClass = LoadClass<UPlotWidget>(this, TEXT("/PlotPlugin/Plot_Widget.Plot_Widget_C"));
		if (WidgetClass)
		{
			auto PlotWidget = CreateWidget<UPlotWidget>(World, WidgetClass);
			PlotWidget->AddToViewport();
		}
	}
}

