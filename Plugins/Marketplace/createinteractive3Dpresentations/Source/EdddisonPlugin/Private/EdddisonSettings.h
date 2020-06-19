/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#pragma once

#include "EdddisonPluginPrivatePCH.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EdddisonSettings.generated.h"





/************************************************************************/
/* NOTE:                                                                */
/* Settings for plugins are sligthly different as settings for games.   */
/*   There are different paths for editor and game settings!            */
/*   See EdddisonPluginDefs.h for definitions of                        */
/*		EdddisonPlugin and Config folder names.                         */
/************************************************************************/


UCLASS(Config="Plugins/EdddisonPlugin/Config/EdddisonPluginSettings", defaultconfig)
class EDDDISONPLUGIN_API UEdddisonSettings : public UObject
{

	GENERATED_UCLASS_BODY()
	

public:	
	
	UPROPERTY(Config, BlueprintReadOnly, Category=EdddisonPlugin)
	bool bAutostartWithEditor;
	const TCHAR* AutoStartWithEditorKey = TEXT("bAutostartWithEditor"); // this has to match exactly the UPROPERTY var name.

	bool GetAutostartWithEditor();
	void SetAutoStartWithEditor(bool do_autostart);

	

	UPROPERTY(Config, BlueprintReadOnly, Category=EdddisonPlugin)
	bool bAutostartWithGame;
	const TCHAR* AutoStartWithGameKey = TEXT("bAutostartWithGame"); // this has to match exactly the UPROPERTY var name.

	bool GetAutostartWithGame();
	void SetAutostartWithGame(bool do_autostart);



	UPROPERTY(Config, BlueprintReadOnly, Category = EdddisonPlugin)
		bool bEnableViewportRealtime;
	const TCHAR* EnableViewportRealtimeKey = TEXT("bEnableViewportRealtime"); // this has to match exactly the UPROPERTY var name.

	bool GetEnableViewportRealtime();
	void SetEnableViewportRealtime(bool enable);

	



	static const bool bAutostartWithEditorValueDefault = false;
	static const bool bAutostartWithGameValueDefault = true;
	static const bool bEnableViewportRealtimeValueDefault = true;

private:

	const FString SettingsFilename = TEXT("EdddisonPluginSettings.ini");  // this has to match exactly the UClass Config (without .ini)
	const TCHAR * SettingsSectionName = TEXT("/Script/EdddisonPlugin.EdddisonSettings");

	FString GetSettingsFilepath();
	FString GetProjectPluginFilepath() const;
	FString GetEnginePluginFilepath() const;
	FString GetGamePluginFilepath() const;

	FString CreateDefaultSettingsFile();
	
	
};
