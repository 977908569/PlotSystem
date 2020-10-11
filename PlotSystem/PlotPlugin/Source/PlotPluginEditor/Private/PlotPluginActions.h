#pragma once
#include "Framework/Commands/Commands.h"
#include "EditorStyle.h"

/**
 * Commands
 */
class FPlotPluginEditorCommandsImpl : public TCommands<FPlotPluginEditorCommandsImpl>
{
public:
	FPlotPluginEditorCommandsImpl();

	void RegisterCommands() override;

	TSharedPtr<FUICommandInfo> MakeRoot;
};

class FPlotPluginEditorActions
{
public:
	static void Register();

	static const FPlotPluginEditorCommandsImpl& Get();

	static void Unregister();
};
