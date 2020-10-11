
#include "PlotPluginActions.h"
#define LOCTEXT_NAMESPACE "PlotEditorActions"

FPlotPluginEditorCommandsImpl::FPlotPluginEditorCommandsImpl()
	: TCommands<FPlotPluginEditorCommandsImpl>(
		TEXT("PlotEditor"),
		NSLOCTEXT("Contexts", "PlotEditor", "Plot Editor"),
		NAME_None,
		FEditorStyle::GetStyleSetName())
{
}

void FPlotPluginEditorCommandsImpl::RegisterCommands()
{
	UI_COMMAND(MakeRoot, "Make Root", "Make Root", EUserInterfaceActionType::Button, FInputChord())
}

void FPlotPluginEditorActions::Register()
{
	FPlotPluginEditorCommandsImpl::Register();
}

const FPlotPluginEditorCommandsImpl& FPlotPluginEditorActions::Get()
{
	return FPlotPluginEditorCommandsImpl::Get();
}

void FPlotPluginEditorActions::Unregister()
{
	FPlotPluginEditorCommandsImpl::Unregister();
}

#undef LOCTEXT_NAMESPACE
