// Copyright 2015-2019 Piperift. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class QuestExtension : ModuleRules
{
	public QuestExtension(ReadOnlyTargetRules TargetRules) : base(TargetRules)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange( new string[] {
			Path.Combine(ModuleDirectory, "Public/Quests"),
			Path.Combine(ModuleDirectory, "Public/Miscellaneous")
		});

		PublicDependencyModuleNames.AddRange( new string[] {
			"Core"
		});

		PrivateDependencyModuleNames.AddRange( new string[] {
			"Core",
			"RenderCore",
			"CoreUObject",
			"Engine",
			"RHI",
			"Slate",
			"SlateCore",
			"MovieScene",
			"LevelSequence"
		});

		if (TargetRules.bBuildDeveloperTools || (TargetRules.Configuration != UnrealTargetConfiguration.Shipping && TargetRules.Configuration != UnrealTargetConfiguration.Test))
		{
			PrivateDependencyModuleNames.Add("GameplayDebugger");
			PublicDefinitions.Add("WITH_GAMEPLAY_DEBUGGER=1");
		}
		else
		{
			PublicDefinitions.Add("WITH_GAMEPLAY_DEBUGGER=0");
		}
	}
}
