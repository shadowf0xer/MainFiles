//Easy Multi Save - Copyright (C) 2020 by Michael Hegemann.  

#pragma once

#include "CoreMinimal.h"
#include "EMSObject.h"
#include "EMSFunctionLibrary.generated.h"

UCLASS()
class EASYMULTISAVE_API UEMSFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	* Define a global save game name. If empty, it will use the default name from the Plugin Settings.
	*
	* @param SaveGameName - The name.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Set Current Save Slot"))
	static void SetCurrentSaveGameName(UObject* WorldContextObject, const FString& SaveGameName);

	/**
	* Get the current save game slot defined by 'Set Current Save Slot'.

	* @param SaveGameName - Convenient reference, so you don't nee to use the SlotInfo struct.
	* @return - The current slot info and save game name.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Current Save Slot"))
	static UEMSInfoSaveGame* GetSlotInfoSaveGame(UObject* WorldContextObject, FString& SaveGameName);

	/**
	* Get a save game slot by name.

	* @param SaveGameName - The slot name you want to get the info from.
	* @return - The desired slot info. Will return the current slot if SaveGameName is empty.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Named Save Slot"))
	static UEMSInfoSaveGame* GetNamedSlotInfo(UObject* WorldContextObject, const FString& SaveGameName);

	/**
	* Loads the array of available save games / slots, sorted by their time of saving.
	*
	* @return - The array of available save game slots.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Slots", meta = (WorldContext = "WorldContextObject", DisplayName = "Get All Save Slots"))
	static TArray<FString> GetSortedSaveSlots(UObject* WorldContextObject);

	/**
	* Loads the persistent save file.
	* With this, you can easily cast to your own persistent file.
	*
	* @return - The persistent save file.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Persistent", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Persistent Object"))
	static UEMSPersistentSaveGame* GetPersistentSave(UObject* WorldContextObject);

	/**
	* Saves the persistent save object
	*
	* @return - If the persistent object was saved.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Persistent", meta = (WorldContext = "WorldContextObject", DisplayName = "Save Persistent Object"))
	static bool SavePersistentObject(UObject* WorldContextObject);

	/**
	* Loads the profile save file.
	* With this, you can easily cast to your own profile file.
	*
	* @return - The local profile save file.
	*/
	UFUNCTION(BlueprintPure, Category = "Easy Multi Save | Profile", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Local Profile"))
	static UEMSProfileSaveGame* GetLocalProfileSaveGame(UObject* WorldContextObject);

	/**
	* Saves the local profile.
	*
	* @return - If the profile was saved.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Profile", meta = (WorldContext = "WorldContextObject", DisplayName = "Save Local Profile"))
	static bool SaveLocalProfile(UObject* WorldContextObject);

	/**
	* Deletes all data and directories for a save game.
	*
	* @param SaveGameName - The name of the save game to delete.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Filesystem", meta = (WorldContext = "WorldContextObject", DisplayName = "Delete Save Slot"))
	static void DeleteAllSaveDataForSlot(UObject* WorldContextObject, const FString& SaveGameName);

	/**
	* Imports a thumbnail as .png from the save game folder.
	*
	* @param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.
	* @return - The loaded thumbnail as Texture2D.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Thumbnail", meta = (WorldContext = "WorldContextObject"))
	static UTexture2D* ImportSaveThumbnail(UObject* WorldContextObject, const FString& SaveGameName);

	/**
	* Saves a thumbnail from a render target texture as .png to the save game folder.
	*
	* @param TextureRenderTarget - The texture target from the scene capture 2d source.
	* @param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.
	*/
	UFUNCTION(BlueprintCallable, Category = "Easy Multi Save | Thumbnail", meta = (WorldContext = "WorldContextObject"))
	static void ExportSaveThumbnail(UObject* WorldContextObject, UTextureRenderTarget2D* TextureRenderTarget, const FString& SaveGameName);
};


