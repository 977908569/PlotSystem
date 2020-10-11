#include "PlotPluginEditorModule.h"
#include "AssetToolsModule.h"
#include "EdGraphUtilities.h"
#include "AssetTypeActions_PlotPlugin.h"
#include "PlotPluginEditor.h"
#include "SGraphNode_PlotPlugin.h"
#include "PlotPluginGraphNode.h"
#include "PlotPluginEditorStyle.h"
#include "PlotPluginNode.h"

const FName PlotPluginEditorAppIdentifier = FName(TEXT("PlotPluginEditorApp"));
#define LOCTEXT_NAMESPACE "FPlotPluginEditorModule"

class FGraphPanelNodeFactory_PlotPlugin : public FGraphPanelNodeFactory {
	TSharedPtr<class SGraphNode> CreateNode(UEdGraphNode* Node) const override {
		if (auto PlotNode = Cast<UPlotPluginGraphNode>(Node)) {
			return SNew(SGraphNode_PlotPlugin, PlotNode);
		}
		return nullptr;
	}
};

void FPlotPluginEditorModule::StartupModule()
{
	FPlotPluginEditorStyle::Initialize();
	MenuExtensibilityManager = MakeShareable(new FExtensibilityManager);
	ToolBarExtensibilityManager = MakeShareable(new FExtensibilityManager);
	IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	RegisterAssetTypeAction(AssetTools, MakeShareable(new FAssetTypeActions_PlotPlugin()));
	GraphPanelNodeFactory_PlotPlugin = MakeShareable(new FGraphPanelNodeFactory_PlotPlugin());
	FEdGraphUtilities::RegisterVisualNodeFactory(GraphPanelNodeFactory_PlotPlugin);
}

void FPlotPluginEditorModule::ShutdownModule()
{
	FPlotPluginEditorStyle::Shutdown();
	MenuExtensibilityManager.Reset();
	ToolBarExtensibilityManager.Reset();
	if (GraphPanelNodeFactory_PlotPlugin.IsValid()) {
		FEdGraphUtilities::UnregisterVisualNodeFactory(GraphPanelNodeFactory_PlotPlugin);
		GraphPanelNodeFactory_PlotPlugin.Reset();
	}
	if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
	{
		// Unregister our custom created assets from the AssetTools
		IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
		for (const auto& P : CreatedAssetTypeActions) {
			AssetTools.UnregisterAssetTypeActions(P.ToSharedRef());
		}
	}
	CreatedAssetTypeActions.Empty();
}

TSharedRef<IPlotPluginEditor> FPlotPluginEditorModule::CreatePlotAssetEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UPlotPlugin* PlotPluginAsset)
{
	if (!ClassCache.IsValid())
	{
		ClassCache = MakeShareable(new FPlotPluginGraphNodeClassHelper(UPlotPluginNode::StaticClass()));
		ClassCache->UpdateAvailableBlueprintClasses();
	}
	TSharedRef<IPlotPluginEditor> AssetPluginEditor(new FPlotPluginEditor());
	AssetPluginEditor->InitPlotPluginEditor(Mode, InitToolkitHost, PlotPluginAsset);
	return AssetPluginEditor;
}

void FPlotPluginEditorModule::RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action)
{
	AssetTools.RegisterAssetTypeActions(Action);
	CreatedAssetTypeActions.Add(Action);
}

TSharedPtr<FExtensibilityManager> FPlotPluginEditorModule::GetMenuExtensibilityManager()
{
	return MenuExtensibilityManager;
}

TSharedPtr<FExtensibilityManager> FPlotPluginEditorModule::GetToolBarExtensibilityManager()
{
	return ToolBarExtensibilityManager;
}

TSharedPtr<FPlotPluginGraphNodeClassHelper> FPlotPluginEditorModule::GetClassCache()
{
	return ClassCache;
}
#undef LOCTEXT_NAMESPACE
IMPLEMENT_MODULE(FPlotPluginEditorModule, PlotPluginEditor)