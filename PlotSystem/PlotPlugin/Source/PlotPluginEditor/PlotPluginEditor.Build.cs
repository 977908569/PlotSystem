// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PlotPluginEditor : ModuleRules
{
	public PlotPluginEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
        // Public include paths
		PublicIncludePaths.AddRange(new string[] {
				
		});
				
		// Private include paths
		PrivateIncludePaths.AddRange(new string[] {
        });
			
		
		PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Projects",
            // ... add other public dependencies that you statically link with here ...
        });
			
		
		PrivateDependencyModuleNames.AddRange(new string[] {
            "Engine",
			"Slate",
			"SlateCore",
			"PlotPlugin",
            "UnrealEd",
            "EditorStyle",
            "GraphEditor",
            "InputCore",
            "ApplicationCore",
            "KismetWidgets",
            "ToolMenus",
        });
		
		
		DynamicallyLoadedModuleNames.AddRange(new string[]{
			// ... add any modules that your module loads dynamically here ...
		});
	}
}
