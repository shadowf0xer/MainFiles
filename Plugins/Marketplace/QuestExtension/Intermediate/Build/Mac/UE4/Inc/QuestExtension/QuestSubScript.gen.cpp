// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QuestSubScript.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSubScript() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestSubScript_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestSubScript();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestCompletionState();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestSubScript::execFinish)
	{
		P_GET_ENUM(EQuestCompletionState,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finish(EQuestCompletionState(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestSubScript::execGetManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestManagerComponent**)Z_Param__Result=P_THIS->GetManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestSubScript::execGetQuestAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UQuestBase>*)Z_Param__Result=P_THIS->GetQuestAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestSubScript::execGetQuestScript)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestBase**)Z_Param__Result=P_THIS->GetQuestScript();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestSubScript::execEventCanStartQuest)
	{
		P_GET_OBJECT(UQuestManagerComponent,Z_Param_Manager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EventCanStartQuest_Implementation(Z_Param_Manager);
		P_NATIVE_END;
	}
	static FName NAME_UQuestSubScript_EventCanStartQuest = FName(TEXT("EventCanStartQuest"));
	bool UQuestSubScript::EventCanStartQuest(UQuestManagerComponent* Manager) const
	{
		QuestSubScript_eventEventCanStartQuest_Parms Parms;
		Parms.Manager=Manager;
		const_cast<UQuestSubScript*>(this)->ProcessEvent(FindFunctionChecked(NAME_UQuestSubScript_EventCanStartQuest),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UQuestSubScript_ReceiveBeginPlay = FName(TEXT("ReceiveBeginPlay"));
	void UQuestSubScript::ReceiveBeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UQuestSubScript_ReceiveBeginPlay),NULL);
	}
	static FName NAME_UQuestSubScript_ReceiveFinish = FName(TEXT("ReceiveFinish"));
	void UQuestSubScript::ReceiveFinish(const EQuestCompletionState State)
	{
		QuestSubScript_eventReceiveFinish_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_UQuestSubScript_ReceiveFinish),&Parms);
	}
	static FName NAME_UQuestSubScript_ReceiveStart = FName(TEXT("ReceiveStart"));
	void UQuestSubScript::ReceiveStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UQuestSubScript_ReceiveStart),NULL);
	}
	void UQuestSubScript::StaticRegisterNativesUQuestSubScript()
	{
		UClass* Class = UQuestSubScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EventCanStartQuest", &UQuestSubScript::execEventCanStartQuest },
			{ "Finish", &UQuestSubScript::execFinish },
			{ "GetManager", &UQuestSubScript::execGetManager },
			{ "GetQuestAsset", &UQuestSubScript::execGetQuestAsset },
			{ "GetQuestScript", &UQuestSubScript::execGetQuestScript },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestSubScript_eventEventCanStartQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestSubScript_eventEventCanStartQuest_Parms), &Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::NewProp_Manager_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSubScript_eventEventCanStartQuest_Parms, Manager), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::NewProp_Manager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::NewProp_Manager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return true if this quest can be started */" },
		{ "DisplayName", "Can Start Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestSubScript.h" },
		{ "ToolTip", "@return true if this quest can be started" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSubScript, nullptr, "EventCanStartQuest", nullptr, nullptr, sizeof(QuestSubScript_eventEventCanStartQuest_Parms), Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestSubScript_Finish_Statics
	{
		struct QuestSubScript_eventFinish_Parms
		{
			EQuestCompletionState Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestSubScript_Finish_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSubScript_eventFinish_Parms, Result), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestSubScript_Finish_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubScript_Finish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubScript_Finish_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubScript_Finish_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_Finish_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "/** Finishes owning quest */" },
		{ "ModuleRelativePath", "Public/Quests/QuestSubScript.h" },
		{ "ToolTip", "Finishes owning quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubScript_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSubScript, nullptr, "Finish", nullptr, nullptr, sizeof(QuestSubScript_eventFinish_Parms), Z_Construct_UFunction_UQuestSubScript_Finish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_Finish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSubScript_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSubScript_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestSubScript_GetManager_Statics
	{
		struct QuestSubScript_eventGetManager_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSubScript_eventGetManager_Parms, ReturnValue), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestSubScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSubScript, nullptr, "GetManager", nullptr, nullptr, sizeof(QuestSubScript_eventGetManager_Parms), Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSubScript_GetManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSubScript_GetManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics
	{
		struct QuestSubScript_eventGetQuestAsset_Parms
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
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSubScript_eventGetQuestAsset_Parms, ReturnValue), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestSubScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSubScript, nullptr, "GetQuestAsset", nullptr, nullptr, sizeof(QuestSubScript_eventGetQuestAsset_Parms), Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSubScript_GetQuestAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSubScript_GetQuestAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics
	{
		struct QuestSubScript_eventGetQuestScript_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSubScript_eventGetQuestScript_Parms, ReturnValue), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quests/QuestSubScript.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSubScript, nullptr, "GetQuestScript", nullptr, nullptr, sizeof(QuestSubScript_eventGetQuestScript_Parms), Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSubScript_GetQuestScript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSubScript_GetQuestScript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestSubScript_ReceiveBeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_ReceiveBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when the game starts, when this quest is started or when the quest gets loaded */" },
		{ "DisplayName", "Begin Play" },
		{ "ModuleRelativePath", "Public/Quests/QuestSubScript.h" },
		{ "ToolTip", "Called when the game starts, when this quest is started or when the quest gets loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubScript_ReceiveBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSubScript, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_ReceiveBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_ReceiveBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSubScript_ReceiveBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSubScript_ReceiveBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestSubScript_eventReceiveFinish_Parms, State), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::NewProp_State_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when this quest finishes\n" },
		{ "ModuleRelativePath", "Public/Quests/QuestSubScript.h" },
		{ "ToolTip", "Called when this quest finishes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSubScript, nullptr, "ReceiveFinish", nullptr, nullptr, sizeof(QuestSubScript_eventReceiveFinish_Parms), Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSubScript_ReceiveFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSubScript_ReceiveFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestSubScript_ReceiveStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestSubScript_ReceiveStart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Check and update the state of this quest */" },
		{ "ModuleRelativePath", "Public/Quests/QuestSubScript.h" },
		{ "ToolTip", "Check and update the state of this quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestSubScript_ReceiveStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestSubScript, nullptr, "ReceiveStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestSubScript_ReceiveStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestSubScript_ReceiveStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestSubScript_ReceiveStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestSubScript_ReceiveStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestSubScript_NoRegister()
	{
		return UQuestSubScript::StaticClass();
	}
	struct Z_Construct_UClass_UQuestSubScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestSubScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestSubScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestSubScript_EventCanStartQuest, "EventCanStartQuest" }, // 3447271668
		{ &Z_Construct_UFunction_UQuestSubScript_Finish, "Finish" }, // 1801741420
		{ &Z_Construct_UFunction_UQuestSubScript_GetManager, "GetManager" }, // 438652784
		{ &Z_Construct_UFunction_UQuestSubScript_GetQuestAsset, "GetQuestAsset" }, // 3534422490
		{ &Z_Construct_UFunction_UQuestSubScript_GetQuestScript, "GetQuestScript" }, // 2491608983
		{ &Z_Construct_UFunction_UQuestSubScript_ReceiveBeginPlay, "ReceiveBeginPlay" }, // 3935544628
		{ &Z_Construct_UFunction_UQuestSubScript_ReceiveFinish, "ReceiveFinish" }, // 73463276
		{ &Z_Construct_UFunction_UQuestSubScript_ReceiveStart, "ReceiveStart" }, // 1131665375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSubScript_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Quests" },
		{ "Comment", "/**\n * This object works as a plug-in into the execution of a quest.\n * It will be created when the quest starts, and destroyed when the quest gets destroyed,\n * providing the user with different quest related events.\n */" },
		{ "IncludePath", "Quests/QuestSubScript.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quests/QuestSubScript.h" },
		{ "ToolTip", "This object works as a plug-in into the execution of a quest.\nIt will be created when the quest starts, and destroyed when the quest gets destroyed,\nproviding the user with different quest related events." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestSubScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestSubScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestSubScript_Statics::ClassParams = {
		&UQuestSubScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestSubScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSubScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestSubScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestSubScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestSubScript, 3661034456);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuestSubScript>()
	{
		return UQuestSubScript::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestSubScript(Z_Construct_UClass_UQuestSubScript, &UQuestSubScript::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuestSubScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestSubScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
