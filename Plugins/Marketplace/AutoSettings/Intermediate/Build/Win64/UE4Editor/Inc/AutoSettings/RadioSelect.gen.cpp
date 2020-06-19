// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/GenericControls/RadioSelect/RadioSelect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioSelect() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioSelect_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioSelect();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSettingOption();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(URadioSelect::execButtonSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonSelected(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioSelect::execOnButtonCreated)
	{
		P_GET_OBJECT(URadioButton,Z_Param_Button);
		P_GET_OBJECT(UPanelSlot,Z_Param_NewSlot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonCreated_Implementation(Z_Param_Button,Z_Param_NewSlot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioSelect::execGetRadioButtonWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URadioButton*>*)Z_Param__Result=P_THIS->GetRadioButtonWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioSelect::execSelect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Select(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioSelect::execSetOptions)
	{
		P_GET_TARRAY(FSettingOption,Z_Param_InOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOptions(Z_Param_InOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioSelect::execGetOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSettingOption>*)Z_Param__Result=P_THIS->GetOptions();
		P_NATIVE_END;
	}
	static FName NAME_URadioSelect_OnButtonCreated = FName(TEXT("OnButtonCreated"));
	void URadioSelect::OnButtonCreated(URadioButton* Button, UPanelSlot* NewSlot)
	{
		RadioSelect_eventOnButtonCreated_Parms Parms;
		Parms.Button=Button;
		Parms.NewSlot=NewSlot;
		ProcessEvent(FindFunctionChecked(NAME_URadioSelect_OnButtonCreated),&Parms);
	}
	void URadioSelect::StaticRegisterNativesURadioSelect()
	{
		UClass* Class = URadioSelect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtonSelected", &URadioSelect::execButtonSelected },
			{ "GetOptions", &URadioSelect::execGetOptions },
			{ "GetRadioButtonWidgets", &URadioSelect::execGetRadioButtonWidgets },
			{ "OnButtonCreated", &URadioSelect::execOnButtonCreated },
			{ "Select", &URadioSelect::execSelect },
			{ "SetOptions", &URadioSelect::execSetOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics
	{
		struct RadioSelect_eventButtonSelected_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioSelect_eventButtonSelected_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "ButtonSelected", nullptr, nullptr, sizeof(RadioSelect_eventButtonSelected_Parms), Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioSelect_ButtonSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioSelect_ButtonSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioSelect_GetOptions_Statics
	{
		struct RadioSelect_eventGetOptions_Parms
		{
			TArray<FSettingOption> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URadioSelect_GetOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioSelect_eventGetOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioSelect_GetOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_GetOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_GetOptions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_GetOptions_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioSelect_GetOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Returns the available options\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Returns the available options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_GetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "GetOptions", nullptr, nullptr, sizeof(RadioSelect_eventGetOptions_Parms), Z_Construct_UFunction_URadioSelect_GetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioSelect_GetOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioSelect_GetOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioSelect_GetOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics
	{
		struct RadioSelect_eventGetRadioButtonWidgets_Parms
		{
			TArray<URadioButton*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioSelect_eventGetRadioButtonWidgets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URadioButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Returns the Radio Button widgets created by this Radio Select\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Returns the Radio Button widgets created by this Radio Select" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "GetRadioButtonWidgets", nullptr, nullptr, sizeof(RadioSelect_eventGetRadioButtonWidgets_Parms), Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_NewSlot_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_NewSlot = { "NewSlot", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioSelect_eventOnButtonCreated_Parms, NewSlot), Z_Construct_UClass_UPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_NewSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_NewSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioSelect_eventOnButtonCreated_Parms, Button), Z_Construct_UClass_URadioButton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_Button_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_NewSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Called when a Radio Button is created to run any initialization on the widget and slot\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Called when a Radio Button is created to run any initialization on the widget and slot" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "OnButtonCreated", nullptr, nullptr, sizeof(RadioSelect_eventOnButtonCreated_Parms), Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioSelect_OnButtonCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioSelect_OnButtonCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioSelect_Select_Statics
	{
		struct RadioSelect_eventSelect_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URadioSelect_Select_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioSelect_eventSelect_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_Select_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_Select_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioSelect_Select_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Select the option of the given value\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Select the option of the given value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_Select_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "Select", nullptr, nullptr, sizeof(RadioSelect_eventSelect_Parms), Z_Construct_UFunction_URadioSelect_Select_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_Select_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioSelect_Select_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_Select_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioSelect_Select()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioSelect_Select_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioSelect_SetOptions_Statics
	{
		struct RadioSelect_eventSetOptions_Parms
		{
			TArray<FSettingOption> InOptions;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InOptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOptions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URadioSelect_SetOptions_Statics::NewProp_InOptions = { "InOptions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioSelect_eventSetOptions_Parms, InOptions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URadioSelect_SetOptions_Statics::NewProp_InOptions_Inner = { "InOptions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioSelect_SetOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_SetOptions_Statics::NewProp_InOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioSelect_SetOptions_Statics::NewProp_InOptions_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioSelect_SetOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Set the available options\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Set the available options" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioSelect_SetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioSelect, nullptr, "SetOptions", nullptr, nullptr, sizeof(RadioSelect_eventSetOptions_Parms), Z_Construct_UFunction_URadioSelect_SetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_SetOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioSelect_SetOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioSelect_SetOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioSelect_SetOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioSelect_SetOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URadioSelect_NoRegister()
	{
		return URadioSelect::StaticClass();
	}
	struct Z_Construct_UClass_URadioSelect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioButtons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RadioButtons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadioButtons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionChangedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectionChangedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RadioButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URadioSelect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URadioSelect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URadioSelect_ButtonSelected, "ButtonSelected" }, // 1560716511
		{ &Z_Construct_UFunction_URadioSelect_GetOptions, "GetOptions" }, // 2188770456
		{ &Z_Construct_UFunction_URadioSelect_GetRadioButtonWidgets, "GetRadioButtonWidgets" }, // 2922866712
		{ &Z_Construct_UFunction_URadioSelect_OnButtonCreated, "OnButtonCreated" }, // 1229434645
		{ &Z_Construct_UFunction_URadioSelect_Select, "Select" }, // 2026964218
		{ &Z_Construct_UFunction_URadioSelect_SetOptions, "SetOptions" }, // 679178426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioSelect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for a widget that contains multiple radio buttons, of which only one may be selected at a time\n */" },
		{ "IncludePath", "UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Base class for a widget that contains multiple radio buttons, of which only one may be selected at a time" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons = { "RadioButtons", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioSelect, RadioButtons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons_Inner = { "RadioButtons", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URadioButton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioSelect_Statics::NewProp_ButtonContainer_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Radio Select" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_ButtonContainer = { "ButtonContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioSelect, ButtonContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URadioSelect_Statics::NewProp_ButtonContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::NewProp_ButtonContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioSelect_Statics::NewProp_SelectionChangedEvent_MetaData[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Fired when the selection changes\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Fired when the selection changes" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_SelectionChangedEvent = { "SelectionChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioSelect, SelectionChangedEvent), Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URadioSelect_Statics::NewProp_SelectionChangedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::NewProp_SelectionChangedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtonClass_MetaData[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// RadioButton class to create for each option\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "RadioButton class to create for each option" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtonClass = { "RadioButtonClass", nullptr, (EPropertyFlags)0x0014000002000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioSelect, RadioButtonClass), Z_Construct_UClass_URadioButton_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioSelect_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Radio Select" },
		{ "Comment", "// Option definitions\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioSelect.h" },
		{ "ToolTip", "Option definitions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioSelect, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URadioSelect_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URadioSelect_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadioSelect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_ButtonContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_SelectionChangedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_RadioButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioSelect_Statics::NewProp_Options_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URadioSelect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadioSelect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URadioSelect_Statics::ClassParams = {
		&URadioSelect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URadioSelect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URadioSelect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URadioSelect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URadioSelect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URadioSelect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URadioSelect, 220945213);
	template<> AUTOSETTINGS_API UClass* StaticClass<URadioSelect>()
	{
		return URadioSelect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URadioSelect(Z_Construct_UClass_URadioSelect, &URadioSelect::StaticClass, TEXT("/Script/AutoSettings"), TEXT("URadioSelect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URadioSelect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
