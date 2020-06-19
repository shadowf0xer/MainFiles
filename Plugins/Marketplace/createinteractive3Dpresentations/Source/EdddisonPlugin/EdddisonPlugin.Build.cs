/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


// separat editor und runtime targets
// https://answers.unrealengine.com/questions/41509/extending-editor-engine.html
using System.IO;
using UnrealBuildTool;


public class EdddisonPlugin : ModuleRules
{
	public EdddisonPlugin(ReadOnlyTargetRules Target):base(Target)
	{
        // this fixes compile error with UE4.25 and WindowsKit 10.0.18362.0
        // this solution has been provided by unreal marketplace support on 03.06.2020
        PublicDefinitions.Add("WINDOWS_IGNORE_PACKING_MISMATCH");


        // enable exceptions; enable unwind semantics for C++-style exceptions
        //UEBuildConfiguration.bForceEnableExceptions = true;

        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PrecompileForTargets = PrecompileTargetsType.Any;
		bPrecompile = true; 

        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));

        PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private"));
        PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/Socket"));
        PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "Private/Actors"));


        PublicDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
                "CoreUObject",
                "Engine",
                "InputCore",
                "Projects",	 // IPluginManager.h
                //"UnrealEd",                			
                // ... add other public dependencies that you statically link with here ...
            }
            );
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
				"CoreUObject",
                "InputCore",
                "Engine",
				"Slate",
				"SlateCore",
                "InputCore",
                //"Json",
                //"UnrealEd",
                //"LevelEditor",
                // ... add private dependencies that you statically link with here ...	
            }
            );
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
                "EdddisonPlugin"
				// ... add any modules that your module loads dynamically here ...
            }
            );


        if (Target.bBuildEditor == true)
        {
            PrivateDependencyModuleNames.AddRange(
                new string[] {
                    "UnrealEd",
                    "LevelEditor",
                }
            );
        }

        // Add the standard configuration as a dependancy
        if (Target.Platform == UnrealTargetPlatform.Win64 || Target.Platform == UnrealTargetPlatform.Win32)
        {
            string ProjectConfigFile = "$(ProjectDir)/Plugins/EdddisonPlugin/Config/EdddisonPluginSettings.ini";
            RuntimeDependencies.Add(ProjectConfigFile);
        }
    }
}
