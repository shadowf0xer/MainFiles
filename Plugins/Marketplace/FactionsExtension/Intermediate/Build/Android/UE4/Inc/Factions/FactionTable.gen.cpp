// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factions/Public/Database/FactionTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactionTable() {}
// Cross Module References
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionTable();
	UPackage* Z_Construct_UPackage__Script_Factions();
	FACTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FFactionInfo();
// End Cross Module References
class UScriptStruct* FFactionTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FACTIONS_API uint32 Get_Z_Construct_UScriptStruct_FFactionTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFactionTable, Z_Construct_UPackage__Script_Factions(), TEXT("FactionTable"), sizeof(FFactionTable), Get_Z_Construct_UScriptStruct_FFactionTable_Hash());
	}
	return Singleton;
}
template<> FACTIONS_API UScriptStruct* StaticStruct<FFactionTable>()
{
	return FFactionTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFactionTable(FFactionTable::StaticStruct, TEXT("/Script/Factions"), TEXT("FactionTable"), false, nullptr, nullptr);
static struct FScriptStruct_Factions_StaticRegisterNativesFFactionTable
{
	FScriptStruct_Factions_StaticRegisterNativesFFactionTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FactionTable")),new UScriptStruct::TCppStructOps<FFactionTable>);
	}
} ScriptStruct_Factions_StaticRegisterNativesFFactionTable;
	struct Z_Construct_UScriptStruct_FFactionTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Items_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionTable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Database/FactionTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFactionTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFactionTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFactionTable_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Factions" },
		{ "ModuleRelativePath", "Public/Database/FactionTable.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FFactionTable_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000001004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFactionTable, Items), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionTable_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionTable_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFactionTable_Statics::NewProp_Items_Key_KeyProp = { "Items_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFactionTable_Statics::NewProp_Items_ValueProp = { "Items", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFactionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFactionTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionTable_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionTable_Statics::NewProp_Items_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFactionTable_Statics::NewProp_Items_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFactionTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Factions,
		nullptr,
		&NewStructOps,
		"FactionTable",
		sizeof(FFactionTable),
		alignof(FFactionTable),
		Z_Construct_UScriptStruct_FFactionTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFactionTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFactionTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFactionTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFactionTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Factions();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FactionTable"), sizeof(FFactionTable), Get_Z_Construct_UScriptStruct_FFactionTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFactionTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFactionTable_Hash() { return 1000278483U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
