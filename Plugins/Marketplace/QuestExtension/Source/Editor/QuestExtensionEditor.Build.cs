// Copyright 2015-2019 Piperift. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class QuestExtensionEditor : ModuleRules
{
	public QuestExtensionEditor(ReadOnlyTargetRules TargetRules) : base(TargetRules)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(new string[] {
			Path.Combine(ModuleDirectory, "Public/ConditionGraph"),
			Path.Combine(ModuleDirectory, "Public/Customizations"),
			Path.Combine(ModuleDirectory, "Public/QuestGraph")
		});

		PrivateIncludePaths.AddRange(new string[] {
			Path.Combine(ModuleDirectory, "Private/ConditionGraph"),
			Path.Combine(ModuleDirectory, "Private/Customizations"),
			Path.Combine(ModuleDirectory, "Private/QuestGraph"),
		});

		PublicDependencyModuleNames.AddRange( new string[] {
			"Core",
			"InputCore",
			"QuestExtension"
		});

		PrivateDependencyModuleNames.AddRange( new string[] {
			"Core",
			"CoreUObject",
			"ApplicationCore",
			"Engine",
			"UnrealEd",
			"Projects",
			"Blutility",
			"Slate",
			"SlateCore",
			"AssetTools",
			"EditorStyle",
			"KismetWidgets",
			"KismetCompiler",
			"BlueprintGraph",
			"GraphEditor",
			"LevelEditor",
			"Kismet",
			"PropertyEditor",
			"DetailCustomizations",
			"ContentBrowser",
			"Settings",
			"AIGraph",
			"ToolMenus"
		});

		PrivateIncludePathModuleNames.AddRange( new string[] {
			"QuestExtension"
		});
	}
}
