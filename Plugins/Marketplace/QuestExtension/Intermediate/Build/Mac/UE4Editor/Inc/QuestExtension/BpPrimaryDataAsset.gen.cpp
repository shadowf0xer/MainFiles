// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Miscellaneous/BpPrimaryDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBpPrimaryDataAsset() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UBpPrimaryDataAsset_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UBpPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
// End Cross Module References
	void UBpPrimaryDataAsset::StaticRegisterNativesUBpPrimaryDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UBpPrimaryDataAsset_NoRegister()
	{
		return UBpPrimaryDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UBpPrimaryDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBpPrimaryDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBpPrimaryDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * PrimaryAsset with Blueprint support\n */" },
		{ "IncludePath", "Miscellaneous/BpPrimaryDataAsset.h" },
		{ "ModuleRelativePath", "Public/Miscellaneous/BpPrimaryDataAsset.h" },
		{ "ToolTip", "PrimaryAsset with Blueprint support" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBpPrimaryDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBpPrimaryDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBpPrimaryDataAsset_Statics::ClassParams = {
		&UBpPrimaryDataAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBpPrimaryDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBpPrimaryDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBpPrimaryDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBpPrimaryDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBpPrimaryDataAsset, 153296267);
	template<> QUESTEXTENSION_API UClass* StaticClass<UBpPrimaryDataAsset>()
	{
		return UBpPrimaryDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBpPrimaryDataAsset(Z_Construct_UClass_UBpPrimaryDataAsset, &UBpPrimaryDataAsset::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UBpPrimaryDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBpPrimaryDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
