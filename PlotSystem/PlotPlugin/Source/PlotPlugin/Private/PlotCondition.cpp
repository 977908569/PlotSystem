#include "PlotCondition.h"
#include "PlotPlugin.h"

bool UPlotCondition::ConditionMet_Implementation(UObject* InOuter)
{
	return true;
}

UWorld* UPlotCondition::GetWorld() const
{
	if (GetTypedOuter<UPlotPlugin>())
		return  GetTypedOuter<UPlotPlugin>()->GetWorld();
	else
		return nullptr;
}

bool UPlotCondition_And::ConditionMet_Implementation(UObject* InOuter)
{
	if (Conditions.Num() <= 0) return true;
	for (auto& Item : Conditions)
	{
		if (Item && !Item->ConditionMet(InOuter))
		{
			return false;
		}
	}
	return true;
}

bool UPlotCondition_Or::ConditionMet_Implementation(UObject* InOuter)
{
	if (Conditions.Num() <= 0) return true;
	for (auto& Item : Conditions)
	{
		if (Item && Item->ConditionMet(InOuter))
		{
			return true;
		}
	}
	return false;
}
