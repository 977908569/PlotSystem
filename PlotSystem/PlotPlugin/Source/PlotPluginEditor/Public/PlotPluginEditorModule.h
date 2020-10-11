#pragma once
#include "Toolkits/AssetEditorToolkit.h"
#include "IAssetTypeActions.h"
#include "PlotPluginGraphNode.h"

class IAssetTools;
class UPlotPlugin;
class FGraphPanelNodeFactory_PlotPlugin;
struct FPlotPluginGraphNodeClassHelper;

extern const FName PlotPluginEditorAppIdentifier;
/**
 * Editor
 */
class PLOTPLUGINEDITOR_API IPlotPluginEditor : public FAssetEditorToolkit
{
public:
	virtual UPlotPlugin* GetPlotPluginAsset() = 0;
	virtual void SetPlotPluginAsset(UPlotPlugin* InAsset) = 0;
	virtual void InitPlotPluginEditor(const EToolkitMode::Type Mode, const TSharedPtr<class IToolkitHost>& InitToolkitHost, UPlotPlugin* InAsset) = 0;
};
/**
 * Module
 */

class PLOTPLUGINEDITOR_API FPlotPluginEditorModule : public IModuleInterface, public IHasMenuExtensibility, public IHasToolBarExtensibility
{
public:
	TSharedRef<IPlotPluginEditor> CreatePlotAssetEditor(const EToolkitMode::Type Mode, const TSharedPtr<IToolkitHost>& InitToolkitHost, UPlotPlugin* PlotAsset);
	TSharedPtr<FPlotPluginGraphNodeClassHelper> GetClassCache();
public:
	void StartupModule() override;
	void ShutdownModule() override;
	TSharedPtr<FExtensibilityManager> GetMenuExtensibilityManager() override;
	TSharedPtr<FExtensibilityManager> GetToolBarExtensibilityManager() override;
	void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action);
private:
	TSharedPtr<FExtensibilityManager> MenuExtensibilityManager;
	TSharedPtr<FExtensibilityManager> ToolBarExtensibilityManager;
	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
	TSharedPtr<FGraphPanelNodeFactory_PlotPlugin> GraphPanelNodeFactory_PlotPlugin;
	TSharedPtr<FPlotPluginGraphNodeClassHelper> ClassCache;
};
