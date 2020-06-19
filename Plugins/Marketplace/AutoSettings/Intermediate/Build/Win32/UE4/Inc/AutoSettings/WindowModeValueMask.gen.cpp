// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/WindowModeValueMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowModeValueMask() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UWindowModeValueMask_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UWindowModeValueMask();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingValueMask();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
	void UWindowModeValueMask::StaticRegisterNativesUWindowModeValueMask()
	{
	}
	UClass* Z_Construct_UClass_UWindowModeValueMask_NoRegister()
	{
		return UWindowModeValueMask::StaticClass();
	}
	struct Z_Construct_UClass_UWindowModeValueMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWindowModeValueMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USettingValueMask,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWindowModeValueMask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SettingValueMask for splitting and recombining the r.SetRes CVar into Window Mode\n */" },
		{ "IncludePath", "Misc/WindowModeValueMask.h" },
		{ "ModuleRelativePath", "Public/Misc/WindowModeValueMask.h" },
		{ "ToolTip", "SettingValueMask for splitting and recombining the r.SetRes CVar into Window Mode" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWindowModeValueMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowModeValueMask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWindowModeValueMask_Statics::ClassParams = {
		&UWindowModeValueMask::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWindowModeValueMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWindowModeValueMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWindowModeValueMask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWindowModeValueMask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWindowModeValueMask, 3701859484);
	template<> AUTOSETTINGS_API UClass* StaticClass<UWindowModeValueMask>()
	{
		return UWindowModeValueMask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWindowModeValueMask(Z_Construct_UClass_UWindowModeValueMask, &UWindowModeValueMask::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UWindowModeValueMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowModeValueMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
