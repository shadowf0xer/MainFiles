/***************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class DxyzLiveLinkPlugin : ModuleRules
	{

        private string ModulePath
        {
            get { return ModuleDirectory; }
        }

        private string ThirdPartyPath
        {
            get { return Path.GetFullPath(Path.Combine(ModulePath, "../../ThirdParty/")); }
        }

        //constructor
#if WITH_FORWARDED_MODULE_RULES_CTOR
        public DxyzLiveLinkPlugin(ReadOnlyTargetRules Target) : base(Target)
#else
        public DxyzLiveLinkPlugin(TargetInfo Target)
#endif
        {
            bPrecompile = true;
			PrecompileForTargets = PrecompileTargetsType.Any;
            PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
            bEnableExceptions = true;

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Networking",
                    "LiveLink",
                    "LiveLinkInterface",
                    "Json",
                    "JsonUtilities",
                    "XmlParser"
				}
			); 

			PrivateDependencyModuleNames.AddRange(
				new string[] {
                    "Projects",
					"Core",
                    "Slate",
                    "SlateCore",
                    "InputCore",
                    "Engine",
					"CoreUObject",
					"Sockets",
                    "LiveLink",
                    "LiveLinkInterface"
				}
			);

            if (Target.bBuildEditor == true)
			{
				PrivateDependencyModuleNames.Add("UnrealEd");
			}

			PrivateIncludePathModuleNames.AddRange(
				new string[] {
					"Settings"
				}
			);

			PrivateIncludePaths.AddRange(
				new string[] {
					"DxyzLiveLinkPlugin/Private"
				}
			);

            LoadFfmpegLib(Target);
        }

        public bool LoadFfmpegLib(ReadOnlyTargetRules Target)
        {
            string BaseDirectory = Path.GetFullPath(Path.Combine(ModuleDirectory, "..", ".."));
            string ThirdPartyPath = Path.Combine(BaseDirectory, "ThirdParty");
            string FFMpegPath;

            if (Target.Platform == UnrealTargetPlatform.Linux)
            {
                FFMpegPath = Path.Combine(ThirdPartyPath, "ffmpeg/lin64");
                PublicAdditionalLibraries.Add(Path.Combine(FFMpegPath + "/lib/", "libavcodec.so"));
                PublicAdditionalLibraries.Add(Path.Combine(FFMpegPath + "/lib/", "libavformat.so"));
                PublicAdditionalLibraries.Add(Path.Combine(FFMpegPath + "/lib/", "libavutil.so"));
                PublicAdditionalLibraries.Add(Path.Combine(FFMpegPath + "/lib/", "libswscale.so"));
                
                RuntimeDependencies.Add(Path.Combine(FFMpegPath + "/lib", "libavcodec.so"));
                RuntimeDependencies.Add(Path.Combine(FFMpegPath + "/lib", "libavformat.so"));
                RuntimeDependencies.Add(Path.Combine(FFMpegPath + "/lib", "libavutil.so"));
                RuntimeDependencies.Add(Path.Combine(FFMpegPath + "/lib", "libswscale.so"));

		        PublicIncludePaths.Add(FFMpegPath + "/include");

                return true;
            }
            else if (Target.Platform == UnrealTargetPlatform.Win64)
            {

                FFMpegPath = Path.Combine(ThirdPartyPath, "ffmpeg/win64");

                PublicAdditionalLibraries.Add(Path.Combine(FFMpegPath + "/lib", "dxyz_avutil.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(FFMpegPath + "/lib", "dxyz_avformat.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(FFMpegPath + "/lib", "dxyz_avcodec.lib"));
                PublicAdditionalLibraries.Add(Path.Combine(FFMpegPath + "/lib", "dxyz_swscale.lib"));

                string[] dlls = { "avutil-56.dll", "swresample-3.dll", "avcodec-58.dll", "avformat-58.dll",
                    "swscale-5.dll" };

                string BinariesPath = Path.Combine(FFMpegPath, "bin");
                
                foreach (string dll in dlls)
                {
                    PublicDelayLoadDLLs.Add(dll);
                    RuntimeDependencies.Add(Path.Combine(BinariesPath, dll), StagedFileType.NonUFS);

                    System.Console.WriteLine("Adding library " + Path.Combine(BinariesPath, dll));
                }

                PublicIncludePaths.Add(FFMpegPath + "/include");

                return true;
            }
            else if (Target.Platform == UnrealTargetPlatform.Mac)
            {
                FFMpegPath = Path.Combine(ThirdPartyPath, "ffmpeg/mac");

                string[] libs = {"libavcodec.58.dylib", "libavformat.58.dylib", "libavutil.56.dylib", "libswresample.3.dylib", "libswscale.5.dylib"};

                foreach (string lib in libs)
                {
                    PublicAdditionalLibraries.Add(Path.Combine(FFMpegPath + "/lib", lib));
                    RuntimeDependencies.Add(Path.Combine(FFMpegPath + "/lib", lib), StagedFileType.NonUFS);
                    // Somehow the libraries are not found at runtime so we copy them manually for now
                    CopyToBinaries(Path.Combine(FFMpegPath + "/lib", lib), Target);
                }

                PublicIncludePaths.Add(FFMpegPath + "/include");
            }

            return false;
        }

        private string UProjectPath
        {
            get { return Directory.GetParent(ModulePath).Parent.FullName; }
        }

        private void CopyToBinaries(string Filepath, ReadOnlyTargetRules Target)
        {
            string binariesDir = Path.Combine(UProjectPath, "Binaries", Target.Platform.ToString());
            string filename = Path.GetFileName(Filepath);

            System.Console.WriteLine("Writing file " + Filepath + " to " + binariesDir);

            if (!Directory.Exists(binariesDir))
                Directory.CreateDirectory(binariesDir);

            if (!File.Exists(Path.Combine(binariesDir, filename)))
                File.Copy(Filepath, Path.Combine(binariesDir, filename), true);
		}
	}
}
