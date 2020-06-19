// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Quest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuest_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuest();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestBase();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestCompletionState();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EConditionState();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UConditionContainer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuest::execIsInQuestGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInQuestGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execOnConditionCompleted)
	{
		P_GET_ENUM(EConditionState,Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnConditionCompleted(EConditionState(Z_Param_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuest::execFinishQuest)
	{
		P_GET_ENUM(EQuestCompletionState,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishQuest(EQuestCompletionState(Z_Param_State));
		P_NATIVE_END;
	}
	static FName NAME_UQuest_ReceiveFinish = FName(TEXT("ReceiveFinish"));
	void UQuest::ReceiveFinish(const EQuestCompletionState State)
	{
		Quest_eventReceiveFinish_Parms Parms;
		Parms.State=State;
		ProcessEvent(FindFunctionChecked(NAME_UQuest_ReceiveFinish),&Parms);
	}
	static FName NAME_UQuest_ReceiveStart = FName(TEXT("ReceiveStart"));
	void UQuest::ReceiveStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UQuest_ReceiveStart),NULL);
	}
	void UQuest::StaticRegisterNativesUQuest()
	{
		UClass* Class = UQuest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FinishQuest", &UQuest::execFinishQuest },
			{ "IsInQuestGroup", &UQuest::execIsInQuestGroup },
			{ "OnConditionCompleted", &UQuest::execOnConditionCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuest_FinishQuest_Statics
	{
		struct Quest_eventFinishQuest_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_FinishQuest_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuest_FinishQuest_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventFinishQuest_Parms, State), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UFunction_UQuest_FinishQuest_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_FinishQuest_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuest_FinishQuest_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_FinishQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_FinishQuest_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_FinishQuest_Statics::NewProp_State_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_FinishQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "Comment", "/**\n\x09* Finishes this quest\n\x09*/" },
		{ "ModuleRelativePath", "Public/Quests/Quest.h" },
		{ "ToolTip", "Finishes this quest" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_FinishQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "FinishQuest", nullptr, nullptr, sizeof(Quest_eventFinishQuest_Parms), Z_Construct_UFunction_UQuest_FinishQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_FinishQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_FinishQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_FinishQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_FinishQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuest_FinishQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics
	{
		struct Quest_eventIsInQuestGroup_Parms
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
	void Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Quest_eventIsInQuestGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Quest_eventIsInQuestGroup_Parms), &Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Condition" },
		{ "Comment", "/**\n\x09 * Check if this quest is contained inside a Quest Group\n\x09 *\n\x09 * @return true if is inside a Quest Group\n\x09 */" },
		{ "ModuleRelativePath", "Public/Quests/Quest.h" },
		{ "ToolTip", "Check if this quest is contained inside a Quest Group\n\n@return true if is inside a Quest Group" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "IsInQuestGroup", nullptr, nullptr, sizeof(Quest_eventIsInQuestGroup_Parms), Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_IsInQuestGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuest_IsInQuestGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics
	{
		struct Quest_eventOnConditionCompleted_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventOnConditionCompleted_Parms, Result), Z_Construct_UEnum_QuestExtension_EConditionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "OnConditionCompleted", nullptr, nullptr, sizeof(Quest_eventOnConditionCompleted_Parms), Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_OnConditionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuest_OnConditionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_ReceiveFinish_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::NewProp_State_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Quest_eventReceiveFinish_Parms, State), Z_Construct_UEnum_QuestExtension_EQuestCompletionState, METADATA_PARAMS(Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::NewProp_State_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "ReceiveFinish", nullptr, nullptr, sizeof(Quest_eventReceiveFinish_Parms), Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_ReceiveFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuest_ReceiveFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuest_ReceiveStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuest_ReceiveStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuest_ReceiveStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuest, nullptr, "ReceiveStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuest_ReceiveStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuest_ReceiveStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuest_ReceiveStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuest_ReceiveStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuest_NoRegister()
	{
		return UQuest::StaticClass();
	}
	struct Z_Construct_UClass_UQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompleteConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CompleteConditions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestBase,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuest_FinishQuest, "FinishQuest" }, // 3589798488
		{ &Z_Construct_UFunction_UQuest_IsInQuestGroup, "IsInQuestGroup" }, // 3842412303
		{ &Z_Construct_UFunction_UQuest_OnConditionCompleted, "OnConditionCompleted" }, // 4087214981
		{ &Z_Construct_UFunction_UQuest_ReceiveFinish, "ReceiveFinish" }, // 2851598614
		{ &Z_Construct_UFunction_UQuest_ReceiveStart, "ReceiveStart" }, // 2159571664
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Quest\n * A Quest is an asset that contains name, description,\n * conditions to complete or fail and more.\n *\n * Custom Quests with new logic will inherit from this class.\n */" },
		{ "IncludePath", "Quests/Quest.h" },
		{ "ModuleRelativePath", "Public/Quests/Quest.h" },
		{ "ToolTip", "Quest\nA Quest is an asset that contains name, description,\nconditions to complete or fail and more.\n\nCustom Quests with new logic will inherit from this class." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuest_Statics::NewProp_CompleteConditions_MetaData[] = {
		{ "Category", "Quest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quests/Quest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuest_Statics::NewProp_CompleteConditions = { "CompleteConditions", nullptr, (EPropertyFlags)0x0012000001080829, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuest, CompleteConditions), Z_Construct_UClass_UConditionContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::NewProp_CompleteConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::NewProp_CompleteConditions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuest_Statics::NewProp_CompleteConditions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuest_Statics::ClassParams = {
		&UQuest::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::PropPointers),
		0,
		0x009010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuest, 923955140);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuest>()
	{
		return UQuest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuest(Z_Construct_UClass_UQuest, &UQuest::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuest"), false, nullptr, nullptr, nullptr);

	void UQuest::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CompleteConditions(TEXT("CompleteConditions"));

		const bool bIsValid = true
			&& Name_CompleteConditions == ClassReps[(int32)ENetFields_Private::CompleteConditions].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UQuest"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
