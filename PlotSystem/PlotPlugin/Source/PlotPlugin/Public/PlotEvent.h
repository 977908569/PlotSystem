#pragma once
#include "UObject/Object.h"
#include "PlotEvent.generated.h"
/**
 * Custom Event
 */

UCLASS(Blueprintable, BlueprintType, abstract, DefaultToInstanced, EditInlineNew, HideCategories = ("DoNotShow"), CollapseCategories, AutoExpandCategories = ("Default"))
class PLOTPLUGIN_API UPlotEvent :public UObject
{
	GENERATED_BODY()
public:
	/**
	 *Blueprint Function
	 */
	UFUNCTION(BlueprintImplementableEvent)
		bool OnEvent();

	UFUNCTION(BlueprintCallable)
		UWorld* GetWorld() const override;

	UFUNCTION(BlueprintCallable)
		class UPlotPlugin* GetPlotPlugin() const;
};