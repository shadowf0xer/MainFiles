// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Conditions/QuestCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestCondition() {}
// Cross Module References
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EConditionState();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EConditionQuestMode();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestCondition_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestCondition();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UConditionContainer_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FConditionOutput();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_ULatentCondition_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_ULatentCondition();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UInstantCondition_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UInstantCondition();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics
	{
		struct _Script_QuestExtension_eventConditionCompleteDel_Parms
		{
			EConditionState Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestExtension_eventConditionCompleteDel_Parms, Result), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestExtension, nullptr, "ConditionCompleteDel__DelegateSignature", nullptr, nullptr, sizeof(_Script_QuestExtension_eventConditionCompleteDel_Parms), Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics
	{
		struct _Script_QuestExtension_eventMCConditionCompleteDelegate_Parms
		{
			EConditionState Result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_QuestExtension_eventMCConditionCompleteDelegate_Parms, Result), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestExtension, nullptr, "MCConditionCompleteDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_QuestExtension_eventMCConditionCompleteDelegate_Parms), Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EConditionQuestMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_QuestExtension_EConditionQuestMode, Z_Construct_UPackage__Script_QuestExtension(), TEXT("EConditionQuestMode"));
		}
		return Singleton;
	}
	template<> QUESTEXTENSION_API UEnum* StaticEnum<EConditionQuestMode>()
	{
		return EConditionQuestMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConditionQuestMode(EConditionQuestMode_StaticEnum, TEXT("/Script/QuestExtension"), TEXT("EConditionQuestMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_QuestExtension_EConditionQuestMode_Hash() { return 1741835984U; }
	UEnum* Z_Construct_UEnum_QuestExtension_EConditionQuestMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConditionQuestMode"), 0, Get_Z_Construct_UEnum_QuestExtension_EConditionQuestMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConditionQuestMode::SucceedsQuest", (int64)EConditionQuestMode::SucceedsQuest },
				{ "EConditionQuestMode::FailsQuest", (int64)EConditionQuestMode::FailsQuest },
				{ "EConditionQuestMode::SucceedsAndFailsQuest", (int64)EConditionQuestMode::SucceedsAndFailsQuest },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FailsQuest.Name", "EConditionQuestMode::FailsQuest" },
				{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
				{ "SucceedsAndFailsQuest.Name", "EConditionQuestMode::SucceedsAndFailsQuest" },
				{ "SucceedsQuest.Name", "EConditionQuestMode::SucceedsQuest" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_QuestExtension,
				nullptr,
				"EConditionQuestMode",
				"EConditionQuestMode",
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
	static UEnum* EConditionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_QuestExtension_EConditionState, Z_Construct_UPackage__Script_QuestExtension(), TEXT("EConditionState"));
		}
		return Singleton;
	}
	template<> QUESTEXTENSION_API UEnum* StaticEnum<EConditionState>()
	{
		return EConditionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EConditionState(EConditionState_StaticEnum, TEXT("/Script/QuestExtension"), TEXT("EConditionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_QuestExtension_EConditionState_Hash() { return 3779543128U; }
	UEnum* Z_Construct_UEnum_QuestExtension_EConditionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_QuestExtension();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EConditionState"), 0, Get_Z_Construct_UEnum_QuestExtension_EConditionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EConditionState::NotRunning", (int64)EConditionState::NotRunning },
				{ "EConditionState::Running", (int64)EConditionState::Running },
				{ "EConditionState::Success", (int64)EConditionState::Success },
				{ "EConditionState::Failed", (int64)EConditionState::Failed },
				{ "EConditionState::Ignored", (int64)EConditionState::Ignored },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed.Name", "EConditionState::Failed" },
				{ "Ignored.Name", "EConditionState::Ignored" },
				{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
				{ "NotRunning.Name", "EConditionState::NotRunning" },
				{ "Running.Name", "EConditionState::Running" },
				{ "Success.Name", "EConditionState::Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_QuestExtension,
				nullptr,
				"EConditionState",
				"EConditionState",
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
	DEFINE_FUNCTION(UQuestCondition::execGetChildNodes)
	{
		P_GET_TARRAY_REF(UQuestCondition*,Z_Param_Out_Nodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildNodes(Z_Param_Out_Nodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestCondition::execGetAllNodes)
	{
		P_GET_TARRAY_REF(UQuestCondition*,Z_Param_Out_Nodes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllNodes(Z_Param_Out_Nodes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestCondition::execIsCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompleted();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestCondition::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EConditionState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestCondition::execGetQuestOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestBase**)Z_Param__Result=P_THIS->GetQuestOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestCondition::execGetQuestManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestManagerComponent**)Z_Param__Result=P_THIS->GetQuestManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestCondition::execGetContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConditionContainer**)Z_Param__Result=P_THIS->GetContainer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestCondition::execComplete)
	{
		P_GET_ENUM(EConditionState,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Complete(EConditionState(Z_Param_Result));
		P_NATIVE_END;
	}
	void UQuestCondition::StaticRegisterNativesUQuestCondition()
	{
		UClass* Class = UQuestCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Complete", &UQuestCondition::execComplete },
			{ "GetAllNodes", &UQuestCondition::execGetAllNodes },
			{ "GetChildNodes", &UQuestCondition::execGetChildNodes },
			{ "GetContainer", &UQuestCondition::execGetContainer },
			{ "GetQuestManager", &UQuestCondition::execGetQuestManager },
			{ "GetQuestOwner", &UQuestCondition::execGetQuestOwner },
			{ "GetState", &UQuestCondition::execGetState },
			{ "IsCompleted", &UQuestCondition::execIsCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestCondition_Complete_Statics
	{
		struct QuestCondition_eventComplete_Parms
		{
			EConditionState Result;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestCondition_eventComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestCondition_eventComplete_Parms), &Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestCondition_eventComplete_Parms, Result), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestCondition_Complete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_Complete_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_Complete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestCondition_Complete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestCondition, nullptr, "Complete", nullptr, nullptr, sizeof(QuestCondition_eventComplete_Parms), Z_Construct_UFunction_UQuestCondition_Complete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_Complete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_Complete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_Complete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestCondition_Complete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestCondition_Complete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics
	{
		struct QuestCondition_eventGetAllNodes_Parms
		{
			TArray<UQuestCondition*> Nodes;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::NewProp_Nodes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestCondition_eventGetAllNodes_Parms, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::NewProp_Nodes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "Comment", "/**\n\x09* May be expensive to call.\n\x09* @return an array with all the nodes connected to this one, not just directly\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
		{ "ToolTip", "May be expensive to call.\n@return an array with all the nodes connected to this one, not just directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestCondition, nullptr, "GetAllNodes", nullptr, nullptr, sizeof(QuestCondition_eventGetAllNodes_Parms), Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestCondition_GetAllNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestCondition_GetAllNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics
	{
		struct QuestCondition_eventGetChildNodes_Parms
		{
			TArray<UQuestCondition*> Nodes;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Nodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::NewProp_Nodes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestCondition_eventGetChildNodes_Parms, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::NewProp_Nodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::NewProp_Nodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::NewProp_Nodes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "Comment", "/**\n\x09* May be expensive to call.\n\x09* @return an array with all the nodes directly connected to this one\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
		{ "ToolTip", "May be expensive to call.\n@return an array with all the nodes directly connected to this one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestCondition, nullptr, "GetChildNodes", nullptr, nullptr, sizeof(QuestCondition_eventGetChildNodes_Parms), Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestCondition_GetChildNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestCondition_GetChildNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestCondition_GetContainer_Statics
	{
		struct QuestCondition_eventGetContainer_Parms
		{
			UConditionContainer* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestCondition_eventGetContainer_Parms, ReturnValue), Z_Construct_UClass_UConditionContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestCondition, nullptr, "GetContainer", nullptr, nullptr, sizeof(QuestCondition_eventGetContainer_Parms), Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestCondition_GetContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestCondition_GetContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics
	{
		struct QuestCondition_eventGetQuestManager_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestCondition_eventGetQuestManager_Parms, ReturnValue), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestCondition, nullptr, "GetQuestManager", nullptr, nullptr, sizeof(QuestCondition_eventGetQuestManager_Parms), Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestCondition_GetQuestManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestCondition_GetQuestManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics
	{
		struct QuestCondition_eventGetQuestOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestCondition_eventGetQuestOwner_Parms, ReturnValue), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestCondition, nullptr, "GetQuestOwner", nullptr, nullptr, sizeof(QuestCondition_eventGetQuestOwner_Parms), Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestCondition_GetQuestOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestCondition_GetQuestOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestCondition_GetState_Statics
	{
		struct QuestCondition_eventGetState_Parms
		{
			EConditionState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestCondition_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestCondition_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestCondition_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestCondition_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_GetState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_GetState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestCondition_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestCondition, nullptr, "GetState", nullptr, nullptr, sizeof(QuestCondition_eventGetState_Parms), Z_Construct_UFunction_UQuestCondition_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestCondition_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestCondition_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics
	{
		struct QuestCondition_eventIsCompleted_Parms
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
	void Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestCondition_eventIsCompleted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestCondition_eventIsCompleted_Parms), &Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestCondition, nullptr, "IsCompleted", nullptr, nullptr, sizeof(QuestCondition_eventIsCompleted_Parms), Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestCondition_IsCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestCondition_IsCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestCondition_NoRegister()
	{
		return UQuestCondition::StaticClass();
	}
	struct Z_Construct_UClass_UQuestCondition_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickTimeElapsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickTimeElapsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsToTick_MetaData[];
#endif
		static void NewProp_bWantsToTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsToTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompactNode_MetaData[];
#endif
		static void NewProp_bCompactNode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompactNode;
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
	UObject* (*const Z_Construct_UClass_UQuestCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestCondition_Complete, "Complete" }, // 1712358953
		{ &Z_Construct_UFunction_UQuestCondition_GetAllNodes, "GetAllNodes" }, // 4234256363
		{ &Z_Construct_UFunction_UQuestCondition_GetChildNodes, "GetChildNodes" }, // 3164918746
		{ &Z_Construct_UFunction_UQuestCondition_GetContainer, "GetContainer" }, // 1787420960
		{ &Z_Construct_UFunction_UQuestCondition_GetQuestManager, "GetQuestManager" }, // 88890076
		{ &Z_Construct_UFunction_UQuestCondition_GetQuestOwner, "GetQuestOwner" }, // 956918363
		{ &Z_Construct_UFunction_UQuestCondition_GetState, "GetState" }, // 1801446416
		{ &Z_Construct_UFunction_UQuestCondition_IsCompleted, "IsCompleted" }, // 1270975154
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Quests/Conditions/QuestCondition.h" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_GraphNode_MetaData[] = {
		{ "Comment", "/** Node's Graph representation, used to get position. */" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
		{ "ToolTip", "Node's Graph representation, used to get position." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_GraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_GraphNode_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_OnComplete_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_OnComplete = { "OnComplete", nullptr, (EPropertyFlags)0x0010000011080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, OnComplete), Z_Construct_UDelegateFunction_QuestExtension_MCConditionCompleteDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_OnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_OnComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_Outputs_MetaData[] = {
		{ "Category", "QuestNode" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0020088001010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FConditionOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConState_MetaData[] = {
		{ "Comment", "//~ End Ticking\n" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConState = { "ConState", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, ConState), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_TickTimeElapsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_TickTimeElapsed = { "TickTimeElapsed", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, TickTimeElapsed), METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_TickTimeElapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_TickTimeElapsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_TickRate_MetaData[] = {
		{ "Category", "Condition|Tick" },
		{ "Comment", "//Tick length in seconds. 0 is default tick rate\n" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
		{ "ToolTip", "Tick length in seconds. 0 is default tick rate" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_TickRate = { "TickRate", nullptr, (EPropertyFlags)0x0020080001010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, TickRate), METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_TickRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_TickRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_bWantsToTick_MetaData[] = {
		{ "Category", "Condition|Tick" },
		{ "Comment", "//~ Begin Ticking\n" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	void Z_Construct_UClass_UQuestCondition_Statics::NewProp_bWantsToTick_SetBit(void* Obj)
	{
		((UQuestCondition*)Obj)->bWantsToTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_bWantsToTick = { "bWantsToTick", nullptr, (EPropertyFlags)0x0020080001010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuestCondition), &Z_Construct_UClass_UQuestCondition_Statics::NewProp_bWantsToTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_bWantsToTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_bWantsToTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_bCompactNode_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	void Z_Construct_UClass_UQuestCondition_Statics::NewProp_bCompactNode_SetBit(void* Obj)
	{
		((UQuestCondition*)Obj)->bCompactNode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_bCompactNode = { "bCompactNode", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuestCondition), &Z_Construct_UClass_UQuestCondition_Statics::NewProp_bCompactNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_bCompactNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_bCompactNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080001010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestCondition_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_GraphNode,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_OnComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_Outputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_Outputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_TickTimeElapsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_TickRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_bWantsToTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_bCompactNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_DisplayName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestCondition_Statics::ClassParams = {
		&UQuestCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestCondition, 2370060848);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuestCondition>()
	{
		return UQuestCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestCondition(Z_Construct_UClass_UQuestCondition, &UQuestCondition::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuestCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestCondition);
	static FName NAME_ULatentCondition_ReceiveCheck = FName(TEXT("ReceiveCheck"));
	void ULatentCondition::ReceiveCheck()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULatentCondition_ReceiveCheck),NULL);
	}
	static FName NAME_ULatentCondition_ReceiveTick = FName(TEXT("ReceiveTick"));
	void ULatentCondition::ReceiveTick(float DeltaTime)
	{
		LatentCondition_eventReceiveTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_ULatentCondition_ReceiveTick),&Parms);
	}
	void ULatentCondition::StaticRegisterNativesULatentCondition()
	{
	}
	struct Z_Construct_UFunction_ULatentCondition_ReceiveCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULatentCondition_ReceiveCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "DisplayName", "Check" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULatentCondition_ReceiveCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULatentCondition, nullptr, "ReceiveCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULatentCondition_ReceiveCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULatentCondition_ReceiveCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULatentCondition_ReceiveCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULatentCondition_ReceiveCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LatentCondition_eventReceiveTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULatentCondition, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(LatentCondition_eventReceiveTick_Parms), Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULatentCondition_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULatentCondition_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULatentCondition_NoRegister()
	{
		return ULatentCondition::StaticClass();
	}
	struct Z_Construct_UClass_ULatentCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULatentCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULatentCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULatentCondition_ReceiveCheck, "ReceiveCheck" }, // 235655158
		{ &Z_Construct_UFunction_ULatentCondition_ReceiveTick, "ReceiveTick" }, // 472023445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULatentCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Quests/Conditions/QuestCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULatentCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULatentCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULatentCondition_Statics::ClassParams = {
		&ULatentCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULatentCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULatentCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULatentCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULatentCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULatentCondition, 949758744);
	template<> QUESTEXTENSION_API UClass* StaticClass<ULatentCondition>()
	{
		return ULatentCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULatentCondition(Z_Construct_UClass_ULatentCondition, &ULatentCondition::StaticClass, TEXT("/Script/QuestExtension"), TEXT("ULatentCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULatentCondition);
	static FName NAME_UInstantCondition_ReceiveCheck = FName(TEXT("ReceiveCheck"));
	EConditionState UInstantCondition::ReceiveCheck()
	{
		InstantCondition_eventReceiveCheck_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UInstantCondition_ReceiveCheck),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UInstantCondition_ReceiveTick = FName(TEXT("ReceiveTick"));
	void UInstantCondition::ReceiveTick(float DeltaTime)
	{
		InstantCondition_eventReceiveTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UInstantCondition_ReceiveTick),&Parms);
	}
	void UInstantCondition::StaticRegisterNativesUInstantCondition()
	{
	}
	struct Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstantCondition_eventReceiveCheck_Parms, ReturnValue), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "DisplayName", "Check" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstantCondition, nullptr, "ReceiveCheck", nullptr, nullptr, sizeof(InstantCondition_eventReceiveCheck_Parms), Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstantCondition_ReceiveCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstantCondition_ReceiveCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InstantCondition_eventReceiveTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInstantCondition, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(InstantCondition_eventReceiveTick_Parms), Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInstantCondition_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInstantCondition_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInstantCondition_NoRegister()
	{
		return UInstantCondition::StaticClass();
	}
	struct Z_Construct_UClass_UInstantCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInstantCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInstantCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInstantCondition_ReceiveCheck, "ReceiveCheck" }, // 971142655
		{ &Z_Construct_UFunction_UInstantCondition_ReceiveTick, "ReceiveTick" }, // 782967687
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstantCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Quests/Conditions/QuestCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QuestCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInstantCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstantCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInstantCondition_Statics::ClassParams = {
		&UInstantCondition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInstantCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInstantCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInstantCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInstantCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInstantCondition, 363297627);
	template<> QUESTEXTENSION_API UClass* StaticClass<UInstantCondition>()
	{
		return UInstantCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInstantCondition(Z_Construct_UClass_UInstantCondition, &UInstantCondition::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UInstantCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInstantCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
