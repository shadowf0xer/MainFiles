// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestExtensionModule.h"

// Settings
#include "QuestExtensionSettings.h"
#include "QuestBase.h"

#if WITH_GAMEPLAY_DEBUGGER
#include "GameplayDebugger.h"
#endif // WITH_GAMEPLAY_DEBUGGER


DEFINE_LOG_CATEGORY(LogNarrative)

#define LOCTEXT_NAMESPACE "QuestExtensionModule"

void FQuestExtensionModule::StartupModule()
{
	UE_LOG(LogNarrative, Warning, TEXT("QuestExtension: Log Started"));

	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
#if WITH_EDITOR 
	if (GIsEditor)
	{
		// Register asset types
		IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
		// register JK category so that assets can register to it
		AssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Narrative")), LOCTEXT("NarrativeAssetCategory", "Narrative"));
	}
#endif // WITH_EDITOR 

	RegisterSettings();
}

void FQuestExtensionModule::ShutdownModule()
{
	UE_LOG(LogNarrative, Warning, TEXT("QuestExtension: Log Ended"));
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	if (UObjectInitialized())
	{
		UnregisterSettings();
	}
}

void FQuestExtensionModule::RegisterSettings()
{
#if WITH_EDITOR
	// Registering some settings is just a matter of exposing the default UObject of
	// your desired class, feel free to add here all those settings you want to expose
	// to your LDs or artists.

	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		// Get Project Settings category
		ISettingsContainerPtr SettingsContainer = SettingsModule->GetContainer("Project");

		// Register QuestExtension settings
		ISettingsSectionPtr SettingsSection = SettingsModule->RegisterSettings("Project", "Game", "QuestExtension",
			LOCTEXT("QuestExtensionSettingsName", "Quest Extension"),
			LOCTEXT("QuestExtensionSettingsDescription", "Configure general Quest Extension settings"),
			GetMutableDefault<UQuestExtensionSettings>());

		// Register the save handler to your settings, you might want to use it to
		// validate those or just act to settings changes.
		if (SettingsSection.IsValid())
		{
			SettingsSection->OnModified().BindRaw(this, &FQuestExtensionModule::HandleSettingsSaved);
		}

		// Register QuestBase settings
		ISettingsSectionPtr QuestSettingsSection = SettingsModule->RegisterSettings("Project", "Game", "QE-QuestBase",
			LOCTEXT("QEQuestBaseSettingsName", "Quest Extension: Quest"),
			LOCTEXT("QEQuestBaseSettingsDescription", "Default Quest property values"),
			MakeWeakObjectPtr(GetMutableDefault<UQuestBase>()));

		if (QuestSettingsSection.IsValid())
		{
			QuestSettingsSection->OnModified().BindRaw(this, &FQuestExtensionModule::HandleSettingsSaved);
		}
	}
#endif
}

void FQuestExtensionModule::UnregisterSettings()
{
#if WITH_EDITOR
	// Ensure to unregister all of your registered settings here, hot-reload would
	// otherwise yield unexpected results.

	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->UnregisterSettings("Project", "Game", "QuestExtension");
		SettingsModule->UnregisterSettings("Project", "Game", "QE-QuestBase");
	}
#endif
}

bool FQuestExtensionModule::HandleSettingsSaved()
{
	UQuestExtensionSettings* Settings = GetMutableDefault<UQuestExtensionSettings>();
	bool ResaveSettings = false;

	if (ModifiedSettingsDelegate.IsBound()) {
		ModifiedSettingsDelegate.Execute();
	}

	// You can put any validation code in here and resave the settings in case an invalid
	// value has been entered

	if (ResaveSettings)
	{
		Settings->SaveConfig();
	}
	
	return true;
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FQuestExtensionModule, QuestExtension)