#pragma once
#include "Engine/DataAsset.h"
#include "PlotPluginNode.h"
#include "PlotWidget.h"
#include "PlotPlugin.generated.h"
/**
 * Asset
 */
UCLASS(BlueprintType)
class PLOTPLUGIN_API UPlotPlugin :public UDataAsset
{
	GENERATED_BODY()
public:
	UPlotPlugin();
	/**
	 * Start Node
	 */
	UPROPERTY()
		UPlotPluginNodeBase* PlotRootNode;
	UPROPERTY(Transient)
		TWeakObjectPtr<UObject> PlotOuter;
public:
	/**
	 * Plot Start
	 */
	UFUNCTION(BlueprintCallable)
		void Start();

	UFUNCTION(BlueprintCallable)
		void End() const;

	UWorld* GetWorld() const override;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditDefaultsOnly)
		FName Name;

	UPROPERTY(EditDefaultsOnly)
		FString Comment;

	UPROPERTY()
		class UEdGraph* PlotGraph = nullptr;
#endif
private:
	void CheckOpenWidget();
};
