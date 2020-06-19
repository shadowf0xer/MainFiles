// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LowEntryExtendedStandardLibrary/Public/Classes/LowEntryBitDataReader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLowEntryBitDataReader() {}
// Cross Module References
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryBitDataReader_NoRegister();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryBitDataReader();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryDouble_NoRegister();
	LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* Z_Construct_UClass_ULowEntryLong_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetStringUtf8Array)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetStringUtf8Array();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetBooleanArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetBooleanArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetDoubleBytesArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULowEntryDouble*>*)Z_Param__Result=P_THIS->GetDoubleBytesArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetFloatArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=P_THIS->GetFloatArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetLongBytesArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULowEntryLong*>*)Z_Param__Result=P_THIS->GetLongBytesArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger3Array)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPositiveInteger3Array();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger2Array)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPositiveInteger2Array();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger1Array)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPositiveInteger1Array();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetIntegerArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntegerArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByteArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetByteArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetIntegerArrayMostSignificantBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntegerArrayMostSignificantBits(Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetIntegerArrayLeastSignificantBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetIntegerArrayLeastSignificantBits(Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByteArrayMostSignificantBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetByteArrayMostSignificantBits(Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByteArrayLeastSignificantBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetByteArrayLeastSignificantBits(Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetBitArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=P_THIS->GetBitArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetStringUtf8)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringUtf8();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetBoolean)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolean();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetDoubleBytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryDouble**)Z_Param__Result=P_THIS->GetDoubleBytes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetFloat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetLongBytes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryLong**)Z_Param__Result=P_THIS->GetLongBytes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger3)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPositiveInteger3();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPositiveInteger2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPositiveInteger1)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPositiveInteger1();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetInteger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInteger();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByte)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetByte();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetIntegerMostSignificantBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIntegerMostSignificantBits(Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetIntegerLeastSignificantBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIntegerLeastSignificantBits(Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByteMostSignificantBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetByteMostSignificantBits(Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetByteLeastSignificantBits)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BitCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetByteLeastSignificantBits(Z_Param_BitCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetBit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBit();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Remaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Empty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execSetPosition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Position_);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPosition(Z_Param_Position_);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULowEntryBitDataReader::execGetClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULowEntryBitDataReader**)Z_Param__Result=P_THIS->GetClone();
		P_NATIVE_END;
	}
	void ULowEntryBitDataReader::StaticRegisterNativesULowEntryBitDataReader()
	{
		UClass* Class = ULowEntryBitDataReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Empty", &ULowEntryBitDataReader::execEmpty },
			{ "GetBit", &ULowEntryBitDataReader::execGetBit },
			{ "GetBitArray", &ULowEntryBitDataReader::execGetBitArray },
			{ "GetBoolean", &ULowEntryBitDataReader::execGetBoolean },
			{ "GetBooleanArray", &ULowEntryBitDataReader::execGetBooleanArray },
			{ "GetByte", &ULowEntryBitDataReader::execGetByte },
			{ "GetByteArray", &ULowEntryBitDataReader::execGetByteArray },
			{ "GetByteArrayLeastSignificantBits", &ULowEntryBitDataReader::execGetByteArrayLeastSignificantBits },
			{ "GetByteArrayMostSignificantBits", &ULowEntryBitDataReader::execGetByteArrayMostSignificantBits },
			{ "GetByteLeastSignificantBits", &ULowEntryBitDataReader::execGetByteLeastSignificantBits },
			{ "GetByteMostSignificantBits", &ULowEntryBitDataReader::execGetByteMostSignificantBits },
			{ "GetClone", &ULowEntryBitDataReader::execGetClone },
			{ "GetDoubleBytes", &ULowEntryBitDataReader::execGetDoubleBytes },
			{ "GetDoubleBytesArray", &ULowEntryBitDataReader::execGetDoubleBytesArray },
			{ "GetFloat", &ULowEntryBitDataReader::execGetFloat },
			{ "GetFloatArray", &ULowEntryBitDataReader::execGetFloatArray },
			{ "GetInteger", &ULowEntryBitDataReader::execGetInteger },
			{ "GetIntegerArray", &ULowEntryBitDataReader::execGetIntegerArray },
			{ "GetIntegerArrayLeastSignificantBits", &ULowEntryBitDataReader::execGetIntegerArrayLeastSignificantBits },
			{ "GetIntegerArrayMostSignificantBits", &ULowEntryBitDataReader::execGetIntegerArrayMostSignificantBits },
			{ "GetIntegerLeastSignificantBits", &ULowEntryBitDataReader::execGetIntegerLeastSignificantBits },
			{ "GetIntegerMostSignificantBits", &ULowEntryBitDataReader::execGetIntegerMostSignificantBits },
			{ "GetLongBytes", &ULowEntryBitDataReader::execGetLongBytes },
			{ "GetLongBytesArray", &ULowEntryBitDataReader::execGetLongBytesArray },
			{ "GetPosition", &ULowEntryBitDataReader::execGetPosition },
			{ "GetPositiveInteger1", &ULowEntryBitDataReader::execGetPositiveInteger1 },
			{ "GetPositiveInteger1Array", &ULowEntryBitDataReader::execGetPositiveInteger1Array },
			{ "GetPositiveInteger2", &ULowEntryBitDataReader::execGetPositiveInteger2 },
			{ "GetPositiveInteger2Array", &ULowEntryBitDataReader::execGetPositiveInteger2Array },
			{ "GetPositiveInteger3", &ULowEntryBitDataReader::execGetPositiveInteger3 },
			{ "GetPositiveInteger3Array", &ULowEntryBitDataReader::execGetPositiveInteger3Array },
			{ "GetStringUtf8", &ULowEntryBitDataReader::execGetStringUtf8 },
			{ "GetStringUtf8Array", &ULowEntryBitDataReader::execGetStringUtf8Array },
			{ "Remaining", &ULowEntryBitDataReader::execRemaining },
			{ "Reset", &ULowEntryBitDataReader::execReset },
			{ "SetPosition", &ULowEntryBitDataReader::execSetPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Causes Remaining to return 0.\n\x09*/" },
		{ "DisplayName", "Empty" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Causes Remaining to return 0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "Empty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics
	{
		struct LowEntryBitDataReader_eventGetBit_Parms
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
	void Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryBitDataReader_eventGetBit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryBitDataReader_eventGetBit_Parms), &Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a bit.\n\x09*/" },
		{ "DisplayName", "Get Bit" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a bit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetBit", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetBit_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetBit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetBit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics
	{
		struct LowEntryBitDataReader_eventGetBitArray_Parms
		{
			TArray<bool> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetBitArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a bit array.\n\x09*/" },
		{ "DisplayName", "Get Bit Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a bit array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetBitArray", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetBitArray_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics
	{
		struct LowEntryBitDataReader_eventGetBoolean_Parms
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
	void Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LowEntryBitDataReader_eventGetBoolean_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LowEntryBitDataReader_eventGetBoolean_Parms), &Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a boolean, this does the same as getting a bit.\n\x09*/" },
		{ "DisplayName", "Get Boolean" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a boolean, this does the same as getting a bit." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetBoolean", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetBoolean_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics
	{
		struct LowEntryBitDataReader_eventGetBooleanArray_Parms
		{
			TArray<bool> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetBooleanArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a boolean array, this does the same as getting a bit array.\n\x09*/" },
		{ "DisplayName", "Get Boolean Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a boolean array, this does the same as getting a bit array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetBooleanArray", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetBooleanArray_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics
	{
		struct LowEntryBitDataReader_eventGetByte_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByte_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte.\n\x09*/" },
		{ "DisplayName", "Get Byte" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByte", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetByte_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics
	{
		struct LowEntryBitDataReader_eventGetByteArray_Parms
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte array.\n\x09*/" },
		{ "DisplayName", "Get Byte Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByteArray", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetByteArray_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics
	{
		struct LowEntryBitDataReader_eventGetByteArrayLeastSignificantBits_Parms
		{
			int32 BitCount;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteArrayLeastSignificantBits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteArrayLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::NewProp_BitCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte array, will only retrieve a certain amount of bits to form every byte.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Get Byte Array (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte array, will only retrieve a certain amount of bits to form every byte.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByteArrayLeastSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetByteArrayLeastSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics
	{
		struct LowEntryBitDataReader_eventGetByteArrayMostSignificantBits_Parms
		{
			int32 BitCount;
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteArrayMostSignificantBits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteArrayMostSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::NewProp_BitCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte array, will only retrieve a certain amount of bits to form every byte.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Get Byte Array (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte array, will only retrieve a certain amount of bits to form every byte.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByteArrayMostSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetByteArrayMostSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics
	{
		struct LowEntryBitDataReader_eventGetByteLeastSignificantBits_Parms
		{
			int32 BitCount;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteLeastSignificantBits_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_BitCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::NewProp_BitCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte, will only retrieve a certain amount of bits to form the byte.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Get Byte (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte, will only retrieve a certain amount of bits to form the byte.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByteLeastSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetByteLeastSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics
	{
		struct LowEntryBitDataReader_eventGetByteMostSignificantBits_Parms
		{
			int32 BitCount;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteMostSignificantBits_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetByteMostSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_BitCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::NewProp_BitCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a byte, will only retrieve a certain amount of bits to form the byte.\n\x09*\n\x09* The bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8.\n\x09*/" },
		{ "DisplayName", "Get Byte (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a byte, will only retrieve a certain amount of bits to form the byte.\n\nThe bitcount can be anything between 0 and 8, values higher or lower will be clamped to 0 to 8." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetByteMostSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetByteMostSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics
	{
		struct LowEntryBitDataReader_eventGetClone_Parms
		{
			ULowEntryBitDataReader* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetClone_Parms, ReturnValue), Z_Construct_UClass_ULowEntryBitDataReader_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Clones the clone of this BitDataReader.\n\x09* \n\x09* Allows you to easily read and revert the position (by cloning, reading data with the clone, and then throwing the clone away).\n\x09*/" },
		{ "DisplayName", "Get Clone" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Clones the clone of this BitDataReader.\n\nAllows you to easily read and revert the position (by cloning, reading data with the clone, and then throwing the clone away)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetClone", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetClone_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics
	{
		struct LowEntryBitDataReader_eventGetDoubleBytes_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetDoubleBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a double (bytes).\n\x09*/" },
		{ "DisplayName", "Get Double (bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a double (bytes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetDoubleBytes", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetDoubleBytes_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics
	{
		struct LowEntryBitDataReader_eventGetDoubleBytesArray_Parms
		{
			TArray<ULowEntryDouble*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetDoubleBytesArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULowEntryDouble_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a double (byte) array.\n\x09*/" },
		{ "DisplayName", "Get Double (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a double (byte) array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetDoubleBytesArray", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetDoubleBytesArray_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics
	{
		struct LowEntryBitDataReader_eventGetFloat_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a float.\n\x09*/" },
		{ "DisplayName", "Get Float" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetFloat", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetFloat_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics
	{
		struct LowEntryBitDataReader_eventGetFloatArray_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetFloatArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a float array.\n\x09*/" },
		{ "DisplayName", "Get Float Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a float array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetFloatArray", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetFloatArray_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics
	{
		struct LowEntryBitDataReader_eventGetInteger_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetInteger_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer.\n\x09*/" },
		{ "DisplayName", "Get Integer" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetInteger", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetInteger_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics
	{
		struct LowEntryBitDataReader_eventGetIntegerArray_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer array.\n\x09*/" },
		{ "DisplayName", "Get Integer Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetIntegerArray", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetIntegerArray_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics
	{
		struct LowEntryBitDataReader_eventGetIntegerArrayLeastSignificantBits_Parms
		{
			int32 BitCount;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerArrayLeastSignificantBits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerArrayLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::NewProp_BitCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer array, will only retrieve a certain amount of bits to form every integer.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Get Integer Array (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer array, will only retrieve a certain amount of bits to form every integer.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetIntegerArrayLeastSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetIntegerArrayLeastSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics
	{
		struct LowEntryBitDataReader_eventGetIntegerArrayMostSignificantBits_Parms
		{
			int32 BitCount;
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerArrayMostSignificantBits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerArrayMostSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_BitCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::NewProp_BitCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer array, will only retrieve a certain amount of bits to form every integer.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Get Integer Array (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer array, will only retrieve a certain amount of bits to form every integer.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetIntegerArrayMostSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetIntegerArrayMostSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics
	{
		struct LowEntryBitDataReader_eventGetIntegerLeastSignificantBits_Parms
		{
			int32 BitCount;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerLeastSignificantBits_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_BitCount_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerLeastSignificantBits_Parms, BitCount), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_BitCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::NewProp_BitCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer, will only retrieve a certain amount of bits to form the integer.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Get Integer (Least Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer, will only retrieve a certain amount of bits to form the integer.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetIntegerLeastSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetIntegerLeastSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics
	{
		struct LowEntryBitDataReader_eventGetIntegerMostSignificantBits_Parms
		{
			int32 BitCount;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerMostSignificantBits_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetIntegerMostSignificantBits_Parms, BitCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::NewProp_BitCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets an integer, will only retrieve a certain amount of bits to form the integer.\n\x09*\n\x09* The bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32.\n\x09*/" },
		{ "DisplayName", "Get Integer (Most Significant Bits Only)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets an integer, will only retrieve a certain amount of bits to form the integer.\n\nThe bitcount can be anything between 0 and 32, values higher or lower will be clamped to 0 to 32." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetIntegerMostSignificantBits", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetIntegerMostSignificantBits_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics
	{
		struct LowEntryBitDataReader_eventGetLongBytes_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetLongBytes_Parms, ReturnValue), Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a long (bytes).\n\x09*/" },
		{ "DisplayName", "Get Long (bytes)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a long (bytes)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetLongBytes", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetLongBytes_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics
	{
		struct LowEntryBitDataReader_eventGetLongBytesArray_Parms
		{
			TArray<ULowEntryLong*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetLongBytesArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULowEntryLong_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a long (bytes) array.\n\x09*/" },
		{ "DisplayName", "Get Long (bytes) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a long (bytes) array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetLongBytesArray", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetLongBytesArray_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics
	{
		struct LowEntryBitDataReader_eventGetPosition_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPosition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Returns the current position.\n\x09*\n\x09* Because this data writer works with bits, this blueprint will only work correctly till 268.435.455 bytes (256 MB), beyond that, please use the Get Clone blueprint to rollback the position instead.\n\x09*/" },
		{ "DisplayName", "Get Position" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Returns the current position.\n\nBecause this data writer works with bits, this blueprint will only work correctly till 268.435.455 bytes (256 MB), beyond that, please use the Get Clone blueprint to rollback the position instead." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPosition", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetPosition_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics
	{
		struct LowEntryBitDataReader_eventGetPositiveInteger1_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger1_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 1" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger1", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetPositiveInteger1_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics
	{
		struct LowEntryBitDataReader_eventGetPositiveInteger1Array_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger1Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer array.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 1 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger1Array", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetPositiveInteger1Array_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics
	{
		struct LowEntryBitDataReader_eventGetPositiveInteger2_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger2_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 2" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger2", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetPositiveInteger2_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics
	{
		struct LowEntryBitDataReader_eventGetPositiveInteger2Array_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger2Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer array.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 2 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger2Array", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetPositiveInteger2Array_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics
	{
		struct LowEntryBitDataReader_eventGetPositiveInteger3_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger3_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 3" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger3", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetPositiveInteger3_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics
	{
		struct LowEntryBitDataReader_eventGetPositiveInteger3Array_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetPositiveInteger3Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a positive integer array.\n\x09*/" },
		{ "DisplayName", "Get Positive Integer 3 Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a positive integer array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetPositiveInteger3Array", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetPositiveInteger3Array_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics
	{
		struct LowEntryBitDataReader_eventGetStringUtf8_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetStringUtf8_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a String (UTF-8).\n\x09*/" },
		{ "DisplayName", "Get String (Utf 8)" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a String (UTF-8)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetStringUtf8", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetStringUtf8_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics
	{
		struct LowEntryBitDataReader_eventGetStringUtf8Array_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventGetStringUtf8Array_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader" },
		{ "Comment", "/**\n\x09* Gets a String (UTF-8) array.\n\x09*/" },
		{ "DisplayName", "Get String (Utf 8) Array" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Gets a String (UTF-8) array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "GetStringUtf8Array", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventGetStringUtf8Array_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics
	{
		struct LowEntryBitDataReader_eventRemaining_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Returns the amount of bytes left.\n\x09*/" },
		{ "DisplayName", "Get Remaining" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Returns the amount of bytes left." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "Remaining", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventRemaining_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_Remaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_Remaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Sets the current position to 0.\n\x09*/" },
		{ "DisplayName", "Reset" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Sets the current position to 0." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics
	{
		struct LowEntryBitDataReader_eventSetPosition_Parms
		{
			int32 Position_;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position__MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Position_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::NewProp_Position__MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::NewProp_Position_ = { "Position_", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LowEntryBitDataReader_eventSetPosition_Parms, Position_), METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::NewProp_Position__MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::NewProp_Position__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::NewProp_Position_,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Low Entry|Extended Standard Library|Bit Data|Reader (Meta)" },
		{ "Comment", "/**\n\x09* Sets the current position.\n\x09*\n\x09* Because this data writer works with bits, this blueprint will only work correctly till 268.435.455 bytes (256 MB), beyond that, please use the Get Clone blueprint to rollback the position instead.\n\x09*/" },
		{ "DisplayName", "Set Position" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
		{ "ToolTip", "Sets the current position.\n\nBecause this data writer works with bits, this blueprint will only work correctly till 268.435.455 bytes (256 MB), beyond that, please use the Get Clone blueprint to rollback the position instead." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULowEntryBitDataReader, nullptr, "SetPosition", nullptr, nullptr, sizeof(LowEntryBitDataReader_eventSetPosition_Parms), Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULowEntryBitDataReader_NoRegister()
	{
		return ULowEntryBitDataReader::StaticClass();
	}
	struct Z_Construct_UClass_ULowEntryBitDataReader_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULowEntryBitDataReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LowEntryExtendedStandardLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULowEntryBitDataReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_Empty, "Empty" }, // 1448876037
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetBit, "GetBit" }, // 1675325666
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetBitArray, "GetBitArray" }, // 1369120993
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetBoolean, "GetBoolean" }, // 2819056740
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetBooleanArray, "GetBooleanArray" }, // 2785797359
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByte, "GetByte" }, // 1692866537
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArray, "GetByteArray" }, // 885201236
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayLeastSignificantBits, "GetByteArrayLeastSignificantBits" }, // 2590536986
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByteArrayMostSignificantBits, "GetByteArrayMostSignificantBits" }, // 2902202021
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByteLeastSignificantBits, "GetByteLeastSignificantBits" }, // 4082826659
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetByteMostSignificantBits, "GetByteMostSignificantBits" }, // 3663461076
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetClone, "GetClone" }, // 2448563505
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytes, "GetDoubleBytes" }, // 688494899
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetDoubleBytesArray, "GetDoubleBytesArray" }, // 3169335718
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetFloat, "GetFloat" }, // 2708384409
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetFloatArray, "GetFloatArray" }, // 2508824484
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetInteger, "GetInteger" }, // 21071740
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArray, "GetIntegerArray" }, // 3515099201
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits, "GetIntegerArrayLeastSignificantBits" }, // 3245481529
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits, "GetIntegerArrayMostSignificantBits" }, // 2472576145
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerLeastSignificantBits, "GetIntegerLeastSignificantBits" }, // 1021760055
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetIntegerMostSignificantBits, "GetIntegerMostSignificantBits" }, // 2445945684
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytes, "GetLongBytes" }, // 2319479620
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetLongBytesArray, "GetLongBytesArray" }, // 3798569781
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPosition, "GetPosition" }, // 3271170824
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1, "GetPositiveInteger1" }, // 1653304731
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger1Array, "GetPositiveInteger1Array" }, // 3841695398
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2, "GetPositiveInteger2" }, // 206056318
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger2Array, "GetPositiveInteger2Array" }, // 900423767
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3, "GetPositiveInteger3" }, // 2045695575
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetPositiveInteger3Array, "GetPositiveInteger3Array" }, // 2784822088
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8, "GetStringUtf8" }, // 3604961865
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_GetStringUtf8Array, "GetStringUtf8Array" }, // 881265677
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_Remaining, "Remaining" }, // 4101932242
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_Reset, "Reset" }, // 3339939954
		{ &Z_Construct_UFunction_ULowEntryBitDataReader_SetPosition, "SetPosition" }, // 3168740447
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryBitDataReader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Classes/LowEntryBitDataReader.h" },
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentBytePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentBytePosition = { "CurrentBytePosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryBitDataReader, CurrentBytePosition), METADATA_PARAMS(Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentBytePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentBytePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentByte_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentByte = { "CurrentByte", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryBitDataReader, CurrentByte), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentByte_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentByte_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryBitDataReader, Position), METADATA_PARAMS(Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Classes/LowEntryBitDataReader.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULowEntryBitDataReader, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULowEntryBitDataReader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentBytePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_CurrentByte,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULowEntryBitDataReader_Statics::NewProp_Bytes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULowEntryBitDataReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULowEntryBitDataReader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULowEntryBitDataReader_Statics::ClassParams = {
		&ULowEntryBitDataReader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULowEntryBitDataReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataReader_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULowEntryBitDataReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULowEntryBitDataReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULowEntryBitDataReader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULowEntryBitDataReader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULowEntryBitDataReader, 3044770896);
	template<> LOWENTRYEXTENDEDSTANDARDLIBRARY_API UClass* StaticClass<ULowEntryBitDataReader>()
	{
		return ULowEntryBitDataReader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULowEntryBitDataReader(Z_Construct_UClass_ULowEntryBitDataReader, &ULowEntryBitDataReader::StaticClass, TEXT("/Script/LowEntryExtendedStandardLibrary"), TEXT("ULowEntryBitDataReader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULowEntryBitDataReader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
