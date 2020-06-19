/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzLiveLinkPluginEditor.h"

#include "Settings/EditorLoadingSavingSettings.h"
#include "Settings/ContentBrowserSettings.h"
#include "Settings/ProjectPackagingSettings.h"
#include "Interfaces/IMainFrameModule.h"
#include "Framework/Application/SlateApplication.h"
#include "Rendering/SlateRenderer.h"
#include "HAL/PlatformFilemanager.h"

//General Log
DEFINE_LOG_CATEGORY(DxyzLogEditor);

void FDxyzLiveLinkPluginEditor::StartupModule()
{
    Settings = NewObject<UDxyzDocHandler>(UDxyzDocHandler::StaticClass());
    Settings->AddToRoot();

    FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked< FPropertyEditorModule >("PropertyEditor");

    // Register our customization to be used by a class 'UMyClass' or 'AMyClass'. Note the prefix must be dropped.
    PropertyModule.RegisterCustomClassLayout(
        "DxyzLiveLinkRetargetAsset",
        FOnGetDetailCustomizationInstance::CreateStatic(&FDxyzLiveLinkRetargetAssetDetails::MakeInstance)
    );

    PropertyModule.RegisterCustomClassLayout(
        "DxyzLiveLinkSourceSettings",
        FOnGetDetailCustomizationInstance::CreateStatic(&FDxyzLiveLinkSourceSettingsDetails::MakeInstance)
    );

    PropertyModule.NotifyCustomizationModuleChanged();

    //Custom properties
    PropertyModule.RegisterCustomPropertyTypeLayout("DxyzBoneModify", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FDxyzBoneModifyCustomization::MakeInstance));
    PropertyModule.RegisterCustomPropertyTypeLayout("DxyzCurveModify", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FDxyzCurveModifyCustomization::MakeInstance));
    
    PropertyModule.RegisterCustomPropertyTypeLayout("DxyzBoneSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FDxyzBoneSettingsCustomization::MakeInstance));
    PropertyModule.RegisterCustomPropertyTypeLayout("BoneTransSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FBoneTransSettingsCustomization::MakeInstance));
    PropertyModule.RegisterCustomPropertyTypeLayout("BoneRotaSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FBoneRotaSettingsCustomization::MakeInstance));

    PropertyModule.RegisterCustomPropertyTypeLayout("DxyzCurveSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FDxyzCurveSettingsCustomization::MakeInstance));

    PropertyModule.RegisterCustomPropertyTypeLayout("TranslationSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FTranslationSettingsCustomization::MakeInstance));
    PropertyModule.RegisterCustomPropertyTypeLayout("RotationSettings", FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FRotationSettingsCustomization::MakeInstance));
    UProjectPackagingSettings* MyPackagingSettings = GetMutableDefault<UProjectPackagingSettings>();

    // Add DxyzSaved folder to Project
    FDirectoryPath DxyzSavedPath;
    DxyzSavedPath.Path = "DxyzSaved";

    bool Contained = false;
    TArray<FDirectoryPath> Dir = MyPackagingSettings->DirectoriesToAlwaysStageAsNonUFS;
    for (int i = 0; i < Dir.Num(); ++i)
    {
        if (Dir[i].Path == DxyzSavedPath.Path)
        {
            Contained = true;
            break;
        }
    }
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    FString vAbsolutePath = FPaths::Combine(FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()), DxyzSavedPath.Path);
   
    if (PlatformFile.DirectoryExists(*vAbsolutePath) && !Contained)
        MyPackagingSettings->DirectoriesToAlwaysStageAsNonUFS.Add(DxyzSavedPath);

    // Hide empty folders because DxyzSaved is automatically created in the Content folder
    // (we have no choice) but no asset are visible inside...
    UContentBrowserSettings* Content = GetMutableDefault<UContentBrowserSettings>();
    Content->DisplayEmptyFolders = false;

	// Prevent DxyzSaved JSON config files changes to be detected
	UEditorLoadingSavingSettings* EditorSavingSettings = GetMutableDefault<UEditorLoadingSavingSettings>();
	for (int i = 0; i < EditorSavingSettings->AutoReimportDirectorySettings.Num(); ++i)
	{
		FAutoReimportDirectoryConfig* Config = &EditorSavingSettings->AutoReimportDirectorySettings[i];
		if (Config->Wildcards.Num() > 0)
		{
			bool vContained = false;
			for (int j = 0; j < Config->Wildcards.Num(); ++j)
			{
				FAutoReimportWildcard vWild = Config->Wildcards[j];
				if(vWild.Wildcard.Compare("*.dxyz") == 0)
					vContained = true;
			}

			if (!vContained)
			{
				FAutoReimportWildcard vWild;
				vWild.bInclude = false;
				vWild.Wildcard = "*.dxyz";
				Config->Wildcards.Add(vWild);
			}
		}
	}

    // Called when the Editor mainframe finishes up getting created
    IMainFrameModule& MainFrameModule = FModuleManager::LoadModuleChecked<IMainFrameModule>(TEXT("MainFrame"));
    LoadedDelegateHandle = MainFrameModule.OnMainFrameCreationFinished().AddRaw(this, &FDxyzLiveLinkPluginEditor::OnEngineInit);
}

void FDxyzLiveLinkPluginEditor::ShutdownModule()
{
    if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
    {
        FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
        PropertyModule.UnregisterCustomClassLayout("DxyzLiveLinkRetargetAsset");
        PropertyModule.UnregisterCustomClassLayout("DxyzLiveLinkSourceSettings");
    }
}

void FDxyzLiveLinkPluginEditor::OnEngineInit(TSharedPtr<SWindow> InRootWindow, bool bIsNewProjectWindow)
{
    if (IsInGameThread())
    {
        IMainFrameModule& MainFrameModule = FModuleManager::LoadModuleChecked<IMainFrameModule>(TEXT("MainFrame"));
        MainFrameModule.OnMainFrameCreationFinished().Remove(LoadedDelegateHandle);
		Settings->ShowDocWindowIfNeeded();
    }
    }

IMPLEMENT_MODULE(FDxyzLiveLinkPluginEditor, DxyzLiveLinkPluginEditor);