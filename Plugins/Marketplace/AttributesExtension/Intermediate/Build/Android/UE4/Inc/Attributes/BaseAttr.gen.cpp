// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attributes/Public/BaseAttr.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAttr() {}
// Cross Module References
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FBaseAttr();
	UPackage* Z_Construct_UPackage__Script_Attributes();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeCategoryMods();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttrModifier();
// End Cross Module References
class UScriptStruct* FBaseAttr::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ATTRIBUTES_API uint32 Get_Z_Construct_UScriptStruct_FBaseAttr_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseAttr, Z_Construct_UPackage__Script_Attributes(), TEXT("BaseAttr"), sizeof(FBaseAttr), Get_Z_Construct_UScriptStruct_FBaseAttr_Hash());
	}
	return Singleton;
}
template<> ATTRIBUTES_API UScriptStruct* StaticStruct<FBaseAttr>()
{
	return FBaseAttr::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseAttr(FBaseAttr::StaticStruct, TEXT("/Script/Attributes"), TEXT("BaseAttr"), false, nullptr, nullptr);
static struct FScriptStruct_Attributes_StaticRegisterNativesFBaseAttr
{
	FScriptStruct_Attributes_StaticRegisterNativesFBaseAttr()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseAttr")),new UScriptStruct::TCppStructOps<FBaseAttr>);
	}
} ScriptStruct_Attributes_StaticRegisterNativesFBaseAttr;
	struct Z_Construct_UScriptStruct_FBaseAttr_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryMods_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategoryMods;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryMods_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BaseModifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BaseModifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttr_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base Attribute\n * Extended upon to support different types of attributes\n */" },
		{ "ModuleRelativePath", "Public/BaseAttr.h" },
		{ "ToolTip", "Base Attribute\nExtended upon to support different types of attributes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseAttr_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseAttr>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_CategoryMods_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseAttr.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_CategoryMods = { "CategoryMods", nullptr, (EPropertyFlags)0x0020080081000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttr, CategoryMods), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_CategoryMods_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_CategoryMods_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_CategoryMods_Inner = { "CategoryMods", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttributeCategoryMods, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_BaseModifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseAttr.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_BaseModifiers = { "BaseModifiers", nullptr, (EPropertyFlags)0x0020080081000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttr, BaseModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_BaseModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_BaseModifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_BaseModifiers_Inner = { "BaseModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseAttr.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseAttr, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseAttr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_CategoryMods,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_CategoryMods_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_BaseModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_BaseModifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseAttr_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseAttr_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Attributes,
		nullptr,
		&NewStructOps,
		"BaseAttr",
		sizeof(FBaseAttr),
		alignof(FBaseAttr),
		Z_Construct_UScriptStruct_FBaseAttr_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttr_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseAttr_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseAttr_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseAttr()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseAttr_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Attributes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseAttr"), sizeof(FBaseAttr), Get_Z_Construct_UScriptStruct_FBaseAttr_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseAttr_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseAttr_Hash() { return 1478231818U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
