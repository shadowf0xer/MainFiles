// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/QuestExtensionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestExtensionSettings() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestExtensionSettings_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestExtensionSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
// End Cross Module References
	void UQuestExtensionSettings::StaticRegisterNativesUQuestExtensionSettings()
	{
	}
	UClass* Z_Construct_UClass_UQuestExtensionSettings_NoRegister()
	{
		return UQuestExtensionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UQuestExtensionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDebuggerSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxDebuggerSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysGatherData_MetaData[];
#endif
		static void NewProp_bAlwaysGatherData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysGatherData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestExtensionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestExtensionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Find Custom Config documentation here: wiki.unrealengine.com/CustomSettings\n */" },
		{ "IncludePath", "QuestExtensionSettings.h" },
		{ "ModuleRelativePath", "Public/QuestExtensionSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Find Custom Config documentation here: wiki.unrealengine.com/CustomSettings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_MaxDebuggerSteps_MetaData[] = {
		{ "Category", "Debugger" },
		{ "ModuleRelativePath", "Public/QuestExtensionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_MaxDebuggerSteps = { "MaxDebuggerSteps", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestExtensionSettings, MaxDebuggerSteps), METADATA_PARAMS(Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_MaxDebuggerSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_MaxDebuggerSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_bAlwaysGatherData_MetaData[] = {
		{ "Category", "Debugger" },
		{ "ModuleRelativePath", "Public/QuestExtensionSettings.h" },
	};
#endif
	void Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_bAlwaysGatherData_SetBit(void* Obj)
	{
		((UQuestExtensionSettings*)Obj)->bAlwaysGatherData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_bAlwaysGatherData = { "bAlwaysGatherData", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuestExtensionSettings), &Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_bAlwaysGatherData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_bAlwaysGatherData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_bAlwaysGatherData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestExtensionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_MaxDebuggerSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestExtensionSettings_Statics::NewProp_bAlwaysGatherData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestExtensionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestExtensionSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestExtensionSettings_Statics::ClassParams = {
		&UQuestExtensionSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestExtensionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestExtensionSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestExtensionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestExtensionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestExtensionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestExtensionSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestExtensionSettings, 571530097);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuestExtensionSettings>()
	{
		return UQuestExtensionSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestExtensionSettings(Z_Construct_UClass_UQuestExtensionSettings, &UQuestExtensionSettings::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuestExtensionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestExtensionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
