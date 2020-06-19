// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/Database/FactionInfoAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionInfoAsset() {}
// Cross Module References
	FACTIONS_API UClass* Z_Construct_UClass_UFactionInfoAsset_NoRegister();
	FACTIONS_API UClass* Z_Construct_UClass_UFactionInfoAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_Factions();
// End Cross Module References
	void UFactionInfoAsset::StaticRegisterNativesUFactionInfoAsset()
	{
	}
	UClass* Z_Construct_UClass_UFactionInfoAsset_NoRegister()
	{
		return UFactionInfoAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFactionInfoAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFactionInfoAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactionInfoAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct containing information about a faction. Static use.\n */" },
		{ "IncludePath", "Database/FactionInfoAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Database/FactionInfoAsset.h" },
		{ "ToolTip", "Struct containing information about a faction. Static use." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFactionInfoAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactionInfoAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFactionInfoAsset_Statics::ClassParams = {
		&UFactionInfoAsset::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFactionInfoAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFactionInfoAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFactionInfoAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFactionInfoAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFactionInfoAsset, 362973201);
	template<> FACTIONS_API UClass* StaticClass<UFactionInfoAsset>()
	{
		return UFactionInfoAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFactionInfoAsset(Z_Construct_UClass_UFactionInfoAsset, &UFactionInfoAsset::StaticClass, TEXT("/Script/Factions"), TEXT("UFactionInfoAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFactionInfoAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
