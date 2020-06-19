// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Conditions/QC_AsyncQuest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQC_AsyncQuest() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_AsyncQuest_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_AsyncQuest();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestCondition();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestCompletionState();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeQuest();
// End Cross Module References
	DEFINE_FUNCTION(UQC_AsyncQuest::execOnQuestFinished)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UQuestBase>,Z_Param_InQuestAsset);
		P_GET_ENUM(EQuestCompletionState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestFinished(Z_Param_InQuestAsset,EQuestCompletionState(Z_Param_State));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQC_AsyncQuest::execOnQuestStarted)
	{
		P_GET_STRUCT_REF(FRuntimeQuest,Z_Param_Out_InQuest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestStarted(Z_Param_Out_InQuest);
		P_NATIVE_END;
	}
	void UQC_AsyncQuest::StaticRegisterNativesUQC_AsyncQuest()
	{
		UClass* Class = UQC_AsyncQuest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQuestFinished", &UQC_AsyncQuest::execOnQuestFinished },
			{ "OnQuestStarted", &UQC_AsyncQuest::execOnQuestStarted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics
	{
		struct QC_AsyncQuest_eventOnQuestFinished_Parms
		{
			TSoftObjectPtr<UQuestBase> InQuestAsset;
			EQuestCompletionState State;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuestAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_InQuestAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QC_AsyncQuest_eventOnQuestFinished_Parms, State), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_InQuestAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_InQuestAsset = { "InQuestAsset", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QC_AsyncQuest_eventOnQuestFinished_Parms, InQuestAsset), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_InQuestAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_InQuestAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::NewProp_InQuestAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQC_AsyncQuest, nullptr, "OnQuestFinished", nullptr, nullptr, sizeof(QC_AsyncQuest_eventOnQuestFinished_Parms), Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics
	{
		struct QC_AsyncQuest_eventOnQuestStarted_Parms
		{
			FRuntimeQuest InQuest;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::NewProp_InQuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::NewProp_InQuest = { "InQuest", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QC_AsyncQuest_eventOnQuestStarted_Parms, InQuest), Z_Construct_UScriptStruct_FRuntimeQuest, METADATA_PARAMS(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::NewProp_InQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::NewProp_InQuest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::NewProp_InQuest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQC_AsyncQuest, nullptr, "OnQuestStarted", nullptr, nullptr, sizeof(QC_AsyncQuest_eventOnQuestStarted_Parms), Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQC_AsyncQuest_NoRegister()
	{
		return UQC_AsyncQuest::StaticClass();
	}
	struct Z_Construct_UClass_UQC_AsyncQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInverseCondition_MetaData[];
#endif
		static void NewProp_bInverseCondition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInverseCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ExpectedState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ExpectedState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQC_AsyncQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQC_AsyncQuest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQC_AsyncQuest_OnQuestFinished, "OnQuestFinished" }, // 1306355677
		{ &Z_Construct_UFunction_UQC_AsyncQuest_OnQuestStarted, "OnQuestStarted" }, // 627770159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_AsyncQuest_Statics::Class_MetaDataParams[] = {
		{ "Category", "Quests" },
		{ "DisplayName", "Compare Quest (Latent)" },
		{ "IncludePath", "Quests/Conditions/QC_AsyncQuest.h" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncQuest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_bInverseCondition_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Whether or not should negate the condition */" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncQuest.h" },
		{ "ToolTip", "Whether or not should negate the condition" },
	};
#endif
	void Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_bInverseCondition_SetBit(void* Obj)
	{
		((UQC_AsyncQuest*)Obj)->bInverseCondition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_bInverseCondition = { "bInverseCondition", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQC_AsyncQuest), &Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_bInverseCondition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_bInverseCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_bInverseCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_ExpectedState_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Expected quest state to succeed */" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncQuest.h" },
		{ "ToolTip", "Expected quest state to succeed" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_ExpectedState = { "ExpectedState", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_AsyncQuest, ExpectedState), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_ExpectedState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_ExpectedState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_ExpectedState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "Condition" },
		{ "Comment", "/** Quest that will be compared */" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_AsyncQuest.h" },
		{ "ToolTip", "Quest that will be compared" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQC_AsyncQuest, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQC_AsyncQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_bInverseCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_ExpectedState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_ExpectedState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQC_AsyncQuest_Statics::NewProp_Quest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQC_AsyncQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQC_AsyncQuest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQC_AsyncQuest_Statics::ClassParams = {
		&UQC_AsyncQuest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQC_AsyncQuest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncQuest_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQC_AsyncQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_AsyncQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQC_AsyncQuest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQC_AsyncQuest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQC_AsyncQuest, 1496605147);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQC_AsyncQuest>()
	{
		return UQC_AsyncQuest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQC_AsyncQuest(Z_Construct_UClass_UQC_AsyncQuest, &UQC_AsyncQuest::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQC_AsyncQuest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQC_AsyncQuest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
