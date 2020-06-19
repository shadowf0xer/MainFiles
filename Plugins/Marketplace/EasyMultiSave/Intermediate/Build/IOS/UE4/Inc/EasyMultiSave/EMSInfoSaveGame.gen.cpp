// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSInfoSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSInfoSaveGame() {}
// Cross Module References
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSInfoSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
	EASYMULTISAVE_API UScriptStruct* Z_Construct_UScriptStruct_FSaveSlotInfo();
// End Cross Module References
	void UEMSInfoSaveGame::StaticRegisterNativesUEMSInfoSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UEMSInfoSaveGame_NoRegister()
	{
		return UEMSInfoSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UEMSInfoSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlotInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSInfoSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSInfoSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSInfoSaveGame.h" },
		{ "ModuleRelativePath", "Public/EMSInfoSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo_MetaData[] = {
		{ "Category", "Slots" },
		{ "ModuleRelativePath", "Public/EMSInfoSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo = { "SlotInfo", nullptr, (EPropertyFlags)0x0010000001000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEMSInfoSaveGame, SlotInfo), Z_Construct_UScriptStruct_FSaveSlotInfo, METADATA_PARAMS(Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEMSInfoSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEMSInfoSaveGame_Statics::NewProp_SlotInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSInfoSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSInfoSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEMSInfoSaveGame_Statics::ClassParams = {
		&UEMSInfoSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEMSInfoSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEMSInfoSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSInfoSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSInfoSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSInfoSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEMSInfoSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEMSInfoSaveGame, 4221725714);
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSInfoSaveGame>()
	{
		return UEMSInfoSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEMSInfoSaveGame(Z_Construct_UClass_UEMSInfoSaveGame, &UEMSInfoSaveGame::StaticClass, TEXT("/Script/EasyMultiSave"), TEXT("UEMSInfoSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSInfoSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
