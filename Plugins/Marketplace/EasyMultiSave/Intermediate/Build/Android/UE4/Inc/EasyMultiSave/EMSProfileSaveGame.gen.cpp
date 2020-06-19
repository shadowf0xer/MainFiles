// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EasyMultiSave/Public/EMSProfileSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMSProfileSaveGame() {}
// Cross Module References
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSProfileSaveGame_NoRegister();
	EASYMULTISAVE_API UClass* Z_Construct_UClass_UEMSProfileSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_EasyMultiSave();
// End Cross Module References
	void UEMSProfileSaveGame::StaticRegisterNativesUEMSProfileSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UEMSProfileSaveGame_NoRegister()
	{
		return UEMSProfileSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UEMSProfileSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEMSProfileSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_EasyMultiSave,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEMSProfileSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EMSProfileSaveGame.h" },
		{ "ModuleRelativePath", "Public/EMSProfileSaveGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEMSProfileSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEMSProfileSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEMSProfileSaveGame_Statics::ClassParams = {
		&UEMSProfileSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEMSProfileSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEMSProfileSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEMSProfileSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEMSProfileSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEMSProfileSaveGame, 1790605667);
	template<> EASYMULTISAVE_API UClass* StaticClass<UEMSProfileSaveGame>()
	{
		return UEMSProfileSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEMSProfileSaveGame(Z_Construct_UClass_UEMSProfileSaveGame, &UEMSProfileSaveGame::StaticClass, TEXT("/Script/EasyMultiSave"), TEXT("UEMSProfileSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEMSProfileSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
