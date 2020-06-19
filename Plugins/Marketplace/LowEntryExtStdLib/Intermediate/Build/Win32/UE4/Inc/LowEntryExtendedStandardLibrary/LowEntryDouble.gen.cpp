// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/ClassesTypes/LowEntryDouble.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryDouble() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryDouble::execLongBytes_LessThan)
	{
		P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LongBytes_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execLongBytes_GreaterThan)
	{
		P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LongBytes_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_LessThan)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoubleBytes_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_GreaterThan)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoubleBytes_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_Equals)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoubleBytes_Equals(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_Subtract)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoubleBytes_Subtract(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execDoubleBytes_Add)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoubleBytes_Add(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execInteger_LessThan)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Integer_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execInteger_GreaterThan)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Integer_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execFloat_LessThan)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Float_LessThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execFloat_GreaterThan)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Float_GreaterThan(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execFloat_Equals)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Float_Equals(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execFloat_Subtract)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Float_Subtract(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execFloat_Add)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Float_Add(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execCastToString)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MinFractionalDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->CastToString(Z_Param_MinFractionalDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execCastToLongBytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryLong**)Z_Param__Result=P_THIS->CastToLongBytes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execCreateClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryDouble**)Z_Param__Result=P_THIS->CreateClone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execSetBytes)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ByteArray);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_Length);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBytes(Z_Param_Out_ByteArray,Z_Param_Index,Z_Param_Length);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryDouble::execGetBytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetBytes();
		P_NATIVE_END;
	}
	void ULowEntryDouble::StaticRegisterNativesULowEntryDouble()
	{
		UClass* Class = ULowEntryDouble::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CastToLongBytes", &ULowEntryDouble::execCastToLongBytes },
			{ "CastToString", &ULowEntryDouble::execCastToString },
			{ "CreateClone", &ULowEntryDouble::execCreateClone },
			{ "DoubleBytes_Add", &ULowEntryDouble::execDoubleBytes_Add },
			{ "DoubleBytes_Equals", &ULowEntryDouble::execDoubleBytes_Equals },
			{ "DoubleBytes_GreaterThan", &ULowEntryDouble::execDoubleBytes_GreaterThan },
			{ "DoubleBytes_LessThan", &ULowEntryDouble::execDoubleBytes_LessThan },
			{ "DoubleBytes_Subtract", &ULowEntryDouble::execDoubleBytes_Subtract },
			{ "Float_Add", &ULowEntryDouble::execFloat_Add },
			{ "Float_Equals", &ULowEntryDouble::execFloat_Equals },
			{ "Float_GreaterThan", &ULowEntryDouble::execFloat_GreaterThan },
			{ "Float_LessThan", &ULowEntryDouble::execFloat_LessThan },
			{ "Float_Subtract", &ULowEntryDouble::execFloat_Subtract },
			{ "GetBytes", &ULowEntryDouble::execGetBytes },
			{ "Integer_GreaterThan", &ULowEntryDouble::execInteger_GreaterThan },
			{ "Integer_LessThan", &ULowEntryDouble::execInteger_LessThan },
			{ "LongBytes_GreaterThan", &ULowEntryDouble::execLongBytes_GreaterThan },
			{ "LongBytes_LessThan", &ULowEntryDouble::execLongBytes_LessThan },
			{ "SetBytes", &ULowEntryDouble::execSetBytes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics
	{
		struct LowEntryDouble_eventCastToLongBytes_Parms
		{
			ULowEntryLong* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventCastToLongBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Casts the double to a long.\n\x09*/" },
		{ "DisplayName", "Cast To Long (bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Casts the double to a long." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "CastToLongBytes", nullptr, nullptr, sizeof(LowEntryDouble_eventCastToLongBytes_Parms), Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics
	{
		struct LowEntryDouble_eventCastToString_Parms
		{
			int32 MinFractionalDigits;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFractionalDigits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinFractionalDigits;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventCastToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits = { "MinFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventCastToString_Parms, MinFractionalDigits), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::NewProp_MinFractionalDigits,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Casts the double to a string.\n\x09*/" },
		{ "CPP_Default_MinFractionalDigits", "1" },
		{ "DisplayName", "To String" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Casts the double to a string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "CastToString", nullptr, nullptr, sizeof(LowEntryDouble_eventCastToString_Parms), Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_CastToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_CastToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics
	{
		struct LowEntryDouble_eventCreateClone_Parms
		{
			ULowEntryDouble* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventCreateClone_Parms, ReturnValue), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Casts the long to a double.\n\x09*/" },
		{ "DisplayName", "Create Clone" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Casts the long to a double." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "CreateClone", nullptr, nullptr, sizeof(LowEntryDouble_eventCreateClone_Parms), Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_CreateClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_CreateClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics
	{
		struct LowEntryDouble_eventDoubleBytes_Add_Parms
		{
			ULowEntryDouble* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_Add_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Add a float to this double.\n\x09*/" },
		{ "DisplayName", "Add (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Add a float to this double." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_Add", nullptr, nullptr, sizeof(LowEntryDouble_eventDoubleBytes_Add_Parms), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics
	{
		struct LowEntryDouble_eventDoubleBytes_Equals_Parms
		{
			ULowEntryDouble* Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventDoubleBytes_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryDouble_eventDoubleBytes_Equals_Parms), &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_Equals_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is equal to the given integer.\n\x09*/" },
		{ "DisplayName", "Equals (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is equal to the given integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_Equals", nullptr, nullptr, sizeof(LowEntryDouble_eventDoubleBytes_Equals_Parms), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics
	{
		struct LowEntryDouble_eventDoubleBytes_GreaterThan_Parms
		{
			ULowEntryDouble* Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventDoubleBytes_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryDouble_eventDoubleBytes_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_GreaterThan_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given float.\n\x09*/" },
		{ "DisplayName", "Greater Than (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_GreaterThan", nullptr, nullptr, sizeof(LowEntryDouble_eventDoubleBytes_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics
	{
		struct LowEntryDouble_eventDoubleBytes_LessThan_Parms
		{
			ULowEntryDouble* Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventDoubleBytes_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryDouble_eventDoubleBytes_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_LessThan_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given float.\n\x09*/" },
		{ "DisplayName", "Less Than (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_LessThan", nullptr, nullptr, sizeof(LowEntryDouble_eventDoubleBytes_LessThan_Parms), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics
	{
		struct LowEntryDouble_eventDoubleBytes_Subtract_Parms
		{
			ULowEntryDouble* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventDoubleBytes_Subtract_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Subtracts a float from this double.\n\x09*/" },
		{ "DisplayName", "Subtract (Double Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Subtracts a float from this double." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "DoubleBytes_Subtract", nullptr, nullptr, sizeof(LowEntryDouble_eventDoubleBytes_Subtract_Parms), Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics
	{
		struct LowEntryDouble_eventFloat_Add_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventFloat_Add_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Add a float to this double.\n\x09*/" },
		{ "DisplayName", "Add (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Add a float to this double." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_Add", nullptr, nullptr, sizeof(LowEntryDouble_eventFloat_Add_Parms), Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_Add()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_Add_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics
	{
		struct LowEntryDouble_eventFloat_Equals_Parms
		{
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventFloat_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryDouble_eventFloat_Equals_Parms), &Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventFloat_Equals_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is equal to the given integer.\n\x09*/" },
		{ "DisplayName", "Equals (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is equal to the given integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_Equals", nullptr, nullptr, sizeof(LowEntryDouble_eventFloat_Equals_Parms), Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics
	{
		struct LowEntryDouble_eventFloat_GreaterThan_Parms
		{
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventFloat_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryDouble_eventFloat_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventFloat_GreaterThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given float.\n\x09*/" },
		{ "DisplayName", "Greater Than (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_GreaterThan", nullptr, nullptr, sizeof(LowEntryDouble_eventFloat_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics
	{
		struct LowEntryDouble_eventFloat_LessThan_Parms
		{
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventFloat_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryDouble_eventFloat_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventFloat_LessThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given float.\n\x09*/" },
		{ "DisplayName", "Less Than (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_LessThan", nullptr, nullptr, sizeof(LowEntryDouble_eventFloat_LessThan_Parms), Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics
	{
		struct LowEntryDouble_eventFloat_Subtract_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventFloat_Subtract_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Subtracts a float from this double.\n\x09*/" },
		{ "DisplayName", "Subtract (Float)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Subtracts a float from this double." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Float_Subtract", nullptr, nullptr, sizeof(LowEntryDouble_eventFloat_Subtract_Parms), Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Float_Subtract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Float_Subtract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics
	{
		struct LowEntryDouble_eventGetBytes_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventGetBytes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns the bytes (always 8 bytes).\n\x09*/" },
		{ "DisplayName", "Get Bytes" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns the bytes (always 8 bytes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "GetBytes", nullptr, nullptr, sizeof(LowEntryDouble_eventGetBytes_Parms), Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_GetBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_GetBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics
	{
		struct LowEntryDouble_eventInteger_GreaterThan_Parms
		{
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventInteger_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryDouble_eventInteger_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventInteger_GreaterThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given integer.\n\x09*/" },
		{ "DisplayName", "Greater Than (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Integer_GreaterThan", nullptr, nullptr, sizeof(LowEntryDouble_eventInteger_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics
	{
		struct LowEntryDouble_eventInteger_LessThan_Parms
		{
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventInteger_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryDouble_eventInteger_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventInteger_LessThan_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given integer.\n\x09*/" },
		{ "DisplayName", "Less Than (Integer)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "Integer_LessThan", nullptr, nullptr, sizeof(LowEntryDouble_eventInteger_LessThan_Parms), Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics
	{
		struct LowEntryDouble_eventLongBytes_GreaterThan_Parms
		{
			ULowEntryLong* Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventLongBytes_GreaterThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryDouble_eventLongBytes_GreaterThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventLongBytes_GreaterThan_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is greater than the given integer.\n\x09*/" },
		{ "DisplayName", "Greater Than (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is greater than the given integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "LongBytes_GreaterThan", nullptr, nullptr, sizeof(LowEntryDouble_eventLongBytes_GreaterThan_Parms), Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics
	{
		struct LowEntryDouble_eventLongBytes_LessThan_Parms
		{
			ULowEntryLong* Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryDouble_eventLongBytes_LessThan_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryDouble_eventLongBytes_LessThan_Parms), &Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventLongBytes_LessThan_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Returns true if the double is less than the given integer.\n\x09*/" },
		{ "DisplayName", "Less Than (Long Bytes)" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Returns true if the double is less than the given integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "LongBytes_LessThan", nullptr, nullptr, sizeof(LowEntryDouble_eventLongBytes_LessThan_Parms), Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics
	{
		struct LowEntryDouble_eventSetBytes_Parms
		{
			TArray<uint8> ByteArray;
			int32 Index;
			int32 Length;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ByteArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ByteArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ByteArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventSetBytes_Parms, Length), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventSetBytes_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray = { "ByteArray", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryDouble_eventSetBytes_Parms, ByteArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_Inner = { "ByteArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::NewProp_ByteArray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Low Entry|Extended Standard Library|Types|Double (bytes)" },
		{ "Comment", "/**\n\x09* Sets the bytes (will only add the first 8 bytes, will add 0 bytes if the given byte array was less than 8 bytes).\n\x09*/" },
		{ "CPP_Default_Index", "0" },
		{ "CPP_Default_Length", "2147483647" },
		{ "DisplayName", "Set Bytes" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
		{ "ToolTip", "Sets the bytes (will only add the first 8 bytes, will add 0 bytes if the given byte array was less than 8 bytes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryDouble, nullptr, "SetBytes", nullptr, nullptr, sizeof(LowEntryDouble_eventSetBytes_Parms), Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryDouble_SetBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryDouble_SetBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister()
	{
		return ULowEntryDouble::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryDouble_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryDouble_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryDouble_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryDouble_CastToLongBytes, "CastToLongBytes" }, // 3642251749
		{ &Z_Construct_UFunction_ULowEntryDouble_CastToString, "CastToString" }, // 2013034929
		{ &Z_Construct_UFunction_ULowEntryDouble_CreateClone, "CreateClone" }, // 303164256
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Add, "DoubleBytes_Add" }, // 3835045349
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Equals, "DoubleBytes_Equals" }, // 1719745713
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_GreaterThan, "DoubleBytes_GreaterThan" }, // 1538947267
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_LessThan, "DoubleBytes_LessThan" }, // 2650299052
		{ &Z_Construct_UFunction_ULowEntryDouble_DoubleBytes_Subtract, "DoubleBytes_Subtract" }, // 3821228930
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_Add, "Float_Add" }, // 2713967063
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_Equals, "Float_Equals" }, // 2642365727
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_GreaterThan, "Float_GreaterThan" }, // 275196463
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_LessThan, "Float_LessThan" }, // 2382002042
		{ &Z_Construct_UFunction_ULowEntryDouble_Float_Subtract, "Float_Subtract" }, // 751885294
		{ &Z_Construct_UFunction_ULowEntryDouble_GetBytes, "GetBytes" }, // 1423748889
		{ &Z_Construct_UFunction_ULowEntryDouble_Integer_GreaterThan, "Integer_GreaterThan" }, // 2919113889
		{ &Z_Construct_UFunction_ULowEntryDouble_Integer_LessThan, "Integer_LessThan" }, // 2034911918
		{ &Z_Construct_UFunction_ULowEntryDouble_LongBytes_GreaterThan, "LongBytes_GreaterThan" }, // 436205481
		{ &Z_Construct_UFunction_ULowEntryDouble_LongBytes_LessThan, "LongBytes_LessThan" }, // 3939564521
		{ &Z_Construct_UFunction_ULowEntryDouble_SetBytes, "SetBytes" }, // 778184037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryDouble_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClassesTypes/LowEntryDouble.h" },
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClassesTypes/LowEntryDouble.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryDouble, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryDouble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryDouble_Statics::NewProp_Bytes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryDouble_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryDouble>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryDouble_Statics::ClassParams = {
		&ULowEntryDouble::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULowEntryDouble_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryDouble_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryDouble_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryDouble_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryDouble()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryDouble_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryDouble, 3160672019);
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryDouble>()
	{
		return ULowEntryDouble::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryDouble(Z_Construct_UClass_ULowEntryDouble, &ULowEntryDouble::StaticClass, TEXT("/Script/LowEntryExtendedStandardLibrary"), TEXT("ULowEntryDouble"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryDouble);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
