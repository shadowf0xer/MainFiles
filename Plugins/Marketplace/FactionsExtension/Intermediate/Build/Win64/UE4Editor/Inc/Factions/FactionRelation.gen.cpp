// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/Database/FactionRelation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionRelation() {}
// Cross Module References
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionRelation();
	UPackage* Z_Construct_UPackage__Script_Factions();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_ETeamAttitude();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFaction();
// End Cross Module References
class UScriptStruct* FFactionRelation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FFactionRelation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionRelation, Z_Construct_UPackage__Script_Factions(), TEXT("FactionRelation"), sizeof(FFactionRelation), Get_Z_Construct_UScriptStruct_FFactionRelation_Hash());
	}
	return Singleton;
}
template<> FACTIONS_API UScriptStruct* StaticStruct<FFactionRelation>()
{
	return FFactionRelation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFactionRelation(FFactionRelation::StaticStruct, TEXT("/Script/Factions"), TEXT("FactionRelation"), false, nullptr, nullptr);
static struct FScriptStruct_Factions_StaticRegisterNativesFFactionRelation
{
	FScriptStruct_Factions_StaticRegisterNativesFFactionRelation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FactionRelation")),new UScriptStruct::TCppStructOps<FFactionRelation>);
	}
} ScriptStruct_Factions_StaticRegisterNativesFFactionRelation;
	struct Z_Construct_UScriptStruct_FFactionRelation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Attitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactionB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FactionB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FactionA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FactionA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionRelation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines a relation between factions\n*/" },
		{ "ModuleRelativePath", "Public/Database/FactionRelation.h" },
		{ "ToolTip", "Defines a relation between factions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFactionRelation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionRelation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_Attitude_MetaData[] = {
		{ "Category", "Relation" },
		{ "Comment", "/** Defines how this two factions will react to each other */" },
		{ "ModuleRelativePath", "Public/Database/FactionRelation.h" },
		{ "ToolTip", "Defines how this two factions will react to each other" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_Attitude = { "Attitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactionRelation, Attitude), Z_Construct_UEnum_AIModule_ETeamAttitude, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_Attitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_Attitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_FactionB_MetaData[] = {
		{ "Category", "Relation" },
		{ "Comment", "/** Second Faction of the relation */" },
		{ "DisplayName", "B" },
		{ "ModuleRelativePath", "Public/Database/FactionRelation.h" },
		{ "ToolTip", "Second Faction of the relation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_FactionB = { "FactionB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactionRelation, FactionB), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_FactionB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_FactionB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_FactionA_MetaData[] = {
		{ "Category", "Relation" },
		{ "Comment", "/** First Faction of the relation */" },
		{ "DisplayName", "A" },
		{ "ModuleRelativePath", "Public/Database/FactionRelation.h" },
		{ "ToolTip", "First Faction of the relation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_FactionA = { "FactionA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactionRelation, FactionA), Z_Construct_UScriptStruct_FFaction, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_FactionA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_FactionA_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionRelation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_Attitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_FactionB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionRelation_Statics::NewProp_FactionA,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionRelation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
		nullptr,
		&NewStructOps,
		"FactionRelation",
		sizeof(FFactionRelation),
		alignof(FFactionRelation),
		Z_Construct_UScriptStruct_FFactionRelation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionRelation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionRelation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionRelation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFactionRelation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFactionRelation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Factions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FactionRelation"), sizeof(FFactionRelation), Get_Z_Construct_UScriptStruct_FFactionRelation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFactionRelation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFactionRelation_Hash() { return 2308519797U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
