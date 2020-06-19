// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Utility/SettingContainerUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingContainerUtils() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingContainerUtils_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingContainerUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAutoSettingWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USettingContainerUtils::execCancelChildSettings)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
		P_GET_OBJECT(UWidget,Z_Param_Parent);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingContainerUtils::CancelChildSettings(Z_Param_UserWidget,Z_Param_Parent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingContainerUtils::execSaveChildSettings)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
		P_GET_OBJECT(UWidget,Z_Param_Parent);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingContainerUtils::SaveChildSettings(Z_Param_UserWidget,Z_Param_Parent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingContainerUtils::execApplyChildSettings)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
		P_GET_OBJECT(UWidget,Z_Param_Parent);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingContainerUtils::ApplyChildSettings(Z_Param_UserWidget,Z_Param_Parent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingContainerUtils::execDoesAnyChildSettingHaveUnsavedChange)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
		P_GET_OBJECT(UWidget,Z_Param_Parent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USettingContainerUtils::DoesAnyChildSettingHaveUnsavedChange(Z_Param_UserWidget,Z_Param_Parent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingContainerUtils::execDoesAnyChildSettingHaveUnappliedChange)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
		P_GET_OBJECT(UWidget,Z_Param_Parent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USettingContainerUtils::DoesAnyChildSettingHaveUnappliedChange(Z_Param_UserWidget,Z_Param_Parent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingContainerUtils::execGetChildSettings)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_UserWidget);
		P_GET_OBJECT(UWidget,Z_Param_Parent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UAutoSettingWidget*>*)Z_Param__Result=USettingContainerUtils::GetChildSettings(Z_Param_UserWidget,Z_Param_Parent);
		P_NATIVE_END;
	}
	void USettingContainerUtils::StaticRegisterNativesUSettingContainerUtils()
	{
		UClass* Class = USettingContainerUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyChildSettings", &USettingContainerUtils::execApplyChildSettings },
			{ "CancelChildSettings", &USettingContainerUtils::execCancelChildSettings },
			{ "DoesAnyChildSettingHaveUnappliedChange", &USettingContainerUtils::execDoesAnyChildSettingHaveUnappliedChange },
			{ "DoesAnyChildSettingHaveUnsavedChange", &USettingContainerUtils::execDoesAnyChildSettingHaveUnsavedChange },
			{ "GetChildSettings", &USettingContainerUtils::execGetChildSettings },
			{ "SaveChildSettings", &USettingContainerUtils::execSaveChildSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics
	{
		struct SettingContainerUtils_eventApplyChildSettings_Parms
		{
			UUserWidget* UserWidget;
			UWidget* Parent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventApplyChildSettings_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventApplyChildSettings_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_UserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::NewProp_UserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Applies all changes in descendant Settings of Parent\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be applied, otherwise all settings in the User Widget are applied\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "Applies all changes in descendant Settings of Parent\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be applied, otherwise all settings in the User Widget are applied" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "ApplyChildSettings", nullptr, nullptr, sizeof(SettingContainerUtils_eventApplyChildSettings_Parms), Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics
	{
		struct SettingContainerUtils_eventCancelChildSettings_Parms
		{
			UUserWidget* UserWidget;
			UWidget* Parent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventCancelChildSettings_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventCancelChildSettings_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_UserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::NewProp_UserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Cancels all changes in descendant Settings of Parent\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be cancelled, otherwise all settings in the User Widget are cancelled\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "Cancels all changes in descendant Settings of Parent\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be cancelled, otherwise all settings in the User Widget are cancelled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "CancelChildSettings", nullptr, nullptr, sizeof(SettingContainerUtils_eventCancelChildSettings_Parms), Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics
	{
		struct SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms
		{
			UUserWidget* UserWidget;
			UWidget* Parent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms), &Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_UserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::NewProp_UserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// True if any descendant Settings of Parent have unapplied changes\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be checked, otherwise all settings in the User Widget are checked\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "True if any descendant Settings of Parent have unapplied changes\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be checked, otherwise all settings in the User Widget are checked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "DoesAnyChildSettingHaveUnappliedChange", nullptr, nullptr, sizeof(SettingContainerUtils_eventDoesAnyChildSettingHaveUnappliedChange_Parms), Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics
	{
		struct SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms
		{
			UUserWidget* UserWidget;
			UWidget* Parent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms), &Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_UserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::NewProp_UserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// True if any descendant Settings of Parent have unsaved changes\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be checked, otherwise all settings in the User Widget are checked\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "True if any descendant Settings of Parent have unsaved changes\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be checked, otherwise all settings in the User Widget are checked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "DoesAnyChildSettingHaveUnsavedChange", nullptr, nullptr, sizeof(SettingContainerUtils_eventDoesAnyChildSettingHaveUnsavedChange_Parms), Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics
	{
		struct SettingContainerUtils_eventGetChildSettings_Parms
		{
			UUserWidget* UserWidget;
			UWidget* Parent;
			TArray<UAutoSettingWidget*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventGetChildSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAutoSettingWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventGetChildSettings_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventGetChildSettings_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_UserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::NewProp_UserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Gets all Settings in a User Widget which are descendant of the given Parent widget\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be returned, otherwise all settings in the User Widget are returned\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "Gets all Settings in a User Widget which are descendant of the given Parent widget\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be returned, otherwise all settings in the User Widget are returned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "GetChildSettings", nullptr, nullptr, sizeof(SettingContainerUtils_eventGetChildSettings_Parms), Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingContainerUtils_GetChildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_GetChildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics
	{
		struct SettingContainerUtils_eventSaveChildSettings_Parms
		{
			UUserWidget* UserWidget;
			UWidget* Parent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_Parent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventSaveChildSettings_Parms, Parent), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_UserWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_UserWidget = { "UserWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingContainerUtils_eventSaveChildSettings_Parms, UserWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_UserWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_UserWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_Parent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::NewProp_UserWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Saves all changes in descendant Settings of Parent\n// @param UserWidget UserWidget which contains settings, defaults to self if not specified\n// @param Parent If specified, only descendants of this widget will be saved, otherwise all settings in the User Widget are saved\n" },
		{ "CPP_Default_Parent", "None" },
		{ "DefaultToSelf", "UserWidget" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "Saves all changes in descendant Settings of Parent\n@param UserWidget UserWidget which contains settings, defaults to self if not specified\n@param Parent If specified, only descendants of this widget will be saved, otherwise all settings in the User Widget are saved" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingContainerUtils, nullptr, "SaveChildSettings", nullptr, nullptr, sizeof(SettingContainerUtils_eventSaveChildSettings_Parms), Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USettingContainerUtils_NoRegister()
	{
		return USettingContainerUtils::StaticClass();
	}
	struct Z_Construct_UClass_USettingContainerUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingContainerUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingContainerUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingContainerUtils_ApplyChildSettings, "ApplyChildSettings" }, // 177216581
		{ &Z_Construct_UFunction_USettingContainerUtils_CancelChildSettings, "CancelChildSettings" }, // 3662965576
		{ &Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnappliedChange, "DoesAnyChildSettingHaveUnappliedChange" }, // 3962742199
		{ &Z_Construct_UFunction_USettingContainerUtils_DoesAnyChildSettingHaveUnsavedChange, "DoesAnyChildSettingHaveUnsavedChange" }, // 991704450
		{ &Z_Construct_UFunction_USettingContainerUtils_GetChildSettings, "GetChildSettings" }, // 530041501
		{ &Z_Construct_UFunction_USettingContainerUtils_SaveChildSettings, "SaveChildSettings" }, // 3306240223
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingContainerUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Static helper functions for operating on multiple settings at the same time\n */" },
		{ "IncludePath", "Utility/SettingContainerUtils.h" },
		{ "ModuleRelativePath", "Public/Utility/SettingContainerUtils.h" },
		{ "ToolTip", "Static helper functions for operating on multiple settings at the same time" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingContainerUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingContainerUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USettingContainerUtils_Statics::ClassParams = {
		&USettingContainerUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USettingContainerUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingContainerUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingContainerUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USettingContainerUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingContainerUtils, 3529374566);
	template<> AUTOSETTINGS_API UClass* StaticClass<USettingContainerUtils>()
	{
		return USettingContainerUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingContainerUtils(Z_Construct_UClass_USettingContainerUtils, &USettingContainerUtils::StaticClass, TEXT("/Script/AutoSettings"), TEXT("USettingContainerUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingContainerUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
