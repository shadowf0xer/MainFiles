// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/LowEntryBitDataWriter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryBitDataWriter() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryBitDataWriter_NoRegister();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryBitDataWriter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddStringUtf8Array)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStringUtf8Array(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddBooleanArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBooleanArray(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddDoubleBytesArray)
	{
		P_GET_TARRAY_REF(ULowEntryDouble*,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDoubleBytesArray(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddFloatArray)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFloatArray(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddLongBytesArray)
	{
		P_GET_TARRAY_REF(ULowEntryLong*,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLongBytesArray(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger3Array)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPositiveInteger3Array(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger2Array)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPositiveInteger2Array(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger1Array)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPositiveInteger1Array(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddIntegerArray)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIntegerArray(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByteArray)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddByteArray(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddIntegerArrayMostSignificantBits)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIntegerArrayMostSignificantBits(Z_Param_Out_Value,Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddIntegerArrayLeastSignificantBits)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIntegerArrayLeastSignificantBits(Z_Param_Out_Value,Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByteArrayMostSignificantBits)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddByteArrayMostSignificantBits(Z_Param_Out_Value,Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByteArrayLeastSignificantBits)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddByteArrayLeastSignificantBits(Z_Param_Out_Value,Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddBitArray)
	{
		P_GET_TARRAY_REF(bool,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBitArray(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddStringUtf8)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddStringUtf8(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddBoolean)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBoolean(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddDoubleBytes)
	{
		P_GET_OBJECT(ULowEntryDouble,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDoubleBytes(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddFloat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFloat(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddLongBytes)
	{
		P_GET_OBJECT(ULowEntryLong,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLongBytes(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger3)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPositiveInteger3(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger2)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPositiveInteger2(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddPositiveInteger1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPositiveInteger1(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddInteger)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInteger(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByte)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddByte(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddIntegerMostSignificantBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIntegerMostSignificantBits(Z_Param_Value,Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddIntegerLeastSignificantBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIntegerLeastSignificantBits(Z_Param_Value,Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByteMostSignificantBits)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddByteMostSignificantBits(Z_Param_Value,Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddByteLeastSignificantBits)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddByteLeastSignificantBits(Z_Param_Value,Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataWriter::execAddBit)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBit(Z_Param_Value);
		P_NATIVE_END;
	}
	void ULowEntryBitDataWriter::StaticRegisterNativesULowEntryBitDataWriter()
	{
		UClass* Class = ULowEntryBitDataWriter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBit", &ULowEntryBitDataWriter::execAddBit },
			{ "AddBitArray", &ULowEntryBitDataWriter::execAddBitArray },
			{ "AddBoolean", &ULowEntryBitDataWriter::execAddBoolean },
			{ "AddBooleanArray", &ULowEntryBitDataWriter::execAddBooleanArray },
			{ "AddByte", &ULowEntryBitDataWriter::execAddByte },
			{ "AddByteArray", &ULowEntryBitDataWriter::execAddByteArray },
			{ "AddByteArrayLeastSignificantBits", &ULowEntryBitDataWriter::execAddByteArrayLeastSignificantBits },
			{ "AddByteArrayMostSignificantBits", &ULowEntryBitDataWriter::execAddByteArrayMostSignificantBits },
			{ "AddByteLeastSignificantBits", &ULowEntryBitDataWriter::execAddByteLeastSignificantBits },
			{ "AddByteMostSignificantBits", &ULowEntryBitDataWriter::execAddByteMostSignificantBits },
			{ "AddDoubleBytes", &ULowEntryBitDataWriter::execAddDoubleBytes },
			{ "AddDoubleBytesArray", &ULowEntryBitDataWriter::execAddDoubleBytesArray },
			{ "AddFloat", &ULowEntryBitDataWriter::execAddFloat },
			{ "AddFloatArray", &ULowEntryBitDataWriter::execAddFloatArray },
			{ "AddInteger", &ULowEntryBitDataWriter::execAddInteger },
			{ "AddIntegerArray", &ULowEntryBitDataWriter::execAddIntegerArray },
			{ "AddIntegerArrayLeastSignificantBits", &ULowEntryBitDataWriter::execAddIntegerArrayLeastSignificantBits },
			{ "AddIntegerArrayMostSignificantBits", &ULowEntryBitDataWriter::execAddIntegerArrayMostSignificantBits },
			{ "AddIntegerLeastSignificantBits", &ULowEntryBitDataWriter::execAddIntegerLeastSignificantBits },
			{ "AddIntegerMostSignificantBits", &ULowEntryBitDataWriter::execAddIntegerMostSignificantBits },
			{ "AddLongBytes", &ULowEntryBitDataWriter::execAddLongBytes },
			{ "AddLongBytesArray", &ULowEntryBitDataWriter::execAddLongBytesArray },
			{ "AddPositiveInteger1", &ULowEntryBitDataWriter::execAddPositiveInteger1 },
			{ "AddPositiveInteger1Array", &ULowEntryBitDataWriter::execAddPositiveInteger1Array },
			{ "AddPositiveInteger2", &ULowEntryBitDataWriter::execAddPositiveInteger2 },
			{ "AddPositiveInteger2Array", &ULowEntryBitDataWriter::execAddPositiveInteger2Array },
			{ "AddPositiveInteger3", &ULowEntryBitDataWriter::execAddPositiveInteger3 },
			{ "AddPositiveInteger3Array", &ULowEntryBitDataWriter::execAddPositiveInteger3Array },
			{ "AddStringUtf8", &ULowEntryBitDataWriter::execAddStringUtf8 },
			{ "AddStringUtf8Array", &ULowEntryBitDataWriter::execAddStringUtf8Array },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics
	{
		struct LowEntryBitDataWriter_eventAddBit_Parms
		{
			bool Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((LowEntryBitDataWriter_eventAddBit_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryBitDataWriter_eventAddBit_Parms), &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a bit.\n\x09*/" },
		{ "DisplayName", "Add Bit" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a bit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddBit", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddBit_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics
	{
		struct LowEntryBitDataWriter_eventAddBitArray_Parms
		{
			TArray<bool> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddBitArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a bit array.\n\x09*/" },
		{ "DisplayName", "Add Bit Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a bit array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddBitArray", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddBitArray_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics
	{
		struct LowEntryBitDataWriter_eventAddBoolean_Parms
		{
			bool Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((LowEntryBitDataWriter_eventAddBoolean_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryBitDataWriter_eventAddBoolean_Parms), &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a boolean, this does the same as adding a bit.\n\x09*/" },
		{ "DisplayName", "Add Boolean" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a boolean, this does the same as adding a bit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddBoolean", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddBoolean_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics
	{
		struct LowEntryBitDataWriter_eventAddBooleanArray_Parms
		{
			TArray<bool> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddBooleanArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a boolean array, this does the same as adding a bit array.\n\x09*/" },
		{ "DisplayName", "Add Boolean Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a boolean array, this does the same as adding a bit array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddBooleanArray", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddBooleanArray_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics
	{
		struct LowEntryBitDataWriter_eventAddByte_Parms
		{
			uint8 Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByte_Parms, Value), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte.\n\x09*/" },
		{ "DisplayName", "Add Byte" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a byte." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByte", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddByte_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics
	{
		struct LowEntryBitDataWriter_eventAddByteArray_Parms
		{
			TArray<uint8> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte array.\n\x09*/" },
		{ "DisplayName", "Add Byte Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a byte array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByteArray", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddByteArray_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics
	{
		struct LowEntryBitDataWriter_eventAddByteArrayLeastSignificantBits_Parms
		{
			TArray<uint8> Value;
			int32 BitCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteArrayLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteArrayLeastSignificantBits_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_BitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte array, will only add a certain amount of bits from every given byte.\n\x09*\n\x09* For example, take 63 as the value (bitwise this is: 0011 1111).\n\x09* If you use this blueprint with value [63, 63, 63] and bitcount 4, only the lowest 4 bits of each byte will be added, meaning only 1111 1111 1111 will be added, which will then have a value of 15 for each byte when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Add Byte Array (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a byte array, will only add a certain amount of bits from every given byte.\n\nFor example, take 63 as the value (bitwise this is: 0011 1111).\nIf you use this blueprint with value [63, 63, 63] and bitcount 4, only the lowest 4 bits of each byte will be added, meaning only 1111 1111 1111 will be added, which will then have a value of 15 for each byte when read again.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByteArrayLeastSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddByteArrayLeastSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics
	{
		struct LowEntryBitDataWriter_eventAddByteArrayMostSignificantBits_Parms
		{
			TArray<uint8> Value;
			int32 BitCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteArrayMostSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteArrayMostSignificantBits_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_BitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte array, will only add a certain amount of bits from every given byte.\n\x09*\n\x09* For example, take 63 as the value (bitwise this is: 0011 1111).\n\x09* If you use this blueprint with value [63, 63, 63] and bitcount 4, only the highest 4 bits of each byte will be added, meaning only 0011 0011 0011 will be added, which will then have a value of 48 for each byte when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Add Byte Array (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a byte array, will only add a certain amount of bits from every given byte.\n\nFor example, take 63 as the value (bitwise this is: 0011 1111).\nIf you use this blueprint with value [63, 63, 63] and bitcount 4, only the highest 4 bits of each byte will be added, meaning only 0011 0011 0011 will be added, which will then have a value of 48 for each byte when read again.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByteArrayMostSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddByteArrayMostSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics
	{
		struct LowEntryBitDataWriter_eventAddByteLeastSignificantBits_Parms
		{
			uint8 Value;
			int32 BitCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_BitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteLeastSignificantBits_Parms, Value), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_BitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte, will only add a certain amount of bits from the given byte.\n\x09*\n\x09* For example, take 63 as the value (bitwise this is: 0011 1111).\n\x09* If you use this blueprint with value 63 and bitcount 4, only the lowest 4 bits will be added, meaning only 1111 will be added, which will then have a value of 15 when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Add Byte (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a byte, will only add a certain amount of bits from the given byte.\n\nFor example, take 63 as the value (bitwise this is: 0011 1111).\nIf you use this blueprint with value 63 and bitcount 4, only the lowest 4 bits will be added, meaning only 1111 will be added, which will then have a value of 15 when read again.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByteLeastSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddByteLeastSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics
	{
		struct LowEntryBitDataWriter_eventAddByteMostSignificantBits_Parms
		{
			uint8 Value;
			int32 BitCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteMostSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_BitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddByteMostSignificantBits_Parms, Value), nullptr, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_BitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a byte, will only add a certain amount of bits from the given byte.\n\x09*\n\x09* For example, take 63 as the value (bitwise this is: 0011 1111).\n\x09* If you use this blueprint with value 63 and bitcount 4, only the highest 4 bits will be added, meaning only 0011 will be added, which will then have a value of 48 when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Add Byte (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a byte, will only add a certain amount of bits from the given byte.\n\nFor example, take 63 as the value (bitwise this is: 0011 1111).\nIf you use this blueprint with value 63 and bitcount 4, only the highest 4 bits will be added, meaning only 0011 will be added, which will then have a value of 48 when read again.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddByteMostSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddByteMostSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics
	{
		struct LowEntryBitDataWriter_eventAddDoubleBytes_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddDoubleBytes_Parms, Value), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a double (bytes).\n\x09*/" },
		{ "DisplayName", "Add Double (Bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a double (bytes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddDoubleBytes", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddDoubleBytes_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics
	{
		struct LowEntryBitDataWriter_eventAddDoubleBytesArray_Parms
		{
			TArray<ULowEntryDouble*> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddDoubleBytesArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a double (bytes) array.\n\x09*/" },
		{ "DisplayName", "Add Double (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a double (bytes) array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddDoubleBytesArray", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddDoubleBytesArray_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics
	{
		struct LowEntryBitDataWriter_eventAddFloat_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddFloat_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a float.\n\x09*/" },
		{ "DisplayName", "Add Float" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddFloat", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddFloat_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics
	{
		struct LowEntryBitDataWriter_eventAddFloatArray_Parms
		{
			TArray<float> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddFloatArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a float array.\n\x09*/" },
		{ "DisplayName", "Add Float Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a float array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddFloatArray", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddFloatArray_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics
	{
		struct LowEntryBitDataWriter_eventAddInteger_Parms
		{
			int32 Value;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddInteger_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer.\n\x09*/" },
		{ "DisplayName", "Add Integer" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds an integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddInteger", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddInteger_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics
	{
		struct LowEntryBitDataWriter_eventAddIntegerArray_Parms
		{
			TArray<int32> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer array.\n\x09*/" },
		{ "DisplayName", "Add Integer Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds an integer array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddIntegerArray", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddIntegerArray_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics
	{
		struct LowEntryBitDataWriter_eventAddIntegerArrayLeastSignificantBits_Parms
		{
			TArray<int32> Value;
			int32 BitCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerArrayLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerArrayLeastSignificantBits_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer array, will only add a certain amount of bits from every given integer.\n\x09*\n\x09* For example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\n\x09* If you use this blueprint with value [268435471, 268435471, 268435471] and bitcount 4, only the lowest 4 bits of each integer will be added, meaning only 1111 1111 1111 will be added, which will then have a value of 15 for each integer when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Add Integer Array (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds an integer array, will only add a certain amount of bits from every given integer.\n\nFor example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\nIf you use this blueprint with value [268435471, 268435471, 268435471] and bitcount 4, only the lowest 4 bits of each integer will be added, meaning only 1111 1111 1111 will be added, which will then have a value of 15 for each integer when read again.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddIntegerArrayLeastSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddIntegerArrayLeastSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics
	{
		struct LowEntryBitDataWriter_eventAddIntegerArrayMostSignificantBits_Parms
		{
			TArray<int32> Value;
			int32 BitCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerArrayMostSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerArrayMostSignificantBits_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_BitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer array, will only add a certain amount of bits from every given integer.\n\x09*\n\x09* For example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\n\x09* If you use this blueprint with value [268435471, 268435471, 268435471] and bitcount 4, only the highest 4 bits of each integer will be added, meaning only 0001 0001 0001 will be added, which will then have a value of 268435456 for each integer when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Add Integer Array (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds an integer array, will only add a certain amount of bits from every given integer.\n\nFor example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\nIf you use this blueprint with value [268435471, 268435471, 268435471] and bitcount 4, only the highest 4 bits of each integer will be added, meaning only 0001 0001 0001 will be added, which will then have a value of 268435456 for each integer when read again.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddIntegerArrayMostSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddIntegerArrayMostSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics
	{
		struct LowEntryBitDataWriter_eventAddIntegerLeastSignificantBits_Parms
		{
			int32 Value;
			int32 BitCount;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_BitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerLeastSignificantBits_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_BitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer, will only add a certain amount of bits from the given integer.\n\x09*\n\x09* For example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\n\x09* If you use this blueprint with value 268435471 and bitcount 4, only the lowest 4 bits will be added, meaning only 1111 will be added, which will then have a value of 15 when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Add Integer (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds an integer, will only add a certain amount of bits from the given integer.\n\nFor example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\nIf you use this blueprint with value 268435471 and bitcount 4, only the lowest 4 bits will be added, meaning only 1111 will be added, which will then have a value of 15 when read again.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddIntegerLeastSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddIntegerLeastSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics
	{
		struct LowEntryBitDataWriter_eventAddIntegerMostSignificantBits_Parms
		{
			int32 Value;
			int32 BitCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerMostSignificantBits_Parms, BitCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddIntegerMostSignificantBits_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_BitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds an integer, will only add a certain amount of bits from the given integer.\n\x09*\n\x09* For example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\n\x09* If you use this blueprint with value 268435471 and bitcount 4, only the highest 4 bits will be added, meaning only 0001 will be added, which will then have a value of 268435456 when read again.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Add Integer (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds an integer, will only add a certain amount of bits from the given integer.\n\nFor example, take 268435471 as the value (bitwise this is: 00010000 00000000 00000000 00001111).\nIf you use this blueprint with value 268435471 and bitcount 4, only the highest 4 bits will be added, meaning only 0001 will be added, which will then have a value of 268435456 when read again.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddIntegerMostSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddIntegerMostSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics
	{
		struct LowEntryBitDataWriter_eventAddLongBytes_Parms
		{
			ULowEntryLong* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddLongBytes_Parms, Value), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a long (bytes).\n\x09*/" },
		{ "DisplayName", "Add Long (Bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a long (bytes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddLongBytes", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddLongBytes_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics
	{
		struct LowEntryBitDataWriter_eventAddLongBytesArray_Parms
		{
			TArray<ULowEntryLong*> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddLongBytesArray_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a long (bytes) array.\n\x09*/" },
		{ "DisplayName", "Add Long (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a long (bytes) array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddLongBytesArray", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddLongBytesArray_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics
	{
		struct LowEntryBitDataWriter_eventAddPositiveInteger1_Parms
		{
			int32 Value;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger1_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer.\n\x09*\n\x09* Will store values below 128 in 1 byte, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integer has to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 1" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a positive integer.\n\nWill store values below 128 in 1 byte, higher values will be stored in 4 bytes.\n\nThe given integer has to be 0 or higher, values under 0 will be changed to 0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger1", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddPositiveInteger1_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics
	{
		struct LowEntryBitDataWriter_eventAddPositiveInteger1Array_Parms
		{
			TArray<int32> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger1Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer array.\n\x09*\n\x09* Will store values below 128 in 1 byte, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integers have to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 1 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a positive integer array.\n\nWill store values below 128 in 1 byte, higher values will be stored in 4 bytes.\n\nThe given integers have to be 0 or higher, values under 0 will be changed to 0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger1Array", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddPositiveInteger1Array_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics
	{
		struct LowEntryBitDataWriter_eventAddPositiveInteger2_Parms
		{
			int32 Value;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger2_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer.\n\x09*\n\x09* Will store values below 32.768 in 2 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integer has to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 2" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a positive integer.\n\nWill store values below 32.768 in 2 bytes, higher values will be stored in 4 bytes.\n\nThe given integer has to be 0 or higher, values under 0 will be changed to 0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger2", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddPositiveInteger2_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics
	{
		struct LowEntryBitDataWriter_eventAddPositiveInteger2Array_Parms
		{
			TArray<int32> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger2Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer array.\n\x09*\n\x09* Will store values below 32.768 in 2 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integers have to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 2 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a positive integer array.\n\nWill store values below 32.768 in 2 bytes, higher values will be stored in 4 bytes.\n\nThe given integers have to be 0 or higher, values under 0 will be changed to 0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger2Array", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddPositiveInteger2Array_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics
	{
		struct LowEntryBitDataWriter_eventAddPositiveInteger3_Parms
		{
			int32 Value;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger3_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer.\n\x09*\n\x09* Will store values below 8.388.608 in 3 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integer has to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 3" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a positive integer.\n\nWill store values below 8.388.608 in 3 bytes, higher values will be stored in 4 bytes.\n\nThe given integer has to be 0 or higher, values under 0 will be changed to 0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger3", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddPositiveInteger3_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics
	{
		struct LowEntryBitDataWriter_eventAddPositiveInteger3Array_Parms
		{
			TArray<int32> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddPositiveInteger3Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a positive integer array.\n\x09*\n\x09* Will store values below 8.388.608 in 3 bytes, higher values will be stored in 4 bytes.\n\x09*\n\x09* The given integers have to be 0 or higher, values under 0 will be changed to 0.\n\x09*/" },
		{ "DisplayName", "Add Positive Integer 3 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a positive integer array.\n\nWill store values below 8.388.608 in 3 bytes, higher values will be stored in 4 bytes.\n\nThe given integers have to be 0 or higher, values under 0 will be changed to 0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddPositiveInteger3Array", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddPositiveInteger3Array_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics
	{
		struct LowEntryBitDataWriter_eventAddStringUtf8_Parms
		{
			FString Value;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddStringUtf8_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a String (UTF-8).\n\x09*/" },
		{ "DisplayName", "Add String (Utf 8)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a String (UTF-8)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddStringUtf8", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddStringUtf8_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics
	{
		struct LowEntryBitDataWriter_eventAddStringUtf8Array_Parms
		{
			TArray<FString> Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataWriter_eventAddStringUtf8Array_Parms, Value), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::NewProp_Value_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Writer" },
		{ "Comment", "/**\n\x09* Adds a String (UTF-8) array.\n\x09*/" },
		{ "DisplayName", "Add String (Utf 8) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
		{ "ToolTip", "Adds a String (UTF-8) array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataWriter, nullptr, "AddStringUtf8Array", nullptr, nullptr, sizeof(LowEntryBitDataWriter_eventAddStringUtf8Array_Parms), Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULowEntryBitDataWriter_NoRegister()
	{
		return ULowEntryBitDataWriter::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryBitDataWriter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBytePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentBytePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentByte_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentByte;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryBitDataWriter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryBitDataWriter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBit, "AddBit" }, // 3884136185
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBitArray, "AddBitArray" }, // 1377483225
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBoolean, "AddBoolean" }, // 1198923612
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddBooleanArray, "AddBooleanArray" }, // 2626911090
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByte, "AddByte" }, // 1161836481
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArray, "AddByteArray" }, // 1926454600
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits, "AddByteArrayLeastSignificantBits" }, // 3952356258
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteArrayMostSignificantBits, "AddByteArrayMostSignificantBits" }, // 2487742423
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteLeastSignificantBits, "AddByteLeastSignificantBits" }, // 298065576
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddByteMostSignificantBits, "AddByteMostSignificantBits" }, // 4038893266
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytes, "AddDoubleBytes" }, // 4035926913
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddDoubleBytesArray, "AddDoubleBytesArray" }, // 2995539420
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloat, "AddFloat" }, // 1218794079
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddFloatArray, "AddFloatArray" }, // 34309079
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddInteger, "AddInteger" }, // 352348670
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArray, "AddIntegerArray" }, // 1550398341
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits, "AddIntegerArrayLeastSignificantBits" }, // 3053724703
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits, "AddIntegerArrayMostSignificantBits" }, // 3531500721
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerLeastSignificantBits, "AddIntegerLeastSignificantBits" }, // 1855047081
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddIntegerMostSignificantBits, "AddIntegerMostSignificantBits" }, // 931248356
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytes, "AddLongBytes" }, // 2198144492
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddLongBytesArray, "AddLongBytesArray" }, // 1049775157
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1, "AddPositiveInteger1" }, // 2573858946
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger1Array, "AddPositiveInteger1Array" }, // 3052294776
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2, "AddPositiveInteger2" }, // 4069104965
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger2Array, "AddPositiveInteger2Array" }, // 3236474775
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3, "AddPositiveInteger3" }, // 1202212829
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddPositiveInteger3Array, "AddPositiveInteger3Array" }, // 195567501
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8, "AddStringUtf8" }, // 3410076926
		{ &Z_Construct_UFunction_ULowEntryBitDataWriter_AddStringUtf8Array, "AddStringUtf8Array" }, // 817891044
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryBitDataWriter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryBitDataWriter.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentBytePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentBytePosition = { "CurrentBytePosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryBitDataWriter, CurrentBytePosition), METADATA_PARAMS(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentBytePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentBytePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentByte_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentByte = { "CurrentByte", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryBitDataWriter, CurrentByte), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentByte_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentByte_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataWriter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryBitDataWriter, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryBitDataWriter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentBytePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_CurrentByte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataWriter_Statics::NewProp_Bytes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryBitDataWriter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryBitDataWriter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryBitDataWriter_Statics::ClassParams = {
		&ULowEntryBitDataWriter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULowEntryBitDataWriter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataWriter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryBitDataWriter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryBitDataWriter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryBitDataWriter, 910425287);
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryBitDataWriter>()
	{
		return ULowEntryBitDataWriter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryBitDataWriter(Z_Construct_UClass_ULowEntryBitDataWriter, &ULowEntryBitDataWriter::StaticClass, TEXT("/Script/LowEntryExtendedStandardLibrary"), TEXT("ULowEntryBitDataWriter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryBitDataWriter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
