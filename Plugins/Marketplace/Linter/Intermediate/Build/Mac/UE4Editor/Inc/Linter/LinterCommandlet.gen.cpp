// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Linter/Public/LinterCommandlet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLinterCommandlet() {}
// Cross Module References
	LINTER_API UClass* Z_Construct_UClass_ULinterCommandlet_NoRegister();
	LINTER_API UClass* Z_Construct_UClass_ULinterCommandlet();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_Linter();
// End Cross Module References
	void ULinterCommandlet::StaticRegisterNativesULinterCommandlet()
	{
	}
	UClass* Z_Construct_UClass_ULinterCommandlet_NoRegister()
	{
		return ULinterCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_ULinterCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULinterCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_Linter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULinterCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LinterCommandlet.h" },
		{ "ModuleRelativePath", "Public/LinterCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULinterCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULinterCommandlet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULinterCommandlet_Statics::ClassParams = {
		&ULinterCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULinterCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULinterCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULinterCommandlet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULinterCommandlet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULinterCommandlet, 2601514971);
	template<> LINTER_API UClass* StaticClass<ULinterCommandlet>()
	{
		return ULinterCommandlet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULinterCommandlet(Z_Construct_UClass_ULinterCommandlet, &ULinterCommandlet::StaticClass, TEXT("/Script/Linter"), TEXT("ULinterCommandlet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULinterCommandlet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
