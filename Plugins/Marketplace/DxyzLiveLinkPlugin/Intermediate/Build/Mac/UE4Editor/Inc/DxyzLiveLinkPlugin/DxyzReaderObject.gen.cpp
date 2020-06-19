// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DxyzLiveLinkPlugin/Private/DxyzReaderObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDxyzReaderObject() {}
// Cross Module References
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzReaderObject_NoRegister();
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzReaderObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDxyzReaderObject::execGetVideoSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetVideoSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzReaderObject::execGetVideoTexture)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Ok);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetVideoTexture(Z_Param_Out_Ok);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzReaderObject::execIsGlobal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGlobal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzReaderObject::execSetGlobal)
	{
		P_GET_UBOOL(Z_Param_Global);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGlobal(Z_Param_Global);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzReaderObject::execStopDisplaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopDisplaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzReaderObject::execStartDisplaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartDisplaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzReaderObject::execIsListening)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsListening();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzReaderObject::execStopListening)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StopListening();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzReaderObject::execListenToAdress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RtpAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_PROPERTY(FStrProperty,Z_Param_Interface);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAddr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ListenToAdress(Z_Param_RtpAddress,Z_Param_Port,Z_Param_Interface,Z_Param_Out_OutAddr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzReaderObject::execListenToUrl)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_PROPERTY(FStrProperty,Z_Param_Interface);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutAddr);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ListenToUrl(Z_Param_Url,Z_Param_Interface,Z_Param_Out_OutAddr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzReaderObject::execGetNetworkInterfaces)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Interfaces);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNetworkInterfaces(Z_Param_Out_Interfaces);
		P_NATIVE_END;
	}
	void UDxyzReaderObject::StaticRegisterNativesUDxyzReaderObject()
	{
		UClass* Class = UDxyzReaderObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNetworkInterfaces", &UDxyzReaderObject::execGetNetworkInterfaces },
			{ "GetVideoSize", &UDxyzReaderObject::execGetVideoSize },
			{ "GetVideoTexture", &UDxyzReaderObject::execGetVideoTexture },
			{ "IsGlobal", &UDxyzReaderObject::execIsGlobal },
			{ "IsListening", &UDxyzReaderObject::execIsListening },
			{ "ListenToAdress", &UDxyzReaderObject::execListenToAdress },
			{ "ListenToUrl", &UDxyzReaderObject::execListenToUrl },
			{ "SetGlobal", &UDxyzReaderObject::execSetGlobal },
			{ "StartDisplaying", &UDxyzReaderObject::execStartDisplaying },
			{ "StopDisplaying", &UDxyzReaderObject::execStopDisplaying },
			{ "StopListening", &UDxyzReaderObject::execStopListening },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics
	{
		struct DxyzReaderObject_eventGetNetworkInterfaces_Parms
		{
			TArray<FString> Interfaces;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Interfaces;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Interfaces_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventGetNetworkInterfaces_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventGetNetworkInterfaces_Parms), &Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::NewProp_Interfaces = { "Interfaces", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzReaderObject_eventGetNetworkInterfaces_Parms, Interfaces), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::NewProp_Interfaces_Inner = { "Interfaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::NewProp_Interfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::NewProp_Interfaces_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** List all the network interfaces of the rendering machine */" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "List all the network interfaces of the rendering machine" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "GetNetworkInterfaces", nullptr, nullptr, sizeof(DxyzReaderObject_eventGetNetworkInterfaces_Parms), Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics
	{
		struct DxyzReaderObject_eventGetVideoSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzReaderObject_eventGetVideoSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Get the video size */" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Get the video size" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "GetVideoSize", nullptr, nullptr, sizeof(DxyzReaderObject_eventGetVideoSize_Parms), Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics
	{
		struct DxyzReaderObject_eventGetVideoTexture_Parms
		{
			bool Ok;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_Ok_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ok;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzReaderObject_eventGetVideoTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::NewProp_Ok_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventGetVideoTexture_Parms*)Obj)->Ok = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::NewProp_Ok = { "Ok", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventGetVideoTexture_Parms), &Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::NewProp_Ok_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::NewProp_Ok,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Get the video texture */" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Get the video texture" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "GetVideoTexture", nullptr, nullptr, sizeof(DxyzReaderObject_eventGetVideoTexture_Parms), Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics
	{
		struct DxyzReaderObject_eventIsGlobal_Parms
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
	void Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventIsGlobal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventIsGlobal_Parms), &Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Check if the Reader is global */" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Check if the Reader is global" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "IsGlobal", nullptr, nullptr, sizeof(DxyzReaderObject_eventIsGlobal_Parms), Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_IsGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_IsGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics
	{
		struct DxyzReaderObject_eventIsListening_Parms
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
	void Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventIsListening_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventIsListening_Parms), &Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Check if we are listening (only true if ListenToUrl worked) */" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Check if we are listening (only true if ListenToUrl worked)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "IsListening", nullptr, nullptr, sizeof(DxyzReaderObject_eventIsListening_Parms), Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_IsListening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_IsListening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics
	{
		struct DxyzReaderObject_eventListenToAdress_Parms
		{
			FString RtpAddress;
			int32 Port;
			FString Interface;
			FString OutAddr;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutAddr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Interface;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RtpAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventListenToAdress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventListenToAdress_Parms), &Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_OutAddr = { "OutAddr", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzReaderObject_eventListenToAdress_Parms, OutAddr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzReaderObject_eventListenToAdress_Parms, Interface), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzReaderObject_eventListenToAdress_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_RtpAddress = { "RtpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzReaderObject_eventListenToAdress_Parms, RtpAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_OutAddr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_Interface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::NewProp_RtpAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Start listening to a RTP url.\n\x09@param RtpAddress the RTP adress Grabber is streaming to (ex : 239.1.1.0)\n\x09@param Port the port Grabber is using to stream RTP (ex : 5555)\n\x09@param Interface the network interface to use (/!\\ Interface specification does not seems to be taken into account by ffmpeg /!\\)\n\x09@param OutAddr the resulting Url string for debug purposes \n\x09*/" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Start listening to a RTP url.\n      @param RtpAddress the RTP adress Grabber is streaming to (ex : 239.1.1.0)\n      @param Port the port Grabber is using to stream RTP (ex : 5555)\n      @param Interface the network interface to use (/!\\ Interface specification does not seems to be taken into account by ffmpeg /!\\)\n      @param OutAddr the resulting Url string for debug purposes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "ListenToAdress", nullptr, nullptr, sizeof(DxyzReaderObject_eventListenToAdress_Parms), Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics
	{
		struct DxyzReaderObject_eventListenToUrl_Parms
		{
			FString Url;
			FString Interface;
			FString OutAddr;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutAddr;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Interface;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventListenToUrl_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventListenToUrl_Parms), &Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::NewProp_OutAddr = { "OutAddr", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzReaderObject_eventListenToUrl_Parms, OutAddr), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::NewProp_Interface = { "Interface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzReaderObject_eventListenToUrl_Parms, Interface), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzReaderObject_eventListenToUrl_Parms, Url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::NewProp_OutAddr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::NewProp_Interface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Start listening to a RTP url.\n\x09@param Url the RTP URL Grabber is streaming to (ex : rtp://239.1.1.0:5555)\n\x09@param Interface the network interface to use (/!\\ Interface specification does not seems to be taken into account by ffmpeg /!\\)\n\x09@param OutAddr the resulting Url string for debug purposes\n\x09*/" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Start listening to a RTP url.\n      @param Url the RTP URL Grabber is streaming to (ex : rtp://239.1.1.0:5555)\n      @param Interface the network interface to use (/!\\ Interface specification does not seems to be taken into account by ffmpeg /!\\)\n      @param OutAddr the resulting Url string for debug purposes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "ListenToUrl", nullptr, nullptr, sizeof(DxyzReaderObject_eventListenToUrl_Parms), Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics
	{
		struct DxyzReaderObject_eventSetGlobal_Parms
		{
			bool Global;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_Global_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Global;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventSetGlobal_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventSetGlobal_Parms), &Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::NewProp_Global_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventSetGlobal_Parms*)Obj)->Global = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::NewProp_Global = { "Global", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventSetGlobal_Parms), &Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::NewProp_Global_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::NewProp_Global,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Declare the Reader as Global : \n\x09this must be set to true if you are using the Reader in a global class (such as GameInstance)\n\x09""for instance if you need to share the feedback between several levels without having to re-initialize it */" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Declare the Reader as Global :\n      this must be set to true if you are using the Reader in a global class (such as GameInstance)\n      for instance if you need to share the feedback between several levels without having to re-initialize it" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "SetGlobal", nullptr, nullptr, sizeof(DxyzReaderObject_eventSetGlobal_Parms), Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_SetGlobal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_SetGlobal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics
	{
		struct DxyzReaderObject_eventStartDisplaying_Parms
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
	void Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventStartDisplaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventStartDisplaying_Parms), &Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Start the display */" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Start the display" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "StartDisplaying", nullptr, nullptr, sizeof(DxyzReaderObject_eventStartDisplaying_Parms), Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics
	{
		struct DxyzReaderObject_eventStopDisplaying_Parms
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
	void Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventStopDisplaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventStopDisplaying_Parms), &Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Stop the display */" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Stop the display" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "StopDisplaying", nullptr, nullptr, sizeof(DxyzReaderObject_eventStopDisplaying_Parms), Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics
	{
		struct DxyzReaderObject_eventStopListening_Parms
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
	void Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzReaderObject_eventStopListening_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzReaderObject_eventStopListening_Parms), &Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Stop listening to the RTP url */" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Stop listening to the RTP url" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzReaderObject, nullptr, "StopListening", nullptr, nullptr, sizeof(DxyzReaderObject_eventStopListening_Parms), Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzReaderObject_StopListening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzReaderObject_StopListening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDxyzReaderObject_NoRegister()
	{
		return UDxyzReaderObject::StaticClass();
	}
	struct Z_Construct_UClass_UDxyzReaderObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrintDebug_MetaData[];
#endif
		static void NewProp_PrintDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PrintDebug;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDxyzReaderObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDxyzReaderObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDxyzReaderObject_GetNetworkInterfaces, "GetNetworkInterfaces" }, // 3251837768
		{ &Z_Construct_UFunction_UDxyzReaderObject_GetVideoSize, "GetVideoSize" }, // 2689303824
		{ &Z_Construct_UFunction_UDxyzReaderObject_GetVideoTexture, "GetVideoTexture" }, // 3869481861
		{ &Z_Construct_UFunction_UDxyzReaderObject_IsGlobal, "IsGlobal" }, // 3115343916
		{ &Z_Construct_UFunction_UDxyzReaderObject_IsListening, "IsListening" }, // 1032431952
		{ &Z_Construct_UFunction_UDxyzReaderObject_ListenToAdress, "ListenToAdress" }, // 997010281
		{ &Z_Construct_UFunction_UDxyzReaderObject_ListenToUrl, "ListenToUrl" }, // 1168092160
		{ &Z_Construct_UFunction_UDxyzReaderObject_SetGlobal, "SetGlobal" }, // 2802631470
		{ &Z_Construct_UFunction_UDxyzReaderObject_StartDisplaying, "StartDisplaying" }, // 3792059476
		{ &Z_Construct_UFunction_UDxyzReaderObject_StopDisplaying, "StopDisplaying" }, // 545595978
		{ &Z_Construct_UFunction_UDxyzReaderObject_StopListening, "StopListening" }, // 1325050792
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzReaderObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DxyzReaderObject.h" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzReaderObject_Statics::NewProp_PrintDebug_MetaData[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** Log Debug Info */" },
		{ "ModuleRelativePath", "Private/DxyzReaderObject.h" },
		{ "ToolTip", "Log Debug Info" },
	};
#endif
	void Z_Construct_UClass_UDxyzReaderObject_Statics::NewProp_PrintDebug_SetBit(void* Obj)
	{
		((UDxyzReaderObject*)Obj)->PrintDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzReaderObject_Statics::NewProp_PrintDebug = { "PrintDebug", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzReaderObject), &Z_Construct_UClass_UDxyzReaderObject_Statics::NewProp_PrintDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzReaderObject_Statics::NewProp_PrintDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzReaderObject_Statics::NewProp_PrintDebug_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDxyzReaderObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzReaderObject_Statics::NewProp_PrintDebug,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDxyzReaderObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDxyzReaderObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDxyzReaderObject_Statics::ClassParams = {
		&UDxyzReaderObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDxyzReaderObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzReaderObject_Statics::PropPointers),
		0,
		0x000002A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDxyzReaderObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzReaderObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDxyzReaderObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDxyzReaderObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDxyzReaderObject, 4222996566);
	template<> DXYZLIVELINKPLUGIN_API UClass* StaticClass<UDxyzReaderObject>()
	{
		return UDxyzReaderObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDxyzReaderObject(Z_Construct_UClass_UDxyzReaderObject, &UDxyzReaderObject::StaticClass, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("UDxyzReaderObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDxyzReaderObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
