#pragma once
#include "UObject/Object.h"
#include "PlotNodeData.generated.h"
/**
 *Talk Config Data
 */
USTRUCT(BlueprintType)
struct FPlotTalkData
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Speaker;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString Content;
};

/**
 * Custom Base Data
 */
UCLASS(Blueprintable, BlueprintType, abstract, DefaultToInstanced, EditInlineNew, HideCategories = ("DoNotShow"), CollapseCategories, AutoExpandCategories = ("Default"))
class PLOTPLUGIN_API UPlotNodeData :public UObject
{
	GENERATED_BODY()
public:
	UPlotNodeData();

	UPROPERTY(EditAnywhere, meta = (DisplayName = "Is Wait"))
		bool bWait;
public:
	virtual  UWorld* GetWorld() const override;
	UFUNCTION(BlueprintNativeEvent)
		FString GetDataDes();
	/**
	 * Execute
	 */
	virtual void Do();
public:
	UFUNCTION(BlueprintImplementableEvent)
		void OnDo();

	UFUNCTION(BlueprintCallable)
		class UPlotPlugin* GetPlugin() const;

	UFUNCTION(BlueprintCallable)
		class UPlotPluginNode* GetNode() const;
};
