// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/UI/AutoSettingWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoSettingWidget() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingValueMask_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAutoSettingWidget::execApplySettingValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bSaveIfPossible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplySettingValue(Z_Param_Value,Z_Param_bSaveIfPossible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoSettingWidget::execUpdateSelection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSelection_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoSettingWidget::execCancel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cancel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoSettingWidget::execSave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Save();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoSettingWidget::execApply)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Apply();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoSettingWidget::execHasUnsavedChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasUnsavedChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAutoSettingWidget::execHasUnappliedChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasUnappliedChange();
		P_NATIVE_END;
	}
	static FName NAME_UAutoSettingWidget_UpdateSelection = FName(TEXT("UpdateSelection"));
	void UAutoSettingWidget::UpdateSelection(const FString& Value)
	{
		AutoSettingWidget_eventUpdateSelection_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_UAutoSettingWidget_UpdateSelection),&Parms);
	}
	void UAutoSettingWidget::StaticRegisterNativesUAutoSettingWidget()
	{
		UClass* Class = UAutoSettingWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Apply", &UAutoSettingWidget::execApply },
			{ "ApplySettingValue", &UAutoSettingWidget::execApplySettingValue },
			{ "Cancel", &UAutoSettingWidget::execCancel },
			{ "HasUnappliedChange", &UAutoSettingWidget::execHasUnappliedChange },
			{ "HasUnsavedChange", &UAutoSettingWidget::execHasUnsavedChange },
			{ "Save", &UAutoSettingWidget::execSave },
			{ "UpdateSelection", &UAutoSettingWidget::execUpdateSelection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Apply the setting by setting the CVar to the current value\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Apply the setting by setting the CVar to the current value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "Apply", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingWidget_Apply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_Apply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics
	{
		struct AutoSettingWidget_eventApplySettingValue_Parms
		{
			FString Value;
			bool bSaveIfPossible;
		};
		static void NewProp_bSaveIfPossible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSaveIfPossible;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_bSaveIfPossible_SetBit(void* Obj)
	{
		((AutoSettingWidget_eventApplySettingValue_Parms*)Obj)->bSaveIfPossible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_bSaveIfPossible = { "bSaveIfPossible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutoSettingWidget_eventApplySettingValue_Parms), &Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_bSaveIfPossible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingWidget_eventApplySettingValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_bSaveIfPossible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Update the setting's selected value\n// @param bSaveIfPossible Save the setting if AutoSave is enabled\n" },
		{ "CPP_Default_bSaveIfPossible", "true" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Update the setting's selected value\n@param bSaveIfPossible Save the setting if AutoSave is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "ApplySettingValue", nullptr, nullptr, sizeof(AutoSettingWidget_eventApplySettingValue_Parms), Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Cancel unsaved changes, reverting to the value saved in config \n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Cancel unsaved changes, reverting to the value saved in config" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "Cancel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingWidget_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_Cancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics
	{
		struct AutoSettingWidget_eventHasUnappliedChange_Parms
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
	void Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutoSettingWidget_eventHasUnappliedChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutoSettingWidget_eventHasUnappliedChange_Parms), &Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// True if the setting has changed since the last time it was applied\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "True if the setting has changed since the last time it was applied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "HasUnappliedChange", nullptr, nullptr, sizeof(AutoSettingWidget_eventHasUnappliedChange_Parms), Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics
	{
		struct AutoSettingWidget_eventHasUnsavedChange_Parms
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
	void Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AutoSettingWidget_eventHasUnsavedChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AutoSettingWidget_eventHasUnsavedChange_Parms), &Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// True if the setting has changed since the last time it was saved\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "True if the setting has changed since the last time it was saved" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "HasUnsavedChange", nullptr, nullptr, sizeof(AutoSettingWidget_eventHasUnsavedChange_Parms), Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingWidget_Save_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingWidget_Save_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Save the current value to config\n// This will also Apply the current value if it hasn't been already\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Save the current value to config\nThis will also Apply the current value if it hasn't been already" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "Save", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingWidget_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingWidget_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AutoSettingWidget_eventUpdateSelection_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Set value on control widget, used for setting default and current value\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Set value on control widget, used for setting default and current value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAutoSettingWidget, nullptr, "UpdateSelection", nullptr, nullptr, sizeof(AutoSettingWidget_eventUpdateSelection_Parms), Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAutoSettingWidget_NoRegister()
	{
		return UAutoSettingWidget::StaticClass();
	}
	struct Z_Construct_UClass_UAutoSettingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatingSettingSelection_MetaData[];
#endif
		static void NewProp_bUpdatingSettingSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatingSettingSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasUnsavedChange_MetaData[];
#endif
		static void NewProp_bHasUnsavedChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasUnsavedChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasUnappliedChange_MetaData[];
#endif
		static void NewProp_bHasUnappliedChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasUnappliedChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingTags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoApply_MetaData[];
#endif
		static void NewProp_bAutoApply_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoApply;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSave_MetaData[];
#endif
		static void NewProp_bAutoSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ValueMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CVarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CVarName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutoSettingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAutoSettingWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAutoSettingWidget_Apply, "Apply" }, // 2519925636
		{ &Z_Construct_UFunction_UAutoSettingWidget_ApplySettingValue, "ApplySettingValue" }, // 3052115463
		{ &Z_Construct_UFunction_UAutoSettingWidget_Cancel, "Cancel" }, // 3322814367
		{ &Z_Construct_UFunction_UAutoSettingWidget_HasUnappliedChange, "HasUnappliedChange" }, // 4065277939
		{ &Z_Construct_UFunction_UAutoSettingWidget_HasUnsavedChange, "HasUnsavedChange" }, // 240058316
		{ &Z_Construct_UFunction_UAutoSettingWidget_Save, "Save" }, // 1574542220
		{ &Z_Construct_UFunction_UAutoSettingWidget_UpdateSelection, "UpdateSelection" }, // 1801864011
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Widget that encapsulates a console variable to represent a setting\n */" },
		{ "IncludePath", "UI/AutoSettingWidget.h" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Widget that encapsulates a console variable to represent a setting" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection_MetaData[] = {
		{ "Comment", "// True if UpdateSelection is being run\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "True if UpdateSelection is being run" },
	};
#endif
	void Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection_SetBit(void* Obj)
	{
		((UAutoSettingWidget*)Obj)->bUpdatingSettingSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection = { "bUpdatingSettingSelection", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSettingWidget), &Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
	};
#endif
	void Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange_SetBit(void* Obj)
	{
		((UAutoSettingWidget*)Obj)->bHasUnsavedChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange = { "bHasUnsavedChange", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSettingWidget), &Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
	};
#endif
	void Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange_SetBit(void* Obj)
	{
		((UAutoSettingWidget*)Obj)->bHasUnappliedChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange = { "bHasUnappliedChange", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSettingWidget), &Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingWidget, CurrentValue), METADATA_PARAMS(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CurrentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_SettingTags_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Tags this setting has, for use by your own project\n// e.g. You might want to sync certain input-related settings to a cloud service but ignore scalability-related ones\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Tags this setting has, for use by your own project\ne.g. You might want to sync certain input-related settings to a cloud service but ignore scalability-related ones" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_SettingTags = { "SettingTags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingWidget, SettingTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_SettingTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_SettingTags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Should this setting automatically apply when changed?\n// Will also apply automatically if AutoSave is true\n// If false, \"Apply\" function can be called for manual control\n" },
		{ "EditCondition", "!bAutoSave" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Should this setting automatically apply when changed?\nWill also apply automatically if AutoSave is true\nIf false, \"Apply\" function can be called for manual control" },
	};
#endif
	void Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply_SetBit(void* Obj)
	{
		((UAutoSettingWidget*)Obj)->bAutoApply = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply = { "bAutoApply", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSettingWidget), &Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Should this setting automatically save to config when changed?\n// Saving also applies the setting if it hasn't been already\n// If false, \"Save\" function can be called for manual control\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Should this setting automatically save to config when changed?\nSaving also applies the setting if it hasn't been already\nIf false, \"Save\" function can be called for manual control" },
	};
#endif
	void Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave_SetBit(void* Obj)
	{
		((UAutoSettingWidget*)Obj)->bAutoSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave = { "bAutoSave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAutoSettingWidget), &Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_ValueMask_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Transformations to apply to the value to get the subsection that this setting cares about\n// Leave this blank for no transformation\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Transformations to apply to the value to get the subsection that this setting cares about\nLeave this blank for no transformation" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_ValueMask = { "ValueMask", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingWidget, ValueMask), Z_Construct_UClass_USettingValueMask_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_ValueMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_ValueMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CVarName_MetaData[] = {
		{ "Category", "Setting" },
		{ "Comment", "// Console variable to turn into a setting\n// e.g. \"r.vsync\"\n" },
		{ "ModuleRelativePath", "Public/UI/AutoSettingWidget.h" },
		{ "ToolTip", "Console variable to turn into a setting\ne.g. \"r.vsync\"" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CVarName = { "CVarName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutoSettingWidget, CVarName), METADATA_PARAMS(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CVarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CVarName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoSettingWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bUpdatingSettingSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnsavedChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bHasUnappliedChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CurrentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_SettingTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoApply,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_bAutoSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_ValueMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoSettingWidget_Statics::NewProp_CVarName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutoSettingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoSettingWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutoSettingWidget_Statics::ClassParams = {
		&UAutoSettingWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAutoSettingWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAutoSettingWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutoSettingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutoSettingWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutoSettingWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutoSettingWidget, 1705361559);
	template<> AUTOSETTINGS_API UClass* StaticClass<UAutoSettingWidget>()
	{
		return UAutoSettingWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutoSettingWidget(Z_Construct_UClass_UAutoSettingWidget, &UAutoSettingWidget::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UAutoSettingWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoSettingWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
