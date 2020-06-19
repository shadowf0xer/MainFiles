// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/SettingControls/SliderSetting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSliderSetting() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USliderSetting_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USliderSetting();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
	DEFINE_FUNCTION(USliderSetting::execShouldSaveCurrentValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldSaveCurrentValue_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USliderSetting::execSliderValueUpdated)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SliderValueUpdated(Z_Param_NormalizedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USliderSetting::execUpdateSliderValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RawValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSliderValue_Implementation(Z_Param_NormalizedValue,Z_Param_RawValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USliderSetting::execNormalizedValueToRaw)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->NormalizedValueToRaw(Z_Param_NormalizedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USliderSetting::execRawValueToNormalized)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RawValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->RawValueToNormalized(Z_Param_RawValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USliderSetting::execClampRawValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RawValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->ClampRawValue(Z_Param_RawValue);
		P_NATIVE_END;
	}
	static FName NAME_USliderSetting_OnSliderValueUpdated = FName(TEXT("OnSliderValueUpdated"));
	void USliderSetting::OnSliderValueUpdated(float NormalizedValue, float RawValue)
	{
		SliderSetting_eventOnSliderValueUpdated_Parms Parms;
		Parms.NormalizedValue=NormalizedValue;
		Parms.RawValue=RawValue;
		ProcessEvent(FindFunctionChecked(NAME_USliderSetting_OnSliderValueUpdated),&Parms);
	}
	static FName NAME_USliderSetting_ShouldSaveCurrentValue = FName(TEXT("ShouldSaveCurrentValue"));
	bool USliderSetting::ShouldSaveCurrentValue() const
	{
		SliderSetting_eventShouldSaveCurrentValue_Parms Parms;
		const_cast<USliderSetting*>(this)->ProcessEvent(FindFunctionChecked(NAME_USliderSetting_ShouldSaveCurrentValue),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_USliderSetting_UpdateSliderValue = FName(TEXT("UpdateSliderValue"));
	void USliderSetting::UpdateSliderValue(float NormalizedValue, float RawValue)
	{
		SliderSetting_eventUpdateSliderValue_Parms Parms;
		Parms.NormalizedValue=NormalizedValue;
		Parms.RawValue=RawValue;
		ProcessEvent(FindFunctionChecked(NAME_USliderSetting_UpdateSliderValue),&Parms);
	}
	void USliderSetting::StaticRegisterNativesUSliderSetting()
	{
		UClass* Class = USliderSetting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClampRawValue", &USliderSetting::execClampRawValue },
			{ "NormalizedValueToRaw", &USliderSetting::execNormalizedValueToRaw },
			{ "RawValueToNormalized", &USliderSetting::execRawValueToNormalized },
			{ "ShouldSaveCurrentValue", &USliderSetting::execShouldSaveCurrentValue },
			{ "SliderValueUpdated", &USliderSetting::execSliderValueUpdated },
			{ "UpdateSliderValue", &USliderSetting::execUpdateSliderValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics
	{
		struct SliderSetting_eventClampRawValue_Parms
		{
			float RawValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventClampRawValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventClampRawValue_Parms, RawValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::NewProp_RawValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Clamps a value between the Left Value and Right Value of the slider\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Clamps a value between the Left Value and Right Value of the slider" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "ClampRawValue", nullptr, nullptr, sizeof(SliderSetting_eventClampRawValue_Parms), Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USliderSetting_ClampRawValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USliderSetting_ClampRawValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics
	{
		struct SliderSetting_eventNormalizedValueToRaw_Parms
		{
			float NormalizedValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventNormalizedValueToRaw_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventNormalizedValueToRaw_Parms, NormalizedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::NewProp_NormalizedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Converts from normalized 0-1 slider value to a raw setting value between Left Value and Right Value\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Converts from normalized 0-1 slider value to a raw setting value between Left Value and Right Value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "NormalizedValueToRaw", nullptr, nullptr, sizeof(SliderSetting_eventNormalizedValueToRaw_Parms), Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventOnSliderValueUpdated_Parms, RawValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventOnSliderValueUpdated_Parms, NormalizedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::NewProp_RawValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::NewProp_NormalizedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Called when the slider's value changes\n// Useful for updating UI such as labels to reflect the internal value\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Called when the slider's value changes\nUseful for updating UI such as labels to reflect the internal value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "OnSliderValueUpdated", nullptr, nullptr, sizeof(SliderSetting_eventOnSliderValueUpdated_Parms), Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics
	{
		struct SliderSetting_eventRawValueToNormalized_Parms
		{
			float RawValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventRawValueToNormalized_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventRawValueToNormalized_Parms, RawValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::NewProp_RawValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Converts from a raw setting value between Left Value and Right Value to a normalized 0-1 slider value\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Converts from a raw setting value between Left Value and Right Value to a normalized 0-1 slider value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "RawValueToNormalized", nullptr, nullptr, sizeof(SliderSetting_eventRawValueToNormalized_Parms), Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USliderSetting_RawValueToNormalized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USliderSetting_RawValueToNormalized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SliderSetting_eventShouldSaveCurrentValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SliderSetting_eventShouldSaveCurrentValue_Parms), &Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Used to determine if the slider value can also be saved when it is applied\n// e.g. Apply the value as the slider value is updating from mouse drag, but for optimization only save when the handle is released\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Used to determine if the slider value can also be saved when it is applied\ne.g. Apply the value as the slider value is updating from mouse drag, but for optimization only save when the handle is released" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "ShouldSaveCurrentValue", nullptr, nullptr, sizeof(SliderSetting_eventShouldSaveCurrentValue_Parms), Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics
	{
		struct SliderSetting_eventSliderValueUpdated_Parms
		{
			float NormalizedValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventSliderValueUpdated_Parms, NormalizedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::NewProp_NormalizedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Takes a slider value in range 0-1, maps it and applies the setting\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Takes a slider value in range 0-1, maps it and applies the setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "SliderValueUpdated", nullptr, nullptr, sizeof(SliderSetting_eventSliderValueUpdated_Parms), Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USliderSetting_SliderValueUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USliderSetting_SliderValueUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::NewProp_RawValue = { "RawValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventUpdateSliderValue_Parms, RawValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::NewProp_NormalizedValue = { "NormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SliderSetting_eventUpdateSliderValue_Parms, NormalizedValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::NewProp_RawValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::NewProp_NormalizedValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Called to update the slider with a new setting value\n// Not called when the slider's value itself is changed\n// @param NormalizedValue Value mapped to range 0-1 between left value and right value\n// @param RawValue Raw value of the setting\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Called to update the slider with a new setting value\nNot called when the slider's value itself is changed\n@param NormalizedValue Value mapped to range 0-1 between left value and right value\n@param RawValue Raw value of the setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USliderSetting, nullptr, "UpdateSliderValue", nullptr, nullptr, sizeof(SliderSetting_eventUpdateSliderValue_Parms), Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USliderSetting_UpdateSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USliderSetting_UpdateSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USliderSetting_NoRegister()
	{
		return USliderSetting::StaticClass();
	}
	struct Z_Construct_UClass_USliderSetting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LeftValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USliderSetting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAutoSettingWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USliderSetting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USliderSetting_ClampRawValue, "ClampRawValue" }, // 2250664729
		{ &Z_Construct_UFunction_USliderSetting_NormalizedValueToRaw, "NormalizedValueToRaw" }, // 2460482819
		{ &Z_Construct_UFunction_USliderSetting_OnSliderValueUpdated, "OnSliderValueUpdated" }, // 1572727315
		{ &Z_Construct_UFunction_USliderSetting_RawValueToNormalized, "RawValueToNormalized" }, // 2776817119
		{ &Z_Construct_UFunction_USliderSetting_ShouldSaveCurrentValue, "ShouldSaveCurrentValue" }, // 3333038073
		{ &Z_Construct_UFunction_USliderSetting_SliderValueUpdated, "SliderValueUpdated" }, // 1864036733
		{ &Z_Construct_UFunction_USliderSetting_UpdateSliderValue, "UpdateSliderValue" }, // 3503244498
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliderSetting_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base AutoSetting with generic slider functionality\n */" },
		{ "IncludePath", "UI/SettingControls/SliderSetting.h" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base AutoSetting with generic slider functionality" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliderSetting_Statics::NewProp_RightValue_MetaData[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Value assigned with the right-most position of the slider\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Value assigned with the right-most position of the slider" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USliderSetting_Statics::NewProp_RightValue = { "RightValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USliderSetting, RightValue), METADATA_PARAMS(Z_Construct_UClass_USliderSetting_Statics::NewProp_RightValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USliderSetting_Statics::NewProp_RightValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USliderSetting_Statics::NewProp_LeftValue_MetaData[] = {
		{ "Category", "Slider Setting" },
		{ "Comment", "// Value assigned with the left-most position of the slider\n" },
		{ "ModuleRelativePath", "Public/UI/SettingControls/SliderSetting.h" },
		{ "ToolTip", "Value assigned with the left-most position of the slider" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USliderSetting_Statics::NewProp_LeftValue = { "LeftValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USliderSetting, LeftValue), METADATA_PARAMS(Z_Construct_UClass_USliderSetting_Statics::NewProp_LeftValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USliderSetting_Statics::NewProp_LeftValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USliderSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliderSetting_Statics::NewProp_RightValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USliderSetting_Statics::NewProp_LeftValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USliderSetting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USliderSetting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USliderSetting_Statics::ClassParams = {
		&USliderSetting::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USliderSetting_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USliderSetting_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USliderSetting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USliderSetting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USliderSetting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USliderSetting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USliderSetting, 2200320125);
	template<> AUTOSETTINGS_API UClass* StaticClass<USliderSetting>()
	{
		return USliderSetting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USliderSetting(Z_Construct_UClass_USliderSetting, &USliderSetting::StaticClass, TEXT("/Script/AutoSettings"), TEXT("USliderSetting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USliderSetting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
