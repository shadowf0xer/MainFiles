// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSPluginSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSPluginSettings() {}
// Cross Module References
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSPluginSettings_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSPluginSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
	EASYMULTISAVE_API UEnum* Z_Construct_UEnum_EasyMultiSave_ELoadMethod();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSProfileSaveGame_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSPersistentSaveGame_NoRegister();
// End Cross Module References
	void UEMSPluginSettings::StaticRegisterNativesUEMSPluginSettings()
	{
	}
	UClass* Z_Construct_UClass_UEMSPluginSettings_NoRegister()
	{
		return UEMSPluginSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEMSPluginSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoadMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LoadMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LoadMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiThreadSaving_MetaData[];
#endif
		static void NewProp_bMultiThreadSaving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreadSaving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistentGameMode_MetaData[];
#endif
		static void NewProp_bPersistentGameMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistentGameMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPersistentPlayer_MetaData[];
#endif
		static void NewProp_bPersistentPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPersistentPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileSaveGameClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProfileSaveGameClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotInfoSaveGameClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SlotInfoSaveGameClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersistentSaveGameClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PersistentSaveGameClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSaveGameName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultSaveGameName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSPluginSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSPluginSettings.h" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_MetaData[] = {
		{ "Category", "Save and Load" },
		{ "Comment", "/**The method that is used to load level-actors.*/" },
		{ "DisplayName", "Level Load Method" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The method that is used to load level-actors." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod = { "LoadMethod", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSPluginSettings, LoadMethod), Z_Construct_UEnum_EasyMultiSave_ELoadMethod, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_MetaData[] = {
		{ "Category", "Save and Load" },
		{ "Comment", "/**If enabled, saving player and level actors is outsourced to a background thread.*/" },
		{ "DisplayName", "Multi-Thread Saving" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "If enabled, saving player and level actors is outsourced to a background thread." },
	};
#endif
	void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_SetBit(void* Obj)
	{
		((UEMSPluginSettings*)Obj)->bMultiThreadSaving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving = { "bMultiThreadSaving", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode_MetaData[] = {
		{ "Category", "Persistence" },
		{ "Comment", "/**The game mode and game state can be loaded independent of the level.*/" },
		{ "DisplayName", "Persistent Game Mode" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The game mode and game state can be loaded independent of the level." },
	};
#endif
	void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode_SetBit(void* Obj)
	{
		((UEMSPluginSettings*)Obj)->bPersistentGameMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode = { "bPersistentGameMode", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer_MetaData[] = {
		{ "Category", "Persistence" },
		{ "Comment", "/**The controller, pawn and player state can be loaded independent of the level without transforms.*/" },
		{ "DisplayName", "Persistent Player" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The controller, pawn and player state can be loaded independent of the level without transforms." },
	};
#endif
	void Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer_SetBit(void* Obj)
	{
		((UEMSPluginSettings*)Obj)->bPersistentPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer = { "bPersistentPlayer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEMSPluginSettings), &Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ProfileSaveGameClass_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/**The Blueprint class that you want to use for the local profile, to access the data you need to cast to it.*/" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The Blueprint class that you want to use for the local profile, to access the data you need to cast to it." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ProfileSaveGameClass = { "ProfileSaveGameClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSPluginSettings, ProfileSaveGameClass), Z_Construct_UClass_UEMSProfileSaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ProfileSaveGameClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ProfileSaveGameClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/**The Blueprint class that you want to use for the slot info, usually does not need a custom class.*/" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The Blueprint class that you want to use for the slot info, usually does not need a custom class." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass = { "SlotInfoSaveGameClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSPluginSettings, SlotInfoSaveGameClass), Z_Construct_UClass_UEMSInfoSaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_PersistentSaveGameClass_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/**The Blueprint class that you want to use for the persistent save, to access the data you need to cast to it.*/" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The Blueprint class that you want to use for the persistent save, to access the data you need to cast to it." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_PersistentSaveGameClass = { "PersistentSaveGameClass", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSPluginSettings, PersistentSaveGameClass), Z_Construct_UClass_UEMSPersistentSaveGame_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_PersistentSaveGameClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_PersistentSaveGameClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/**The default save game slot name, that is used if no name is set with 'Set Current Save Slot Name'.*/" },
		{ "DisplayName", "Default Save Slot Name" },
		{ "ModuleRelativePath", "Public/EMSPluginSettings.h" },
		{ "ToolTip", "The default save game slot name, that is used if no name is set with 'Set Current Save Slot Name'." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName = { "DefaultSaveGameName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSPluginSettings, DefaultSaveGameName), METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSPluginSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_LoadMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bMultiThreadSaving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentGameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_bPersistentPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_ProfileSaveGameClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_SlotInfoSaveGameClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_PersistentSaveGameClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSPluginSettings_Statics::NewProp_DefaultSaveGameName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSPluginSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSPluginSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEMSPluginSettings_Statics::ClassParams = {
		&UEMSPluginSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEMSPluginSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSPluginSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSPluginSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSPluginSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEMSPluginSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEMSPluginSettings, 4271528651);
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSPluginSettings>()
	{
		return UEMSPluginSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEMSPluginSettings(Z_Construct_UClass_UEMSPluginSettings, &UEMSPluginSettings::StaticClass, TEXT("/Script/EasyMultiSave"), TEXT("UEMSPluginSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSPluginSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
