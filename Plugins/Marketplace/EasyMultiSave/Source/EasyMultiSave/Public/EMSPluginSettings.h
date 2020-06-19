//Easy Multi Save - Copyright (C) 2020 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMSPersistentSaveGame.h"
#include "EMSProfileSaveGame.h"
#include "EMSInfoSaveGame.h"
#include "EMSPluginSettings.generated.h"

UCLASS(config=Engine, defaultconfig)
class EASYMULTISAVE_API UEMSPluginSettings : public UObject
{
	GENERATED_BODY()

public:

	/**The default save game slot name, that is used if no name is set with 'Set Current Save Slot Name'.*/
	UPROPERTY(config, EditAnywhere, Category = "General Settings", meta = (DisplayName = "Default Save Slot Name"))
	FString DefaultSaveGameName = "MySaveGame";

	/**The Blueprint class that you want to use for the persistent save, to access the data you need to cast to it.*/
	UPROPERTY(config, EditAnywhere, Category = "General Settings")
	TSubclassOf<UEMSPersistentSaveGame> PersistentSaveGameClass = UEMSPersistentSaveGame::StaticClass();

	/**The Blueprint class that you want to use for the slot info, usually does not need a custom class.*/
	UPROPERTY(config, EditAnywhere, Category = "General Settings")
	TSubclassOf<UEMSInfoSaveGame> SlotInfoSaveGameClass = UEMSInfoSaveGame::StaticClass();

	/**The Blueprint class that you want to use for the local profile, to access the data you need to cast to it.*/
	UPROPERTY(config, EditAnywhere, Category = "General Settings")
	TSubclassOf<UEMSProfileSaveGame> ProfileSaveGameClass = UEMSProfileSaveGame::StaticClass();

	/**The controller, pawn and player state can be loaded independent of the level without transforms.*/
	UPROPERTY(config, EditAnywhere, Category = "Persistence", meta = (DisplayName = "Persistent Player"))
	bool bPersistentPlayer;

	/**The game mode and game state can be loaded independent of the level.*/
	UPROPERTY(config, EditAnywhere, Category = "Persistence", meta = (DisplayName = "Persistent Game Mode"))
	bool bPersistentGameMode;

	/**If enabled, saving player and level actors is outsourced to a background thread.*/
	UPROPERTY(config, EditAnywhere, Category = "Save and Load", meta = (DisplayName = "Multi-Thread Saving"))
	bool bMultiThreadSaving = false;

	/**The method that is used to load level-actors.*/
	UPROPERTY(config, EditAnywhere, Category = "Save and Load", meta = (DisplayName = "Level Load Method"))
	ELoadMethod LoadMethod = ELoadMethod::LM_Default;

	static FORCEINLINE UEMSPluginSettings* Get()
	{
		UEMSPluginSettings* Settings = GetMutableDefault<UEMSPluginSettings>();
		check(Settings);

		return Settings;
	}
};
