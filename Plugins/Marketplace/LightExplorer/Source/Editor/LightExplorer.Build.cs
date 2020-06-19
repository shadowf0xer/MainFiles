//  Copyright 2020 (C) Bruno Xavier B. Leite

using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules {

public class LightExplorer : ModuleRules {
    public LightExplorer(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PrivatePCHHeaderFile = "Public/LightExplorer_Shared.h";
        bEnforceIWYU = true;
		//
        PublicDependencyModuleNames.AddRange(new string[] {"Core","Engine","CoreUObject"});
        PrivateDependencyModuleNames.AddRange(
            new string[] {
                "BlueprintGraph",
                "AppFramework",
                "LevelEditor",
                "EditorStyle",
                "AssetTools",
                "InputCore",
                "SlateCore",
                "UnrealEd",
                "Projects",
                "Slate"
            }///
        );//
        //
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Public"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"Classes"));
        PrivateIncludePaths.Add(Path.Combine(ModuleDirectory,"Private"));
    }///
}///

}