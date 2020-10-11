#include "AssetTypeActions_PlotPlugin.h"
#include "PlotPluginEditorModule.h"
#include "PlotPlugin.h"

FText FAssetTypeActions_PlotPlugin::GetName() const
{
	return NSLOCTEXT("FAssetTypeActions_PlotPlugin", "FAssetTypeActions_PlotPlugin", "PlotPlugin");
}

FColor FAssetTypeActions_PlotPlugin::GetTypeColor() const
{
	return FColor(80, 155, 220, 0.2f);
}

UClass* FAssetTypeActions_PlotPlugin::GetSupportedClass() const
{
	return UPlotPlugin::StaticClass();
}

void FAssetTypeActions_PlotPlugin::OpenAssetEditor(const TArray<UObject*>& InObjects,
	TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (const auto MyCustomAsset = Cast<UPlotPlugin>(*ObjIt))
		{
			auto CustomAssetEditorModule = &FModuleManager::LoadModuleChecked<FPlotPluginEditorModule>(
				"PlotPluginEditor");
			CustomAssetEditorModule->CreatePlotAssetEditor(Mode, EditWithinLevelEditor, MyCustomAsset);
		}
	}
}

uint32 FAssetTypeActions_PlotPlugin::GetCategories()
{
	return EAssetTypeCategories::Misc;
}
