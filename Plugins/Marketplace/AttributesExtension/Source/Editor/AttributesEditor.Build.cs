// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AttributesEditor : ModuleRules
{
	public AttributesEditor(ReadOnlyTargetRules TargetRules) : base(TargetRules)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"InputCore"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"UnrealEd",
			"Blutility",
			"Slate",
			"SlateCore",
			"AssetTools",
			"EditorStyle",
			"GraphEditor",
			"PropertyEditor",
			"BlueprintGraph",
			"DetailCustomizations",
			"ContentBrowser",
			"Settings",
			"Attributes"
		});
	}
}
