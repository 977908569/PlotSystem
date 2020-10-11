#pragma once
#include "PlotPluginEditorTypes.generated.h"
/**
 * Node Type
 */
namespace EPlotPluginSubNode {
	enum Type
	{
		Root,
		Normal
	};
}

/**
 * Type
 */
UCLASS()
class UPlotPluginEditorTypes : public UObject
{
	GENERATED_BODY()
public:
	static const FName PinCategory_MultipleNodes;
};