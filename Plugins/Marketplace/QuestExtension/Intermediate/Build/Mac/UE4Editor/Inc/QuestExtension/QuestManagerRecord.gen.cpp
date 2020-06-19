// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QuestManagerRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManagerRecord() {}
// Cross Module References
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestManagerRecord();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestRecord();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FQuestManagerRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FQuestManagerRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestManagerRecord, Z_Construct_UPackage__Script_QuestExtension(), TEXT("QuestManagerRecord"), sizeof(FQuestManagerRecord), Get_Z_Construct_UScriptStruct_FQuestManagerRecord_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<FQuestManagerRecord>()
{
	return FQuestManagerRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestManagerRecord(FQuestManagerRecord::StaticStruct, TEXT("/Script/QuestExtension"), TEXT("QuestManagerRecord"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtension_StaticRegisterNativesFQuestManagerRecord
{
	FScriptStruct_QuestExtension_StaticRegisterNativesFQuestManagerRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestManagerRecord")),new UScriptStruct::TCppStructOps<FQuestManagerRecord>);
	}
} ScriptStruct_QuestExtension_StaticRegisterNativesFQuestManagerRecord;
	struct Z_Construct_UScriptStruct_FQuestManagerRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningQuestRecords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RunningQuestRecords;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RunningQuestRecords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores the serialized state of a QuestManager\n */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerRecord.h" },
		{ "ToolTip", "Stores the serialized state of a QuestManager" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestManagerRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_RunningQuestRecords_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_RunningQuestRecords = { "RunningQuestRecords", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestManagerRecord, RunningQuestRecords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_RunningQuestRecords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_RunningQuestRecords_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_RunningQuestRecords_Inner = { "RunningQuestRecords", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestRecord, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestManagerRecord, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestManagerRecord, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestManagerRecord, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_RunningQuestRecords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_RunningQuestRecords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
		nullptr,
		&NewStructOps,
		"QuestManagerRecord",
		sizeof(FQuestManagerRecord),
		alignof(FQuestManagerRecord),
		Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestManagerRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestManagerRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestManagerRecord"), sizeof(FQuestManagerRecord), Get_Z_Construct_UScriptStruct_FQuestManagerRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestManagerRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestManagerRecord_Hash() { return 749589078U; }
class UScriptStruct* FQuestRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FQuestRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestRecord, Z_Construct_UPackage__Script_QuestExtension(), TEXT("QuestRecord"), sizeof(FQuestRecord), Get_Z_Construct_UScriptStruct_FQuestRecord_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<FQuestRecord>()
{
	return FQuestRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestRecord(FQuestRecord::StaticStruct, TEXT("/Script/QuestExtension"), TEXT("QuestRecord"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtension_StaticRegisterNativesFQuestRecord
{
	FScriptStruct_QuestExtension_StaticRegisterNativesFQuestRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestRecord")),new UScriptStruct::TCppStructOps<FQuestRecord>);
	}
} ScriptStruct_QuestExtension_StaticRegisterNativesFQuestRecord;
	struct Z_Construct_UScriptStruct_FQuestRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Stores data related to a quest\n*/" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerRecord.h" },
		{ "ToolTip", "Stores data related to a quest" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestRecord, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestRecord, AssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_AssetPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestRecord_Statics::NewProp_AssetPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
		nullptr,
		&NewStructOps,
		"QuestRecord",
		sizeof(FQuestRecord),
		alignof(FQuestRecord),
		Z_Construct_UScriptStruct_FQuestRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestRecord"), sizeof(FQuestRecord), Get_Z_Construct_UScriptStruct_FQuestRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestRecord_Hash() { return 4128473901U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
