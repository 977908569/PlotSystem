#pragma once
#include "Engine/DataAsset.h"
#include "PlotPluginNode.generated.h"

class UPlotEvent;

/**
 *Base Node
 */
UCLASS(BlueprintType)
class PLOTPLUGIN_API UPlotPluginNodeBase : public UDataAsset
{
	GENERATED_BODY()
public:
	UPlotPluginNodeBase();

	/**
	 *Node ID
	 */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, meta = (DisplayName = "ID"))
		int32 NodeId;

	/**
	 * Link Nodes
	 */
	UPROPERTY(BlueprintReadOnly)
		TArray<class UPlotPluginNodeBase*> Links;

	/**
	 * Is Root Node
	 */
	UPROPERTY()
		bool bRootNode;
};

/**
 * Root Node
 */
UCLASS(BlueprintType)
class PLOTPLUGIN_API UPlotPluginNodeRoot : public UPlotPluginNodeBase
{
	GENERATED_BODY()
public:
	UPlotPluginNodeRoot();
};

/**
 * Node
 */
UCLASS(BlueprintType)
class PLOTPLUGIN_API UPlotPluginNode : public UPlotPluginNodeBase
{
	GENERATED_BODY()
public:
	UPlotPluginNode();
	/**
	 * Node Data
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, meta = (DisplayName = "Node Data"))
		class UPlotNodeData* PlotNodeData;
	/**
 * Event
 */
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, meta = (DisplayName = "Enter Events"))
		TArray<UPlotEvent*> EnterEvents;

	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, meta = (DisplayName = "Exit Events"))
		TArray<UPlotEvent*> ExitEvents;

public:
	/**
	 * Enter Node
	 */
	UFUNCTION()
		void Enter();
	/**
	 * Exit Node
	 */
	UFUNCTION()
		void Exit();


	UFUNCTION(BlueprintCallable)
		void OnFinish();

	/**
	 * Blurprint Function
	 */
	UFUNCTION(BlueprintImplementableEvent)
		void OnEnter();

	UFUNCTION(BlueprintImplementableEvent)
		void OnExit();

	FString GetDesc() override;
};




