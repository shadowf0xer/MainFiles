// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/LevelRecords.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelRecords() {}
// Cross Module References
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingLevelRecord();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FLevelRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FPersistentLevelRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FBaseRecord();
// End Cross Module References
class UScriptStruct* FStreamingLevelRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FStreamingLevelRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingLevelRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("StreamingLevelRecord"), sizeof(FStreamingLevelRecord), Get_Z_Construct_UScriptStruct_FStreamingLevelRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FStreamingLevelRecord>()
{
	return FStreamingLevelRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamingLevelRecord(FStreamingLevelRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("StreamingLevelRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFStreamingLevelRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFStreamingLevelRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamingLevelRecord")),new UScriptStruct::TCppStructOps<FStreamingLevelRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFStreamingLevelRecord;
	struct Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized streaming level in the world */" },
		{ "ModuleRelativePath", "Public/Serialization/LevelRecords.h" },
		{ "ToolTip", "Represents a serialized streaming level in the world" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingLevelRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FLevelRecord,
		&NewStructOps,
		"StreamingLevelRecord",
		sizeof(FStreamingLevelRecord),
		alignof(FStreamingLevelRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingLevelRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamingLevelRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamingLevelRecord"), sizeof(FStreamingLevelRecord), Get_Z_Construct_UScriptStruct_FStreamingLevelRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamingLevelRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamingLevelRecord_Hash() { return 1209542174U; }
class UScriptStruct* FPersistentLevelRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FPersistentLevelRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPersistentLevelRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("PersistentLevelRecord"), sizeof(FPersistentLevelRecord), Get_Z_Construct_UScriptStruct_FPersistentLevelRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FPersistentLevelRecord>()
{
	return FPersistentLevelRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPersistentLevelRecord(FPersistentLevelRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("PersistentLevelRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFPersistentLevelRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFPersistentLevelRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PersistentLevelRecord")),new UScriptStruct::TCppStructOps<FPersistentLevelRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFPersistentLevelRecord;
	struct Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a persistent level in the world */" },
		{ "ModuleRelativePath", "Public/Serialization/LevelRecords.h" },
		{ "ToolTip", "Represents a persistent level in the world" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPersistentLevelRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FLevelRecord,
		&NewStructOps,
		"PersistentLevelRecord",
		sizeof(FPersistentLevelRecord),
		alignof(FPersistentLevelRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPersistentLevelRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPersistentLevelRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PersistentLevelRecord"), sizeof(FPersistentLevelRecord), Get_Z_Construct_UScriptStruct_FPersistentLevelRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPersistentLevelRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPersistentLevelRecord_Hash() { return 2911093866U; }
class UScriptStruct* FLevelRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FLevelRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("LevelRecord"), sizeof(FLevelRecord), Get_Z_Construct_UScriptStruct_FLevelRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FLevelRecord>()
{
	return FLevelRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelRecord(FLevelRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("LevelRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFLevelRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFLevelRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelRecord")),new UScriptStruct::TCppStructOps<FLevelRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFLevelRecord;
	struct Z_Construct_UScriptStruct_FLevelRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a level in the world (streaming or persistent) */" },
		{ "ModuleRelativePath", "Public/Serialization/LevelRecords.h" },
		{ "ToolTip", "Represents a level in the world (streaming or persistent)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FBaseRecord,
		&NewStructOps,
		"LevelRecord",
		sizeof(FLevelRecord),
		alignof(FLevelRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelRecord"), sizeof(FLevelRecord), Get_Z_Construct_UScriptStruct_FLevelRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelRecord_Hash() { return 2130879504U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
