// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaFogOfWar/Public/VaFogSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaFogSettings() {}
// Cross Module References
	VAFOGOFWAR_API UClass* Z_Construct_UClass_UVaFogSettings_NoRegister();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_UVaFogSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VaFogOfWar();
// End Cross Module References
	void UVaFogSettings::StaticRegisterNativesUVaFogSettings()
	{
	}
	UClass* Z_Construct_UClass_UVaFogSettings_NoRegister()
	{
		return UVaFogSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVaFogSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogLayerResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FogLayerResolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVaFogSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VaFogOfWar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaFogSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VaFogSettings.h" },
		{ "ModuleRelativePath", "Public/VaFogSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVaFogSettings_Statics::NewProp_FogLayerResolution_MetaData[] = {
		{ "Category", "VA Fog of War Settings" },
		{ "Comment", "/** Must be power of two */" },
		{ "ModuleRelativePath", "Public/VaFogSettings.h" },
		{ "ToolTip", "Must be power of two" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVaFogSettings_Statics::NewProp_FogLayerResolution = { "FogLayerResolution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVaFogSettings, FogLayerResolution), METADATA_PARAMS(Z_Construct_UClass_UVaFogSettings_Statics::NewProp_FogLayerResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogSettings_Statics::NewProp_FogLayerResolution_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVaFogSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVaFogSettings_Statics::NewProp_FogLayerResolution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVaFogSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVaFogSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVaFogSettings_Statics::ClassParams = {
		&UVaFogSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVaFogSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogSettings_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UVaFogSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVaFogSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVaFogSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVaFogSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaFogSettings, 1540507886);
	template<> VAFOGOFWAR_API UClass* StaticClass<UVaFogSettings>()
	{
		return UVaFogSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaFogSettings(Z_Construct_UClass_UVaFogSettings, &UVaFogSettings::StaticClass, TEXT("/Script/VaFogOfWar"), TEXT("UVaFogSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaFogSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
