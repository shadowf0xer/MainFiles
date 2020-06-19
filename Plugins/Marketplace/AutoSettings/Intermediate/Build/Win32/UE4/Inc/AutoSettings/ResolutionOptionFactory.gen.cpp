// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Misc/ResolutionOptionFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResolutionOptionFactory() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionOptionFactory_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UResolutionOptionFactory();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingOptionFactory();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
	void UResolutionOptionFactory::StaticRegisterNativesUResolutionOptionFactory()
	{
	}
	UClass* Z_Construct_UClass_UResolutionOptionFactory_NoRegister()
	{
		return UResolutionOptionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UResolutionOptionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResolutionOptionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USettingOptionFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResolutionOptionFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory class for constructing a set of options for supported fullscreen resolutions\n */" },
		{ "IncludePath", "Misc/ResolutionOptionFactory.h" },
		{ "ModuleRelativePath", "Public/Misc/ResolutionOptionFactory.h" },
		{ "ToolTip", "Factory class for constructing a set of options for supported fullscreen resolutions" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResolutionOptionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResolutionOptionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResolutionOptionFactory_Statics::ClassParams = {
		&UResolutionOptionFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UResolutionOptionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResolutionOptionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResolutionOptionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResolutionOptionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResolutionOptionFactory, 3499254607);
	template<> AUTOSETTINGS_API UClass* StaticClass<UResolutionOptionFactory>()
	{
		return UResolutionOptionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResolutionOptionFactory(Z_Construct_UClass_UResolutionOptionFactory, &UResolutionOptionFactory::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UResolutionOptionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResolutionOptionFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
