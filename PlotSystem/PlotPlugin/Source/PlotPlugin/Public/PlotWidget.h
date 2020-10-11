#pragma once
#include "PlotNodeData.h"
#include "Blueprint/UserWidget.h"
#include "PlotWidget.generated.h"
/**
 * Test Widget
 */
UCLASS(Blueprintable, BlueprintType)
class PLOTPLUGIN_API UPlotWidget :public UUserWidget
{
	GENERATED_BODY()

		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInput);
public:
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FOnInput OnInput;
public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
		void DoTalk(FPlotTalkData InData);
};