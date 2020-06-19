// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamemakinLinter/Public/GamemakinNamingConvention.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamemakinNamingConvention() {}
// Cross Module References
	GAMEMAKINLINTER_API UClass* Z_Construct_UClass_UGamemakinNamingConvention_NoRegister();
	GAMEMAKINLINTER_API UClass* Z_Construct_UClass_UGamemakinNamingConvention();
	LINTER_API UClass* Z_Construct_UClass_ULinterNamingConvention();
	UPackage* Z_Construct_UPackage__Script_GamemakinLinter();
// End Cross Module References
	void UGamemakinNamingConvention::StaticRegisterNativesUGamemakinNamingConvention()
	{
	}
	UClass* Z_Construct_UClass_UGamemakinNamingConvention_NoRegister()
	{
		return UGamemakinNamingConvention::StaticClass();
	}
	struct Z_Construct_UClass_UGamemakinNamingConvention_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGamemakinNamingConvention_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULinterNamingConvention,
		(UObject* (*)())Z_Construct_UPackage__Script_GamemakinLinter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamemakinNamingConvention_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GamemakinNamingConvention.h" },
		{ "ModuleRelativePath", "Public/GamemakinNamingConvention.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGamemakinNamingConvention_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamemakinNamingConvention>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGamemakinNamingConvention_Statics::ClassParams = {
		&UGamemakinNamingConvention::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGamemakinNamingConvention_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGamemakinNamingConvention_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGamemakinNamingConvention()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGamemakinNamingConvention_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGamemakinNamingConvention, 1643521319);
	template<> GAMEMAKINLINTER_API UClass* StaticClass<UGamemakinNamingConvention>()
	{
		return UGamemakinNamingConvention::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGamemakinNamingConvention(Z_Construct_UClass_UGamemakinNamingConvention, &UGamemakinNamingConvention::StaticClass, TEXT("/Script/GamemakinLinter"), TEXT("UGamemakinNamingConvention"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGamemakinNamingConvention);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
