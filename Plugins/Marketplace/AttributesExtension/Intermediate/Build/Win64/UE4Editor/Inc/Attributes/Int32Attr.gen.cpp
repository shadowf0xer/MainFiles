// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attributes/Public/Int32Attr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInt32Attr() {}
// Cross Module References
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Attr();
	UPackage* Z_Construct_UPackage__Script_Attributes();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttr();
	ATTRIBUTES_API UFunction* Z_Construct_UDelegateFunction_Attributes_Int32ModifiedMCDelegate__DelegateSignature();
// End Cross Module References
class UScriptStruct* FInt32Attr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ATTRIBUTES_API uint32 Get_Z_Construct_UScriptStruct_FInt32Attr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInt32Attr, Z_Construct_UPackage__Script_Attributes(), TEXT("Int32Attr"), sizeof(FInt32Attr), Get_Z_Construct_UScriptStruct_FInt32Attr_Hash());
	}
	return Singleton;
}
template<> ATTRIBUTES_API UScriptStruct* StaticStruct<FInt32Attr>()
{
	return FInt32Attr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInt32Attr(FInt32Attr::StaticStruct, TEXT("/Script/Attributes"), TEXT("Int32Attr"), false, nullptr, nullptr);
static struct FScriptStruct_Attributes_StaticRegisterNativesFInt32Attr
{
	FScriptStruct_Attributes_StaticRegisterNativesFInt32Attr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Int32Attr")),new UScriptStruct::TCppStructOps<FInt32Attr>);
	}
} ScriptStruct_Attributes_StaticRegisterNativesFInt32Attr;
	struct Z_Construct_UScriptStruct_FInt32Attr_Statics
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
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInt32Attr_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Int32 Attribute\n * Used as a modular int32 depending on modifiers\n */" },
		{ "DisplayName", "Int32 Attr" },
		{ "HasNativeBreak", "Attributes.Int32AttributesLibrary.Break" },
		{ "HasNativeMake", "Attributes.Int32AttributesLibrary.Make" },
		{ "ModuleRelativePath", "Public/Int32Attr.h" },
		{ "ToolTip", "Int32 Attribute\nUsed as a modular int32 depending on modifiers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInt32Attr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInt32Attr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_OnModified_MetaData[] = {
		{ "ModuleRelativePath", "Public/Int32Attr.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_OnModified = { "OnModified", nullptr, (EPropertyFlags)0x0020080000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInt32Attr, OnModified), Z_Construct_UDelegateFunction_Attributes_Int32ModifiedMCDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_OnModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_OnModified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Attribute" },
		{ "Comment", "/** Cached final value from modifiers */" },
		{ "ModuleRelativePath", "Public/Int32Attr.h" },
		{ "ToolTip", "Cached final value from modifiers" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000002001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInt32Attr, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_BaseValue_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/Int32Attr.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0020080001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInt32Attr, BaseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_BaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_BaseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInt32Attr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_OnModified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInt32Attr_Statics::NewProp_BaseValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInt32Attr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Attributes,
		Z_Construct_UScriptStruct_FBaseAttr,
		&NewStructOps,
		"Int32Attr",
		sizeof(FInt32Attr),
		alignof(FInt32Attr),
		Z_Construct_UScriptStruct_FInt32Attr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Attr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInt32Attr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInt32Attr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInt32Attr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInt32Attr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Attributes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Int32Attr"), sizeof(FInt32Attr), Get_Z_Construct_UScriptStruct_FInt32Attr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInt32Attr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInt32Attr_Hash() { return 3961969102U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
