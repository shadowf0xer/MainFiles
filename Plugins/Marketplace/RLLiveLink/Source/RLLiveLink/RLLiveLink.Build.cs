// Copyright 2018 The Reallusion Authors. All Rights Reserved.

using UnrealBuildTool;

public class RLLiveLink : ModuleRules
{
    public RLLiveLink(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "Networking",
                "Sockets",
                "Json",
                "JsonUtilities",
                "LiveLinkInterface"
            }
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "Projects",
                "InputCore",
                "UnrealEd",
                "LevelEditor",
                "ContentBrowser",
                "DesktopPlatform",
                "ImageWrapper",
                "EditorStyle",
                "RawMesh",
                "BlueprintGraph",
                "ApplicationCore",
                "ImageWrapper"
            }
            );
    }
}
