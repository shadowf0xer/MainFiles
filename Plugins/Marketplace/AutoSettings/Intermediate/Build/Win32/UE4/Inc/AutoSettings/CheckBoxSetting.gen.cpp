// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/CheckBoxSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckBoxSetting() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UCheckBoxSetting_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UCheckBoxSetting();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UToggleSetting();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCheckBoxSetting::execCheckBoxStateChanged)
	{
		P_GET_UBOOL(Z_Param_IsChecked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckBoxStateChanged(Z_Param_IsChecked);
		P_NATIVE_END;
	}
	void UCheckBoxSetting::StaticRegisterNativesUCheckBoxSetting()
	{
		UClass* Class = UCheckBoxSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckBoxStateChanged", &UCheckBoxSetting::execCheckBoxStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics
	{
		struct CheckBoxSetting_eventCheckBoxStateChanged_Parms
		{
			bool IsChecked;
		};
		static void NewProp_IsChecked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsChecked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::NewProp_IsChecked_SetBit(void* Obj)
	{
		((CheckBoxSetting_eventCheckBoxStateChanged_Parms*)Obj)->IsChecked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::NewProp_IsChecked = { "IsChecked", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CheckBoxSetting_eventCheckBoxStateChanged_Parms), &Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::NewProp_IsChecked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::NewProp_IsChecked,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/CheckBoxSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckBoxSetting, nullptr, "CheckBoxStateChanged", nullptr, nullptr, sizeof(CheckBoxSetting_eventCheckBoxStateChanged_Parms), Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckBoxSetting_NoRegister()
	{
		return UCheckBoxSetting::StaticClass();
	}
	struct Z_Construct_UClass_UCheckBoxSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheckBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckBoxSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToggleSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckBoxSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckBoxSetting_CheckBoxStateChanged, "CheckBoxStateChanged" }, // 3221680728
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBoxSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AutoSetting for a native Unreal CheckBox\n */" },
		{ "IncludePath", "UI/SettingControls/CheckBoxSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/CheckBoxSetting.h" },
		{ "ToolTip", "AutoSetting for a native Unreal CheckBox" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBoxSetting_Statics::NewProp_CheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "CheckBox Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/CheckBoxSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckBoxSetting_Statics::NewProp_CheckBox = { "CheckBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckBoxSetting, CheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCheckBoxSetting_Statics::NewProp_CheckBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxSetting_Statics::NewProp_CheckBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckBoxSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBoxSetting_Statics::NewProp_CheckBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckBoxSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckBoxSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckBoxSetting_Statics::ClassParams = {
		&UCheckBoxSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckBoxSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxSetting_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckBoxSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckBoxSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckBoxSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckBoxSetting, 2341301614);
	template<> AUTOSETTINGS_API UClass* StaticClass<UCheckBoxSetting>()
	{
		return UCheckBoxSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckBoxSetting(Z_Construct_UClass_UCheckBoxSetting, &UCheckBoxSetting::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UCheckBoxSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBoxSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
