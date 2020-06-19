// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/Console/ConsoleUtils.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleUtils() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UConsoleUtils_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UConsoleUtils();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
// End Cross Module References
	DEFINE_FUNCTION(UConsoleUtils::execSetStringCVar)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConsoleUtils::SetStringCVar(Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleUtils::execSetFloatCVar)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConsoleUtils::SetFloatCVar(Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleUtils::execSetBoolCVar)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConsoleUtils::SetBoolCVar(Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleUtils::execSetIntCVar)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UConsoleUtils::SetIntCVar(Z_Param_Name,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleUtils::execGetStringCVar)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UConsoleUtils::GetStringCVar(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleUtils::execGetFloatCVar)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UConsoleUtils::GetFloatCVar(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleUtils::execGetBoolCVar)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleUtils::GetBoolCVar(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleUtils::execGetIntCVar)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UConsoleUtils::GetIntCVar(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConsoleUtils::execIsCVarRegistered)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConsoleUtils::IsCVarRegistered(Z_Param_Name);
		P_NATIVE_END;
	}
	void UConsoleUtils::StaticRegisterNativesUConsoleUtils()
	{
		UClass* Class = UConsoleUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoolCVar", &UConsoleUtils::execGetBoolCVar },
			{ "GetFloatCVar", &UConsoleUtils::execGetFloatCVar },
			{ "GetIntCVar", &UConsoleUtils::execGetIntCVar },
			{ "GetStringCVar", &UConsoleUtils::execGetStringCVar },
			{ "IsCVarRegistered", &UConsoleUtils::execIsCVarRegistered },
			{ "SetBoolCVar", &UConsoleUtils::execSetBoolCVar },
			{ "SetFloatCVar", &UConsoleUtils::execSetFloatCVar },
			{ "SetIntCVar", &UConsoleUtils::execSetIntCVar },
			{ "SetStringCVar", &UConsoleUtils::execSetStringCVar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics
	{
		struct ConsoleUtils_eventGetBoolCVar_Parms
		{
			FName Name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleUtils_eventGetBoolCVar_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConsoleUtils_eventGetBoolCVar_Parms), &Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventGetBoolCVar_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Get current value of int CVar as bool\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Get current value of int CVar as bool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "GetBoolCVar", nullptr, nullptr, sizeof(ConsoleUtils_eventGetBoolCVar_Parms), Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleUtils_GetBoolCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleUtils_GetBoolCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics
	{
		struct ConsoleUtils_eventGetFloatCVar_Parms
		{
			FName Name;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventGetFloatCVar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventGetFloatCVar_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Get current value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Get current value of CVar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "GetFloatCVar", nullptr, nullptr, sizeof(ConsoleUtils_eventGetFloatCVar_Parms), Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleUtils_GetFloatCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleUtils_GetFloatCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics
	{
		struct ConsoleUtils_eventGetIntCVar_Parms
		{
			FName Name;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventGetIntCVar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventGetIntCVar_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Get current value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Get current value of CVar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "GetIntCVar", nullptr, nullptr, sizeof(ConsoleUtils_eventGetIntCVar_Parms), Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleUtils_GetIntCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleUtils_GetIntCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics
	{
		struct ConsoleUtils_eventGetStringCVar_Parms
		{
			FName Name;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventGetStringCVar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventGetStringCVar_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Get current value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Get current value of CVar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "GetStringCVar", nullptr, nullptr, sizeof(ConsoleUtils_eventGetStringCVar_Parms), Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleUtils_GetStringCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleUtils_GetStringCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics
	{
		struct ConsoleUtils_eventIsCVarRegistered_Parms
		{
			FName Name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConsoleUtils_eventIsCVarRegistered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConsoleUtils_eventIsCVarRegistered_Parms), &Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventIsCVarRegistered_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// True if the CVar with the specified name is registered\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "True if the CVar with the specified name is registered" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "IsCVarRegistered", nullptr, nullptr, sizeof(ConsoleUtils_eventIsCVarRegistered_Parms), Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics
	{
		struct ConsoleUtils_eventSetBoolCVar_Parms
		{
			FName Name;
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((ConsoleUtils_eventSetBoolCVar_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ConsoleUtils_eventSetBoolCVar_Parms), &Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventSetBoolCVar_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Set value of int CVar as bool\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Set value of int CVar as bool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "SetBoolCVar", nullptr, nullptr, sizeof(ConsoleUtils_eventSetBoolCVar_Parms), Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleUtils_SetBoolCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleUtils_SetBoolCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics
	{
		struct ConsoleUtils_eventSetFloatCVar_Parms
		{
			FName Name;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventSetFloatCVar_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventSetFloatCVar_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Set value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Set value of CVar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "SetFloatCVar", nullptr, nullptr, sizeof(ConsoleUtils_eventSetFloatCVar_Parms), Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleUtils_SetFloatCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleUtils_SetFloatCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics
	{
		struct ConsoleUtils_eventSetIntCVar_Parms
		{
			FName Name;
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventSetIntCVar_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventSetIntCVar_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Set value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Set value of CVar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "SetIntCVar", nullptr, nullptr, sizeof(ConsoleUtils_eventSetIntCVar_Parms), Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleUtils_SetIntCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleUtils_SetIntCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics
	{
		struct ConsoleUtils_eventSetStringCVar_Parms
		{
			FName Name;
			FString Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventSetStringCVar_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ConsoleUtils_eventSetStringCVar_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Console" },
		{ "Comment", "// Set value of CVar\n" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Set value of CVar" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConsoleUtils, nullptr, "SetStringCVar", nullptr, nullptr, sizeof(ConsoleUtils_eventSetStringCVar_Parms), Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConsoleUtils_SetStringCVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UConsoleUtils_SetStringCVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UConsoleUtils_NoRegister()
	{
		return UConsoleUtils::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConsoleUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConsoleUtils_GetBoolCVar, "GetBoolCVar" }, // 3055452316
		{ &Z_Construct_UFunction_UConsoleUtils_GetFloatCVar, "GetFloatCVar" }, // 607066551
		{ &Z_Construct_UFunction_UConsoleUtils_GetIntCVar, "GetIntCVar" }, // 1970633168
		{ &Z_Construct_UFunction_UConsoleUtils_GetStringCVar, "GetStringCVar" }, // 3207901325
		{ &Z_Construct_UFunction_UConsoleUtils_IsCVarRegistered, "IsCVarRegistered" }, // 3015790977
		{ &Z_Construct_UFunction_UConsoleUtils_SetBoolCVar, "SetBoolCVar" }, // 32278725
		{ &Z_Construct_UFunction_UConsoleUtils_SetFloatCVar, "SetFloatCVar" }, // 3063660859
		{ &Z_Construct_UFunction_UConsoleUtils_SetIntCVar, "SetIntCVar" }, // 3943298755
		{ &Z_Construct_UFunction_UConsoleUtils_SetStringCVar, "SetStringCVar" }, // 1371578095
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Static utility functions for interacting with console and console variables\n */" },
		{ "IncludePath", "Console/ConsoleUtils.h" },
		{ "ModuleRelativePath", "Public/Console/ConsoleUtils.h" },
		{ "ToolTip", "Static utility functions for interacting with console and console variables" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleUtils>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConsoleUtils_Statics::ClassParams = {
		&UConsoleUtils::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConsoleUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleUtils()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConsoleUtils_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConsoleUtils, 3457696157);
	template<> AUTOSETTINGS_API UClass* StaticClass<UConsoleUtils>()
	{
		return UConsoleUtils::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsoleUtils(Z_Construct_UClass_UConsoleUtils, &UConsoleUtils::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UConsoleUtils"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleUtils);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
