// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QuestBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestBase() {}
// Cross Module References
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestCompletionState();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestPhaseResult();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestMemory_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UBpPrimaryDataAsset();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestGroup_NoRegister();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTextArgument();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestSubScript_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UConditionContainer_NoRegister();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FSharedQuest();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeQuest();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics
	{
		struct _Script_QuestExtension_eventQuestFinishedDelegate_Parms
		{
			EQuestCompletionState State;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestExtension_eventQuestFinishedDelegate_Parms, State), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::NewProp_State_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestExtension, nullptr, "QuestFinishedDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_QuestExtension_eventQuestFinishedDelegate_Parms), Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestExtension, nullptr, "QuestStartedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EQuestCompletionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_QuestExtension_EQuestCompletionState, Z_Construct_UPackage__Script_QuestExtension(), TEXT("EQuestCompletionState"));
		}
		return Singleton;
	}
	template<> QUESTEXTENSION_API UEnum* StaticEnum<EQuestCompletionState>()
	{
		return EQuestCompletionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestCompletionState(EQuestCompletionState_StaticEnum, TEXT("/Script/QuestExtension"), TEXT("EQuestCompletionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_QuestExtension_EQuestCompletionState_Hash() { return 3757704647U; }
	UEnum* Z_Construct_UEnum_QuestExtension_EQuestCompletionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestCompletionState"), 0, Get_Z_Construct_UEnum_QuestExtension_EQuestCompletionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestCompletionState::NotStarted", (int64)EQuestCompletionState::NotStarted },
				{ "EQuestCompletionState::InProgress", (int64)EQuestCompletionState::InProgress },
				{ "EQuestCompletionState::Success", (int64)EQuestCompletionState::Success },
				{ "EQuestCompletionState::Failed", (int64)EQuestCompletionState::Failed },
				{ "EQuestCompletionState::None", (int64)EQuestCompletionState::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed.Comment", "// Quest phase is completed successfully\n" },
				{ "Failed.Name", "EQuestCompletionState::Failed" },
				{ "Failed.ToolTip", "Quest phase is completed successfully" },
				{ "InProgress.Comment", "// Quest phase is not started\n" },
				{ "InProgress.Name", "EQuestCompletionState::InProgress" },
				{ "InProgress.ToolTip", "Quest phase is not started" },
				{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
				{ "None.Comment", "// Quest phase is failed\n" },
				{ "None.hidden", "" },
				{ "None.Name", "EQuestCompletionState::None" },
				{ "None.ToolTip", "Quest phase is failed" },
				{ "NotStarted.Name", "EQuestCompletionState::NotStarted" },
				{ "Success.Comment", "// Quest phase is in progress\n" },
				{ "Success.Name", "EQuestCompletionState::Success" },
				{ "Success.ToolTip", "Quest phase is in progress" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_QuestExtension,
				nullptr,
				"EQuestCompletionState",
				"EQuestCompletionState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FQuestPhaseResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUESTEXTENSION_API uint32 Get_Z_Construct_UScriptStruct_FQuestPhaseResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestPhaseResult, Z_Construct_UPackage__Script_QuestExtension(), TEXT("QuestPhaseResult"), sizeof(FQuestPhaseResult), Get_Z_Construct_UScriptStruct_FQuestPhaseResult_Hash());
	}
	return Singleton;
}
template<> QUESTEXTENSION_API UScriptStruct* StaticStruct<FQuestPhaseResult>()
{
	return FQuestPhaseResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestPhaseResult(FQuestPhaseResult::StaticStruct, TEXT("/Script/QuestExtension"), TEXT("QuestPhaseResult"), false, nullptr, nullptr);
static struct FScriptStruct_QuestExtension_StaticRegisterNativesFQuestPhaseResult
{
	FScriptStruct_QuestExtension_StaticRegisterNativesFQuestPhaseResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestPhaseResult")),new UScriptStruct::TCppStructOps<FQuestPhaseResult>);
	}
} ScriptStruct_QuestExtension_StaticRegisterNativesFQuestPhaseResult;
	struct Z_Construct_UScriptStruct_FQuestPhaseResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyMemories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ApplyMemories;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ApplyMemories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartQuests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartQuests;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_StartQuests_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines the consequences of finishing a quest phase\n */" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "Defines the consequences of finishing a quest phase" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestPhaseResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_ApplyMemories_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_ApplyMemories = { "ApplyMemories", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestPhaseResult, ApplyMemories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_ApplyMemories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_ApplyMemories_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_ApplyMemories_Inner = { "ApplyMemories", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestMemory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_StartQuests_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_StartQuests = { "StartQuests", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestPhaseResult, StartQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_StartQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_StartQuests_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_StartQuests_Inner = { "StartQuests", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_ApplyMemories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_ApplyMemories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_StartQuests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::NewProp_StartQuests_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
		nullptr,
		&NewStructOps,
		"QuestPhaseResult",
		sizeof(FQuestPhaseResult),
		alignof(FQuestPhaseResult),
		Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestPhaseResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestPhaseResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestPhaseResult"), sizeof(FQuestPhaseResult), Get_Z_Construct_UScriptStruct_FQuestPhaseResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestPhaseResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestPhaseResult_Hash() { return 1542902615U; }
	DEFINE_FUNCTION(UQuestBase::execGetRootQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestBase**)Z_Param__Result=P_THIS->GetRootQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execGetParentQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestBase**)Z_Param__Result=P_THIS->GetParentQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execIsShared)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShared();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execIsShareable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsShareable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execEquals)
	{
		P_GET_OBJECT(UQuestBase,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equals(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execEqualsAsset)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_Other);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EqualsAsset(Z_Param_Other);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execGetAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UQuestBase>*)Z_Param__Result=P_THIS->GetAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execGetRootQuestGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestGroup**)Z_Param__Result=P_THIS->GetRootQuestGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execGetParentQuestGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestGroup**)Z_Param__Result=P_THIS->GetParentQuestGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execGetManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestManagerComponent**)Z_Param__Result=P_THIS->GetManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execSetArgument)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_STRUCT_REF(FQuestTextArgument,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArgument(Z_Param_Name,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execFormatText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_RawText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->FormatText(Z_Param_Out_RawText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestBase::execGetTitle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTitle();
		P_NATIVE_END;
	}
	void UQuestBase::StaticRegisterNativesUQuestBase()
	{
		UClass* Class = UQuestBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Equals", &UQuestBase::execEquals },
			{ "EqualsAsset", &UQuestBase::execEqualsAsset },
			{ "FormatText", &UQuestBase::execFormatText },
			{ "GetAsset", &UQuestBase::execGetAsset },
			{ "GetDescription", &UQuestBase::execGetDescription },
			{ "GetManager", &UQuestBase::execGetManager },
			{ "GetParentQuest", &UQuestBase::execGetParentQuest },
			{ "GetParentQuestGroup", &UQuestBase::execGetParentQuestGroup },
			{ "GetRootQuest", &UQuestBase::execGetRootQuest },
			{ "GetRootQuestGroup", &UQuestBase::execGetRootQuestGroup },
			{ "GetTitle", &UQuestBase::execGetTitle },
			{ "IsShareable", &UQuestBase::execIsShareable },
			{ "IsShared", &UQuestBase::execIsShared },
			{ "SetArgument", &UQuestBase::execSetArgument },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestBase_Equals_Statics
	{
		struct QuestBase_eventEquals_Parms
		{
			const UQuestBase* Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Other_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestBase_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestBase_eventEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestBase_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestBase_eventEquals_Parms), &Z_Construct_UFunction_UQuestBase_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_Equals_Statics::NewProp_Other_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_Equals_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventEquals_Parms, Other), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_Equals_Statics::NewProp_Other_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_Equals_Statics::NewProp_Other_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_Equals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_Equals_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_Equals_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest|Properties" },
		{ "Comment", "/** Check if this Quest equals another Quest by ID */" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "Check if this Quest equals another Quest by ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "Equals", nullptr, nullptr, sizeof(QuestBase_eventEquals_Parms), Z_Construct_UFunction_UQuestBase_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics
	{
		struct QuestBase_eventEqualsAsset_Parms
		{
			TSoftObjectPtr<UQuestBase> Other;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Other;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestBase_eventEqualsAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestBase_eventEqualsAsset_Parms), &Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventEqualsAsset_Parms, Other), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::NewProp_Other,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest|Properties" },
		{ "Comment", "/** Check if this Quest equals another Quest by ID */" },
		{ "DisplayName", "Equals(asset)" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "Check if this Quest equals another Quest by ID" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "EqualsAsset", nullptr, nullptr, sizeof(QuestBase_eventEqualsAsset_Parms), Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_EqualsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_EqualsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_FormatText_Statics
	{
		struct QuestBase_eventFormatText_Parms
		{
			FText RawText;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RawText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_FormatText_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuestBase_FormatText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventFormatText_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_FormatText_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_FormatText_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_FormatText_Statics::NewProp_RawText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuestBase_FormatText_Statics::NewProp_RawText = { "RawText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventFormatText_Parms, RawText), METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_FormatText_Statics::NewProp_RawText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_FormatText_Statics::NewProp_RawText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_FormatText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_FormatText_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_FormatText_Statics::NewProp_RawText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_FormatText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_FormatText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "FormatText", nullptr, nullptr, sizeof(QuestBase_eventFormatText_Parms), Z_Construct_UFunction_UQuestBase_FormatText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_FormatText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_FormatText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_FormatText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_FormatText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_FormatText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_GetAsset_Statics
	{
		struct QuestBase_eventGetAsset_Parms
		{
			TSoftObjectPtr<UQuestBase> ReturnValue;
		};
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestBase_GetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventGetAsset_Parms, ReturnValue), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_GetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest|Properties" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetAsset", nullptr, nullptr, sizeof(QuestBase_eventGetAsset_Parms), Z_Construct_UFunction_UQuestBase_GetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_GetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_GetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_GetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_GetDescription_Statics
	{
		struct QuestBase_eventGetDescription_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuestBase_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetDescription", nullptr, nullptr, sizeof(QuestBase_eventGetDescription_Parms), Z_Construct_UFunction_UQuestBase_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_GetManager_Statics
	{
		struct QuestBase_eventGetManager_Parms
		{
			UQuestManagerComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_GetManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_GetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventGetManager_Parms, ReturnValue), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_GetManager_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetManager_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_GetManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetManager", nullptr, nullptr, sizeof(QuestBase_eventGetManager_Parms), Z_Construct_UFunction_UQuestBase_GetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_GetManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_GetManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_GetManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics
	{
		struct QuestBase_eventGetParentQuest_Parms
		{
			UQuestBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventGetParentQuest_Parms, ReturnValue), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "/************************************************************************/" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetParentQuestGroup instead" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetParentQuest", nullptr, nullptr, sizeof(QuestBase_eventGetParentQuest_Parms), Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_GetParentQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_GetParentQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics
	{
		struct QuestBase_eventGetParentQuestGroup_Parms
		{
			UQuestGroup* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventGetParentQuestGroup_Parms, ReturnValue), Z_Construct_UClass_UQuestGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "/** @return the quest group containing this quest, if any */" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "@return the quest group containing this quest, if any" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetParentQuestGroup", nullptr, nullptr, sizeof(QuestBase_eventGetParentQuestGroup_Parms), Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_GetParentQuestGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_GetParentQuestGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics
	{
		struct QuestBase_eventGetRootQuest_Parms
		{
			UQuestBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventGetRootQuest_Parms, ReturnValue), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use GetRootQuestGroup instead" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetRootQuest", nullptr, nullptr, sizeof(QuestBase_eventGetRootQuest_Parms), Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_GetRootQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_GetRootQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics
	{
		struct QuestBase_eventGetRootQuestGroup_Parms
		{
			UQuestGroup* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventGetRootQuestGroup_Parms, ReturnValue), Z_Construct_UClass_UQuestGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "/** @return the first quest group running this quest */" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "@return the first quest group running this quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetRootQuestGroup", nullptr, nullptr, sizeof(QuestBase_eventGetRootQuestGroup_Parms), Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_GetRootQuestGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_GetRootQuestGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_GetTitle_Statics
	{
		struct QuestBase_eventGetTitle_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuestBase_GetTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventGetTitle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_GetTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_GetTitle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_GetTitle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_GetTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "GetTitle", nullptr, nullptr, sizeof(QuestBase_eventGetTitle_Parms), Z_Construct_UFunction_UQuestBase_GetTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_GetTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_GetTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_GetTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_GetTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_IsShareable_Statics
	{
		struct QuestBase_eventIsShareable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestBase_IsShareable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestBase_eventIsShareable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestBase_IsShareable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestBase_eventIsShareable_Parms), &Z_Construct_UFunction_UQuestBase_IsShareable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_IsShareable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_IsShareable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_IsShareable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest|Properties" },
		{ "Comment", "/** Check if this quest can be shared */" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "Check if this quest can be shared" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_IsShareable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "IsShareable", nullptr, nullptr, sizeof(QuestBase_eventIsShareable_Parms), Z_Construct_UFunction_UQuestBase_IsShareable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_IsShareable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_IsShareable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_IsShareable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_IsShareable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_IsShareable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_IsShared_Statics
	{
		struct QuestBase_eventIsShared_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestBase_IsShared_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestBase_eventIsShared_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestBase_IsShared_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestBase_eventIsShared_Parms), &Z_Construct_UFunction_UQuestBase_IsShared_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_IsShared_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_IsShared_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_IsShared_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest|Properties" },
		{ "Comment", "/** Check if this Quest is shared from another Quest Manager */" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "Check if this Quest is shared from another Quest Manager" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_IsShared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "IsShared", nullptr, nullptr, sizeof(QuestBase_eventIsShared_Parms), Z_Construct_UFunction_UQuestBase_IsShared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_IsShared_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_IsShared_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_IsShared_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_IsShared()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_IsShared_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestBase_SetArgument_Statics
	{
		struct QuestBase_eventSetArgument_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_SetArgument_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestBase_SetArgument_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventSetArgument_Parms, Value), Z_Construct_UScriptStruct_FQuestTextArgument, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_SetArgument_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_SetArgument_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQuestBase_SetArgument_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestBase_eventSetArgument_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestBase_SetArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_SetArgument_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestBase_SetArgument_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestBase_SetArgument_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "/** Set a text argument in runtime */" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "Set a text argument in runtime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestBase_SetArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestBase, nullptr, "SetArgument", nullptr, nullptr, sizeof(QuestBase_eventSetArgument_Parms), Z_Construct_UFunction_UQuestBase_SetArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_SetArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestBase_SetArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestBase_SetArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestBase_SetArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestBase_SetArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestBase_NoRegister()
	{
		return UQuestBase::StaticClass();
	}
	struct Z_Construct_UClass_UQuestBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubScripts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SubScripts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubScripts_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubScripts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRequirements_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartRequirements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedChildrens_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SharedChildrens;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedChildrens_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Arguments_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Arguments;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Arguments_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Arguments_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeShared_MetaData[];
#endif
		static void NewProp_bCanBeShared_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeShared;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanStartAfterComplete_MetaData[];
#endif
		static void NewProp_bCanStartAfterComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanStartAfterComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBpPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestBase_Equals, "Equals" }, // 1716248541
		{ &Z_Construct_UFunction_UQuestBase_EqualsAsset, "EqualsAsset" }, // 3989705038
		{ &Z_Construct_UFunction_UQuestBase_FormatText, "FormatText" }, // 1384514773
		{ &Z_Construct_UFunction_UQuestBase_GetAsset, "GetAsset" }, // 1059587101
		{ &Z_Construct_UFunction_UQuestBase_GetDescription, "GetDescription" }, // 4093631420
		{ &Z_Construct_UFunction_UQuestBase_GetManager, "GetManager" }, // 3246286808
		{ &Z_Construct_UFunction_UQuestBase_GetParentQuest, "GetParentQuest" }, // 3784324621
		{ &Z_Construct_UFunction_UQuestBase_GetParentQuestGroup, "GetParentQuestGroup" }, // 2510038777
		{ &Z_Construct_UFunction_UQuestBase_GetRootQuest, "GetRootQuest" }, // 2120936394
		{ &Z_Construct_UFunction_UQuestBase_GetRootQuestGroup, "GetRootQuestGroup" }, // 3483573189
		{ &Z_Construct_UFunction_UQuestBase_GetTitle, "GetTitle" }, // 2393462008
		{ &Z_Construct_UFunction_UQuestBase_IsShareable, "IsShareable" }, // 2566789681
		{ &Z_Construct_UFunction_UQuestBase_IsShared, "IsShared" }, // 2117506501
		{ &Z_Construct_UFunction_UQuestBase_SetArgument, "SetArgument" }, // 1800774971
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Quests/QuestBase.h" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000011080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, OnFinish), Z_Construct_UDelegateFunction_QuestExtension_QuestFinishedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_OnFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_OnFinish_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_OnStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_OnStart = { "OnStart", nullptr, (EPropertyFlags)0x0010000011080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, OnStart), Z_Construct_UDelegateFunction_QuestExtension_QuestStartedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_OnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_OnStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_ParentQuest_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_ParentQuest = { "ParentQuest", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, ParentQuest), Z_Construct_UClass_UQuestGroup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_ParentQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_ParentQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0020080001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, OnFailure), Z_Construct_UScriptStruct_FQuestPhaseResult, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_OnComplete_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0020080001000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, OnComplete), Z_Construct_UScriptStruct_FQuestPhaseResult, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_SubScripts_MetaData[] = {
		{ "Category", "Quest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_SubScripts = { "SubScripts", nullptr, (EPropertyFlags)0x0020088001000029, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, SubScripts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_SubScripts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_SubScripts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_SubScripts_Inner_MetaData[] = {
		{ "Category", "Quest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_SubScripts_Inner = { "SubScripts", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestSubScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_SubScripts_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_SubScripts_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_StartRequirements_MetaData[] = {
		{ "Category", "Quest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_StartRequirements = { "StartRequirements", nullptr, (EPropertyFlags)0x0022080001080829, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, StartRequirements), Z_Construct_UClass_UConditionContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_StartRequirements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_StartRequirements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedChildrens_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedChildrens = { "SharedChildrens", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, SharedChildrens), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedChildrens_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedChildrens_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedChildrens_Inner = { "SharedChildrens", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSharedQuest, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedOwner = { "SharedOwner", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, SharedOwner), Z_Construct_UScriptStruct_FSharedQuest, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_RuntimeInfo_MetaData[] = {
		{ "Comment", "/**\n\x09 * Quest Script Properties\n\x09 */" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "Quest Script Properties" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_RuntimeInfo = { "RuntimeInfo", nullptr, (EPropertyFlags)0x0020088001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, RuntimeInfo), Z_Construct_UScriptStruct_FRuntimeQuest, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_RuntimeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_RuntimeInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_Arguments_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Arguments to be replaced in quest texts. These have priority over Manager arguments. */" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "Arguments to be replaced in quest texts. These have priority over Manager arguments." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_Arguments = { "Arguments", nullptr, (EPropertyFlags)0x00200c0000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, Arguments), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_Arguments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_Arguments_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_Arguments_Key_KeyProp = { "Arguments_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_Arguments_ValueProp = { "Arguments", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FQuestTextArgument, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, Description), METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestBase, Title), METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanBeShared_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
	};
#endif
	void Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanBeShared_SetBit(void* Obj)
	{
		((UQuestBase*)Obj)->bCanBeShared = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanBeShared = { "bCanBeShared", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuestBase), &Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanBeShared_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanBeShared_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanBeShared_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanStartAfterComplete_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "/**\n\x09* Quest Asset Properties\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quests/QuestBase.h" },
		{ "ToolTip", "Quest Asset Properties" },
	};
#endif
	void Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanStartAfterComplete_SetBit(void* Obj)
	{
		((UQuestBase*)Obj)->bCanStartAfterComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanStartAfterComplete = { "bCanStartAfterComplete", nullptr, (EPropertyFlags)0x0020080000014001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuestBase), &Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanStartAfterComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanStartAfterComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanStartAfterComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_OnFinish,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_OnStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_ParentQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_SubScripts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_SubScripts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_StartRequirements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedChildrens,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedChildrens_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_SharedOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_RuntimeInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_Arguments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_Arguments_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_Arguments_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanBeShared,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestBase_Statics::NewProp_bCanStartAfterComplete,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestBase_Statics::ClassParams = {
		&UQuestBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestBase, 340796396);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuestBase>()
	{
		return UQuestBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestBase(Z_Construct_UClass_UQuestBase, &UQuestBase::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuestBase"), false, nullptr, nullptr, nullptr);

	void UQuestBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StartRequirements(TEXT("StartRequirements"));
		static const FName Name_SubScripts(TEXT("SubScripts"));

		const bool bIsValid = true
			&& Name_StartRequirements == ClassReps[(int32)ENetFields_Private::StartRequirements].Property->GetFName()
			&& Name_SubScripts == ClassReps[(int32)ENetFields_Private::SubScripts].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UQuestBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
