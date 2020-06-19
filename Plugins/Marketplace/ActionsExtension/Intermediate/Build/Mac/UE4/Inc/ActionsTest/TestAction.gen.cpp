// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/Private/TestAction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestAction() {}
// Cross Module References
	ACTIONSTEST_API UClass* Z_Construct_UClass_UTestAction_NoRegister();
	ACTIONSTEST_API UClass* Z_Construct_UClass_UTestAction();
	ACTIONS_API UClass* Z_Construct_UClass_UAction();
	UPackage* Z_Construct_UPackage__Script_ActionsTest();
// End Cross Module References
	void UTestAction::StaticRegisterNativesUTestAction()
	{
	}
	UClass* Z_Construct_UClass_UTestAction_NoRegister()
	{
		return UTestAction::StaticClass();
	}
	struct Z_Construct_UClass_UTestAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAction,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionsTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestAction.h" },
		{ "ModuleRelativePath", "Private/TestAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestAction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestAction_Statics::ClassParams = {
		&UTestAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTestAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestAction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestAction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestAction, 1266341293);
	template<> ACTIONSTEST_API UClass* StaticClass<UTestAction>()
	{
		return UTestAction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestAction(Z_Construct_UClass_UTestAction, &UTestAction::StaticClass, TEXT("/Script/ActionsTest"), TEXT("UTestAction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestAction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
