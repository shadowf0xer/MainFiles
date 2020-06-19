// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MarketplaceLinter/Public/MarketplaceNamingConvention.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarketplaceNamingConvention() {}
// Cross Module References
	MARKETPLACELINTER_API UClass* Z_Construct_UClass_UMarketplaceNamingConvention_NoRegister();
	MARKETPLACELINTER_API UClass* Z_Construct_UClass_UMarketplaceNamingConvention();
	LINTER_API UClass* Z_Construct_UClass_ULinterNamingConvention();
	UPackage* Z_Construct_UPackage__Script_MarketplaceLinter();
// End Cross Module References
	void UMarketplaceNamingConvention::StaticRegisterNativesUMarketplaceNamingConvention()
	{
	}
	UClass* Z_Construct_UClass_UMarketplaceNamingConvention_NoRegister()
	{
		return UMarketplaceNamingConvention::StaticClass();
	}
	struct Z_Construct_UClass_UMarketplaceNamingConvention_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMarketplaceNamingConvention_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULinterNamingConvention,
		(UObject* (*)())Z_Construct_UPackage__Script_MarketplaceLinter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarketplaceNamingConvention_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MarketplaceNamingConvention.h" },
		{ "ModuleRelativePath", "Public/MarketplaceNamingConvention.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMarketplaceNamingConvention_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarketplaceNamingConvention>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMarketplaceNamingConvention_Statics::ClassParams = {
		&UMarketplaceNamingConvention::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMarketplaceNamingConvention_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMarketplaceNamingConvention_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMarketplaceNamingConvention()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMarketplaceNamingConvention_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMarketplaceNamingConvention, 2727835879);
	template<> MARKETPLACELINTER_API UClass* StaticClass<UMarketplaceNamingConvention>()
	{
		return UMarketplaceNamingConvention::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMarketplaceNamingConvention(Z_Construct_UClass_UMarketplaceNamingConvention, &UMarketplaceNamingConvention::StaticClass, TEXT("/Script/MarketplaceLinter"), TEXT("UMarketplaceNamingConvention"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMarketplaceNamingConvention);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
