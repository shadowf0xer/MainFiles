/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonSettings.h"
#include "EdddisonPluginPrivatePCH.h"
//#include "EdddisonPlugin.h"







UEdddisonSettings::UEdddisonSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}



bool UEdddisonSettings::GetAutostartWithEditor() {
	
	bool autostart = this->bAutostartWithEditorValueDefault;
	
	if (GConfig) {

		const FString ConfigFilepath = GetSettingsFilepath();
		
		GConfig->GetBool(
			SettingsSectionName,
			AutoStartWithEditorKey,
			autostart,
			ConfigFilepath);
	}
	
	return autostart;

}



void UEdddisonSettings::SetAutoStartWithEditor(bool do_autostart) {

	if (!GConfig) { return; }
	
	const FString configFilepath = GetSettingsFilepath();
	const bool autostart = do_autostart;

		GConfig->SetBool(
			SettingsSectionName,
			AutoStartWithEditorKey,
			autostart,
			configFilepath);

		SaveConfig();
	
}





bool UEdddisonSettings::GetAutostartWithGame() {

	bool autostart = this->bAutostartWithGameValueDefault;
	

	if (GConfig) {

		const FString configFilepath = GetSettingsFilepath();
		
		GConfig->GetBool(
			SettingsSectionName,
			AutoStartWithGameKey,
			autostart,
			configFilepath);
	}

	return autostart;


}


void UEdddisonSettings::SetAutostartWithGame(bool do_autostart) {

	if (!GConfig) { return; }

	
	const FString configFilepath = GetSettingsFilepath();
	const bool autostart = do_autostart;

		GConfig->SetBool(
			SettingsSectionName,
			AutoStartWithGameKey,
			autostart,
			configFilepath);

		SaveConfig();
}





bool UEdddisonSettings::GetEnableViewportRealtime()
{
	bool enable = this->bEnableViewportRealtimeValueDefault;

	if (GConfig) {

		const FString configFilepath = GetSettingsFilepath();

		GConfig->GetBool(
			SettingsSectionName,
			EnableViewportRealtimeKey,
			enable,
			configFilepath);
	}

	return enable;
}



void UEdddisonSettings::SetEnableViewportRealtime(bool enable)
{
	if (!GConfig) {	return;	}
	
	const FString configFilepath = GetSettingsFilepath();
	const bool value = enable;
	
	GConfig->SetBool(
		SettingsSectionName,
		EnableViewportRealtimeKey,
		value,
		configFilepath);

	SaveConfig();
}





FString UEdddisonSettings::GetSettingsFilepath() {

	FString configFilepath;

#if WITH_EDITOR

	configFilepath = GetProjectPluginFilepath();

	if (!FPaths::FileExists(configFilepath)) {
		configFilepath = GetEnginePluginFilepath();
	}

#else

	configFilepath = GetGamePluginFilepath();

#endif

	if (!FPaths::FileExists(configFilepath)) {
		/* no config file! create a default config file */
		configFilepath = CreateDefaultSettingsFile();
}

	return configFilepath;
}





FString UEdddisonSettings::GetProjectPluginFilepath() const
{

	return FPaths::GetPath(FPaths::GetProjectFilePath()) / UnrealPluginsFoldername /
		EdddisonPluginFoldername / EdddisonSettingsFoldername / SettingsFilename;

}



FString UEdddisonSettings::GetEnginePluginFilepath() const
{
	return FPaths::EnginePluginsDir() /
		EdddisonPluginFoldername / EdddisonSettingsFoldername / SettingsFilename;

}



FString UEdddisonSettings::GetGamePluginFilepath() const
{
	return FPaths::GetPath(FPaths::ProjectPluginsDir()) /
		EdddisonPluginFoldername / EdddisonSettingsFoldername / SettingsFilename;

	// deprecated since 4.18
	//return FPaths::GetPath(FPaths::GamePluginsDir()) /
		EdddisonPluginFoldername / EdddisonSettingsFoldername / SettingsFilename;

}



/**
 * \brief Create a settings file from default values.
 * \return Path to created settings file or empty string on error.
 */
FString UEdddisonSettings::CreateDefaultSettingsFile() {

	if (!GConfig) { return ""; }

	
	FString configFilepath;

#if WITH_EDITOR

	/* get config file from project plugin folder */
	configFilepath = GetProjectPluginFilepath();

#else

	/* get config file from game plugin folder */
	configFilepath = GetGamePluginFilepath();

#endif

		GConfig->SetBool(
			SettingsSectionName,
			AutoStartWithEditorKey,
			bAutostartWithEditorValueDefault,
			configFilepath);

		GConfig->SetBool(
			SettingsSectionName,
			AutoStartWithGameKey,
			bAutostartWithGameValueDefault,
			configFilepath);

		GConfig->SetBool(
			SettingsSectionName,
			EnableViewportRealtimeKey,
			bEnableViewportRealtimeValueDefault,
			configFilepath);

		SaveConfig();
	

	return configFilepath;

}

