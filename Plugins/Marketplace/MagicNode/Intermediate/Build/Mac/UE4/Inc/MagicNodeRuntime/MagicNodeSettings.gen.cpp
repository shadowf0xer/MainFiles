// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeRuntime/Public/MagicNodeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeSettings() {}
// Cross Module References
	MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMGC_Settings_NoRegister();
	MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMGC_Settings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MagicNodeRuntime();
// End Cross Module References
	void UMGC_Settings::StaticRegisterNativesUMGC_Settings()
	{
	}
	UClass* Z_Construct_UClass_UMGC_Settings_NoRegister()
	{
		return UMGC_Settings::StaticClass();
	}
	struct Z_Construct_UClass_UMGC_Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMGC_Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMGC_Settings_Statics::Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n/// MGC Global Settings\n" },
		{ "IncludePath", "MagicNodeSettings.h" },
		{ "ModuleRelativePath", "Public/MagicNodeSettings.h" },
		{ "ToolTip", "MGC Global Settings" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMGC_Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGC_Settings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMGC_Settings_Statics::ClassParams = {
		&UMGC_Settings::StaticClass,
		"MagicNode",
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
		METADATA_PARAMS(Z_Construct_UClass_UMGC_Settings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMGC_Settings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMGC_Settings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMGC_Settings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMGC_Settings, 1417050044);
	template<> MAGICNODERUNTIME_API UClass* StaticClass<UMGC_Settings>()
	{
		return UMGC_Settings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMGC_Settings(Z_Construct_UClass_UMGC_Settings, &UMGC_Settings::StaticClass, TEXT("/Script/MagicNodeRuntime"), TEXT("UMGC_Settings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMGC_Settings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
