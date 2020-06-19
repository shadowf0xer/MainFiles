// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/NativeSliderSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeSliderSetting() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UNativeSliderSetting_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UNativeSliderSetting();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USliderSetting();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNativeSliderSetting::execSliderMouseCaptureEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SliderMouseCaptureEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNativeSliderSetting::execSliderMouseCaptureBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SliderMouseCaptureBegin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNativeSliderSetting::execSliderValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SliderValueChanged(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void UNativeSliderSetting::StaticRegisterNativesUNativeSliderSetting()
	{
		UClass* Class = UNativeSliderSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SliderMouseCaptureBegin", &UNativeSliderSetting::execSliderMouseCaptureBegin },
			{ "SliderMouseCaptureEnd", &UNativeSliderSetting::execSliderMouseCaptureEnd },
			{ "SliderValueChanged", &UNativeSliderSetting::execSliderValueChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNativeSliderSetting, nullptr, "SliderMouseCaptureBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNativeSliderSetting, nullptr, "SliderMouseCaptureEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics
	{
		struct NativeSliderSetting_eventSliderValueChanged_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NativeSliderSetting_eventSliderValueChanged_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNativeSliderSetting, nullptr, "SliderValueChanged", nullptr, nullptr, sizeof(NativeSliderSetting_eventSliderValueChanged_Parms), Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNativeSliderSetting_NoRegister()
	{
		return UNativeSliderSetting::StaticClass();
	}
	struct Z_Construct_UClass_UNativeSliderSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMouseCaptureInProgress_MetaData[];
#endif
		static void NewProp_bMouseCaptureInProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMouseCaptureInProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Slider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNativeSliderSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USliderSetting,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNativeSliderSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureBegin, "SliderMouseCaptureBegin" }, // 959420351
		{ &Z_Construct_UFunction_UNativeSliderSetting_SliderMouseCaptureEnd, "SliderMouseCaptureEnd" }, // 1113613432
		{ &Z_Construct_UFunction_UNativeSliderSetting_SliderValueChanged, "SliderValueChanged" }, // 2660971246
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNativeSliderSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AutoSetting for a native Unreal Slider\n */" },
		{ "IncludePath", "UI/SettingControls/NativeSliderSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
		{ "ToolTip", "AutoSetting for a native Unreal Slider" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
	};
#endif
	void Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress_SetBit(void* Obj)
	{
		((UNativeSliderSetting*)Obj)->bMouseCaptureInProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress = { "bMouseCaptureInProgress", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNativeSliderSetting), &Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_Slider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Native Slider Setting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/NativeSliderSetting.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNativeSliderSetting, Slider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_Slider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_Slider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNativeSliderSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_bMouseCaptureInProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNativeSliderSetting_Statics::NewProp_Slider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNativeSliderSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNativeSliderSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNativeSliderSetting_Statics::ClassParams = {
		&UNativeSliderSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNativeSliderSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNativeSliderSetting_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNativeSliderSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNativeSliderSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNativeSliderSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNativeSliderSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNativeSliderSetting, 2456596939);
	template<> AUTOSETTINGS_API UClass* StaticClass<UNativeSliderSetting>()
	{
		return UNativeSliderSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNativeSliderSetting(Z_Construct_UClass_UNativeSliderSetting, &UNativeSliderSetting::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UNativeSliderSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNativeSliderSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
