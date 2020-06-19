// Copyright 2019 The Reallusion Authors. All Rights Reserved.
using UnrealBuildTool;

public class RLLiveLinkEditor : ModuleRules
{
    public RLLiveLinkEditor(ReadOnlyTargetRules Target) : base(Target)
    {
		// TODO: Clean up dependencies
		
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        
        PrivateIncludePaths.AddRange(
            new string[] {
                "RLLiveLinkEditor/Private",
            }
            );
            
        
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "UnrealEd",
                "Engine",
                "Projects",
                "DetailCustomizations",
				"RLLiveLink",
				"LiveLinkInterface",
				"BlueprintGraph"
            }
            );
            
        
        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "WorkspaceMenuStructure",
                "EditorStyle",
                "SlateCore",
                "Slate",
                "InputCore"
            }
            );
    }
}
