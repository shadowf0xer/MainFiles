// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Private/Misc/AutoSettingsValidationSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingsValidationSubsystem() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingsValidationSubsystem_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingsValidationSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
	void UAutoSettingsValidationSubsystem::StaticRegisterNativesUAutoSettingsValidationSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UAutoSettingsValidationSubsystem_NoRegister()
	{
		return UAutoSettingsValidationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSettingsValidationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSettingsValidationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingsValidationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Misc/AutoSettingsValidationSubsystem.h" },
		{ "ModuleRelativePath", "Private/Misc/AutoSettingsValidationSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSettingsValidationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingsValidationSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingsValidationSubsystem_Statics::ClassParams = {
		&UAutoSettingsValidationSubsystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSettingsValidationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingsValidationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSettingsValidationSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSettingsValidationSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSettingsValidationSubsystem, 106639428);
	template<> AUTOSETTINGS_API UClass* StaticClass<UAutoSettingsValidationSubsystem>()
	{
		return UAutoSettingsValidationSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSettingsValidationSubsystem(Z_Construct_UClass_UAutoSettingsValidationSubsystem, &UAutoSettingsValidationSubsystem::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UAutoSettingsValidationSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingsValidationSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
