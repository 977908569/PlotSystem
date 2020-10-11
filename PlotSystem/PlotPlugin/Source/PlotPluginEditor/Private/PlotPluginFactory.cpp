#include "PlotPluginFactory.h"
#include "PlotPlugin.h"
#include "PlotPluginEditorModule.h"
#include "PlotCondition.h"
#define LOCTEXT_NAMESPACE "PlotEditor" 

UPlotPluginFactory::UPlotPluginFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UPlotPlugin::StaticClass();
}

UObject* UPlotPluginFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	auto NewAsset = NewObject<UPlotPlugin>(InParent, InName, Flags | RF_Transactional);
	NewAsset->Comment = TEXT("The Plot");
	return NewAsset;
}


FText UPlotPluginFactory::GetDisplayName() const
{
	return LOCTEXT("PlotText", "Plot");
}

FString UPlotPluginFactory::GetDefaultNewAssetName() const
{
	return FString(TEXT("NewPlot"));
}

#undef LOCTEXT_NAMESPACE

