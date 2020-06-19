// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/EnvironmentQuery/EnvQueryTest_Faction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Faction() {}
// Cross Module References
	FACTIONS_API UClass* Z_Construct_UClass_UEnvQueryTest_Faction_NoRegister();
	FACTIONS_API UClass* Z_Construct_UClass_UEnvQueryTest_Faction();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	UPackage* Z_Construct_UPackage__Script_Factions();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFaction();
	FACTIONS_API UEnum* Z_Construct_UEnum_Factions_EFactionTestMode();
// End Cross Module References
	void UEnvQueryTest_Faction::StaticRegisterNativesUEnvQueryTest_Faction()
	{
	}
	UClass* Z_Construct_UClass_UEnvQueryTest_Faction_NoRegister()
	{
		return UEnvQueryTest_Faction::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Faction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Faction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Faction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompareTowardsContextActor_MetaData[];
#endif
		static void NewProp_bCompareTowardsContextActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompareTowardsContextActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Faction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Faction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Faction" },
		{ "IncludePath", "EnvironmentQuery/EnvQueryTest_Faction.h" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/EnvQueryTest_Faction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Faction" },
		{ "EditCondition", "bCompareTowardsContextActor" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/EnvQueryTest_Faction.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Faction, Context), Z_Construct_UClass_UEnvQueryContext_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Context_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Faction_MetaData[] = {
		{ "Category", "Faction" },
		{ "EditCondition", "!bCompareTowardsContextActor" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/EnvQueryTest_Faction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Faction = { "Faction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Faction, Faction), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Faction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Faction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_bCompareTowardsContextActor_MetaData[] = {
		{ "Category", "Faction" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/EnvQueryTest_Faction.h" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_bCompareTowardsContextActor_SetBit(void* Obj)
	{
		((UEnvQueryTest_Faction*)Obj)->bCompareTowardsContextActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_bCompareTowardsContextActor = { "bCompareTowardsContextActor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnvQueryTest_Faction), &Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_bCompareTowardsContextActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_bCompareTowardsContextActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_bCompareTowardsContextActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Faction" },
		{ "ModuleRelativePath", "Public/EnvironmentQuery/EnvQueryTest_Faction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnvQueryTest_Faction, Mode), Z_Construct_UEnum_Factions_EFactionTestMode, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Mode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Faction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Context,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Faction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_bCompareTowardsContextActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Faction_Statics::NewProp_Mode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Faction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Faction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Faction_Statics::ClassParams = {
		&UEnvQueryTest_Faction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_Faction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Faction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_Faction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnvQueryTest_Faction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnvQueryTest_Faction, 3049269753);
	template<> FACTIONS_API UClass* StaticClass<UEnvQueryTest_Faction>()
	{
		return UEnvQueryTest_Faction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnvQueryTest_Faction(Z_Construct_UClass_UEnvQueryTest_Faction, &UEnvQueryTest_Faction::StaticClass, TEXT("/Script/Factions"), TEXT("UEnvQueryTest_Faction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Faction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
