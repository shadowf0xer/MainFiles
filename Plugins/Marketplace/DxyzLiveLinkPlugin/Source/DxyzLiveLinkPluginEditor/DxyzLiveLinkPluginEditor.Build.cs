/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

using System.IO;

using UnrealBuildTool;
using System.Collections.Generic;

public class DxyzLiveLinkPluginEditor : ModuleRules
{
    public DxyzLiveLinkPluginEditor(ReadOnlyTargetRules Target) : base(Target) 
    {
        bPrecompile = true;
		PrecompileForTargets = PrecompileTargetsType.Any;
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(
        new string[] {
            // ... add public include paths required here ...
        }
        );
            
    
    PrivateIncludePaths.AddRange(
        new string[] {
            // ... add other private include paths required here ...
        }
        );
        
    
    PublicDependencyModuleNames.AddRange(
        new string[]
        {
            "Core",
            "UnrealEd",
            "Slate",
            "SlateCore",
            "PropertyEditor",
            "EditorStyle",
            "DxyzLiveLinkPlugin",
            "MainFrame"
            // ... add other public dependencies that you statically link with here ...
        }
        );
        
    
    PrivateDependencyModuleNames.AddRange(
        new string[]
        {
            "Projects",
            "InputCore",
            "UnrealEd",
            "CoreUObject",
            "Engine",
            "Slate",
            "SlateCore",
            "EditorStyle",
            "DxyzLiveLinkPlugin"
            
            // ... add private dependencies that you statically link with here ...  
        }
        );

    DynamicallyLoadedModuleNames.AddRange(
        new string[]
        {
            // ... add any modules that your module loads dynamically here ...
            //"Networking"
        }
        );
    }
}
