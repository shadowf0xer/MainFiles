// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/SelectSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectSetting() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USelectSetting_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USelectSetting();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSettingOption();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingOptionFactory_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USelectSetting::execUpdateOptions)
	{
		P_GET_TARRAY_REF(FSettingOption,Z_Param_Out_InOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOptions_Implementation(Z_Param_Out_InOptions);
		P_NATIVE_END;
	}
	static FName NAME_USelectSetting_UpdateOptions = FName(TEXT("UpdateOptions"));
	void USelectSetting::UpdateOptions(TArray<FSettingOption> const& InOptions)
	{
		SelectSetting_eventUpdateOptions_Parms Parms;
		Parms.InOptions=InOptions;
		ProcessEvent(FindFunctionChecked(NAME_USelectSetting_UpdateOptions),&Parms);
	}
	void USelectSetting::StaticRegisterNativesUSelectSetting()
	{
		UClass* Class = USelectSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateOptions", &USelectSetting::execUpdateOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InOptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOptions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions = { "InOptions", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SelectSetting_eventUpdateOptions_Parms, InOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions_Inner = { "InOptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::NewProp_InOptions_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Select Setting" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectSetting, nullptr, "UpdateOptions", nullptr, nullptr, sizeof(SelectSetting_eventUpdateOptions_Parms), Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectSetting_UpdateOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectSetting_UpdateOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USelectSetting_NoRegister()
	{
		return USelectSetting::StaticClass();
	}
	struct Z_Construct_UClass_USelectSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatingSettingOptions_MetaData[];
#endif
		static void NewProp_bUpdatingSettingOptions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatingSettingOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionFactory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OptionFactory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutoSettingWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectSetting_UpdateOptions, "UpdateOptions" }, // 334086835
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for any AutoSetting containing multiple pre-defined options\n */" },
		{ "IncludePath", "UI/SettingControls/SelectSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
		{ "ToolTip", "Base class for any AutoSetting containing multiple pre-defined options" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
	};
#endif
	void Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions_SetBit(void* Obj)
	{
		((USelectSetting*)Obj)->bUpdatingSettingOptions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions = { "bUpdatingSettingOptions", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USelectSetting), &Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions_SetBit, METADATA_PARAMS(Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectSetting_Statics::NewProp_OptionFactory_MetaData[] = {
		{ "Category", "Select Setting" },
		{ "Comment", "// Factory to use to dynamically create options\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
		{ "ToolTip", "Factory to use to dynamically create options" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USelectSetting_Statics::NewProp_OptionFactory = { "OptionFactory", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USelectSetting, OptionFactory), Z_Construct_UClass_USettingOptionFactory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USelectSetting_Statics::NewProp_OptionFactory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelectSetting_Statics::NewProp_OptionFactory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectSetting_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Select Setting" },
		{ "Comment", "// Predefined options\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SelectSetting.h" },
		{ "ToolTip", "Predefined options" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USelectSetting_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USelectSetting, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USelectSetting_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelectSetting_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USelectSetting_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelectSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectSetting_Statics::NewProp_bUpdatingSettingOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectSetting_Statics::NewProp_OptionFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectSetting_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectSetting_Statics::NewProp_Options_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelectSetting_Statics::ClassParams = {
		&USelectSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USelectSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USelectSetting_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USelectSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelectSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelectSetting, 616310624);
	template<> AUTOSETTINGS_API UClass* StaticClass<USelectSetting>()
	{
		return USelectSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelectSetting(Z_Construct_UClass_USelectSetting, &USelectSetting::StaticClass, TEXT("/Script/AutoSettings"), TEXT("USelectSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
