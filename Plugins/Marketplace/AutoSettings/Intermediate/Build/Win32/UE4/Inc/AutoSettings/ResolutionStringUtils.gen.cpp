// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Utility/ResolutionStringUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResolutionStringUtils() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionStringUtils_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionStringUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
	void UResolutionStringUtils::StaticRegisterNativesUResolutionStringUtils()
	{
	}
	UClass* Z_Construct_UClass_UResolutionStringUtils_NoRegister()
	{
		return UResolutionStringUtils::StaticClass();
	}
	struct Z_Construct_UClass_UResolutionStringUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResolutionStringUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResolutionStringUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Helpers for dealing with strings combining resolution with window mode, for example \"1920x1080wf\"\n */" },
		{ "IncludePath", "Utility/ResolutionStringUtils.h" },
		{ "ModuleRelativePath", "Public/Utility/ResolutionStringUtils.h" },
		{ "ToolTip", "Helpers for dealing with strings combining resolution with window mode, for example \"1920x1080wf\"" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResolutionStringUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResolutionStringUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResolutionStringUtils_Statics::ClassParams = {
		&UResolutionStringUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UResolutionStringUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResolutionStringUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResolutionStringUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResolutionStringUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResolutionStringUtils, 3097982371);
	template<> AUTOSETTINGS_API UClass* StaticClass<UResolutionStringUtils>()
	{
		return UResolutionStringUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResolutionStringUtils(Z_Construct_UClass_UResolutionStringUtils, &UResolutionStringUtils::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UResolutionStringUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResolutionStringUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
