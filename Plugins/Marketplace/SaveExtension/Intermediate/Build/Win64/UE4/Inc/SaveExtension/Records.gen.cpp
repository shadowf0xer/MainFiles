// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/Records.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecords() {}
// Cross Module References
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FControllerRecord();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FActorRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FObjectRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FComponentRecord();
	SAVEEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FBaseRecord();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FControllerRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FControllerRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FControllerRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ControllerRecord"), sizeof(FControllerRecord), Get_Z_Construct_UScriptStruct_FControllerRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FControllerRecord>()
{
	return FControllerRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FControllerRecord(FControllerRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ControllerRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFControllerRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFControllerRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ControllerRecord")),new UScriptStruct::TCppStructOps<FControllerRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFControllerRecord;
	struct Z_Construct_UScriptStruct_FControllerRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Controller */" },
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
		{ "ToolTip", "Represents a serialized Controller" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControllerRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControllerRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControllerRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FActorRecord,
		&NewStructOps,
		"ControllerRecord",
		sizeof(FControllerRecord),
		alignof(FControllerRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControllerRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FControllerRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ControllerRecord"), sizeof(FControllerRecord), Get_Z_Construct_UScriptStruct_FControllerRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FControllerRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FControllerRecord_Hash() { return 1455789303U; }
class UScriptStruct* FActorRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FActorRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ActorRecord"), sizeof(FActorRecord), Get_Z_Construct_UScriptStruct_FActorRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FActorRecord>()
{
	return FActorRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorRecord(FActorRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ActorRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFActorRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFActorRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorRecord")),new UScriptStruct::TCppStructOps<FActorRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFActorRecord;
	struct Z_Construct_UScriptStruct_FActorRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Actor */" },
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
		{ "ToolTip", "Represents a serialized Actor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FObjectRecord,
		&NewStructOps,
		"ActorRecord",
		sizeof(FActorRecord),
		alignof(FActorRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorRecord"), sizeof(FActorRecord), Get_Z_Construct_UScriptStruct_FActorRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorRecord_Hash() { return 945917010U; }
class UScriptStruct* FComponentRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FComponentRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ComponentRecord"), sizeof(FComponentRecord), Get_Z_Construct_UScriptStruct_FComponentRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FComponentRecord>()
{
	return FComponentRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComponentRecord(FComponentRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ComponentRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFComponentRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFComponentRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComponentRecord")),new UScriptStruct::TCppStructOps<FComponentRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFComponentRecord;
	struct Z_Construct_UScriptStruct_FComponentRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Component */" },
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
		{ "ToolTip", "Represents a serialized Component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FObjectRecord,
		&NewStructOps,
		"ComponentRecord",
		sizeof(FComponentRecord),
		alignof(FComponentRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComponentRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComponentRecord"), sizeof(FComponentRecord), Get_Z_Construct_UScriptStruct_FComponentRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComponentRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComponentRecord_Hash() { return 1949680245U; }
class UScriptStruct* FObjectRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FObjectRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("ObjectRecord"), sizeof(FObjectRecord), Get_Z_Construct_UScriptStruct_FObjectRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FObjectRecord>()
{
	return FObjectRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FObjectRecord(FObjectRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("ObjectRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFObjectRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFObjectRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ObjectRecord")),new UScriptStruct::TCppStructOps<FObjectRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFObjectRecord;
	struct Z_Construct_UScriptStruct_FObjectRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Represents a serialized Object */" },
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
		{ "ToolTip", "Represents a serialized Object" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FObjectRecord, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectRecord_Statics::NewProp_Class,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		Z_Construct_UScriptStruct_FBaseRecord,
		&NewStructOps,
		"ObjectRecord",
		sizeof(FObjectRecord),
		alignof(FObjectRecord),
		Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FObjectRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ObjectRecord"), sizeof(FObjectRecord), Get_Z_Construct_UScriptStruct_FObjectRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FObjectRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FObjectRecord_Hash() { return 3019004204U; }
class UScriptStruct* FBaseRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SAVEEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FBaseRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseRecord, Z_Construct_UPackage__Script_SaveExtension(), TEXT("BaseRecord"), sizeof(FBaseRecord), Get_Z_Construct_UScriptStruct_FBaseRecord_Hash());
	}
	return Singleton;
}
template<> SAVEEXTENSION_API UScriptStruct* StaticStruct<FBaseRecord>()
{
	return FBaseRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseRecord(FBaseRecord::StaticStruct, TEXT("/Script/SaveExtension"), TEXT("BaseRecord"), false, nullptr, nullptr);
static struct FScriptStruct_SaveExtension_StaticRegisterNativesFBaseRecord
{
	FScriptStruct_SaveExtension_StaticRegisterNativesFBaseRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseRecord")),new UScriptStruct::TCppStructOps<FBaseRecord>);
	}
} ScriptStruct_SaveExtension_StaticRegisterNativesFBaseRecord;
	struct Z_Construct_UScriptStruct_FBaseRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseRecord_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Serialization/Records.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseRecord>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
		nullptr,
		&NewStructOps,
		"BaseRecord",
		sizeof(FBaseRecord),
		alignof(FBaseRecord),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SaveExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseRecord"), sizeof(FBaseRecord), Get_Z_Construct_UScriptStruct_FBaseRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseRecord_Hash() { return 3175720074U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
