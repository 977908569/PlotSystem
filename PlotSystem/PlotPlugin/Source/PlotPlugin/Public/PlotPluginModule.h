#pragma once
#include "Modules/ModuleInterface.h"

/**
 * FPlotModule
 */
class PLOTPLUGIN_API FPlotPluginModule : public IModuleInterface {
public:
	void StartupModule() override;
	void ShutdownModule() override;
};
