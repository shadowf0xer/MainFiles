// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/QGNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNode() {}
// Cross Module References
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQGNodeFinishReason();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQGNodeState();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestGroup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQGNodeOutput();
// End Cross Module References
	static UEnum* EQGNodeFinishReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_QuestExtension_EQGNodeFinishReason, Z_Construct_UPackage__Script_QuestExtension(), TEXT("EQGNodeFinishReason"));
		}
		return Singleton;
	}
	template<> QUESTEXTENSION_API UEnum* StaticEnum<EQGNodeFinishReason>()
	{
		return EQGNodeFinishReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQGNodeFinishReason(EQGNodeFinishReason_StaticEnum, TEXT("/Script/QuestExtension"), TEXT("EQGNodeFinishReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_QuestExtension_EQGNodeFinishReason_Hash() { return 1446601835U; }
	UEnum* Z_Construct_UEnum_QuestExtension_EQGNodeFinishReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQGNodeFinishReason"), 0, Get_Z_Construct_UEnum_QuestExtension_EQGNodeFinishReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQGNodeFinishReason::None", (int64)EQGNodeFinishReason::None },
				{ "EQGNodeFinishReason::Succeed", (int64)EQGNodeFinishReason::Succeed },
				{ "EQGNodeFinishReason::Fail", (int64)EQGNodeFinishReason::Fail },
				{ "EQGNodeFinishReason::Rejected", (int64)EQGNodeFinishReason::Rejected },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n* Quest group finish result\n*/" },
				{ "Fail.Comment", "/**< The node has been completed */" },
				{ "Fail.Name", "EQGNodeFinishReason::Fail" },
				{ "Fail.ToolTip", "< The node has been completed" },
				{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
				{ "None.Name", "EQGNodeFinishReason::None" },
				{ "Rejected.Comment", "/**< The node failed */" },
				{ "Rejected.Name", "EQGNodeFinishReason::Rejected" },
				{ "Rejected.ToolTip", "< The node failed" },
				{ "Succeed.Name", "EQGNodeFinishReason::Succeed" },
				{ "ToolTip", "Quest group finish result" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_QuestExtension,
				nullptr,
				"EQGNodeFinishReason",
				"EQGNodeFinishReason",
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
	static UEnum* EQGNodeState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_QuestExtension_EQGNodeState, Z_Construct_UPackage__Script_QuestExtension(), TEXT("EQGNodeState"));
		}
		return Singleton;
	}
	template<> QUESTEXTENSION_API UEnum* StaticEnum<EQGNodeState>()
	{
		return EQGNodeState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQGNodeState(EQGNodeState_StaticEnum, TEXT("/Script/QuestExtension"), TEXT("EQGNodeState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_QuestExtension_EQGNodeState_Hash() { return 2867211562U; }
	UEnum* Z_Construct_UEnum_QuestExtension_EQGNodeState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQGNodeState"), 0, Get_Z_Construct_UEnum_QuestExtension_EQGNodeState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQGNodeState::Inactive", (int64)EQGNodeState::Inactive },
				{ "EQGNodeState::Active", (int64)EQGNodeState::Active },
				{ "EQGNodeState::Completed", (int64)EQGNodeState::Completed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Comment", "/**< has not been run */" },
				{ "Active.Name", "EQGNodeState::Active" },
				{ "Active.ToolTip", "< has not been run" },
				{ "Comment", "/**\n * Quest group node state\n */" },
				{ "Completed.Comment", "/**< is running */" },
				{ "Completed.Name", "EQGNodeState::Completed" },
				{ "Completed.ToolTip", "< is running" },
				{ "Inactive.Comment", "/** When the node */" },
				{ "Inactive.Name", "EQGNodeState::Inactive" },
				{ "Inactive.ToolTip", "When the node" },
				{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
				{ "ToolTip", "Quest group node state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_QuestExtension,
				nullptr,
				"EQGNodeState",
				"EQGNodeState",
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
	DEFINE_FUNCTION(UQGNode::execGetManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestManagerComponent**)Z_Param__Result=P_THIS->GetManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQGNode::execGetNodeId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetNodeId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQGNode::execGetQuestGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestGroup**)Z_Param__Result=P_THIS->GetQuestGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQGNode::execIsRejected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRejected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQGNode::execIsSucceeded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSucceeded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQGNode::execIsCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQGNode::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQGNode::execCallEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallEvent(Z_Param_Event);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQGNode::execFinish)
	{
		P_GET_ENUM(EQGNodeFinishReason,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finish(EQGNodeFinishReason(Z_Param_Reason));
		P_NATIVE_END;
	}
	void UQGNode::StaticRegisterNativesUQGNode()
	{
		UClass* Class = UQGNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallEvent", &UQGNode::execCallEvent },
			{ "Finish", &UQGNode::execFinish },
			{ "GetManager", &UQGNode::execGetManager },
			{ "GetNodeId", &UQGNode::execGetNodeId },
			{ "GetQuestGroup", &UQGNode::execGetQuestGroup },
			{ "IsCompleted", &UQGNode::execIsCompleted },
			{ "IsRejected", &UQGNode::execIsRejected },
			{ "IsRunning", &UQGNode::execIsRunning },
			{ "IsSucceeded", &UQGNode::execIsSucceeded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQGNode_CallEvent_Statics
	{
		struct QGNode_eventCallEvent_Parms
		{
			FName Event;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_CallEvent_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UQGNode_CallEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QGNode_eventCallEvent_Parms, Event), METADATA_PARAMS(Z_Construct_UFunction_UQGNode_CallEvent_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_CallEvent_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_CallEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_CallEvent_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_CallEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestGroup|Node" },
		{ "CPP_Default_Event", " " },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_CallEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode, nullptr, "CallEvent", nullptr, nullptr, sizeof(QGNode_eventCallEvent_Parms), Z_Construct_UFunction_UQGNode_CallEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_CallEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_CallEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_CallEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_CallEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_CallEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_Finish_Statics
	{
		struct QGNode_eventFinish_Parms
		{
			EQGNodeFinishReason Reason;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Finish_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQGNode_Finish_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QGNode_eventFinish_Parms, Reason), Z_Construct_UEnum_QuestExtension_EQGNodeFinishReason, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Finish_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Finish_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQGNode_Finish_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_Finish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_Finish_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_Finish_Statics::NewProp_Reason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Finish_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestNode" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode, nullptr, "Finish", nullptr, nullptr, sizeof(QGNode_eventFinish_Parms), Z_Construct_UFunction_UQGNode_Finish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Finish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_GetManager_Statics
	{
		struct QGNode_eventGetManager_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_GetManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQGNode_GetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QGNode_eventGetManager_Parms, ReturnValue), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_GetManager_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_GetManager_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_GetManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_GetManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_GetManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestGroup|Node" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_GetManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode, nullptr, "GetManager", nullptr, nullptr, sizeof(QGNode_eventGetManager_Parms), Z_Construct_UFunction_UQGNode_GetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_GetManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_GetManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_GetManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_GetManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_GetManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_GetNodeId_Statics
	{
		struct QGNode_eventGetNodeId_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQGNode_GetNodeId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QGNode_eventGetNodeId_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_GetNodeId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_GetNodeId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_GetNodeId_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestGroup|Node" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_GetNodeId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode, nullptr, "GetNodeId", nullptr, nullptr, sizeof(QGNode_eventGetNodeId_Parms), Z_Construct_UFunction_UQGNode_GetNodeId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_GetNodeId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_GetNodeId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_GetNodeId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_GetNodeId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_GetNodeId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics
	{
		struct QGNode_eventGetQuestGroup_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QGNode_eventGetQuestGroup_Parms, ReturnValue), Z_Construct_UClass_UQuestGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestGroup|Node" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode, nullptr, "GetQuestGroup", nullptr, nullptr, sizeof(QGNode_eventGetQuestGroup_Parms), Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_GetQuestGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_GetQuestGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_IsCompleted_Statics
	{
		struct QGNode_eventIsCompleted_Parms
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
	void Z_Construct_UFunction_UQGNode_IsCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QGNode_eventIsCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQGNode_IsCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QGNode_eventIsCompleted_Parms), &Z_Construct_UFunction_UQGNode_IsCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_IsCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_IsCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_IsCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestGroup|Node" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_IsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode, nullptr, "IsCompleted", nullptr, nullptr, sizeof(QGNode_eventIsCompleted_Parms), Z_Construct_UFunction_UQGNode_IsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_IsCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_IsCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_IsCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_IsCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_IsCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_IsRejected_Statics
	{
		struct QGNode_eventIsRejected_Parms
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
	void Z_Construct_UFunction_UQGNode_IsRejected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QGNode_eventIsRejected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQGNode_IsRejected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QGNode_eventIsRejected_Parms), &Z_Construct_UFunction_UQGNode_IsRejected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_IsRejected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_IsRejected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_IsRejected_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestGroup|Node" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_IsRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode, nullptr, "IsRejected", nullptr, nullptr, sizeof(QGNode_eventIsRejected_Parms), Z_Construct_UFunction_UQGNode_IsRejected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_IsRejected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_IsRejected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_IsRejected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_IsRejected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_IsRejected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_IsRunning_Statics
	{
		struct QGNode_eventIsRunning_Parms
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
	void Z_Construct_UFunction_UQGNode_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QGNode_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQGNode_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QGNode_eventIsRunning_Parms), &Z_Construct_UFunction_UQGNode_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestGroup|Node" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode, nullptr, "IsRunning", nullptr, nullptr, sizeof(QGNode_eventIsRunning_Parms), Z_Construct_UFunction_UQGNode_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_IsSucceeded_Statics
	{
		struct QGNode_eventIsSucceeded_Parms
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
	void Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QGNode_eventIsSucceeded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QGNode_eventIsSucceeded_Parms), &Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::Function_MetaDataParams[] = {
		{ "Category", "QuestGroup|Node" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode, nullptr, "IsSucceeded", nullptr, nullptr, sizeof(QGNode_eventIsSucceeded_Parms), Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_IsSucceeded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_IsSucceeded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQGNode_NoRegister()
	{
		return UQGNode::StaticClass();
	}
	struct Z_Construct_UClass_UQGNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphNode;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTerminating_MetaData[];
#endif
		static void NewProp_bTerminating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTerminating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBegunPlay_MetaData[];
#endif
		static void NewProp_bHasBegunPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBegunPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FinishReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FinishReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Events;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQGNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQGNode_CallEvent, "CallEvent" }, // 3011248218
		{ &Z_Construct_UFunction_UQGNode_Finish, "Finish" }, // 666166737
		{ &Z_Construct_UFunction_UQGNode_GetManager, "GetManager" }, // 3416998841
		{ &Z_Construct_UFunction_UQGNode_GetNodeId, "GetNodeId" }, // 2164986185
		{ &Z_Construct_UFunction_UQGNode_GetQuestGroup, "GetQuestGroup" }, // 875736783
		{ &Z_Construct_UFunction_UQGNode_IsCompleted, "IsCompleted" }, // 905415299
		{ &Z_Construct_UFunction_UQGNode_IsRejected, "IsRejected" }, // 3159563200
		{ &Z_Construct_UFunction_UQGNode_IsRunning, "IsRunning" }, // 3995681255
		{ &Z_Construct_UFunction_UQGNode_IsSucceeded, "IsSucceeded" }, // 590543426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Statics::Class_MetaDataParams[] = {
		{ "Category", "Nodes" },
		{ "DisplayName", "Node" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Quests/QGNodes/QGNode.h" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Statics::NewProp_GraphNode_MetaData[] = {
		{ "Comment", "/** Node's Graph representation, used to get position. */" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
		{ "ToolTip", "Node's Graph representation, used to get position." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Statics::NewProp_GraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Statics::NewProp_GraphNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Statics::NewProp_bTerminating_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	void Z_Construct_UClass_UQGNode_Statics::NewProp_bTerminating_SetBit(void* Obj)
	{
		((UQGNode*)Obj)->bTerminating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_bTerminating = { "bTerminating", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UQGNode), &Z_Construct_UClass_UQGNode_Statics::NewProp_bTerminating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Statics::NewProp_bTerminating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Statics::NewProp_bTerminating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Statics::NewProp_bHasBegunPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	void Z_Construct_UClass_UQGNode_Statics::NewProp_bHasBegunPlay_SetBit(void* Obj)
	{
		((UQGNode*)Obj)->bHasBegunPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_bHasBegunPlay = { "bHasBegunPlay", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UQGNode), &Z_Construct_UClass_UQGNode_Statics::NewProp_bHasBegunPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Statics::NewProp_bHasBegunPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Statics::NewProp_bHasBegunPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Statics::NewProp_FinishReason_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_FinishReason = { "FinishReason", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode, FinishReason), Z_Construct_UEnum_QuestExtension_EQGNodeFinishReason, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Statics::NewProp_FinishReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Statics::NewProp_FinishReason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_FinishReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Statics::NewProp_State_MetaData[] = {
		{ "Comment", "/**\n\x09* Runtime Properties\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
		{ "ToolTip", "Runtime Properties" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode, State), Z_Construct_UEnum_QuestExtension_EQGNodeState, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Statics::NewProp_Events_MetaData[] = {
		{ "Category", "QuestNode" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0020080001010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode, Events), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Statics::NewProp_Events_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQGNodeOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Statics::NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "QuestNode" },
		{ "Comment", "/**\n\x09* Asset Properties\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode.h" },
		{ "ToolTip", "Asset Properties" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQGNode_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UQGNode_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQGNode_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_bTerminating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_bHasBegunPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_FinishReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_FinishReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_Events,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_Events_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Statics::NewProp_DisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQGNode_Statics::ClassParams = {
		&UQGNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQGNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UQGNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQGNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQGNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQGNode, 4239094334);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQGNode>()
	{
		return UQGNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQGNode(Z_Construct_UClass_UQGNode, &UQGNode::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQGNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGNode);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UQGNode)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
