#include "PlotPluginEditorStyle.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"

#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )

FString FPlotPluginEditorStyle::RootToContentDir(const ANSICHAR* RelativePath, const TCHAR* Extension)
{
	static FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("PlotPlugin"))->GetContentDir();
	return (ContentDir / RelativePath) + Extension;
}

TSharedPtr< FSlateStyleSet > FPlotPluginEditorStyle::StyleSet = nullptr;
TSharedPtr< ISlateStyle > FPlotPluginEditorStyle::Get() { return StyleSet; }

FName FPlotPluginEditorStyle::GetStyleSetName()
{
	static FName PlotPluginEditorStyleName(TEXT("PlotPluginEditorStyle"));
	return PlotPluginEditorStyleName;
}

void FPlotPluginEditorStyle::Initialize()
{
	 //Only register once
	if (StyleSet.IsValid())
	{
		return;
	}

	StyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	StyleSet->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	StyleSet->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

	{
		StyleSet->Set("RootNodeStyle", new BOX_BRUSH("RootNode", FMargin(5.f / 138.f, 5.f / 56.f, 5.f / 138.f, 5.f / 56.f))); // left top right bottom
		StyleSet->Set("NormalNodeStyle", new BOX_BRUSH("NormalNode", FMargin(5.f / 138.f, 5.f / 56.f, 5.f / 138.f, 5.f / 56.f)));

		StyleSet->Set(FName(TEXT("ClassThumbnail.PlotPlugin")), new IMAGE_BRUSH("task_64", FVector2D(64, 64)));
		StyleSet->Set(FName(TEXT("ClassIcon.PlotPlugin")), new IMAGE_BRUSH("task_16", FVector2D(16, 16)));
		StyleSet->Set("EventIcon", new IMAGE_BRUSH("event", FVector2D(14, 16)));
		StyleSet->Set("ConditionIcon", new IMAGE_BRUSH("condition", FVector2D(16, 16)));
		StyleSet->Set("ItemIcon", new IMAGE_BRUSH("item", FVector2D(17, 16)));
	}

	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
};

#undef BOX_BRUSH
#undef IMAGE_BRUSH


void FPlotPluginEditorStyle::Shutdown()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}
}