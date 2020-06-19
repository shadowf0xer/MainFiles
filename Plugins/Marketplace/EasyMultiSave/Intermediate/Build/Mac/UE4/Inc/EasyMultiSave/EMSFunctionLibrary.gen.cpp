// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSFunctionLibrary() {}
// Cross Module References
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSFunctionLibrary_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSProfileSaveGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSPersistentSaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEMSFunctionLibrary::execExportSaveThumbnail)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSFunctionLibrary::ExportSaveThumbnail(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_SaveGameName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execImportSaveThumbnail)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UEMSFunctionLibrary::ImportSaveThumbnail(Z_Param_WorldContextObject,Z_Param_SaveGameName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execDeleteAllSaveDataForSlot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSFunctionLibrary::DeleteAllSaveDataForSlot(Z_Param_WorldContextObject,Z_Param_SaveGameName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execSaveLocalProfile)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEMSFunctionLibrary::SaveLocalProfile(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execGetLocalProfileSaveGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEMSProfileSaveGame**)Z_Param__Result=UEMSFunctionLibrary::GetLocalProfileSaveGame(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execSavePersistentObject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEMSFunctionLibrary::SavePersistentObject(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execGetPersistentSave)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEMSPersistentSaveGame**)Z_Param__Result=UEMSFunctionLibrary::GetPersistentSave(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execGetSortedSaveSlots)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UEMSFunctionLibrary::GetSortedSaveSlots(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execGetNamedSlotInfo)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEMSInfoSaveGame**)Z_Param__Result=UEMSFunctionLibrary::GetNamedSlotInfo(Z_Param_WorldContextObject,Z_Param_SaveGameName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execGetSlotInfoSaveGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_SaveGameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEMSInfoSaveGame**)Z_Param__Result=UEMSFunctionLibrary::GetSlotInfoSaveGame(Z_Param_WorldContextObject,Z_Param_Out_SaveGameName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEMSFunctionLibrary::execSetCurrentSaveGameName)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveGameName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEMSFunctionLibrary::SetCurrentSaveGameName(Z_Param_WorldContextObject,Z_Param_SaveGameName);
		P_NATIVE_END;
	}
	void UEMSFunctionLibrary::StaticRegisterNativesUEMSFunctionLibrary()
	{
		UClass* Class = UEMSFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeleteAllSaveDataForSlot", &UEMSFunctionLibrary::execDeleteAllSaveDataForSlot },
			{ "ExportSaveThumbnail", &UEMSFunctionLibrary::execExportSaveThumbnail },
			{ "GetLocalProfileSaveGame", &UEMSFunctionLibrary::execGetLocalProfileSaveGame },
			{ "GetNamedSlotInfo", &UEMSFunctionLibrary::execGetNamedSlotInfo },
			{ "GetPersistentSave", &UEMSFunctionLibrary::execGetPersistentSave },
			{ "GetSlotInfoSaveGame", &UEMSFunctionLibrary::execGetSlotInfoSaveGame },
			{ "GetSortedSaveSlots", &UEMSFunctionLibrary::execGetSortedSaveSlots },
			{ "ImportSaveThumbnail", &UEMSFunctionLibrary::execImportSaveThumbnail },
			{ "SaveLocalProfile", &UEMSFunctionLibrary::execSaveLocalProfile },
			{ "SavePersistentObject", &UEMSFunctionLibrary::execSavePersistentObject },
			{ "SetCurrentSaveGameName", &UEMSFunctionLibrary::execSetCurrentSaveGameName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics
	{
		struct EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_SaveGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Filesystem" },
		{ "Comment", "/**\n\x09* Deletes all data and directories for a save game.\n\x09*\n\x09* @param SaveGameName - The name of the save game to delete.\n\x09*/" },
		{ "DisplayName", "Delete Save Slot" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Deletes all data and directories for a save game.\n\n@param SaveGameName - The name of the save game to delete." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "DeleteAllSaveDataForSlot", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventDeleteAllSaveDataForSlot_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics
	{
		struct EMSFunctionLibrary_eventExportSaveThumbnail_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			FString SaveGameName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventExportSaveThumbnail_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventExportSaveThumbnail_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventExportSaveThumbnail_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_SaveGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_TextureRenderTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Thumbnail" },
		{ "Comment", "/**\n\x09* Saves a thumbnail from a render target texture as .png to the save game folder.\n\x09*\n\x09* @param TextureRenderTarget - The texture target from the scene capture 2d source.\n\x09* @param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Saves a thumbnail from a render target texture as .png to the save game folder.\n\n@param TextureRenderTarget - The texture target from the scene capture 2d source.\n@param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ExportSaveThumbnail", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventExportSaveThumbnail_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics
	{
		struct EMSFunctionLibrary_eventGetLocalProfileSaveGame_Parms
		{
			UObject* WorldContextObject;
			UEMSProfileSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetLocalProfileSaveGame_Parms, ReturnValue), Z_Construct_UClass_UEMSProfileSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetLocalProfileSaveGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Profile" },
		{ "Comment", "/**\n\x09* Loads the profile save file.\n\x09* With this, you can easily cast to your own profile file.\n\x09*\n\x09* @return - The local profile save file.\n\x09*/" },
		{ "DisplayName", "Get Local Profile" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Loads the profile save file.\nWith this, you can easily cast to your own profile file.\n\n@return - The local profile save file." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetLocalProfileSaveGame", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventGetLocalProfileSaveGame_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics
	{
		struct EMSFunctionLibrary_eventGetNamedSlotInfo_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
			UEMSInfoSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetNamedSlotInfo_Parms, ReturnValue), Z_Construct_UClass_UEMSInfoSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetNamedSlotInfo_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetNamedSlotInfo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_SaveGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Get a save game slot by name.\n\n\x09* @param SaveGameName - The slot name you want to get the info from.\n\x09* @return - The desired slot info. Will return the current slot if SaveGameName is empty.\n\x09*/" },
		{ "DisplayName", "Get Named Save Slot" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Get a save game slot by name.\n\n@param SaveGameName - The slot name you want to get the info from.\n@return - The desired slot info. Will return the current slot if SaveGameName is empty." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetNamedSlotInfo", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventGetNamedSlotInfo_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics
	{
		struct EMSFunctionLibrary_eventGetPersistentSave_Parms
		{
			UObject* WorldContextObject;
			UEMSPersistentSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetPersistentSave_Parms, ReturnValue), Z_Construct_UClass_UEMSPersistentSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetPersistentSave_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Persistent" },
		{ "Comment", "/**\n\x09* Loads the persistent save file.\n\x09* With this, you can easily cast to your own persistent file.\n\x09*\n\x09* @return - The persistent save file.\n\x09*/" },
		{ "DisplayName", "Get Persistent Object" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Loads the persistent save file.\nWith this, you can easily cast to your own persistent file.\n\n@return - The persistent save file." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetPersistentSave", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventGetPersistentSave_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics
	{
		struct EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
			UEMSInfoSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms, ReturnValue), Z_Construct_UClass_UEMSInfoSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms, SaveGameName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_SaveGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Get the current save game slot defined by 'Set Current Save Slot'.\n\n\x09* @param SaveGameName - Convenient reference, so you don't nee to use the SlotInfo struct.\n\x09* @return - The current slot info and save game name.\n\x09*/" },
		{ "DisplayName", "Get Current Save Slot" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Get the current save game slot defined by 'Set Current Save Slot'.\n\n@param SaveGameName - Convenient reference, so you don't nee to use the SlotInfo struct.\n@return - The current slot info and save game name." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetSlotInfoSaveGame", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventGetSlotInfoSaveGame_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics
	{
		struct EMSFunctionLibrary_eventGetSortedSaveSlots_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSortedSaveSlots_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventGetSortedSaveSlots_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Loads the array of available save games / slots, sorted by their time of saving.\n\x09*\n\x09* @return - The array of available save game slots.\n\x09*/" },
		{ "DisplayName", "Get All Save Slots" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Loads the array of available save games / slots, sorted by their time of saving.\n\n@return - The array of available save game slots." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "GetSortedSaveSlots", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventGetSortedSaveSlots_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics
	{
		struct EMSFunctionLibrary_eventImportSaveThumbnail_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventImportSaveThumbnail_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventImportSaveThumbnail_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventImportSaveThumbnail_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_SaveGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Thumbnail" },
		{ "Comment", "/**\n\x09* Imports a thumbnail as .png from the save game folder.\n\x09*\n\x09* @param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.\n\x09* @return - The loaded thumbnail as Texture2D.\n\x09*/" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Imports a thumbnail as .png from the save game folder.\n\n@param SaveGameName - The name of the Savegame/Slot that is tied to the thumbnail.\n@return - The loaded thumbnail as Texture2D." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "ImportSaveThumbnail", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventImportSaveThumbnail_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics
	{
		struct EMSFunctionLibrary_eventSaveLocalProfile_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EMSFunctionLibrary_eventSaveLocalProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventSaveLocalProfile_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSaveLocalProfile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Profile" },
		{ "Comment", "/**\n\x09* Saves the local profile.\n\x09*\n\x09* @return - If the profile was saved.\n\x09*/" },
		{ "DisplayName", "Save Local Profile" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Saves the local profile.\n\n@return - If the profile was saved." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SaveLocalProfile", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventSaveLocalProfile_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics
	{
		struct EMSFunctionLibrary_eventSavePersistentObject_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EMSFunctionLibrary_eventSavePersistentObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EMSFunctionLibrary_eventSavePersistentObject_Parms), &Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSavePersistentObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Persistent" },
		{ "Comment", "/**\n\x09* Saves the persistent save object\n\x09*\n\x09* @return - If the persistent object was saved.\n\x09*/" },
		{ "DisplayName", "Save Persistent Object" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Saves the persistent save object\n\n@return - If the persistent object was saved." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SavePersistentObject", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventSavePersistentObject_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics
	{
		struct EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms
		{
			UObject* WorldContextObject;
			FString SaveGameName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveGameName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName = { "SaveGameName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms, SaveGameName), METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_SaveGameName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Easy Multi Save | Slots" },
		{ "Comment", "/**\n\x09* Define a global save game name. If empty, it will use the default name from the Plugin Settings.\n\x09*\n\x09* @param SaveGameName - The name.\n\x09*/" },
		{ "DisplayName", "Set Current Save Slot" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
		{ "ToolTip", "Define a global save game name. If empty, it will use the default name from the Plugin Settings.\n\n@param SaveGameName - The name." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEMSFunctionLibrary, nullptr, "SetCurrentSaveGameName", nullptr, nullptr, sizeof(EMSFunctionLibrary_eventSetCurrentSaveGameName_Parms), Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEMSFunctionLibrary_NoRegister()
	{
		return UEMSFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEMSFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEMSFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_DeleteAllSaveDataForSlot, "DeleteAllSaveDataForSlot" }, // 580619370
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ExportSaveThumbnail, "ExportSaveThumbnail" }, // 1063834726
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetLocalProfileSaveGame, "GetLocalProfileSaveGame" }, // 1183884788
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetNamedSlotInfo, "GetNamedSlotInfo" }, // 1048451154
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetPersistentSave, "GetPersistentSave" }, // 424246323
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetSlotInfoSaveGame, "GetSlotInfoSaveGame" }, // 3097319169
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_GetSortedSaveSlots, "GetSortedSaveSlots" }, // 2260105910
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_ImportSaveThumbnail, "ImportSaveThumbnail" }, // 367657648
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SaveLocalProfile, "SaveLocalProfile" }, // 2143327677
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SavePersistentObject, "SavePersistentObject" }, // 1388832804
		{ &Z_Construct_UFunction_UEMSFunctionLibrary_SetCurrentSaveGameName, "SetCurrentSaveGameName" }, // 3723868621
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/EMSFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEMSFunctionLibrary_Statics::ClassParams = {
		&UEMSFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEMSFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEMSFunctionLibrary, 3734853029);
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSFunctionLibrary>()
	{
		return UEMSFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEMSFunctionLibrary(Z_Construct_UClass_UEMSFunctionLibrary, &UEMSFunctionLibrary::StaticClass, TEXT("/Script/EasyMultiSave"), TEXT("UEMSFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
