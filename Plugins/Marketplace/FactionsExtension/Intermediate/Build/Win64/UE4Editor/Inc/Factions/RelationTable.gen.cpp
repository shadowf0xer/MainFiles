// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/Database/RelationTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRelationTable() {}
// Cross Module References
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FRelationTable();
	UPackage* Z_Construct_UPackage__Script_Factions();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionRelation();
// End Cross Module References
class UScriptStruct* FRelationTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FRelationTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRelationTable, Z_Construct_UPackage__Script_Factions(), TEXT("RelationTable"), sizeof(FRelationTable), Get_Z_Construct_UScriptStruct_FRelationTable_Hash());
	}
	return Singleton;
}
template<> FACTIONS_API UScriptStruct* StaticStruct<FRelationTable>()
{
	return FRelationTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRelationTable(FRelationTable::StaticStruct, TEXT("/Script/Factions"), TEXT("RelationTable"), false, nullptr, nullptr);
static struct FScriptStruct_Factions_StaticRegisterNativesFRelationTable
{
	FScriptStruct_Factions_StaticRegisterNativesFRelationTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RelationTable")),new UScriptStruct::TCppStructOps<FRelationTable>);
	}
} ScriptStruct_Factions_StaticRegisterNativesFRelationTable;
	struct Z_Construct_UScriptStruct_FRelationTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexedList_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_IndexedList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndexedList_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConfigList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConfigList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRelationTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains all faction relations\n */" },
		{ "ModuleRelativePath", "Public/Database/RelationTable.h" },
		{ "ToolTip", "Contains all faction relations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRelationTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRelationTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_IndexedList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Database/RelationTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_IndexedList = { "IndexedList", nullptr, (EPropertyFlags)0x0020080001002000, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRelationTable, IndexedList), METADATA_PARAMS(Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_IndexedList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_IndexedList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_IndexedList_ElementProp = { "IndexedList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFactionRelation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_ConfigList_MetaData[] = {
		{ "Category", "Relations" },
		{ "ModuleRelativePath", "Public/Database/RelationTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_ConfigList = { "ConfigList", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRelationTable, ConfigList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_ConfigList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_ConfigList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_ConfigList_Inner = { "ConfigList", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFactionRelation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRelationTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_IndexedList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_IndexedList_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_ConfigList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelationTable_Statics::NewProp_ConfigList_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRelationTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
		nullptr,
		&NewStructOps,
		"RelationTable",
		sizeof(FRelationTable),
		alignof(FRelationTable),
		Z_Construct_UScriptStruct_FRelationTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelationTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRelationTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelationTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRelationTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRelationTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Factions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RelationTable"), sizeof(FRelationTable), Get_Z_Construct_UScriptStruct_FRelationTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRelationTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRelationTable_Hash() { return 252400470U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
