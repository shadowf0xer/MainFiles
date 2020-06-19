// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/ResolutionValueMask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResolutionValueMask() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionValueMask_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionValueMask();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingValueMask();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
	void UResolutionValueMask::StaticRegisterNativesUResolutionValueMask()
	{
	}
	UClass* Z_Construct_UClass_UResolutionValueMask_NoRegister()
	{
		return UResolutionValueMask::StaticClass();
	}
	struct Z_Construct_UClass_UResolutionValueMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResolutionValueMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USettingValueMask,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResolutionValueMask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SettingValueMask for splitting and recombining the r.SetRes CVar into Resolution\n */" },
		{ "IncludePath", "Misc/ResolutionValueMask.h" },
		{ "ModuleRelativePath", "Public/Misc/ResolutionValueMask.h" },
		{ "ToolTip", "SettingValueMask for splitting and recombining the r.SetRes CVar into Resolution" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResolutionValueMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResolutionValueMask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResolutionValueMask_Statics::ClassParams = {
		&UResolutionValueMask::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UResolutionValueMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResolutionValueMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResolutionValueMask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResolutionValueMask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResolutionValueMask, 2026787792);
	template<> AUTOSETTINGS_API UClass* StaticClass<UResolutionValueMask>()
	{
		return UResolutionValueMask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResolutionValueMask(Z_Construct_UClass_UResolutionValueMask, &UResolutionValueMask::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UResolutionValueMask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResolutionValueMask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
