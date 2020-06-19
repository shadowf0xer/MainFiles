// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/Flow/QGNode_Branch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNode_Branch() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Branch_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Branch();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Logic();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
// End Cross Module References
	DEFINE_FUNCTION(UQGNode_Branch::execNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->No();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQGNode_Branch::execYes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Yes();
		P_NATIVE_END;
	}
	void UQGNode_Branch::StaticRegisterNativesUQGNode_Branch()
	{
		UClass* Class = UQGNode_Branch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "No", &UQGNode_Branch::execNo },
			{ "Yes", &UQGNode_Branch::execYes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQGNode_Branch_No_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Branch_No_Statics::Function_MetaDataParams[] = {
		{ "Category", "Branch" },
		{ "Comment", "// Call to fail this node and call \"No\" output\n" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_Branch.h" },
		{ "ToolTip", "Call to fail this node and call \"No\" output" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_Branch_No_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode_Branch, nullptr, "No", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Branch_No_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Branch_No_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_Branch_No()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_Branch_No_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQGNode_Branch_Yes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Branch_Yes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Branch" },
		{ "Comment", "// Call to succeed this node and call \"Yes\" output\n" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_Branch.h" },
		{ "ToolTip", "Call to succeed this node and call \"Yes\" output" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_Branch_Yes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode_Branch, nullptr, "Yes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Branch_Yes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Branch_Yes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_Branch_Yes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_Branch_Yes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQGNode_Branch_NoRegister()
	{
		return UQGNode_Branch::StaticClass();
	}
	struct Z_Construct_UClass_UQGNode_Branch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGNode_Branch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQGNode_Logic,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQGNode_Branch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQGNode_Branch_No, "No" }, // 4250236163
		{ &Z_Construct_UFunction_UQGNode_Branch_Yes, "Yes" }, // 2508144841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Branch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Flow" },
		{ "DisplayName", "Branch" },
		{ "HiddenInQuestGroup", "" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Quests/QGNodes/Flow/QGNode_Branch.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Flow/QGNode_Branch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGNode_Branch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGNode_Branch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQGNode_Branch_Statics::ClassParams = {
		&UQGNode_Branch::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQGNode_Branch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Branch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQGNode_Branch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQGNode_Branch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQGNode_Branch, 1619377241);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQGNode_Branch>()
	{
		return UQGNode_Branch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQGNode_Branch(Z_Construct_UClass_UQGNode_Branch, &UQGNode_Branch::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQGNode_Branch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGNode_Branch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
