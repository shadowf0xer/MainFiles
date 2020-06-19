// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/QGNode_Logic.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNode_Logic() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Logic_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Logic();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQGNodeFinishReason();
// End Cross Module References
	DEFINE_FUNCTION(UQGNode_Logic::execGetNodeName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetNodeName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQGNode_Logic::execReceiveStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveStart_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UQGNode_Logic_GetNodeName = FName(TEXT("GetNodeName"));
	FText UQGNode_Logic::GetNodeName() const
	{
		QGNode_Logic_eventGetNodeName_Parms Parms;
		const_cast<UQGNode_Logic*>(this)->ProcessEvent(FindFunctionChecked(NAME_UQGNode_Logic_GetNodeName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UQGNode_Logic_ReceiveFinish = FName(TEXT("ReceiveFinish"));
	void UQGNode_Logic::ReceiveFinish(const EQGNodeFinishReason Reason)
	{
		QGNode_Logic_eventReceiveFinish_Parms Parms;
		Parms.Reason=Reason;
		ProcessEvent(FindFunctionChecked(NAME_UQGNode_Logic_ReceiveFinish),&Parms);
	}
	static FName NAME_UQGNode_Logic_ReceiveStart = FName(TEXT("ReceiveStart"));
	void UQGNode_Logic::ReceiveStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UQGNode_Logic_ReceiveStart),NULL);
	}
	void UQGNode_Logic::StaticRegisterNativesUQGNode_Logic()
	{
		UClass* Class = UQGNode_Logic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNodeName", &UQGNode_Logic::execGetNodeName },
			{ "ReceiveStart", &UQGNode_Logic::execReceiveStart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QGNode_Logic_eventGetNodeName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode_Logic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode_Logic, nullptr, "GetNodeName", nullptr, nullptr, sizeof(QGNode_Logic_eventGetNodeName_Parms), Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_Logic_GetNodeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_Logic_GetNodeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QGNode_Logic_eventReceiveFinish_Parms, Reason), Z_Construct_UEnum_QuestExtension_EQGNodeFinishReason, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::NewProp_Reason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode_Logic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode_Logic, nullptr, "ReceiveFinish", nullptr, nullptr, sizeof(QGNode_Logic_eventReceiveFinish_Parms), Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_Logic_ReceiveStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Logic_ReceiveStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode_Logic.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_Logic_ReceiveStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode_Logic, nullptr, "ReceiveStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Logic_ReceiveStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Logic_ReceiveStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_Logic_ReceiveStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_Logic_ReceiveStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQGNode_Logic_NoRegister()
	{
		return UQGNode_Logic::StaticClass();
	}
	struct Z_Construct_UClass_UQGNode_Logic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGNode_Logic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQGNode,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQGNode_Logic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQGNode_Logic_GetNodeName, "GetNodeName" }, // 509473506
		{ &Z_Construct_UFunction_UQGNode_Logic_ReceiveFinish, "ReceiveFinish" }, // 3907486433
		{ &Z_Construct_UFunction_UQGNode_Logic_ReceiveStart, "ReceiveStart" }, // 1968609583
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Logic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Logic" },
		{ "HiddenInQuestGroup", "" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Quests/QGNodes/QGNode_Logic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/QGNode_Logic.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGNode_Logic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGNode_Logic>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQGNode_Logic_Statics::ClassParams = {
		&UQGNode_Logic::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQGNode_Logic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Logic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQGNode_Logic()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQGNode_Logic_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQGNode_Logic, 709692132);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQGNode_Logic>()
	{
		return UQGNode_Logic::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQGNode_Logic(Z_Construct_UClass_UQGNode_Logic, &UQGNode_Logic::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQGNode_Logic"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGNode_Logic);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
