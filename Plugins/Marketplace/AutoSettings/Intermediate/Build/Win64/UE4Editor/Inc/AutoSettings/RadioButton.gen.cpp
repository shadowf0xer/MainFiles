// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/GenericControls/RadioSelect/RadioButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadioButton() {}
// Cross Module References
	AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioButton_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_URadioButton();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics
	{
		struct _Script_AutoSettings_eventRadioSelectedSignature_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AutoSettings_eventRadioSelectedSignature_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "RadioSelectedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoSettings_eventRadioSelectedSignature_Parms), Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(URadioButton::execGetSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioButton::execGetLabel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetLabel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioButton::execTriggerSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioButton::execSetLabel)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLabel(Z_Param_InLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioButton::execSetValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValue(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioButton::execGetValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URadioButton::execSetSelected)
	{
		P_GET_UBOOL(Z_Param_InSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelected(Z_Param_InSelected);
		P_NATIVE_END;
	}
	static FName NAME_URadioButton_UpdateLabel = FName(TEXT("UpdateLabel"));
	void URadioButton::UpdateLabel(FText const& InLabel)
	{
		RadioButton_eventUpdateLabel_Parms Parms;
		Parms.InLabel=InLabel;
		ProcessEvent(FindFunctionChecked(NAME_URadioButton_UpdateLabel),&Parms);
	}
	static FName NAME_URadioButton_UpdateSelected = FName(TEXT("UpdateSelected"));
	void URadioButton::UpdateSelected(bool InSelected)
	{
		RadioButton_eventUpdateSelected_Parms Parms;
		Parms.InSelected=InSelected ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_URadioButton_UpdateSelected),&Parms);
	}
	void URadioButton::StaticRegisterNativesURadioButton()
	{
		UClass* Class = URadioButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLabel", &URadioButton::execGetLabel },
			{ "GetSelected", &URadioButton::execGetSelected },
			{ "GetValue", &URadioButton::execGetValue },
			{ "SetLabel", &URadioButton::execSetLabel },
			{ "SetSelected", &URadioButton::execSetSelected },
			{ "SetValue", &URadioButton::execSetValue },
			{ "TriggerSelection", &URadioButton::execTriggerSelection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URadioButton_GetLabel_Statics
	{
		struct RadioButton_eventGetLabel_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URadioButton_GetLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioButton_eventGetLabel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_GetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_GetLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButton_GetLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_GetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "GetLabel", nullptr, nullptr, sizeof(RadioButton_eventGetLabel_Parms), Z_Construct_UFunction_URadioButton_GetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioButton_GetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioButton_GetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioButton_GetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioButton_GetSelected_Statics
	{
		struct RadioButton_eventGetSelected_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URadioButton_GetSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RadioButton_eventGetSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadioButton_GetSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RadioButton_eventGetSelected_Parms), &Z_Construct_UFunction_URadioButton_GetSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_GetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_GetSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButton_GetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_GetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "GetSelected", nullptr, nullptr, sizeof(RadioButton_eventGetSelected_Parms), Z_Construct_UFunction_URadioButton_GetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioButton_GetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioButton_GetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioButton_GetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioButton_GetValue_Statics
	{
		struct RadioButton_eventGetValue_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URadioButton_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioButton_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_GetValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButton_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "Comment", "// Return the value associated with the button\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "Return the value associated with the button" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "GetValue", nullptr, nullptr, sizeof(RadioButton_eventGetValue_Parms), Z_Construct_UFunction_URadioButton_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioButton_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioButton_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioButton_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioButton_SetLabel_Statics
	{
		struct RadioButton_eventSetLabel_Parms
		{
			FText InLabel;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URadioButton_SetLabel_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioButton_eventSetLabel_Parms, InLabel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_SetLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_SetLabel_Statics::NewProp_InLabel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButton_SetLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "Comment", "// Set the label of the button\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "Set the label of the button" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_SetLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "SetLabel", nullptr, nullptr, sizeof(RadioButton_eventSetLabel_Parms), Z_Construct_UFunction_URadioButton_SetLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioButton_SetLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioButton_SetLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioButton_SetLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioButton_SetSelected_Statics
	{
		struct RadioButton_eventSetSelected_Parms
		{
			bool InSelected;
		};
		static void NewProp_InSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URadioButton_SetSelected_Statics::NewProp_InSelected_SetBit(void* Obj)
	{
		((RadioButton_eventSetSelected_Parms*)Obj)->InSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadioButton_SetSelected_Statics::NewProp_InSelected = { "InSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RadioButton_eventSetSelected_Parms), &Z_Construct_UFunction_URadioButton_SetSelected_Statics::NewProp_InSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_SetSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_SetSelected_Statics::NewProp_InSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButton_SetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "Comment", "// Set whether the button is selected or not\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "Set whether the button is selected or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_SetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "SetSelected", nullptr, nullptr, sizeof(RadioButton_eventSetSelected_Parms), Z_Construct_UFunction_URadioButton_SetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioButton_SetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioButton_SetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioButton_SetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioButton_SetValue_Statics
	{
		struct RadioButton_eventSetValue_Parms
		{
			FString InValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URadioButton_SetValue_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioButton_eventSetValue_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_SetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_SetValue_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButton_SetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "Comment", "// Set the value associated with the button\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "Set the value associated with the button" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_SetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "SetValue", nullptr, nullptr, sizeof(RadioButton_eventSetValue_Parms), Z_Construct_UFunction_URadioButton_SetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioButton_SetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_SetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioButton_SetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioButton_SetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioButton_TriggerSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButton_TriggerSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_TriggerSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "TriggerSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioButton_TriggerSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_TriggerSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioButton_TriggerSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioButton_TriggerSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioButton_UpdateLabel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::NewProp_InLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::NewProp_InLabel = { "InLabel", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RadioButton_eventUpdateLabel_Parms, InLabel), METADATA_PARAMS(Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::NewProp_InLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::NewProp_InLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::NewProp_InLabel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "UpdateLabel", nullptr, nullptr, sizeof(RadioButton_eventUpdateLabel_Parms), Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioButton_UpdateLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioButton_UpdateLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URadioButton_UpdateSelected_Statics
	{
		static void NewProp_InSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::NewProp_InSelected_SetBit(void* Obj)
	{
		((RadioButton_eventUpdateSelected_Parms*)Obj)->InSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::NewProp_InSelected = { "InSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RadioButton_eventUpdateSelected_Parms), &Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::NewProp_InSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::NewProp_InSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Radio Button" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URadioButton, nullptr, "UpdateSelected", nullptr, nullptr, sizeof(RadioButton_eventUpdateSelected_Parms), Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URadioButton_UpdateSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URadioButton_UpdateSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URadioButton_NoRegister()
	{
		return URadioButton::StaticClass();
	}
	struct Z_Construct_UClass_URadioButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selected_MetaData[];
#endif
		static void NewProp_Selected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Selected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URadioButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URadioButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URadioButton_GetLabel, "GetLabel" }, // 3525491909
		{ &Z_Construct_UFunction_URadioButton_GetSelected, "GetSelected" }, // 503005847
		{ &Z_Construct_UFunction_URadioButton_GetValue, "GetValue" }, // 3220209382
		{ &Z_Construct_UFunction_URadioButton_SetLabel, "SetLabel" }, // 940954656
		{ &Z_Construct_UFunction_URadioButton_SetSelected, "SetSelected" }, // 1632770027
		{ &Z_Construct_UFunction_URadioButton_SetValue, "SetValue" }, // 726283416
		{ &Z_Construct_UFunction_URadioButton_TriggerSelection, "TriggerSelection" }, // 2556711577
		{ &Z_Construct_UFunction_URadioButton_UpdateLabel, "UpdateLabel" }, // 307596914
		{ &Z_Construct_UFunction_URadioButton_UpdateSelected, "UpdateSelected" }, // 723544562
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single generic radio button\n */" },
		{ "IncludePath", "UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "A single generic radio button" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioButton_Statics::NewProp_Selected_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif
	void Z_Construct_UClass_URadioButton_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((URadioButton*)Obj)->Selected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URadioButton_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URadioButton), &Z_Construct_UClass_URadioButton_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(Z_Construct_UClass_URadioButton_Statics::NewProp_Selected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioButton_Statics::NewProp_Selected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioButton_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Radio Button" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_URadioButton_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0021080000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioButton, Value), METADATA_PARAMS(Z_Construct_UClass_URadioButton_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioButton_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioButton_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "Radio Button" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_URadioButton_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0021080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioButton, Label), METADATA_PARAMS(Z_Construct_UClass_URadioButton_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioButton_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URadioButton_Statics::NewProp_OnSelected_MetaData[] = {
		{ "Category", "Radio Button" },
		{ "Comment", "// Event triggered when this button is selected\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/RadioSelect/RadioButton.h" },
		{ "ToolTip", "Event triggered when this button is selected" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URadioButton_Statics::NewProp_OnSelected = { "OnSelected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URadioButton, OnSelected), Z_Construct_UDelegateFunction_AutoSettings_RadioSelectedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URadioButton_Statics::NewProp_OnSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URadioButton_Statics::NewProp_OnSelected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URadioButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButton_Statics::NewProp_Selected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButton_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButton_Statics::NewProp_Label,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URadioButton_Statics::NewProp_OnSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URadioButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URadioButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URadioButton_Statics::ClassParams = {
		&URadioButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URadioButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URadioButton_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URadioButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URadioButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URadioButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URadioButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URadioButton, 3595556914);
	template<> AUTOSETTINGS_API UClass* StaticClass<URadioButton>()
	{
		return URadioButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URadioButton(Z_Construct_UClass_URadioButton, &URadioButton::StaticClass, TEXT("/Script/AutoSettings"), TEXT("URadioButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URadioButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
