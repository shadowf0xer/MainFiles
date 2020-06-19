// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attributes/Public/FloatAttr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatAttr() {}
// Cross Module References
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FFloatAttr();
	UPackage* Z_Construct_UPackage__Script_Attributes();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttr();
	ATTRIBUTES_API UFunction* Z_Construct_UDelegateFunction_Attributes_FloatModifiedMCDelegate__DelegateSignature();
// End Cross Module References
class UScriptStruct* FFloatAttr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ATTRIBUTES_API uint32 Get_Z_Construct_UScriptStruct_FFloatAttr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatAttr, Z_Construct_UPackage__Script_Attributes(), TEXT("FloatAttr"), sizeof(FFloatAttr), Get_Z_Construct_UScriptStruct_FFloatAttr_Hash());
	}
	return Singleton;
}
template<> ATTRIBUTES_API UScriptStruct* StaticStruct<FFloatAttr>()
{
	return FFloatAttr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFloatAttr(FFloatAttr::StaticStruct, TEXT("/Script/Attributes"), TEXT("FloatAttr"), false, nullptr, nullptr);
static struct FScriptStruct_Attributes_StaticRegisterNativesFFloatAttr
{
	FScriptStruct_Attributes_StaticRegisterNativesFFloatAttr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FloatAttr")),new UScriptStruct::TCppStructOps<FFloatAttr>);
	}
} ScriptStruct_Attributes_StaticRegisterNativesFFloatAttr;
	struct Z_Construct_UScriptStruct_FFloatAttr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnModified_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnModified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatAttr_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Float Attribute\n * Used as a modular float depending on modifiers\n */" },
		{ "HasNativeBreak", "Attributes.FloatAttributesLibrary.Break" },
		{ "HasNativeMake", "Attributes.FloatAttributesLibrary.Make" },
		{ "ModuleRelativePath", "Public/FloatAttr.h" },
		{ "ToolTip", "Float Attribute\nUsed as a modular float depending on modifiers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatAttr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatAttr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_OnModified_MetaData[] = {
		{ "ModuleRelativePath", "Public/FloatAttr.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_OnModified = { "OnModified", nullptr, (EPropertyFlags)0x0020080000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatAttr, OnModified), Z_Construct_UDelegateFunction_Attributes_FloatModifiedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_OnModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_OnModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Cached final value from modifiers */" },
		{ "ModuleRelativePath", "Public/FloatAttr.h" },
		{ "ToolTip", "Cached final value from modifiers" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000002001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatAttr, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_BaseValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/FloatAttr.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0020080001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloatAttr, BaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_BaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_BaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatAttr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_OnModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatAttr_Statics::NewProp_BaseValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatAttr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Attributes,
		Z_Construct_UScriptStruct_FBaseAttr,
		&NewStructOps,
		"FloatAttr",
		sizeof(FFloatAttr),
		alignof(FFloatAttr),
		Z_Construct_UScriptStruct_FFloatAttr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAttr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatAttr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatAttr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatAttr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloatAttr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Attributes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FloatAttr"), sizeof(FFloatAttr), Get_Z_Construct_UScriptStruct_FFloatAttr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloatAttr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloatAttr_Hash() { return 1814919605U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
