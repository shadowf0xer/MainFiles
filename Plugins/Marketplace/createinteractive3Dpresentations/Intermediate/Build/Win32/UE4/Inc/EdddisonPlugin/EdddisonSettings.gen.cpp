// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdddisonPlugin/Private/EdddisonSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdddisonSettings() {}
// Cross Module References
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_UEdddisonSettings_NoRegister();
	EDDDISONPLUGIN_API UClass* Z_Construct_UClass_UEdddisonSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EdddisonPlugin();
// End Cross Module References
	void UEdddisonSettings::StaticRegisterNativesUEdddisonSettings()
	{
	}
	UClass* Z_Construct_UClass_UEdddisonSettings_NoRegister()
	{
		return UEdddisonSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEdddisonSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableViewportRealtime_MetaData[];
#endif
		static void NewProp_bEnableViewportRealtime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableViewportRealtime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutostartWithGame_MetaData[];
#endif
		static void NewProp_bAutostartWithGame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutostartWithGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutostartWithEditor_MetaData[];
#endif
		static void NewProp_bAutostartWithEditor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutostartWithEditor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdddisonSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EdddisonPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/************************************************************************/" },
		{ "IncludePath", "EdddisonSettings.h" },
		{ "ModuleRelativePath", "Private/EdddisonSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bEnableViewportRealtime_MetaData[] = {
		{ "Category", "EdddisonPlugin" },
		{ "ModuleRelativePath", "Private/EdddisonSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bEnableViewportRealtime_SetBit(void* Obj)
	{
		((UEdddisonSettings*)Obj)->bEnableViewportRealtime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bEnableViewportRealtime = { "bEnableViewportRealtime", nullptr, (EPropertyFlags)0x0010000000004014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEdddisonSettings), &Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bEnableViewportRealtime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bEnableViewportRealtime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bEnableViewportRealtime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithGame_MetaData[] = {
		{ "Category", "EdddisonPlugin" },
		{ "ModuleRelativePath", "Private/EdddisonSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithGame_SetBit(void* Obj)
	{
		((UEdddisonSettings*)Obj)->bAutostartWithGame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithGame = { "bAutostartWithGame", nullptr, (EPropertyFlags)0x0010000000004014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEdddisonSettings), &Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithEditor_MetaData[] = {
		{ "Category", "EdddisonPlugin" },
		{ "ModuleRelativePath", "Private/EdddisonSettings.h" },
	};
#endif
	void Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithEditor_SetBit(void* Obj)
	{
		((UEdddisonSettings*)Obj)->bAutostartWithEditor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithEditor = { "bAutostartWithEditor", nullptr, (EPropertyFlags)0x0010000000004014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEdddisonSettings), &Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithEditor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdddisonSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bEnableViewportRealtime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdddisonSettings_Statics::NewProp_bAutostartWithEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdddisonSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdddisonSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdddisonSettings_Statics::ClassParams = {
		&UEdddisonSettings::StaticClass,
		"Plugins/EdddisonPlugin/Config/EdddisonPluginSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdddisonSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UEdddisonSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdddisonSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdddisonSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdddisonSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdddisonSettings, 2140827956);
	template<> EDDDISONPLUGIN_API UClass* StaticClass<UEdddisonSettings>()
	{
		return UEdddisonSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdddisonSettings(Z_Construct_UClass_UEdddisonSettings, &UEdddisonSettings::StaticClass, TEXT("/Script/EdddisonPlugin"), TEXT("UEdddisonSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdddisonSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
