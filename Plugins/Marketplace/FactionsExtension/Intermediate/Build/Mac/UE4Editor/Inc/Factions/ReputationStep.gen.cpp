// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/Reputation/ReputationStep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReputationStep() {}
// Cross Module References
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FReputationStep();
	UPackage* Z_Construct_UPackage__Script_Factions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FReputationStep::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FReputationStep_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReputationStep, Z_Construct_UPackage__Script_Factions(), TEXT("ReputationStep"), sizeof(FReputationStep), Get_Z_Construct_UScriptStruct_FReputationStep_Hash());
	}
	return Singleton;
}
template<> FACTIONS_API UScriptStruct* StaticStruct<FReputationStep>()
{
	return FReputationStep::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReputationStep(FReputationStep::StaticStruct, TEXT("/Script/Factions"), TEXT("ReputationStep"), false, nullptr, nullptr);
static struct FScriptStruct_Factions_StaticRegisterNativesFReputationStep
{
	FScriptStruct_Factions_StaticRegisterNativesFReputationStep()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReputationStep")),new UScriptStruct::TCppStructOps<FReputationStep>);
	}
} ScriptStruct_Factions_StaticRegisterNativesFReputationStep;
	struct Z_Construct_UScriptStruct_FReputationStep_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReputationStep_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Reputation/ReputationStep.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReputationStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReputationStep>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Step" },
		{ "ModuleRelativePath", "Public/Reputation/ReputationStep.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReputationStep, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Step" },
		{ "ModuleRelativePath", "Public/Reputation/ReputationStep.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReputationStep, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Step" },
		{ "ModuleRelativePath", "Public/Reputation/ReputationStep.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReputationStep, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReputationStep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReputationStep_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReputationStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
		nullptr,
		&NewStructOps,
		"ReputationStep",
		sizeof(FReputationStep),
		alignof(FReputationStep),
		Z_Construct_UScriptStruct_FReputationStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReputationStep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReputationStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReputationStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReputationStep()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReputationStep_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Factions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReputationStep"), sizeof(FReputationStep), Get_Z_Construct_UScriptStruct_FReputationStep_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReputationStep_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReputationStep_Hash() { return 3893886147U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
