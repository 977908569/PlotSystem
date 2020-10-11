using UnrealBuildTool;

public class PlotPlugin : ModuleRules
{
	public PlotPlugin(ReadOnlyTargetRules Target) : base(Target)
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
            // ... add other public dependencies that you statically link with here ...
        });
			
		
		PrivateDependencyModuleNames.AddRange(new string[] {
			"CoreUObject",
			"Engine",
			"Slate",
			"SlateCore",
			"UMG"
        });
		
		
		DynamicallyLoadedModuleNames.AddRange(new string[]{
			// ... add any modules that your module loads dynamically here ...
		});
	}
}
