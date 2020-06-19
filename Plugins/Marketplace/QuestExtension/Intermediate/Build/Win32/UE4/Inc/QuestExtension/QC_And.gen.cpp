// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Conditions/QC_And.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQC_And() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_And_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQC_And();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestCondition();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EConditionState();
// End Cross Module References
	DEFINE_FUNCTION(UQC_And::execOnConditionCompleted)
	{
		P_GET_ENUM(EConditionState,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConditionCompleted(EConditionState(Z_Param_Result));
		P_NATIVE_END;
	}
	void UQC_And::StaticRegisterNativesUQC_And()
	{
		UClass* Class = UQC_And::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnConditionCompleted", &UQC_And::execOnConditionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics
	{
		struct QC_And_eventOnConditionCompleted_Parms
		{
			EConditionState Result;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QC_And_eventOnConditionCompleted_Parms, Result), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_And.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQC_And, nullptr, "OnConditionCompleted", nullptr, nullptr, sizeof(QC_And_eventOnConditionCompleted_Parms), Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQC_And_OnConditionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQC_And_OnConditionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQC_And_NoRegister()
	{
		return UQC_And::StaticClass();
	}
	struct Z_Construct_UClass_UQC_And_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQC_And_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQC_And_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQC_And_OnConditionCompleted, "OnConditionCompleted" }, // 117433911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQC_And_Statics::Class_MetaDataParams[] = {
		{ "Category", "Flow" },
		{ "DisplayName", "Require All" },
		{ "IncludePath", "Quests/Conditions/QC_And.h" },
		{ "ModuleRelativePath", "Public/Quests/Conditions/QC_And.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQC_And_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQC_And>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQC_And_Statics::ClassParams = {
		&UQC_And::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQC_And_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQC_And_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQC_And()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQC_And_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQC_And, 3699732203);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQC_And>()
	{
		return UQC_And::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQC_And(Z_Construct_UClass_UQC_And, &UQC_And::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQC_And"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQC_And);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
