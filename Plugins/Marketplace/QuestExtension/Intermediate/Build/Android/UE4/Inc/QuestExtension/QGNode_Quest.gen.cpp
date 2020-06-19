// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/Content/QGNode_Quest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNode_Quest() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Quest_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Quest();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestCompletionState();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQGNode_Quest::execOnQuestFinished)
	{
		P_GET_ENUM(EQuestCompletionState,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestFinished(EQuestCompletionState(Z_Param_Result));
		P_NATIVE_END;
	}
	void UQGNode_Quest::StaticRegisterNativesUQGNode_Quest()
	{
		UClass* Class = UQGNode_Quest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQuestFinished", &UQGNode_Quest::execOnQuestFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics
	{
		struct QGNode_Quest_eventOnQuestFinished_Parms
		{
			EQuestCompletionState Result;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QGNode_Quest_eventOnQuestFinished_Parms, Result), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Content/QGNode_Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode_Quest, nullptr, "OnQuestFinished", nullptr, nullptr, sizeof(QGNode_Quest_eventOnQuestFinished_Parms), Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQGNode_Quest_NoRegister()
	{
		return UQGNode_Quest::StaticClass();
	}
	struct Z_Construct_UClass_UQGNode_Quest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsOptional_MetaData[];
#endif
		static void NewProp_bIsOptional_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsOptional;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGNode_Quest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQGNode,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQGNode_Quest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQGNode_Quest_OnQuestFinished, "OnQuestFinished" }, // 3213725041
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Quest_Statics::Class_MetaDataParams[] = {
		{ "Category", "Content" },
		{ "DisplayName", "Quest" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Quests/QGNodes/Content/QGNode_Quest.h" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Content/QGNode_Quest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_bIsOptional_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Content/QGNode_Quest.h" },
	};
#endif
	void Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_bIsOptional_SetBit(void* Obj)
	{
		((UQGNode_Quest*)Obj)->bIsOptional = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_bIsOptional = { "bIsOptional", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQGNode_Quest), &Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_bIsOptional_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_bIsOptional_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_bIsOptional_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "Quest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Content/QGNode_Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode_Quest, Quest), Z_Construct_UClass_UQuestBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_Quest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQGNode_Quest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_bIsOptional,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Quest_Statics::NewProp_Quest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGNode_Quest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGNode_Quest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQGNode_Quest_Statics::ClassParams = {
		&UQGNode_Quest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQGNode_Quest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Quest_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQGNode_Quest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Quest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQGNode_Quest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQGNode_Quest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQGNode_Quest, 2675396970);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQGNode_Quest>()
	{
		return UQGNode_Quest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQGNode_Quest(Z_Construct_UClass_UQGNode_Quest, &UQGNode_Quest::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQGNode_Quest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGNode_Quest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
