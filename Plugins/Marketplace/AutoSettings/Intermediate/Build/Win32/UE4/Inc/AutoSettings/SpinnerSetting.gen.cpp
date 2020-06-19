// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/SpinnerSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinnerSetting() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USpinnerSetting_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USpinnerSetting();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USelectSetting();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USpinner_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USpinnerSetting::execSpinnerSelectionChanged)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpinnerSelectionChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	void USpinnerSetting::StaticRegisterNativesUSpinnerSetting()
	{
		UClass* Class = USpinnerSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpinnerSelectionChanged", &USpinnerSetting::execSpinnerSelectionChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics
	{
		struct SpinnerSetting_eventSpinnerSelectionChanged_Parms
		{
			FString Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpinnerSetting_eventSpinnerSelectionChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/SpinnerSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinnerSetting, nullptr, "SpinnerSelectionChanged", nullptr, nullptr, sizeof(SpinnerSetting_eventSpinnerSelectionChanged_Parms), Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpinnerSetting_NoRegister()
	{
		return USpinnerSetting::StaticClass();
	}
	struct Z_Construct_UClass_USpinnerSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spinner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spinner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpinnerSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USelectSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpinnerSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpinnerSetting_SpinnerSelectionChanged, "SpinnerSelectionChanged" }, // 1891628375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinnerSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AutoSetting for a Spinner\n */" },
		{ "IncludePath", "UI/SettingControls/SpinnerSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SpinnerSetting.h" },
		{ "ToolTip", "AutoSetting for a Spinner" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinnerSetting_Statics::NewProp_Spinner_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Spinner Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SpinnerSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpinnerSetting_Statics::NewProp_Spinner = { "Spinner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinnerSetting, Spinner), Z_Construct_UClass_USpinner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpinnerSetting_Statics::NewProp_Spinner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpinnerSetting_Statics::NewProp_Spinner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpinnerSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinnerSetting_Statics::NewProp_Spinner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpinnerSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinnerSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpinnerSetting_Statics::ClassParams = {
		&USpinnerSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpinnerSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpinnerSetting_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USpinnerSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpinnerSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpinnerSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpinnerSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpinnerSetting, 2022821595);
	template<> AUTOSETTINGS_API UClass* StaticClass<USpinnerSetting>()
	{
		return USpinnerSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpinnerSetting(Z_Construct_UClass_USpinnerSetting, &USpinnerSetting::StaticClass, TEXT("/Script/AutoSettings"), TEXT("USpinnerSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpinnerSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
