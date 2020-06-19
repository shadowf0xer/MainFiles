// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/Flow/QGNode_ConditionBranch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNode_ConditionBranch() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_ConditionBranch_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_ConditionBranch();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Branch();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EConditionState();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UConditionContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQGNode_ConditionBranch::execOnConditionCompleted)
	{
		P_GET_ENUM(EConditionState,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConditionCompleted(EConditionState(Z_Param_Result));
		P_NATIVE_END;
	}
	void UQGNode_ConditionBranch::StaticRegisterNativesUQGNode_ConditionBranch()
	{
		UClass* Class = UQGNode_ConditionBranch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnConditionCompleted", &UQGNode_ConditionBranch::execOnConditionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics
	{
		struct QGNode_ConditionBranch_eventOnConditionCompleted_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QGNode_ConditionBranch_eventOnConditionCompleted_Parms, Result), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_ConditionBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode_ConditionBranch, nullptr, "OnConditionCompleted", nullptr, nullptr, sizeof(QGNode_ConditionBranch_eventOnConditionCompleted_Parms), Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQGNode_ConditionBranch_NoRegister()
	{
		return UQGNode_ConditionBranch::StaticClass();
	}
	struct Z_Construct_UClass_UQGNode_ConditionBranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGNode_ConditionBranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQGNode_Branch,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQGNode_ConditionBranch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQGNode_ConditionBranch_OnConditionCompleted, "OnConditionCompleted" }, // 1451394976
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_ConditionBranch_Statics::Class_MetaDataParams[] = {
		{ "Category", "Flow" },
		{ "DisplayName", "Condition" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Quests/QGNodes/Flow/QGNode_ConditionBranch.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_ConditionBranch.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_ConditionBranch_Statics::NewProp_Conditions_MetaData[] = {
		{ "Category", "Condition Branch" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_ConditionBranch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQGNode_ConditionBranch_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0042000001080809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode_ConditionBranch, Conditions), Z_Construct_UClass_UConditionContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQGNode_ConditionBranch_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_ConditionBranch_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQGNode_ConditionBranch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_ConditionBranch_Statics::NewProp_Conditions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGNode_ConditionBranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGNode_ConditionBranch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQGNode_ConditionBranch_Statics::ClassParams = {
		&UQGNode_ConditionBranch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQGNode_ConditionBranch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_ConditionBranch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQGNode_ConditionBranch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_ConditionBranch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQGNode_ConditionBranch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQGNode_ConditionBranch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQGNode_ConditionBranch, 1490473665);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQGNode_ConditionBranch>()
	{
		return UQGNode_ConditionBranch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQGNode_ConditionBranch(Z_Construct_UClass_UQGNode_ConditionBranch, &UQGNode_ConditionBranch::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQGNode_ConditionBranch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGNode_ConditionBranch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
