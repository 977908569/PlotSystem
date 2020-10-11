#pragma once
#include "AssetTypeActions_Base.h"
/**
 * Actions
 */
class PLOTPLUGINEDITOR_API FAssetTypeActions_PlotPlugin : public FAssetTypeActions_Base {
	FText GetName() const override;

	FColor GetTypeColor() const override;

	UClass* GetSupportedClass() const override;

	void OpenAssetEditor(const TArray<UObject*>& InObjects,
		TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;

	uint32 GetCategories() override;
};
