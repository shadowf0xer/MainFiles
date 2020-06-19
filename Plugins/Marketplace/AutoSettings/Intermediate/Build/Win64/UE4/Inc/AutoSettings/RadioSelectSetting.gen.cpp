// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/RadioSelectSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioSelectSetting() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioSelectSetting_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioSelectSetting();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USelectSetting();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioSelect_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(URadioSelectSetting::execRadioSelectionChanged)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RadioSelectionChanged(Z_Param_Value);
		P_NATIVE_END;
	}
	void URadioSelectSetting::StaticRegisterNativesURadioSelectSetting()
	{
		UClass* Class = URadioSelectSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RadioSelectionChanged", &URadioSelectSetting::execRadioSelectionChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics
	{
		struct RadioSelectSetting_eventRadioSelectionChanged_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioSelectSetting_eventRadioSelectionChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/RadioSelectSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelectSetting, nullptr, "RadioSelectionChanged", nullptr, nullptr, sizeof(RadioSelectSetting_eventRadioSelectionChanged_Parms), Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URadioSelectSetting_NoRegister()
	{
		return URadioSelectSetting::StaticClass();
	}
	struct Z_Construct_UClass_URadioSelectSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioSelect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadioSelect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RadioButtonClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URadioSelectSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USelectSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URadioSelectSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URadioSelectSetting_RadioSelectionChanged, "RadioSelectionChanged" }, // 3887332064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioSelectSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AutoSetting for a RadioSelect\n */" },
		{ "IncludePath", "UI/SettingControls/RadioSelectSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/RadioSelectSetting.h" },
		{ "ToolTip", "AutoSetting for a RadioSelect" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioSelect_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Radio Select Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/RadioSelectSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioSelect = { "RadioSelect", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioSelectSetting, RadioSelect), Z_Construct_UClass_URadioSelect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioSelect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioButtonClass_MetaData[] = {
		{ "Category", "Radio Select Setting" },
		{ "Comment", "// RadioButton class to create for each option\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/RadioSelectSetting.h" },
		{ "ToolTip", "RadioButton class to create for each option" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioButtonClass = { "RadioButtonClass", nullptr, (EPropertyFlags)0x0014000002000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioSelectSetting, RadioButtonClass), Z_Construct_UClass_URadioButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioButtonClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadioSelectSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioSelect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelectSetting_Statics::NewProp_RadioButtonClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URadioSelectSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadioSelectSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URadioSelectSetting_Statics::ClassParams = {
		&URadioSelectSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URadioSelectSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelectSetting_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URadioSelectSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelectSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URadioSelectSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URadioSelectSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URadioSelectSetting, 4177496938);
	template<> AUTOSETTINGS_API UClass* StaticClass<URadioSelectSetting>()
	{
		return URadioSelectSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URadioSelectSetting(Z_Construct_UClass_URadioSelectSetting, &URadioSelectSetting::StaticClass, TEXT("/Script/AutoSettings"), TEXT("URadioSelectSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URadioSelectSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
