// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QuestManagerComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManagerComponent() {}
// Cross Module References
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestMemory_NoRegister();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestCompletionState();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeQuest();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FMemoryStack();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStateData();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestManagerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestManagerRecord();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestGroup_NoRegister();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTextArgument();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestShareCompleteMode();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics
	{
		struct _Script_QuestExtension_eventMemoryDelegate_Parms
		{
			TSoftObjectPtr<UQuestMemory> Memory;
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Memory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestExtension_eventMemoryDelegate_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::NewProp_Memory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestExtension_eventMemoryDelegate_Parms, Memory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::NewProp_Memory_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::NewProp_Memory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::NewProp_Memory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestExtension, nullptr, "MemoryDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_QuestExtension_eventMemoryDelegate_Parms), Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics
	{
		struct _Script_QuestExtension_eventAnyQuestFinishedDelegate_Parms
		{
			TSoftObjectPtr<UQuestBase> QuestAsset;
			EQuestCompletionState State;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_QuestAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestExtension_eventAnyQuestFinishedDelegate_Parms, State), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_QuestAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_QuestAsset = { "QuestAsset", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestExtension_eventAnyQuestFinishedDelegate_Parms, QuestAsset), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_QuestAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_QuestAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::NewProp_QuestAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestExtension, nullptr, "AnyQuestFinishedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_QuestExtension_eventAnyQuestFinishedDelegate_Parms), Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics
	{
		struct _Script_QuestExtension_eventAnyQuestStartedDelegate_Parms
		{
			FRuntimeQuest Quest;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestExtension_eventAnyQuestStartedDelegate_Parms, Quest), Z_Construct_UScriptStruct_FRuntimeQuest, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestExtension, nullptr, "AnyQuestStartedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_QuestExtension_eventAnyQuestStartedDelegate_Parms), Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FMemoryStack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FMemoryStack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemoryStack, Z_Construct_UPackage__Script_QuestExtension(), TEXT("MemoryStack"), sizeof(FMemoryStack), Get_Z_Construct_UScriptStruct_FMemoryStack_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<FMemoryStack>()
{
	return FMemoryStack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMemoryStack(FMemoryStack::StaticStruct, TEXT("/Script/QuestExtension"), TEXT("MemoryStack"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtension_StaticRegisterNativesFMemoryStack
{
	FScriptStruct_QuestExtension_StaticRegisterNativesFMemoryStack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MemoryStack")),new UScriptStruct::TCppStructOps<FMemoryStack>);
	}
} ScriptStruct_QuestExtension_StaticRegisterNativesFMemoryStack;
	struct Z_Construct_UScriptStruct_FMemoryStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Memory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryStack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMemoryStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemoryStack>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryStack_Statics::NewProp_Amount_MetaData[] = {
		{ "Category", "Stack" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMemoryStack_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemoryStack, Amount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryStack_Statics::NewProp_Amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryStack_Statics::NewProp_Amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemoryStack_Statics::NewProp_Memory_MetaData[] = {
		{ "Category", "Stack" },
		{ "Comment", "// FIX: TSoftObjectPtr can't be serialized with SaveGame\n" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "FIX: TSoftObjectPtr can't be serialized with SaveGame" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMemoryStack_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0014000001000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMemoryStack, Memory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryStack_Statics::NewProp_Memory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryStack_Statics::NewProp_Memory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMemoryStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryStack_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemoryStack_Statics::NewProp_Memory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMemoryStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
		nullptr,
		&NewStructOps,
		"MemoryStack",
		sizeof(FMemoryStack),
		alignof(FMemoryStack),
		Z_Construct_UScriptStruct_FMemoryStack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryStack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMemoryStack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemoryStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMemoryStack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMemoryStack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MemoryStack"), sizeof(FMemoryStack), Get_Z_Construct_UScriptStruct_FMemoryStack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMemoryStack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMemoryStack_Hash() { return 2642890329U; }
class UScriptStruct* FQuestStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FQuestStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestStateData, Z_Construct_UPackage__Script_QuestExtension(), TEXT("QuestStateData"), sizeof(FQuestStateData), Get_Z_Construct_UScriptStruct_FQuestStateData_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<FQuestStateData>()
{
	return FQuestStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestStateData(FQuestStateData::StaticStruct, TEXT("/Script/QuestExtension"), TEXT("QuestStateData"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtension_StaticRegisterNativesFQuestStateData
{
	FScriptStruct_QuestExtension_StaticRegisterNativesFQuestStateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestStateData")),new UScriptStruct::TCppStructOps<FQuestStateData>);
	}
} ScriptStruct_QuestExtension_StaticRegisterNativesFQuestStateData;
	struct Z_Construct_UScriptStruct_FQuestStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains information about a quest and it's finished state\n */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Contains information about a quest and it's finished state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestStateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStateData, State), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "State" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000001000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStateData, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestStateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStateData_Statics::NewProp_Quest,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
		nullptr,
		&NewStructOps,
		"QuestStateData",
		sizeof(FQuestStateData),
		alignof(FQuestStateData),
		Z_Construct_UScriptStruct_FQuestStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestStateData"), sizeof(FQuestStateData), Get_Z_Construct_UScriptStruct_FQuestStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestStateData_Hash() { return 802099563U; }
	DEFINE_FUNCTION(UQuestManagerComponent::execRestoreRecord)
	{
		P_GET_STRUCT_REF(FQuestManagerRecord,Z_Param_Out_Record);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RestoreRecord(Z_Param_Out_Record);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execDumpRecord)
	{
		P_GET_STRUCT_REF(FQuestManagerRecord,Z_Param_Out_Record);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpRecord(Z_Param_Out_Record);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execSetArgument)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FQuestTextArgument,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArgument(Z_Param_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execGetMemoryCount)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestMemory>,Z_Param_Memory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMemoryCount(Z_Param_Memory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execIsMemoryRegistered)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestMemory>,Z_Param_Memory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMemoryRegistered(Z_Param_Memory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execForgetAllMemories)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestMemory>,Z_Param_Memory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetAllMemories(Z_Param_Memory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execForgetMemory)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestMemory>,Z_Param_Memory);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForgetMemory(Z_Param_Memory,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execRegistryMemories)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestMemory>,Z_Param_Memory);
		P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegistryMemories(Z_Param_Memory,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execRegistryMemory)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestMemory>,Z_Param_Memory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegistryMemory(Z_Param_Memory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execGetCompletedQuests)
	{
		P_GET_TARRAY_REF(FQuestStateData,Z_Param_Out_Quests);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCompletedQuests(Z_Param_Out_Quests);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execGetRunningQuestGroups)
	{
		P_GET_TARRAY_REF(UQuestGroup*,Z_Param_Out_Quests);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRunningQuestGroups(Z_Param_Out_Quests);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execGetRunningQuests)
	{
		P_GET_TARRAY_REF(FRuntimeQuest,Z_Param_Out_Quests);
		P_GET_UBOOL(Z_Param_bIncludeQuestGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRunningQuests(Z_Param_Out_Quests,Z_Param_bIncludeQuestGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execIsFailed)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFailed(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execIsCompleted)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompleted(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execIsFinished)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFinished(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execIsInProgress)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInProgress(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execIsNotStarted)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNotStarted(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execGetQuestScript)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestBase**)Z_Param__Result=P_THIS->GetQuestScript(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execGetQuestState)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EQuestCompletionState*)Z_Param__Result=P_THIS->GetQuestState(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execCanStartQuest)
	{
		P_GET_OBJECT(UQuestBase,Z_Param_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanStartQuest(Z_Param_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execFinishQuest)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Asset);
		P_GET_ENUM(EQuestCompletionState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishQuest(Z_Param_Asset,EQuestCompletionState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execShareQuest)
	{
		P_GET_OBJECT(UQuestManagerComponent,Z_Param_OtherManager);
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Quest);
		P_GET_ENUM(EQuestShareCompleteMode,Z_Param_CompleteMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShareQuest(Z_Param_OtherManager,Z_Param_Quest,EQuestShareCompleteMode(Z_Param_CompleteMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execBP_StartQuestAsset)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Asset);
		P_GET_UBOOL_REF(Z_Param_Out_bStarted);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_StartQuestAsset(Z_Param_Asset,Z_Param_Out_bStarted,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execBP_StartQuest)
	{
		P_GET_OBJECT(UQuestBase,Z_Param_Asset);
		P_GET_UBOOL_REF(Z_Param_Out_bStarted);
		P_GET_OBJECT_REF(UQuestBase,Z_Param_Out_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_StartQuest(Z_Param_Asset,Z_Param_Out_bStarted,Z_Param_Out_Quest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execSetAsGlobalManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAsGlobalManager();
		P_NATIVE_END;
	}
	void UQuestManagerComponent::StaticRegisterNativesUQuestManagerComponent()
	{
		UClass* Class = UQuestManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_StartQuest", &UQuestManagerComponent::execBP_StartQuest },
			{ "BP_StartQuestAsset", &UQuestManagerComponent::execBP_StartQuestAsset },
			{ "CanStartQuest", &UQuestManagerComponent::execCanStartQuest },
			{ "DumpRecord", &UQuestManagerComponent::execDumpRecord },
			{ "FinishQuest", &UQuestManagerComponent::execFinishQuest },
			{ "ForgetAllMemories", &UQuestManagerComponent::execForgetAllMemories },
			{ "ForgetMemory", &UQuestManagerComponent::execForgetMemory },
			{ "GetCompletedQuests", &UQuestManagerComponent::execGetCompletedQuests },
			{ "GetMemoryCount", &UQuestManagerComponent::execGetMemoryCount },
			{ "GetQuestScript", &UQuestManagerComponent::execGetQuestScript },
			{ "GetQuestState", &UQuestManagerComponent::execGetQuestState },
			{ "GetRunningQuestGroups", &UQuestManagerComponent::execGetRunningQuestGroups },
			{ "GetRunningQuests", &UQuestManagerComponent::execGetRunningQuests },
			{ "IsCompleted", &UQuestManagerComponent::execIsCompleted },
			{ "IsFailed", &UQuestManagerComponent::execIsFailed },
			{ "IsFinished", &UQuestManagerComponent::execIsFinished },
			{ "IsInProgress", &UQuestManagerComponent::execIsInProgress },
			{ "IsMemoryRegistered", &UQuestManagerComponent::execIsMemoryRegistered },
			{ "IsNotStarted", &UQuestManagerComponent::execIsNotStarted },
			{ "RegistryMemories", &UQuestManagerComponent::execRegistryMemories },
			{ "RegistryMemory", &UQuestManagerComponent::execRegistryMemory },
			{ "Reset", &UQuestManagerComponent::execReset },
			{ "RestoreRecord", &UQuestManagerComponent::execRestoreRecord },
			{ "SetArgument", &UQuestManagerComponent::execSetArgument },
			{ "SetAsGlobalManager", &UQuestManagerComponent::execSetAsGlobalManager },
			{ "ShareQuest", &UQuestManagerComponent::execShareQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics
	{
		struct QuestManagerComponent_eventBP_StartQuest_Parms
		{
			const UQuestBase* Asset;
			bool bStarted;
			UQuestBase* Quest;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static void NewProp_bStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventBP_StartQuest_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_bStarted_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventBP_StartQuest_Parms*)Obj)->bStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_bStarted = { "bStarted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventBP_StartQuest_Parms), &Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_bStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventBP_StartQuest_Parms, Asset), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_bStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09 * Starts a quest\n\x09 * @param Asset Quest asset to be started\n\x09 * @param bStarted true if the quest started successfully\n\x09 * @param Quest The script of the started quest\n\x09 */" },
		{ "DisplayName", "Start Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Starts a quest\n@param Asset Quest asset to be started\n@param bStarted true if the quest started successfully\n@param Quest The script of the started quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "BP_StartQuest", nullptr, nullptr, sizeof(QuestManagerComponent_eventBP_StartQuest_Parms), Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics
	{
		struct QuestManagerComponent_eventBP_StartQuestAsset_Parms
		{
			TSoftObjectPtr<UQuestBase> Asset;
			bool bStarted;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static void NewProp_bStarted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventBP_StartQuestAsset_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_bStarted_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventBP_StartQuestAsset_Parms*)Obj)->bStarted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_bStarted = { "bStarted", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventBP_StartQuestAsset_Parms), &Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_bStarted_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventBP_StartQuestAsset_Parms, Asset), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_bStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09* Starts a quest by asset. Will be loaded if needed.\n\x09* @param Quest asset to be started\n\x09*/" },
		{ "DisplayName", "Start Quest Asset" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Starts a quest by asset. Will be loaded if needed.\n@param Quest asset to be started" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "BP_StartQuestAsset", nullptr, nullptr, sizeof(QuestManagerComponent_eventBP_StartQuestAsset_Parms), Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics
	{
		struct QuestManagerComponent_eventCanStartQuest_Parms
		{
			UQuestBase* Quest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventCanStartQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventCanStartQuest_Parms), &Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventCanStartQuest_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09* Checks if a Quest can be started\n\x09* @param Quest Asset or Quest Script\n\x09* @return true if the quest can be started\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Checks if a Quest can be started\n@param Quest Asset or Quest Script\n@return true if the quest can be started" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "CanStartQuest", nullptr, nullptr, sizeof(QuestManagerComponent_eventCanStartQuest_Parms), Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics
	{
		struct QuestManagerComponent_eventDumpRecord_Parms
		{
			FQuestManagerRecord Record;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Record;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics::NewProp_Record = { "Record", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventDumpRecord_Parms, Record), Z_Construct_UScriptStruct_FQuestManagerRecord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics::NewProp_Record,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/** Dump current quest manager state into a record. This record can be saved with SaveGame objects */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Dump current quest manager state into a record. This record can be saved with SaveGame objects" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "DumpRecord", nullptr, nullptr, sizeof(QuestManagerComponent_eventDumpRecord_Parms), Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_DumpRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_DumpRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics
	{
		struct QuestManagerComponent_eventFinishQuest_Parms
		{
			TSoftObjectPtr<UQuestBase> Asset;
			EQuestCompletionState State;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventFinishQuest_Parms, State), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_Asset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventFinishQuest_Parms, Asset), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09 * Finishes a quest\n\x09 * @param Quest Asset or Instance to finish\n\x09 */" },
		{ "CPP_Default_State", "Success" },
		{ "KeyWords", "Complete Fail" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Finishes a quest\n@param Quest Asset or Instance to finish" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "FinishQuest", nullptr, nullptr, sizeof(QuestManagerComponent_eventFinishQuest_Parms), Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_FinishQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_FinishQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics
	{
		struct QuestManagerComponent_eventForgetAllMemories_Parms
		{
			TSoftObjectPtr<UQuestMemory> Memory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Memory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::NewProp_Memory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventForgetAllMemories_Parms, Memory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::NewProp_Memory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::NewProp_Memory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::NewProp_Memory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/// Forgets all memories\n" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Forgets all memories" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "ForgetAllMemories", nullptr, nullptr, sizeof(QuestManagerComponent_eventForgetAllMemories_Parms), Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics
	{
		struct QuestManagerComponent_eventForgetMemory_Parms
		{
			TSoftObjectPtr<UQuestMemory> Memory;
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Memory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventForgetMemory_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::NewProp_Memory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventForgetMemory_Parms, Memory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::NewProp_Memory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::NewProp_Memory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::NewProp_Memory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/// Forgets an amount of memories. 1 by default\n" },
		{ "CPP_Default_Amount", "1" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Forgets an amount of memories. 1 by default" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "ForgetMemory", nullptr, nullptr, sizeof(QuestManagerComponent_eventForgetMemory_Parms), Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics
	{
		struct QuestManagerComponent_eventGetCompletedQuests_Parms
		{
			TArray<FQuestStateData> Quests;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Quests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quests_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventGetCompletedQuests_Parms, Quests), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::NewProp_Quests_Inner = { "Quests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestStateData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::NewProp_Quests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::NewProp_Quests_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09* @param Quest\n\x09* @return true if the quest is finished and failed\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "@param Quest\n@return true if the quest is finished and failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "GetCompletedQuests", nullptr, nullptr, sizeof(QuestManagerComponent_eventGetCompletedQuests_Parms), Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics
	{
		struct QuestManagerComponent_eventGetMemoryCount_Parms
		{
			TSoftObjectPtr<UQuestMemory> Memory;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Memory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventGetMemoryCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::NewProp_Memory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventGetMemoryCount_Parms, Memory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::NewProp_Memory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::NewProp_Memory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::NewProp_Memory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/// Returns the registered amount of a certain memory\n" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Returns the registered amount of a certain memory" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "GetMemoryCount", nullptr, nullptr, sizeof(QuestManagerComponent_eventGetMemoryCount_Parms), Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics
	{
		struct QuestManagerComponent_eventGetQuestScript_Parms
		{
			TSoftObjectPtr<UQuestBase> Quest;
			UQuestBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventGetQuestScript_Parms, ReturnValue), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventGetQuestScript_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09* Gets the script of an started Quest\n\x09* @param Quest\n\x09* @return the script of a Quest\n\x09*/" },
		{ "DeterminesOutputType", "Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Gets the script of an started Quest\n@param Quest\n@return the script of a Quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "GetQuestScript", nullptr, nullptr, sizeof(QuestManagerComponent_eventGetQuestScript_Parms), Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics
	{
		struct QuestManagerComponent_eventGetQuestState_Parms
		{
			TSoftObjectPtr<UQuestBase> Quest;
			EQuestCompletionState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventGetQuestState_Parms, ReturnValue), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventGetQuestState_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09 * Gets the state of a Quest\n\x09 * @param Quest\n\x09 * @return the state of a Quest\n\x09 */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Gets the state of a Quest\n@param Quest\n@return the state of a Quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "GetQuestState", nullptr, nullptr, sizeof(QuestManagerComponent_eventGetQuestState_Parms), Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_GetQuestState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_GetQuestState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics
	{
		struct QuestManagerComponent_eventGetRunningQuestGroups_Parms
		{
			TArray<UQuestGroup*> Quests;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Quests;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quests_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventGetRunningQuestGroups_Parms, Quests), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::NewProp_Quests_Inner = { "Quests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::NewProp_Quests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::NewProp_Quests_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09* @param Quest\n\x09* @return true if the quest is finished and failed\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "@param Quest\n@return true if the quest is finished and failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "GetRunningQuestGroups", nullptr, nullptr, sizeof(QuestManagerComponent_eventGetRunningQuestGroups_Parms), Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics
	{
		struct QuestManagerComponent_eventGetRunningQuests_Parms
		{
			TArray<FRuntimeQuest> Quests;
			bool bIncludeQuestGroups;
		};
		static void NewProp_bIncludeQuestGroups_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIncludeQuestGroups;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Quests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Quests_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::NewProp_bIncludeQuestGroups_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventGetRunningQuests_Parms*)Obj)->bIncludeQuestGroups = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::NewProp_bIncludeQuestGroups = { "bIncludeQuestGroups", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventGetRunningQuests_Parms), &Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::NewProp_bIncludeQuestGroups_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventGetRunningQuests_Parms, Quests), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::NewProp_Quests_Inner = { "Quests", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRuntimeQuest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::NewProp_bIncludeQuestGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::NewProp_Quests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::NewProp_Quests_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09* @param IncludeQuestGroups includes QuestGroups in the result\n\x09* @return Quests currently running\n\x09* @Note: This function will be more performant with IncludeQuestGroups checked\n\x09*/" },
		{ "CPP_Default_bIncludeQuestGroups", "true" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "@param IncludeQuestGroups includes QuestGroups in the result\n@return Quests currently running\n@Note: This function will be more performant with IncludeQuestGroups checked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "GetRunningQuests", nullptr, nullptr, sizeof(QuestManagerComponent_eventGetRunningQuests_Parms), Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics
	{
		struct QuestManagerComponent_eventIsCompleted_Parms
		{
			TSoftObjectPtr<UQuestBase> Quest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventIsCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventIsCompleted_Parms), &Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventIsCompleted_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09 * Returns true if the quest is finished and completed\n\x09 * @param Quest\n\x09 */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Returns true if the quest is finished and completed\n@param Quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "IsCompleted", nullptr, nullptr, sizeof(QuestManagerComponent_eventIsCompleted_Parms), Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_IsCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_IsCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics
	{
		struct QuestManagerComponent_eventIsFailed_Parms
		{
			TSoftObjectPtr<UQuestBase> Quest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventIsFailed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventIsFailed_Parms), &Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventIsFailed_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09 * @param Quest\n\x09 * @return true if the quest is finished and failed\n\x09 */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "@param Quest\n@return true if the quest is finished and failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "IsFailed", nullptr, nullptr, sizeof(QuestManagerComponent_eventIsFailed_Parms), Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_IsFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_IsFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics
	{
		struct QuestManagerComponent_eventIsFinished_Parms
		{
			TSoftObjectPtr<UQuestBase> Quest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventIsFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventIsFinished_Parms), &Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventIsFinished_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09 * Returns true if the quest is finished\n\x09 * @param Quest\n\x09 */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Returns true if the quest is finished\n@param Quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "IsFinished", nullptr, nullptr, sizeof(QuestManagerComponent_eventIsFinished_Parms), Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_IsFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_IsFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics
	{
		struct QuestManagerComponent_eventIsInProgress_Parms
		{
			TSoftObjectPtr<UQuestBase> Quest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventIsInProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventIsInProgress_Parms), &Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventIsInProgress_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09 * Returns true if the quest is in progress\n\x09 * @param Quest\n\x09 */" },
		{ "KeyWords", "Running" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Returns true if the quest is in progress\n@param Quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "IsInProgress", nullptr, nullptr, sizeof(QuestManagerComponent_eventIsInProgress_Parms), Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_IsInProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_IsInProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics
	{
		struct QuestManagerComponent_eventIsMemoryRegistered_Parms
		{
			TSoftObjectPtr<UQuestMemory> Memory;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Memory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventIsMemoryRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventIsMemoryRegistered_Parms), &Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::NewProp_Memory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventIsMemoryRegistered_Parms, Memory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::NewProp_Memory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::NewProp_Memory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::NewProp_Memory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/// Checks if there are 1 or more memories registered\n" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Checks if there are 1 or more memories registered" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "IsMemoryRegistered", nullptr, nullptr, sizeof(QuestManagerComponent_eventIsMemoryRegistered_Parms), Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics
	{
		struct QuestManagerComponent_eventIsNotStarted_Parms
		{
			TSoftObjectPtr<UQuestBase> Quest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventIsNotStarted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventIsNotStarted_Parms), &Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventIsNotStarted_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09 * Returns true if the quest is started\n\x09 * @param Quest\n\x09 */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Returns true if the quest is started\n@param Quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "IsNotStarted", nullptr, nullptr, sizeof(QuestManagerComponent_eventIsNotStarted_Parms), Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics
	{
		struct QuestManagerComponent_eventRegistryMemories_Parms
		{
			TSoftObjectPtr<UQuestMemory> Memory;
			int32 Amount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Memory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventRegistryMemories_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::NewProp_Memory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventRegistryMemories_Parms, Memory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::NewProp_Memory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::NewProp_Memory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::NewProp_Memory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/* Registry a memory 'amount' times. If it already is, count will be incremented by 'amount' */" },
		{ "CPP_Default_Amount", "1" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Registry a memory 'amount' times. If it already is, count will be incremented by 'amount'" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "RegistryMemories", nullptr, nullptr, sizeof(QuestManagerComponent_eventRegistryMemories_Parms), Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics
	{
		struct QuestManagerComponent_eventRegistryMemory_Parms
		{
			TSoftObjectPtr<UQuestMemory> Memory;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memory_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Memory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::NewProp_Memory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::NewProp_Memory = { "Memory", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventRegistryMemory_Parms, Memory), Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::NewProp_Memory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::NewProp_Memory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::NewProp_Memory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/* Registry a single memory. If it already is, count will be incremented by 1 */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Registry a single memory. If it already is, count will be incremented by 1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "RegistryMemory", nullptr, nullptr, sizeof(QuestManagerComponent_eventRegistryMemory_Parms), Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/** Resets this Quest Manager's state to default removing all its quests */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Resets this Quest Manager's state to default removing all its quests" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics
	{
		struct QuestManagerComponent_eventRestoreRecord_Parms
		{
			FQuestManagerRecord Record;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Record_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Record;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestManagerComponent_eventRestoreRecord_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestManagerComponent_eventRestoreRecord_Parms), &Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::NewProp_Record_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::NewProp_Record = { "Record", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventRestoreRecord_Parms, Record), Z_Construct_UScriptStruct_FQuestManagerRecord, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::NewProp_Record_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::NewProp_Record_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::NewProp_Record,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/** Restores a saved quest manager state from the record */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Restores a saved quest manager state from the record" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "RestoreRecord", nullptr, nullptr, sizeof(QuestManagerComponent_eventRestoreRecord_Parms), Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics
	{
		struct QuestManagerComponent_eventSetArgument_Parms
		{
			FName Name;
			FQuestTextArgument Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventSetArgument_Parms, Value), Z_Construct_UScriptStruct_FQuestTextArgument, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventSetArgument_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/** Set a text argument in runtime */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Set a text argument in runtime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "SetArgument", nullptr, nullptr, sizeof(QuestManagerComponent_eventSetArgument_Parms), Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_SetArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_SetArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_SetAsGlobalManager_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_SetAsGlobalManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/** Sets this manager as the global manager */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Sets this manager as the global manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_SetAsGlobalManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "SetAsGlobalManager", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_SetAsGlobalManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_SetAsGlobalManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_SetAsGlobalManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_SetAsGlobalManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics
	{
		struct QuestManagerComponent_eventShareQuest_Parms
		{
			UQuestManagerComponent* OtherManager;
			TSoftObjectPtr<UQuestBase> Quest;
			EQuestShareCompleteMode CompleteMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CompleteMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompleteMode_Underlying;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_CompleteMode = { "CompleteMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventShareQuest_Parms, CompleteMode), Z_Construct_UEnum_QuestExtension_EQuestShareCompleteMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_CompleteMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventShareQuest_Parms, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_OtherManager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_OtherManager = { "OtherManager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestManagerComponent_eventShareQuest_Parms, OtherManager), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_OtherManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_OtherManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_CompleteMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_CompleteMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::NewProp_OtherManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "Comment", "/**\n\x09* Starts a quest\n\x09* @param OtherManager asset to be started\n\x09* @param Quest asset to be started\n\x09* @return the quest started\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Starts a quest\n@param OtherManager asset to be started\n@param Quest asset to be started\n@return the quest started" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "ShareQuest", nullptr, nullptr, sizeof(QuestManagerComponent_eventShareQuest_Parms), Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_ShareQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_ShareQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister()
	{
		return UQuestManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestManagerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMemoryForgotten_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemoryForgotten;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnMemoryRegistered_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMemoryRegistered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQuestFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnQuestStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Arguments;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Arguments_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arguments_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletedQuests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompletedQuests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompletedQuests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningQuests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RunningQuests;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunningQuests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestTypeFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_QuestTypeFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memories_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Memories;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Memories_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultQuests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultQuests;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultQuests_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuest, "BP_StartQuest" }, // 104230041
		{ &Z_Construct_UFunction_UQuestManagerComponent_BP_StartQuestAsset, "BP_StartQuestAsset" }, // 3399886471
		{ &Z_Construct_UFunction_UQuestManagerComponent_CanStartQuest, "CanStartQuest" }, // 603287314
		{ &Z_Construct_UFunction_UQuestManagerComponent_DumpRecord, "DumpRecord" }, // 4129351098
		{ &Z_Construct_UFunction_UQuestManagerComponent_FinishQuest, "FinishQuest" }, // 1088719213
		{ &Z_Construct_UFunction_UQuestManagerComponent_ForgetAllMemories, "ForgetAllMemories" }, // 2749721990
		{ &Z_Construct_UFunction_UQuestManagerComponent_ForgetMemory, "ForgetMemory" }, // 3947713881
		{ &Z_Construct_UFunction_UQuestManagerComponent_GetCompletedQuests, "GetCompletedQuests" }, // 2558678120
		{ &Z_Construct_UFunction_UQuestManagerComponent_GetMemoryCount, "GetMemoryCount" }, // 95581366
		{ &Z_Construct_UFunction_UQuestManagerComponent_GetQuestScript, "GetQuestScript" }, // 853219811
		{ &Z_Construct_UFunction_UQuestManagerComponent_GetQuestState, "GetQuestState" }, // 4039411242
		{ &Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuestGroups, "GetRunningQuestGroups" }, // 2398156643
		{ &Z_Construct_UFunction_UQuestManagerComponent_GetRunningQuests, "GetRunningQuests" }, // 2547079977
		{ &Z_Construct_UFunction_UQuestManagerComponent_IsCompleted, "IsCompleted" }, // 713616728
		{ &Z_Construct_UFunction_UQuestManagerComponent_IsFailed, "IsFailed" }, // 1522340905
		{ &Z_Construct_UFunction_UQuestManagerComponent_IsFinished, "IsFinished" }, // 910126198
		{ &Z_Construct_UFunction_UQuestManagerComponent_IsInProgress, "IsInProgress" }, // 1505640171
		{ &Z_Construct_UFunction_UQuestManagerComponent_IsMemoryRegistered, "IsMemoryRegistered" }, // 3680605760
		{ &Z_Construct_UFunction_UQuestManagerComponent_IsNotStarted, "IsNotStarted" }, // 4120147091
		{ &Z_Construct_UFunction_UQuestManagerComponent_RegistryMemories, "RegistryMemories" }, // 2577398282
		{ &Z_Construct_UFunction_UQuestManagerComponent_RegistryMemory, "RegistryMemory" }, // 3030284575
		{ &Z_Construct_UFunction_UQuestManagerComponent_Reset, "Reset" }, // 161541831
		{ &Z_Construct_UFunction_UQuestManagerComponent_RestoreRecord, "RestoreRecord" }, // 2887653750
		{ &Z_Construct_UFunction_UQuestManagerComponent_SetArgument, "SetArgument" }, // 2814863294
		{ &Z_Construct_UFunction_UQuestManagerComponent_SetAsGlobalManager, "SetAsGlobalManager" }, // 4282595049
		{ &Z_Construct_UFunction_UQuestManagerComponent_ShareQuest, "ShareQuest" }, // 2618564275
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Narrative" },
		{ "Comment", "/**\n * Quest Manager Component\n * In charge of controlling all quest states and memories.\n */" },
		{ "IncludePath", "Quests/QuestManagerComponent.h" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Quest Manager Component\nIn charge of controlling all quest states and memories." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnMemoryForgotten_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnMemoryForgotten = { "OnMemoryForgotten", nullptr, (EPropertyFlags)0x0010000011080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManagerComponent, OnMemoryForgotten), Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnMemoryForgotten_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnMemoryForgotten_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnMemoryRegistered_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnMemoryRegistered = { "OnMemoryRegistered", nullptr, (EPropertyFlags)0x0010000011080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManagerComponent, OnMemoryRegistered), Z_Construct_UDelegateFunction_QuestExtension_MemoryDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnMemoryRegistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnMemoryRegistered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestFinished_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestFinished = { "OnQuestFinished", nullptr, (EPropertyFlags)0x0010000011080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManagerComponent, OnQuestFinished), Z_Construct_UDelegateFunction_QuestExtension_AnyQuestFinishedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestStarted_MetaData[] = {
		{ "Comment", "//Delegates\n" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestStarted = { "OnQuestStarted", nullptr, (EPropertyFlags)0x0010000011080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManagerComponent, OnQuestStarted), Z_Construct_UDelegateFunction_QuestExtension_AnyQuestStartedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Arguments_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Arguments to be replaced in quest texts */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "Arguments to be replaced in quest texts" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x0020080001000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManagerComponent, Arguments), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Arguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Arguments_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Arguments_Key_KeyProp = { "Arguments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Arguments_ValueProp = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FQuestTextArgument, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_CompletedQuests_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_CompletedQuests = { "CompletedQuests", nullptr, (EPropertyFlags)0x0020080001020021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManagerComponent, CompletedQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_CompletedQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_CompletedQuests_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_CompletedQuests_Inner = { "CompletedQuests", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestStateData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_RunningQuests_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_RunningQuests = { "RunningQuests", nullptr, (EPropertyFlags)0x0020080000020021, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManagerComponent, RunningQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_RunningQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_RunningQuests_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_RunningQuests_Inner = { "RunningQuests", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestTypeFilter_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "Comment", "/** If set, only Quests of this type (and QuestGroups) will be allowed to be started */" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
		{ "ToolTip", "If set, only Quests of this type (and QuestGroups) will be allowed to be started" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestTypeFilter = { "QuestTypeFilter", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManagerComponent, QuestTypeFilter), Z_Construct_UClass_UQuest_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestTypeFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestTypeFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Memories_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "DisplayName", "Default Memories" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Memories = { "Memories", nullptr, (EPropertyFlags)0x0020080001000021, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManagerComponent, Memories), METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Memories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Memories_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Memories_ElementProp = { "Memories", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMemoryStack, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_DefaultQuests_MetaData[] = {
		{ "Category", "QuestManager" },
		{ "ModuleRelativePath", "Public/Quests/QuestManagerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_DefaultQuests = { "DefaultQuests", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestManagerComponent, DefaultQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_DefaultQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_DefaultQuests_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_DefaultQuests_Inner = { "DefaultQuests", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestManagerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnMemoryForgotten,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnMemoryRegistered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Arguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Arguments_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Arguments_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_CompletedQuests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_CompletedQuests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_RunningQuests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_RunningQuests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestTypeFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Memories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_Memories_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_DefaultQuests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_DefaultQuests_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestManagerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestManagerComponent_Statics::ClassParams = {
		&UQuestManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestManagerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestManagerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestManagerComponent, 4035387797);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuestManagerComponent>()
	{
		return UQuestManagerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestManagerComponent(Z_Construct_UClass_UQuestManagerComponent, &UQuestManagerComponent::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuestManagerComponent"), false, nullptr, nullptr, nullptr);

	void UQuestManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Memories(TEXT("Memories"));
		static const FName Name_RunningQuests(TEXT("RunningQuests"));
		static const FName Name_CompletedQuests(TEXT("CompletedQuests"));

		const bool bIsValid = true
			&& Name_Memories == ClassReps[(int32)ENetFields_Private::Memories].Property->GetFName()
			&& Name_RunningQuests == ClassReps[(int32)ENetFields_Private::RunningQuests].Property->GetFName()
			&& Name_CompletedQuests == ClassReps[(int32)ENetFields_Private::CompletedQuests].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UQuestManagerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestManagerComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UQuestManagerComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
