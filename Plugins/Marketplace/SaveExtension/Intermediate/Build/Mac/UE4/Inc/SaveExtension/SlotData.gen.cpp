// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/SlotData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotData() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotData_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotData();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
// End Cross Module References
	void USlotData::StaticRegisterNativesUSlotData()
	{
	}
	UClass* Z_Construct_UClass_USlotData_NoRegister()
	{
		return USlotData::StaticClass();
	}
	struct Z_Construct_UClass_USlotData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Map;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotData_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "SaveExtension" },
		{ "Comment", "/**\n * USaveData stores all information that can be accessible only while the game is loaded.\n * Works like a common SaveGame object\n * E.g: Items, Quests, Enemies, World Actors, AI, Physics\n */" },
		{ "HideCategories", "Activation Actor Tick Actor Input Rendering Replication Socket Thumbnail" },
		{ "IncludePath", "SlotData.h" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "USaveData stores all information that can be accessible only while the game is loaded.\nWorks like a common SaveGame object\nE.g: Items, Quests, Enemies, World Actors, AI, Physics" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotData_Statics::NewProp_TimeSeconds_MetaData[] = {
		{ "Category", "SaveData" },
		{ "Comment", "/** Game world time since game started in seconds */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Game world time since game started in seconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlotData_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotData, TimeSeconds), METADATA_PARAMS(Z_Construct_UClass_USlotData_Statics::NewProp_TimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotData_Statics::NewProp_TimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotData_Statics::NewProp_Map_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SaveData" },
		{ "Comment", "/** Full Name of the Map where this SlotData was saved */" },
		{ "ModuleRelativePath", "Public/SlotData.h" },
		{ "ToolTip", "Full Name of the Map where this SlotData was saved" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USlotData_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotData, Map), METADATA_PARAMS(Z_Construct_UClass_USlotData_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotData_Statics::NewProp_Map_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotData_Statics::NewProp_TimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotData_Statics::NewProp_Map,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotData_Statics::ClassParams = {
		&USlotData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotData, 2459096375);
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotData>()
	{
		return USlotData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotData(Z_Construct_UClass_USlotData, &USlotData::StaticClass, TEXT("/Script/SaveExtension"), TEXT("USlotData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotData);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USlotData)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
