// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/SettingsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSettingsManager() {}
// Cross Module References
	AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FAutoSettingData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingsManager_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_USettingsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature();
	AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature();
	AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature();
	AUTOSETTINGS_API UFunction* Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics
	{
		struct _Script_AutoSettings_eventSettingSavedSignature_Parms
		{
			FAutoSettingData SettingData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics::NewProp_SettingData = { "SettingData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AutoSettings_eventSettingSavedSignature_Parms, SettingData), Z_Construct_UScriptStruct_FAutoSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics::NewProp_SettingData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AutoSettings, nullptr, "SettingSavedSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_AutoSettings_eventSettingSavedSignature_Parms), Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAutoSettingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AUTOSETTINGS_API uint32 Get_Z_Construct_UScriptStruct_FAutoSettingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoSettingData, Z_Construct_UPackage__Script_AutoSettings(), TEXT("AutoSettingData"), sizeof(FAutoSettingData), Get_Z_Construct_UScriptStruct_FAutoSettingData_Hash());
	}
	return Singleton;
}
template<> AUTOSETTINGS_API UScriptStruct* StaticStruct<FAutoSettingData>()
{
	return FAutoSettingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoSettingData(FAutoSettingData::StaticStruct, TEXT("/Script/AutoSettings"), TEXT("AutoSettingData"), false, nullptr, nullptr);
static struct FScriptStruct_AutoSettings_StaticRegisterNativesFAutoSettingData
{
	FScriptStruct_AutoSettings_StaticRegisterNativesFAutoSettingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AutoSettingData")),new UScriptStruct::TCppStructOps<FAutoSettingData>);
	}
} ScriptStruct_AutoSettings_StaticRegisterNativesFAutoSettingData;
	struct Z_Construct_UScriptStruct_FAutoSettingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoSettingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Represents data for a saved setting\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Represents data for a saved setting" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoSettingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Setting tags for use when saving\n// Can be used to categorize or flag certain settings that might be useful to external logic\n// Transient\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Setting tags for use when saving\nCan be used to categorize or flag certain settings that might be useful to external logic\nTransient" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoSettingData, Tags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Value of the setting\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Value of the setting" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoSettingData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Key of the setting, typically the CVar name\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Key of the setting, typically the CVar name" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoSettingData, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoSettingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoSettingData_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoSettingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
		nullptr,
		&NewStructOps,
		"AutoSettingData",
		sizeof(FAutoSettingData),
		alignof(FAutoSettingData),
		Z_Construct_UScriptStruct_FAutoSettingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSettingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoSettingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoSettingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoSettingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoSettingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AutoSettings();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoSettingData"), sizeof(FAutoSettingData), Get_Z_Construct_UScriptStruct_FAutoSettingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutoSettingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoSettingData_Hash() { return 67704975U; }
	DEFINE_FUNCTION(USettingsManager::execApplySettingStatic)
	{
		P_GET_STRUCT(FAutoSettingData,Z_Param_SettingData);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::ApplySettingStatic(Z_Param_SettingData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execSaveSettingStatic)
	{
		P_GET_STRUCT(FAutoSettingData,Z_Param_SettingData);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::SaveSettingStatic(Z_Param_SettingData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execAutoDetectSettingsStatic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WorkScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CPUMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GPUMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::AutoDetectSettingsStatic(Z_Param_WorkScale,Z_Param_CPUMultiplier,Z_Param_GPUMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execRegisterStringCVarSettingWithCallback)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Help);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
		P_GET_UBOOL(Z_Param_CallbackImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::RegisterStringCVarSettingWithCallback(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help,FStringCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execRegisterFloatCVarSettingWithCallback)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Help);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
		P_GET_UBOOL(Z_Param_CallbackImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::RegisterFloatCVarSettingWithCallback(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help,FFloatCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execRegisterBoolCVarSettingWithCallback)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_DefaultValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Help);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
		P_GET_UBOOL(Z_Param_CallbackImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::RegisterBoolCVarSettingWithCallback(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help,FBoolCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execRegisterIntCVarSettingWithCallback)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Help);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ChangedCallback);
		P_GET_UBOOL(Z_Param_CallbackImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::RegisterIntCVarSettingWithCallback(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help,FIntCVarChangedSignature(Z_Param_ChangedCallback),Z_Param_CallbackImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execRegisterStringCVarSetting)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_DefaultValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Help);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::RegisterStringCVarSetting(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execRegisterFloatCVarSetting)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DefaultValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Help);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::RegisterFloatCVarSetting(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execRegisterBoolCVarSetting)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_DefaultValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Help);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::RegisterBoolCVarSetting(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execRegisterIntCVarSetting)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_DefaultValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_Help);
		P_FINISH;
		P_NATIVE_BEGIN;
		USettingsManager::RegisterIntCVarSetting(Z_Param_Name,Z_Param_DefaultValue,Z_Param_Help);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USettingsManager::execGetValue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Key);
		P_GET_UBOOL(Z_Param_bPreferConfigValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USettingsManager::GetValue(Z_Param_Key,Z_Param_bPreferConfigValue);
		P_NATIVE_END;
	}
	void USettingsManager::StaticRegisterNativesUSettingsManager()
	{
		UClass* Class = USettingsManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySettingStatic", &USettingsManager::execApplySettingStatic },
			{ "AutoDetectSettingsStatic", &USettingsManager::execAutoDetectSettingsStatic },
			{ "GetValue", &USettingsManager::execGetValue },
			{ "RegisterBoolCVarSetting", &USettingsManager::execRegisterBoolCVarSetting },
			{ "RegisterBoolCVarSettingWithCallback", &USettingsManager::execRegisterBoolCVarSettingWithCallback },
			{ "RegisterFloatCVarSetting", &USettingsManager::execRegisterFloatCVarSetting },
			{ "RegisterFloatCVarSettingWithCallback", &USettingsManager::execRegisterFloatCVarSettingWithCallback },
			{ "RegisterIntCVarSetting", &USettingsManager::execRegisterIntCVarSetting },
			{ "RegisterIntCVarSettingWithCallback", &USettingsManager::execRegisterIntCVarSettingWithCallback },
			{ "RegisterStringCVarSetting", &USettingsManager::execRegisterStringCVarSetting },
			{ "RegisterStringCVarSettingWithCallback", &USettingsManager::execRegisterStringCVarSettingWithCallback },
			{ "SaveSettingStatic", &USettingsManager::execSaveSettingStatic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics
	{
		struct SettingsManager_eventApplySettingStatic_Parms
		{
			FAutoSettingData SettingData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::NewProp_SettingData = { "SettingData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventApplySettingStatic_Parms, SettingData), Z_Construct_UScriptStruct_FAutoSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::NewProp_SettingData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Applies a setting\n" },
		{ "DisplayName", "Apply Setting" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Applies a setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "ApplySettingStatic", nullptr, nullptr, sizeof(SettingsManager_eventApplySettingStatic_Parms), Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_ApplySettingStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_ApplySettingStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics
	{
		struct SettingsManager_eventAutoDetectSettingsStatic_Parms
		{
			int32 WorkScale;
			float CPUMultiplier;
			float GPUMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GPUMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CPUMultiplier;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WorkScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_GPUMultiplier = { "GPUMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventAutoDetectSettingsStatic_Parms, GPUMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_CPUMultiplier = { "CPUMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventAutoDetectSettingsStatic_Parms, CPUMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_WorkScale = { "WorkScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventAutoDetectSettingsStatic_Parms, WorkScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_GPUMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_CPUMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::NewProp_WorkScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Auto detect, apply, and save scalability settings\n// Note: To change how your project determines which settings to apply from the result, see [ScalabilitySettings] in BaseScalability.ini and override the values in your project's DefaultScalability.ini\n" },
		{ "CPP_Default_CPUMultiplier", "1.000000" },
		{ "CPP_Default_GPUMultiplier", "1.000000" },
		{ "CPP_Default_WorkScale", "10" },
		{ "DisplayName", "Auto Detect Settings" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Auto detect, apply, and save scalability settings\nNote: To change how your project determines which settings to apply from the result, see [ScalabilitySettings] in BaseScalability.ini and override the values in your project's DefaultScalability.ini" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "AutoDetectSettingsStatic", nullptr, nullptr, sizeof(SettingsManager_eventAutoDetectSettingsStatic_Parms), Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_GetValue_Statics
	{
		struct SettingsManager_eventGetValue_Parms
		{
			FName Key;
			bool bPreferConfigValue;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_bPreferConfigValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreferConfigValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_bPreferConfigValue_SetBit(void* Obj)
	{
		((SettingsManager_eventGetValue_Parms*)Obj)->bPreferConfigValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_bPreferConfigValue = { "bPreferConfigValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SettingsManager_eventGetValue_Parms), &Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_bPreferConfigValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventGetValue_Parms, Key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_GetValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_bPreferConfigValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_GetValue_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_GetValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Return a setting's value from CVar or config\n// @param\x09""bPreferConfigValue\x09If true, the saved config value will be preferred over the applied CVar value if they differ\n" },
		{ "CPP_Default_bPreferConfigValue", "false" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Return a setting's value from CVar or config\n@param        bPreferConfigValue      If true, the saved config value will be preferred over the applied CVar value if they differ" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "GetValue", nullptr, nullptr, sizeof(SettingsManager_eventGetValue_Parms), Z_Construct_UFunction_USettingsManager_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_GetValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_GetValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_GetValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_GetValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_GetValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics
	{
		struct SettingsManager_eventRegisterBoolCVarSetting_Parms
		{
			FName Name;
			bool DefaultValue;
			FString Help;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Help;
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterBoolCVarSetting_Parms, Help), METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Help_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Help_MetaData)) };
	void Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((SettingsManager_eventRegisterBoolCVarSetting_Parms*)Obj)->DefaultValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterBoolCVarSetting_Parms), &Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterBoolCVarSetting_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Help,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register new bool console variable and check config for a saved value\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register new bool console variable and check config for a saved value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterBoolCVarSetting", nullptr, nullptr, sizeof(SettingsManager_eventRegisterBoolCVarSetting_Parms), Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics
	{
		struct SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms
		{
			FName Name;
			bool DefaultValue;
			FString Help;
			FScriptDelegate ChangedCallback;
			bool CallbackImmediately;
		};
		static void NewProp_CallbackImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Help;
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
	{
		((SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms*)Obj)->CallbackImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms), &Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_BoolCVarChangedSignature__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms, Help), METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Help_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Help_MetaData)) };
	void Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms*)Obj)->DefaultValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms), &Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_CallbackImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_ChangedCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Help,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register CVar and add callback for value updates\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register CVar and add callback for value updates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterBoolCVarSettingWithCallback", nullptr, nullptr, sizeof(SettingsManager_eventRegisterBoolCVarSettingWithCallback_Parms), Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics
	{
		struct SettingsManager_eventRegisterFloatCVarSetting_Parms
		{
			FName Name;
			float DefaultValue;
			FString Help;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Help;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSetting_Parms, Help), METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Help_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Help_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSetting_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSetting_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Help,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register new float console variable and check config for a saved value\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register new float console variable and check config for a saved value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterFloatCVarSetting", nullptr, nullptr, sizeof(SettingsManager_eventRegisterFloatCVarSetting_Parms), Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics
	{
		struct SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms
		{
			FName Name;
			float DefaultValue;
			FString Help;
			FScriptDelegate ChangedCallback;
			bool CallbackImmediately;
		};
		static void NewProp_CallbackImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Help;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
	{
		((SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms*)Obj)->CallbackImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms), &Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_FloatCVarChangedSignature__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms, Help), METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Help_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Help_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_CallbackImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_ChangedCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Help,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register CVar and add callback for value updates\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register CVar and add callback for value updates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterFloatCVarSettingWithCallback", nullptr, nullptr, sizeof(SettingsManager_eventRegisterFloatCVarSettingWithCallback_Parms), Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics
	{
		struct SettingsManager_eventRegisterIntCVarSetting_Parms
		{
			FName Name;
			int32 DefaultValue;
			FString Help;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Help;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSetting_Parms, Help), METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Help_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Help_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSetting_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSetting_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Help,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register new int console variable and check config for a saved value\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register new int console variable and check config for a saved value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterIntCVarSetting", nullptr, nullptr, sizeof(SettingsManager_eventRegisterIntCVarSetting_Parms), Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics
	{
		struct SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms
		{
			FName Name;
			int32 DefaultValue;
			FString Help;
			FScriptDelegate ChangedCallback;
			bool CallbackImmediately;
		};
		static void NewProp_CallbackImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Help;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
	{
		((SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms*)Obj)->CallbackImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms), &Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_IntCVarChangedSignature__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms, Help), METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Help_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Help_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms, DefaultValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_CallbackImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_ChangedCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Help,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register CVar and add callback for value updates\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register CVar and add callback for value updates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterIntCVarSettingWithCallback", nullptr, nullptr, sizeof(SettingsManager_eventRegisterIntCVarSettingWithCallback_Parms), Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics
	{
		struct SettingsManager_eventRegisterStringCVarSetting_Parms
		{
			FName Name;
			FString DefaultValue;
			FString Help;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Help;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSetting_Parms, Help), METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Help_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Help_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSetting_Parms, DefaultValue), METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSetting_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Help,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register new string console variable and check config for a saved value\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register new string console variable and check config for a saved value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterStringCVarSetting", nullptr, nullptr, sizeof(SettingsManager_eventRegisterStringCVarSetting_Parms), Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics
	{
		struct SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms
		{
			FName Name;
			FString DefaultValue;
			FString Help;
			FScriptDelegate ChangedCallback;
			bool CallbackImmediately;
		};
		static void NewProp_CallbackImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CallbackImmediately;
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_ChangedCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Help_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Help;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit(void* Obj)
	{
		((SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms*)Obj)->CallbackImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_CallbackImmediately = { "CallbackImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms), &Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_CallbackImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_ChangedCallback = { "ChangedCallback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms, ChangedCallback), Z_Construct_UDelegateFunction_AutoSettings_StringCVarChangedSignature__DelegateSignature, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Help_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Help = { "Help", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms, Help), METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Help_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Help_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms, DefaultValue), METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_DefaultValue_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_CallbackImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_ChangedCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Help,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_DefaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Register CVar and add callback for value updates\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Register CVar and add callback for value updates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "RegisterStringCVarSettingWithCallback", nullptr, nullptr, sizeof(SettingsManager_eventRegisterStringCVarSettingWithCallback_Parms), Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics
	{
		struct SettingsManager_eventSaveSettingStatic_Parms
		{
			FAutoSettingData SettingData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SettingData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::NewProp_SettingData = { "SettingData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SettingsManager_eventSaveSettingStatic_Parms, SettingData), Z_Construct_UScriptStruct_FAutoSettingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::NewProp_SettingData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Applies and saves a setting\n" },
		{ "DisplayName", "Save Setting" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Applies and saves a setting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USettingsManager, nullptr, "SaveSettingStatic", nullptr, nullptr, sizeof(SettingsManager_eventSaveSettingStatic_Parms), Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USettingsManager_SaveSettingStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USettingsManager_SaveSettingStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USettingsManager_NoRegister()
	{
		return USettingsManager::StaticClass();
	}
	struct Z_Construct_UClass_USettingsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IniFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IniFilename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSettingSaved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSettingSaved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USettingsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USettingsManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USettingsManager_ApplySettingStatic, "ApplySettingStatic" }, // 1063094417
		{ &Z_Construct_UFunction_USettingsManager_AutoDetectSettingsStatic, "AutoDetectSettingsStatic" }, // 2455897698
		{ &Z_Construct_UFunction_USettingsManager_GetValue, "GetValue" }, // 2751582607
		{ &Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSetting, "RegisterBoolCVarSetting" }, // 700193040
		{ &Z_Construct_UFunction_USettingsManager_RegisterBoolCVarSettingWithCallback, "RegisterBoolCVarSettingWithCallback" }, // 756924303
		{ &Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSetting, "RegisterFloatCVarSetting" }, // 3609902594
		{ &Z_Construct_UFunction_USettingsManager_RegisterFloatCVarSettingWithCallback, "RegisterFloatCVarSettingWithCallback" }, // 1969493015
		{ &Z_Construct_UFunction_USettingsManager_RegisterIntCVarSetting, "RegisterIntCVarSetting" }, // 4094211437
		{ &Z_Construct_UFunction_USettingsManager_RegisterIntCVarSettingWithCallback, "RegisterIntCVarSettingWithCallback" }, // 453744964
		{ &Z_Construct_UFunction_USettingsManager_RegisterStringCVarSetting, "RegisterStringCVarSetting" }, // 293894730
		{ &Z_Construct_UFunction_USettingsManager_RegisterStringCVarSettingWithCallback, "RegisterStringCVarSettingWithCallback" }, // 3465861216
		{ &Z_Construct_UFunction_USettingsManager_SaveSettingStatic, "SaveSettingStatic" }, // 2093690572
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles saving, loading, and applying settings\n */" },
		{ "IncludePath", "SettingsManager.h" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Handles saving, loading, and applying settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsManager_Statics::NewProp_IniFilename_MetaData[] = {
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USettingsManager_Statics::NewProp_IniFilename = { "IniFilename", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsManager, IniFilename), METADATA_PARAMS(Z_Construct_UClass_USettingsManager_Statics::NewProp_IniFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsManager_Statics::NewProp_IniFilename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USettingsManager_Statics::NewProp_OnSettingSaved_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Fired when a setting is saved (Must actually be a save, not a config update)\n" },
		{ "ModuleRelativePath", "Public/SettingsManager.h" },
		{ "ToolTip", "Fired when a setting is saved (Must actually be a save, not a config update)" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USettingsManager_Statics::NewProp_OnSettingSaved = { "OnSettingSaved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USettingsManager, OnSettingSaved), Z_Construct_UDelegateFunction_AutoSettings_SettingSavedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USettingsManager_Statics::NewProp_OnSettingSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsManager_Statics::NewProp_OnSettingSaved_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USettingsManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsManager_Statics::NewProp_IniFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USettingsManager_Statics::NewProp_OnSettingSaved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USettingsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USettingsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USettingsManager_Statics::ClassParams = {
		&USettingsManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USettingsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USettingsManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USettingsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USettingsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USettingsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USettingsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USettingsManager, 174328667);
	template<> AUTOSETTINGS_API UClass* StaticClass<USettingsManager>()
	{
		return USettingsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USettingsManager(Z_Construct_UClass_USettingsManager, &USettingsManager::StaticClass, TEXT("/Script/AutoSettings"), TEXT("USettingsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USettingsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
