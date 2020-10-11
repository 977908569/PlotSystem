#pragma once

#include "Factories/Factory.h"
#include "AssetTypeCategories.h"
#include "PlotPluginFactory.generated.h"
/**
 * Factory
 */
UCLASS()
class PLOTPLUGINEDITOR_API UPlotPluginFactory : public UFactory
{
	GENERATED_BODY()
public:
	UPlotPluginFactory();
	UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

	virtual FText GetDisplayName() const override;
	virtual FString GetDefaultNewAssetName() const override;
	virtual uint32 GetMenuCategories() const { return EAssetTypeCategories::Gameplay; }
};