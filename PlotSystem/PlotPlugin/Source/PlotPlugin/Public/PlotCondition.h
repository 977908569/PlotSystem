#pragma once
#include "UObject/Object.h"
#include "PlotCondition.generated.h"
/**
 * Condition
 */
UCLASS(Blueprintable, BlueprintType, DefaultToInstanced, abstract, EditInlineNew, HideCategories = ("DoNotShow"), CollapseCategories, AutoExpandCategories = ("Default"))
class PLOTPLUGIN_API UPlotCondition :public UObject
{
	GENERATED_BODY()
public:

	/**
	 * Blueprint Function
	 */
	UFUNCTION(BlueprintImplementableEvent)
		void OnInit();

	UFUNCTION(BlueprintNativeEvent)
		bool ConditionMet(UObject* InOuter);

	virtual bool ConditionMet_Implementation(UObject* InOuter);

	UFUNCTION(BlueprintCallable)
		virtual UWorld* GetWorld() const override;
};
/**
 * And
 */
UCLASS(BlueprintType, meta = (DisplayName = "And"))
class  PLOTPLUGIN_API UPlotCondition_And : public UPlotCondition
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, meta = (DisplayName = "Conditions"))
		TArray<UPlotCondition*>  Conditions;

	bool ConditionMet_Implementation(UObject* InOuter) override;
};

/**
 * Or
 */
UCLASS(BlueprintType, meta = (DisplayName = "Or"))
class  PLOTPLUGIN_API UPlotCondition_Or : public UPlotCondition
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, meta = (DisplayName = "Conditions"))
		TArray<UPlotCondition*>  Conditions;

	bool ConditionMet_Implementation(UObject* InOuter) override;
};
