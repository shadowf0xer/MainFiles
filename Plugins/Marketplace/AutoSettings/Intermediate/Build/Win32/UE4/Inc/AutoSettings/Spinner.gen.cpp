// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/GenericControls/Spinner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpinner() {}
// Cross Module References
	AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USpinner_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USpinner();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FSettingOption();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics
	{
		struct _Script_AutoSettings_eventSpinnerSelectionChanged_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AutoSettings_eventSpinnerSelectionChanged_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "SpinnerSelectionChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoSettings_eventSpinnerSelectionChanged_Parms), Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USpinner::execOnSelectionChanged)
	{
		P_GET_STRUCT(FSettingOption,Z_Param_SelectedOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectionChanged_Implementation(Z_Param_SelectedOption);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpinner::execGetCurrentIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpinner::execGetCurrentOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSettingOption*)Z_Param__Result=P_THIS->GetCurrentOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpinner::execHasValidPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidPrevious();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpinner::execHasValidNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidNext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpinner::execPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Previous();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpinner::execNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Next();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpinner::execSelectIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpinner::execSelectValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectValue(Z_Param_Value);
		P_NATIVE_END;
	}
	static FName NAME_USpinner_OnSelectionChanged = FName(TEXT("OnSelectionChanged"));
	void USpinner::OnSelectionChanged(FSettingOption SelectedOption)
	{
		Spinner_eventOnSelectionChanged_Parms Parms;
		Parms.SelectedOption=SelectedOption;
		ProcessEvent(FindFunctionChecked(NAME_USpinner_OnSelectionChanged),&Parms);
	}
	void USpinner::StaticRegisterNativesUSpinner()
	{
		UClass* Class = USpinner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentIndex", &USpinner::execGetCurrentIndex },
			{ "GetCurrentOption", &USpinner::execGetCurrentOption },
			{ "HasValidNext", &USpinner::execHasValidNext },
			{ "HasValidPrevious", &USpinner::execHasValidPrevious },
			{ "Next", &USpinner::execNext },
			{ "OnSelectionChanged", &USpinner::execOnSelectionChanged },
			{ "Previous", &USpinner::execPrevious },
			{ "SelectIndex", &USpinner::execSelectIndex },
			{ "SelectValue", &USpinner::execSelectValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics
	{
		struct Spinner_eventGetCurrentIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spinner_eventGetCurrentIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Return the index of the currently selected option\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Return the index of the currently selected option" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "GetCurrentIndex", nullptr, nullptr, sizeof(Spinner_eventGetCurrentIndex_Parms), Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinner_GetCurrentIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinner_GetCurrentIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinner_GetCurrentOption_Statics
	{
		struct Spinner_eventGetCurrentOption_Parms
		{
			FSettingOption ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spinner_eventGetCurrentOption_Parms, ReturnValue), Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Return the currently selected option\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Return the currently selected option" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "GetCurrentOption", nullptr, nullptr, sizeof(Spinner_eventGetCurrentOption_Parms), Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinner_GetCurrentOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinner_GetCurrentOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinner_HasValidNext_Statics
	{
		struct Spinner_eventHasValidNext_Parms
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
	void Z_Construct_UFunction_USpinner_HasValidNext_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Spinner_eventHasValidNext_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpinner_HasValidNext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Spinner_eventHasValidNext_Parms), &Z_Construct_UFunction_USpinner_HasValidNext_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_HasValidNext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_HasValidNext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinner_HasValidNext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// True if selected option is not the last, or if wrapping is enabled\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "True if selected option is not the last, or if wrapping is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_HasValidNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "HasValidNext", nullptr, nullptr, sizeof(Spinner_eventHasValidNext_Parms), Z_Construct_UFunction_USpinner_HasValidNext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_HasValidNext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinner_HasValidNext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_HasValidNext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinner_HasValidNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinner_HasValidNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinner_HasValidPrevious_Statics
	{
		struct Spinner_eventHasValidPrevious_Parms
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
	void Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Spinner_eventHasValidPrevious_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Spinner_eventHasValidPrevious_Parms), &Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// True if selected option is not the first, or if wrapping is enabled\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "True if selected option is not the first, or if wrapping is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "HasValidPrevious", nullptr, nullptr, sizeof(Spinner_eventHasValidPrevious_Parms), Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinner_HasValidPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinner_HasValidPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinner_Next_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinner_Next_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Select the next option\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Select the next option" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_Next_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "Next", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinner_Next_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_Next_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinner_Next()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinner_Next_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectedOption;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spinner_eventOnSelectionChanged_Parms, SelectedOption), Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::NewProp_SelectedOption,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "OnSelectionChanged", nullptr, nullptr, sizeof(Spinner_eventOnSelectionChanged_Parms), Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinner_OnSelectionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinner_OnSelectionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinner_Previous_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinner_Previous_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Select the previous option\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Select the previous option" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_Previous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "Previous", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinner_Previous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_Previous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinner_Previous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinner_Previous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinner_SelectIndex_Statics
	{
		struct Spinner_eventSelectIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USpinner_SelectIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spinner_eventSelectIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_SelectIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_SelectIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinner_SelectIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Select the option with the specified index\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Select the option with the specified index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_SelectIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "SelectIndex", nullptr, nullptr, sizeof(Spinner_eventSelectIndex_Parms), Z_Construct_UFunction_USpinner_SelectIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_SelectIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinner_SelectIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_SelectIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinner_SelectIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinner_SelectIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpinner_SelectValue_Statics
	{
		struct Spinner_eventSelectValue_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USpinner_SelectValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Spinner_eventSelectValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpinner_SelectValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpinner_SelectValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpinner_SelectValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Select the option with the specified value\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Select the option with the specified value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USpinner_SelectValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpinner, nullptr, "SelectValue", nullptr, nullptr, sizeof(Spinner_eventSelectValue_Parms), Z_Construct_UFunction_USpinner_SelectValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_SelectValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpinner_SelectValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpinner_SelectValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpinner_SelectValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USpinner_SelectValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpinner_NoRegister()
	{
		return USpinner::StaticClass();
	}
	struct Z_Construct_UClass_USpinner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionChangedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SelectionChangedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowWrapping_MetaData[];
#endif
		static void NewProp_bAllowWrapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowWrapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Options_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpinner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpinner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpinner_GetCurrentIndex, "GetCurrentIndex" }, // 1106522236
		{ &Z_Construct_UFunction_USpinner_GetCurrentOption, "GetCurrentOption" }, // 1917777384
		{ &Z_Construct_UFunction_USpinner_HasValidNext, "HasValidNext" }, // 4183744979
		{ &Z_Construct_UFunction_USpinner_HasValidPrevious, "HasValidPrevious" }, // 819500707
		{ &Z_Construct_UFunction_USpinner_Next, "Next" }, // 1680422052
		{ &Z_Construct_UFunction_USpinner_OnSelectionChanged, "OnSelectionChanged" }, // 1461762410
		{ &Z_Construct_UFunction_USpinner_Previous, "Previous" }, // 2075516670
		{ &Z_Construct_UFunction_USpinner_SelectIndex, "SelectIndex" }, // 618888256
		{ &Z_Construct_UFunction_USpinner_SelectValue, "SelectValue" }, // 2892225574
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UI element that uses Next and Previous buttons to cycle through options\n */" },
		{ "IncludePath", "UI/GenericControls/Spinner.h" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "UI element that uses Next and Previous buttons to cycle through options" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinner_Statics::NewProp_SelectionChangedEvent_MetaData[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Fired when selection changes\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Fired when selection changes" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USpinner_Statics::NewProp_SelectionChangedEvent = { "SelectionChangedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinner, SelectionChangedEvent), Z_Construct_UDelegateFunction_AutoSettings_SpinnerSelectionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USpinner_Statics::NewProp_SelectionChangedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpinner_Statics::NewProp_SelectionChangedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping_MetaData[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Should the first and last options wrap around to each other?\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Should the first and last options wrap around to each other?" },
	};
#endif
	void Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping_SetBit(void* Obj)
	{
		((USpinner*)Obj)->bAllowWrapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping = { "bAllowWrapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpinner), &Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpinner_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Spinner" },
		{ "Comment", "// Option definitions\n" },
		{ "ModuleRelativePath", "Public/UI/GenericControls/Spinner.h" },
		{ "ToolTip", "Option definitions" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpinner_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpinner, Options), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpinner_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpinner_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpinner_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSettingOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpinner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinner_Statics::NewProp_SelectionChangedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinner_Statics::NewProp_bAllowWrapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinner_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpinner_Statics::NewProp_Options_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpinner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpinner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpinner_Statics::ClassParams = {
		&USpinner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpinner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpinner_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USpinner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpinner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpinner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpinner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpinner, 1789609202);
	template<> AUTOSETTINGS_API UClass* StaticClass<USpinner>()
	{
		return USpinner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpinner(Z_Construct_UClass_USpinner, &USpinner::StaticClass, TEXT("/Script/AutoSettings"), TEXT("USpinner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpinner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
