#pragma once
#include "CoreMinimal.h"
/**
 * Style
 */
class FPlotPluginEditorStyle
{
public:
	static void Initialize();
	static void Shutdown();
	static TSharedPtr< class ISlateStyle > Get();
	static FName GetStyleSetName();
private:
	static FString RootToContentDir(const ANSICHAR* RelativePath, const TCHAR* Extension);
	static TSharedPtr< class FSlateStyleSet > StyleSet;
};