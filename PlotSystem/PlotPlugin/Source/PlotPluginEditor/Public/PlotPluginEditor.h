#pragma once

#include "PlotPluginEditorModule.h"
#include "GraphEditor.h"
#include "EditorUndoClient.h"
#include "IDetailsView.h"
/**
 * Editor
 */
class PLOTPLUGINEDITOR_API  FPlotPluginEditor : public IPlotPluginEditor, public FEditorUndoClient {
public:
	FPlotPluginEditor();
	virtual ~FPlotPluginEditor();
	/// 
	void InitPlotPluginEditor(const EToolkitMode::Type Mode, const TSharedPtr<class IToolkitHost>& InitToolkitHost, UPlotPlugin* InAsset) override;
	UPlotPlugin* GetPlotPluginAsset() override;
	void SetPlotPluginAsset(UPlotPlugin* InCustomAsset) override;
	void RestorePlot() const;
	TSharedRef<SGraphEditor> CreateGraphEditorWidget(UEdGraph* InGraph);
	bool InEditingMode(bool bGraphIsEditable) const;
	void RegisterTabSpawners(const TSharedRef<FTabManager>& InTabManager) override;
	void UnregisterTabSpawners(const TSharedRef<FTabManager>& InTabManager) override;

	/* IToolkit Interface */
	FName GetToolkitFName() const override;
	FText GetBaseToolkitName() const override;
	FText GetToolkitToolTipText() const override;
	FString GetWorldCentricTabPrefix() const override;
	FLinearColor GetWorldCentricTabColorScale() const override;
	bool IsPrimaryEditor() const override { return true; }

	FGraphPanelSelectionSet GetSelectedNodes() const;
	virtual void OnSelectedNodesChanged(const TSet<class UObject*>& NewSelection);

	//~ Begin FEditorUndoClient Interface
	virtual void PostUndo(bool bSuccess) override;
	virtual void PostRedo(bool bSuccess) override;
	// End of FEditorUndoClient

	void CreateCommandList();

	// Delegates for graph editor commands
	void SelectAllNodes();
	bool CanSelectAllNodes();
	void DeleteSelectedNodes();
	bool CanDeleteNodes();
	void DeleteSelectedDuplicatableNodes();
	void CutSelectedNodes();
	bool CanCutNodes();
	void CopySelectedNodes();
	bool CanCopyNodes();
	void PasteNodes();
	void PasteNodesHere(const FVector2D& Location);
	bool CanPasteNodes();
	void DuplicateNodes();
	bool CanDuplicateNodes();
	void OnClassListUpdated();

public:
	/*-----------------------------------------------------------------------------------------------*/
	void OnGraphEditorFocused(const TSharedRef<SGraphEditor>& InGraphEditor);
	void OnFinishedChangingProperties(const FPropertyChangedEvent& PropertyChangedEvent);

	FGraphAppearanceInfo GetGraphAppearance() const;

	TSharedRef<SDockTab> SpawnProperties(const FSpawnTabArgs& Args);

	TSharedRef<SDockTab> SpawnGraphEditor(const FSpawnTabArgs& Args);

	bool IsPropertyEditable();

	static const FName ToolkitFName;
	/**	The tab ids for all the tabs used */
	static const FName PropertiesTabId;

	static const FName GraphEditorTabId;

	TSharedPtr<class IDetailsView> DetailsView;

protected:

	/** Currently focused graph */
	TWeakPtr<SGraphEditor> UpdateGraphEdPtr;

	/** The command list for this editor */
	TSharedPtr<FUICommandList> GraphEditorCommands;

	/** Handle to the registered OnClassListUpdated delegate */
	FDelegateHandle OnClassListUpdatedDelegateHandle;

protected:
	void SaveAsset_Execute() override;

private:
	/// Editor Asset
	UPlotPlugin* PlotPluginAsset = nullptr;
};
