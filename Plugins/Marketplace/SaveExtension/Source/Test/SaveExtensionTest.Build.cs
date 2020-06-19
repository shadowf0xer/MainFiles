// Copyright 2015-2019 Piperift. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

namespace UnrealBuildTool.Rules
{
	public class SaveExtensionTest : ModuleRules {
		public SaveExtensionTest(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
			bEnforceIWYU = true;

			PublicDependencyModuleNames.AddRange(new string[]
			{
				"Core",
				"Engine",
				"CoreUObject",
				"SaveExtension"
			});

            if (Target.bBuildEditor == true)
            {
                PrivateDependencyModuleNames.Add("UnrealEd");
            }
        }
	}
}