// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SourceFilteringCore : ModuleRules
{
    public SourceFilteringCore(ReadOnlyTargetRules Target) : base(Target)
    {
        PrivateDependencyModuleNames.AddRange(
                new string[] {
                    "Core",
                    "CoreUObject",
                }
            );
    }
}
