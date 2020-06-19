// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attributes/Public/AttrCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttrCategory() {}
// Cross Module References
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeCategoryMods();
	UPackage* Z_Construct_UPackage__Script_Attributes();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttrModifier();
	ATTRIBUTES_API UScriptStruct* Z_Construct_UScriptStruct_FAttrCategory();
// End Cross Module References
class UScriptStruct* FAttributeCategoryMods::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ATTRIBUTES_API uint32 Get_Z_Construct_UScriptStruct_FAttributeCategoryMods_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttributeCategoryMods, Z_Construct_UPackage__Script_Attributes(), TEXT("AttributeCategoryMods"), sizeof(FAttributeCategoryMods), Get_Z_Construct_UScriptStruct_FAttributeCategoryMods_Hash());
	}
	return Singleton;
}
template<> ATTRIBUTES_API UScriptStruct* StaticStruct<FAttributeCategoryMods>()
{
	return FAttributeCategoryMods::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttributeCategoryMods(FAttributeCategoryMods::StaticStruct, TEXT("/Script/Attributes"), TEXT("AttributeCategoryMods"), false, nullptr, nullptr);
static struct FScriptStruct_Attributes_StaticRegisterNativesFAttributeCategoryMods
{
	FScriptStruct_Attributes_StaticRegisterNativesFAttributeCategoryMods()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttributeCategoryMods")),new UScriptStruct::TCppStructOps<FAttributeCategoryMods>);
	}
} ScriptStruct_Attributes_StaticRegisterNativesFAttributeCategoryMods;
	struct Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AttrCategory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttributeCategoryMods>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Modifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttrCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeCategoryMods, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Modifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAttrModifier, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/AttrCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttributeCategoryMods, Category), Z_Construct_UScriptStruct_FAttrCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Modifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Modifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::NewProp_Category,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Attributes,
		nullptr,
		&NewStructOps,
		"AttributeCategoryMods",
		sizeof(FAttributeCategoryMods),
		alignof(FAttributeCategoryMods),
		Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttributeCategoryMods()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttributeCategoryMods_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Attributes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttributeCategoryMods"), sizeof(FAttributeCategoryMods), Get_Z_Construct_UScriptStruct_FAttributeCategoryMods_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttributeCategoryMods_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttributeCategoryMods_Hash() { return 2736892577U; }
class UScriptStruct* FAttrCategory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ATTRIBUTES_API uint32 Get_Z_Construct_UScriptStruct_FAttrCategory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAttrCategory, Z_Construct_UPackage__Script_Attributes(), TEXT("AttrCategory"), sizeof(FAttrCategory), Get_Z_Construct_UScriptStruct_FAttrCategory_Hash());
	}
	return Singleton;
}
template<> ATTRIBUTES_API UScriptStruct* StaticStruct<FAttrCategory>()
{
	return FAttrCategory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAttrCategory(FAttrCategory::StaticStruct, TEXT("/Script/Attributes"), TEXT("AttrCategory"), false, nullptr, nullptr);
static struct FScriptStruct_Attributes_StaticRegisterNativesFAttrCategory
{
	FScriptStruct_Attributes_StaticRegisterNativesFAttrCategory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AttrCategory")),new UScriptStruct::TCppStructOps<FAttrCategory>);
	}
} ScriptStruct_Attributes_StaticRegisterNativesFAttrCategory;
	struct Z_Construct_UScriptStruct_FAttrCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttrCategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents an existing AttrCategory from the database\n */" },
		{ "ModuleRelativePath", "Public/AttrCategory.h" },
		{ "ToolTip", "Represents an existing AttrCategory from the database" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAttrCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAttrCategory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAttrCategory_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Category" },
		{ "ModuleRelativePath", "Public/AttrCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAttrCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAttrCategory, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAttrCategory_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttrCategory_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAttrCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAttrCategory_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAttrCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Attributes,
		nullptr,
		&NewStructOps,
		"AttrCategory",
		sizeof(FAttrCategory),
		alignof(FAttrCategory),
		Z_Construct_UScriptStruct_FAttrCategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttrCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAttrCategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAttrCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAttrCategory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAttrCategory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Attributes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AttrCategory"), sizeof(FAttrCategory), Get_Z_Construct_UScriptStruct_FAttrCategory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAttrCategory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAttrCategory_Hash() { return 493487115U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
