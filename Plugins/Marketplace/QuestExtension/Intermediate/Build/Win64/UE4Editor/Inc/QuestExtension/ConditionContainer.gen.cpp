// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Conditions/ConditionContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConditionContainer() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UConditionContainer_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UConditionContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestCondition_NoRegister();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EConditionState();
	QUESTEXTENSION_API UFunction* Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UConditionContainer::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EConditionState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionContainer::execGetFirstCondition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuestCondition**)Z_Param__Result=P_THIS->GetFirstCondition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionContainer::execCancelLatentCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelLatentCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionContainer::execStartLatentCheck)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InOnComplete);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartLatentCheck(FConditionCompleteDel(Z_Param_Out_InOnComplete));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConditionContainer::execStartInstantCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EConditionState*)Z_Param__Result=P_THIS->StartInstantCheck();
		P_NATIVE_END;
	}
	void UConditionContainer::StaticRegisterNativesUConditionContainer()
	{
		UClass* Class = UConditionContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelLatentCheck", &UConditionContainer::execCancelLatentCheck },
			{ "GetFirstCondition", &UConditionContainer::execGetFirstCondition },
			{ "GetState", &UConditionContainer::execGetState },
			{ "StartInstantCheck", &UConditionContainer::execStartInstantCheck },
			{ "StartLatentCheck", &UConditionContainer::execStartLatentCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConditionContainer_CancelLatentCheck_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionContainer_CancelLatentCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "ConditionContainer" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionContainer_CancelLatentCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionContainer, nullptr, "CancelLatentCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionContainer_CancelLatentCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_CancelLatentCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionContainer_CancelLatentCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionContainer_CancelLatentCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics
	{
		struct ConditionContainer_eventGetFirstCondition_Parms
		{
			UQuestCondition* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionContainer_eventGetFirstCondition_Parms, ReturnValue), Z_Construct_UClass_UQuestCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "ConditionContainer" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionContainer, nullptr, "GetFirstCondition", nullptr, nullptr, sizeof(ConditionContainer_eventGetFirstCondition_Parms), Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionContainer_GetFirstCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionContainer_GetFirstCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionContainer_GetState_Statics
	{
		struct ConditionContainer_eventGetState_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConditionContainer_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionContainer_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConditionContainer_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionContainer_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionContainer_GetState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionContainer_GetState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionContainer_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ConditionContainer" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionContainer_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionContainer, nullptr, "GetState", nullptr, nullptr, sizeof(ConditionContainer_eventGetState_Parms), Z_Construct_UFunction_UConditionContainer_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionContainer_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionContainer_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionContainer_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics
	{
		struct ConditionContainer_eventStartInstantCheck_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionContainer_eventStartInstantCheck_Parms, ReturnValue), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "ConditionContainer" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionContainer, nullptr, "StartInstantCheck", nullptr, nullptr, sizeof(ConditionContainer_eventStartInstantCheck_Parms), Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionContainer_StartInstantCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionContainer_StartInstantCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics
	{
		struct ConditionContainer_eventStartLatentCheck_Parms
		{
			FScriptDelegate InOnComplete;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOnComplete_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_InOnComplete;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::NewProp_InOnComplete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::NewProp_InOnComplete = { "InOnComplete", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConditionContainer_eventStartLatentCheck_Parms, InOnComplete), Z_Construct_UDelegateFunction_QuestExtension_ConditionCompleteDel__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::NewProp_InOnComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::NewProp_InOnComplete_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::NewProp_InOnComplete,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "ConditionContainer" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConditionContainer, nullptr, "StartLatentCheck", nullptr, nullptr, sizeof(ConditionContainer_eventStartLatentCheck_Parms), Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConditionContainer_StartLatentCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConditionContainer_StartLatentCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConditionContainer_NoRegister()
	{
		return UConditionContainer::StaticClass();
	}
	struct Z_Construct_UClass_UConditionContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomManager;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllConditions;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllConditions_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmptyResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmptyResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowsLatentExecution_MetaData[];
#endif
		static void NewProp_bAllowsLatentExecution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowsLatentExecution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConditionContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConditionContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConditionContainer_CancelLatentCheck, "CancelLatentCheck" }, // 631294707
		{ &Z_Construct_UFunction_UConditionContainer_GetFirstCondition, "GetFirstCondition" }, // 4095390808
		{ &Z_Construct_UFunction_UConditionContainer_GetState, "GetState" }, // 367541995
		{ &Z_Construct_UFunction_UConditionContainer_StartInstantCheck, "StartInstantCheck" }, // 630656824
		{ &Z_Construct_UFunction_UConditionContainer_StartLatentCheck, "StartLatentCheck" }, // 4227246529
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Quests/Conditions/ConditionContainer.h" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionContainer_Statics::NewProp_CustomManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConditionContainer_Statics::NewProp_CustomManager = { "CustomManager", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConditionContainer, CustomManager), Z_Construct_UClass_UQuestManagerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConditionContainer_Statics::NewProp_CustomManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionContainer_Statics::NewProp_CustomManager_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionContainer_Statics::NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConditionContainer_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConditionContainer, Graph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConditionContainer_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionContainer_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionContainer_Statics::NewProp_AllConditions_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConditionContainer_Statics::NewProp_AllConditions = { "AllConditions", nullptr, (EPropertyFlags)0x0010008800000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConditionContainer, AllConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConditionContainer_Statics::NewProp_AllConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionContainer_Statics::NewProp_AllConditions_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConditionContainer_Statics::NewProp_AllConditions_Inner = { "AllConditions", nullptr, (EPropertyFlags)0x0000000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionContainer_Statics::NewProp_FirstCondition_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConditionContainer_Statics::NewProp_FirstCondition = { "FirstCondition", nullptr, (EPropertyFlags)0x0010000001080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConditionContainer, FirstCondition), Z_Construct_UClass_UQuestCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConditionContainer_Statics::NewProp_FirstCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionContainer_Statics::NewProp_FirstCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionContainer_Statics::NewProp_EmptyResult_MetaData[] = {
		{ "Category", "ConditionContainer" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UConditionContainer_Statics::NewProp_EmptyResult = { "EmptyResult", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConditionContainer, EmptyResult), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(Z_Construct_UClass_UConditionContainer_Statics::NewProp_EmptyResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionContainer_Statics::NewProp_EmptyResult_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UConditionContainer_Statics::NewProp_EmptyResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConditionContainer_Statics::NewProp_bAllowsLatentExecution_MetaData[] = {
		{ "Category", "ConditionContainer" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/ConditionContainer.h" },
	};
#endif
	void Z_Construct_UClass_UConditionContainer_Statics::NewProp_bAllowsLatentExecution_SetBit(void* Obj)
	{
		((UConditionContainer*)Obj)->bAllowsLatentExecution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConditionContainer_Statics::NewProp_bAllowsLatentExecution = { "bAllowsLatentExecution", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UConditionContainer), &Z_Construct_UClass_UConditionContainer_Statics::NewProp_bAllowsLatentExecution_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConditionContainer_Statics::NewProp_bAllowsLatentExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionContainer_Statics::NewProp_bAllowsLatentExecution_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConditionContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionContainer_Statics::NewProp_CustomManager,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionContainer_Statics::NewProp_Graph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionContainer_Statics::NewProp_AllConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionContainer_Statics::NewProp_AllConditions_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionContainer_Statics::NewProp_FirstCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionContainer_Statics::NewProp_EmptyResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionContainer_Statics::NewProp_EmptyResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConditionContainer_Statics::NewProp_bAllowsLatentExecution,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConditionContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConditionContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConditionContainer_Statics::ClassParams = {
		&UConditionContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UConditionContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConditionContainer_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConditionContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConditionContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConditionContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConditionContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConditionContainer, 3092545583);
	template<> QUESTEXTENSION_API UClass* StaticClass<UConditionContainer>()
	{
		return UConditionContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConditionContainer(Z_Construct_UClass_UConditionContainer, &UConditionContainer::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UConditionContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConditionContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
