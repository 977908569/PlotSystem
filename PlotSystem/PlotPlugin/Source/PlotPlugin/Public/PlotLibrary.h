#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlotLibrary.generated.h"
/**
 * Utils Func
 */
UCLASS()
class PLOTPLUGIN_API UPlotLibrary :public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/**
	 * Test Play TODO Table-> ID
	 */
	UFUNCTION(BlueprintCallable, Category = "Plot", meta = (WorldContext = "WorldContextObject"))
		static void PlayPlot(UObject* WorldContextObject, FSoftObjectPath InPlotPath);

	UFUNCTION(BlueprintCallable, Category = "Plot", meta = (WorldContext = "WorldContextObject"))
		static class UPlotWidget* GetPlotWidget(UObject* WorldContextObject);
};