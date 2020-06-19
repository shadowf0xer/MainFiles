// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/ComboBoxSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComboBoxSetting() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UComboBoxSetting_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UComboBoxSetting();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USelectSetting();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UComboBoxSetting::execComboBoxSelectionChanged)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedItem);
		P_GET_PROPERTY(FByteProperty,Z_Param_SelectionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComboBoxSelectionChanged(Z_Param_SelectedItem,ESelectInfo::Type(Z_Param_SelectionType));
		P_NATIVE_END;
	}
	void UComboBoxSetting::StaticRegisterNativesUComboBoxSetting()
	{
		UClass* Class = UComboBoxSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ComboBoxSelectionChanged", &UComboBoxSetting::execComboBoxSelectionChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics
	{
		struct ComboBoxSetting_eventComboBoxSelectionChanged_Parms
		{
			FString SelectedItem;
			TEnumAsByte<ESelectInfo::Type> SelectionType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SelectedItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComboBoxSetting_eventComboBoxSelectionChanged_Parms, SelectionType), Z_Construct_UEnum_SlateCore_ESelectInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::NewProp_SelectedItem = { "SelectedItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ComboBoxSetting_eventComboBoxSelectionChanged_Parms, SelectedItem), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::NewProp_SelectionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::NewProp_SelectedItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/ComboBoxSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComboBoxSetting, nullptr, "ComboBoxSelectionChanged", nullptr, nullptr, sizeof(ComboBoxSetting_eventComboBoxSelectionChanged_Parms), Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UComboBoxSetting_NoRegister()
	{
		return UComboBoxSetting::StaticClass();
	}
	struct Z_Construct_UClass_UComboBoxSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComboBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComboBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComboBoxSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USelectSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComboBoxSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComboBoxSetting_ComboBoxSelectionChanged, "ComboBoxSelectionChanged" }, // 4156169749
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AutoSetting for a native Unreal ComboBox\n */" },
		{ "IncludePath", "UI/SettingControls/ComboBoxSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/ComboBoxSetting.h" },
		{ "ToolTip", "AutoSetting for a native Unreal ComboBox" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComboBoxSetting_Statics::NewProp_ComboBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ComboBox Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/ComboBoxSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UComboBoxSetting_Statics::NewProp_ComboBox = { "ComboBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComboBoxSetting, ComboBox), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComboBoxSetting_Statics::NewProp_ComboBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxSetting_Statics::NewProp_ComboBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComboBoxSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComboBoxSetting_Statics::NewProp_ComboBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComboBoxSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComboBoxSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComboBoxSetting_Statics::ClassParams = {
		&UComboBoxSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComboBoxSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxSetting_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UComboBoxSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComboBoxSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComboBoxSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComboBoxSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComboBoxSetting, 1372709789);
	template<> AUTOSETTINGS_API UClass* StaticClass<UComboBoxSetting>()
	{
		return UComboBoxSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComboBoxSetting(Z_Construct_UClass_UComboBoxSetting, &UComboBoxSetting::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UComboBoxSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComboBoxSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
