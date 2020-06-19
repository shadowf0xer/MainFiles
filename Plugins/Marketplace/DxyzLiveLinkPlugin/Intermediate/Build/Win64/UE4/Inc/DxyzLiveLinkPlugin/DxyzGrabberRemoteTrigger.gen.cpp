// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DxyzLiveLinkPlugin/Private/DxyzGrabberRemoteTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDxyzGrabberRemoteTrigger() {}
// Cross Module References
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzGrabberRemoteTrigger_NoRegister();
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzGrabberRemoteTrigger();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UDxyzGrabberRemoteTrigger::execSendStopToGrabber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_PROPERTY(FStrProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendStopToGrabber(Z_Param_IpAddress,Z_Param_Port,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzGrabberRemoteTrigger::execSendStartToGrabber)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_IpAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_PROPERTY(FStrProperty,Z_Param_FileName);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendStartToGrabber(Z_Param_IpAddress,Z_Param_Port,Z_Param_FileName,Z_Param_FilePath,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	void UDxyzGrabberRemoteTrigger::StaticRegisterNativesUDxyzGrabberRemoteTrigger()
	{
		UClass* Class = UDxyzGrabberRemoteTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendStartToGrabber", &UDxyzGrabberRemoteTrigger::execSendStartToGrabber },
			{ "SendStopToGrabber", &UDxyzGrabberRemoteTrigger::execSendStopToGrabber },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics
	{
		struct DxyzGrabberRemoteTrigger_eventSendStartToGrabber_Parms
		{
			FString IpAddress;
			int32 Port;
			FString FileName;
			FString FilePath;
			FString TimeCode;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimeCode;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IpAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzGrabberRemoteTrigger_eventSendStartToGrabber_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzGrabberRemoteTrigger_eventSendStartToGrabber_Parms), &Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzGrabberRemoteTrigger_eventSendStartToGrabber_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzGrabberRemoteTrigger_eventSendStartToGrabber_Parms, FilePath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzGrabberRemoteTrigger_eventSendStartToGrabber_Parms, FileName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzGrabberRemoteTrigger_eventSendStartToGrabber_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzGrabberRemoteTrigger_eventSendStartToGrabber_Parms, IpAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_TimeCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::NewProp_IpAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** This function is beta, it is used to remotely trigger the \"Record\" feature in Grabber.\n        * @param IpAddress The ip address of the Dynamixyz Grabber to send the signal to (ex: \"127.0.0.1\")\n        * @param Port The port that will be used for the communication (ex: 1512)\n        * @param FileName The name of the file to record (ex: \"DxyzLiveLink_Video\")\n        * @param FilePath The path on the target machine where to record the video (ex: \"D:/GrabberSession\")\n        * @param TimeCode When to start the Recording (ex: \"11:50:00:00\"). Leave it empty if you do not want to use a timecode.\n        * @return if the message was succesfully sent or not\n        */" },
		{ "CPP_Default_FileName", "DxyzLiveLink_Video" },
		{ "CPP_Default_FilePath", "." },
		{ "CPP_Default_IpAddress", "127.0.0.1" },
		{ "CPP_Default_Port", "1512" },
		{ "CPP_Default_TimeCode", "" },
		{ "ModuleRelativePath", "Private/DxyzGrabberRemoteTrigger.h" },
		{ "ToolTip", "This function is beta, it is used to remotely trigger the \"Record\" feature in Grabber.\n@param IpAddress The ip address of the Dynamixyz Grabber to send the signal to (ex: \"127.0.0.1\")\n@param Port The port that will be used for the communication (ex: 1512)\n@param FileName The name of the file to record (ex: \"DxyzLiveLink_Video\")\n@param FilePath The path on the target machine where to record the video (ex: \"D:/GrabberSession\")\n@param TimeCode When to start the Recording (ex: \"11:50:00:00\"). Leave it empty if you do not want to use a timecode.\n@return if the message was succesfully sent or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzGrabberRemoteTrigger, nullptr, "SendStartToGrabber", nullptr, nullptr, sizeof(DxyzGrabberRemoteTrigger_eventSendStartToGrabber_Parms), Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics
	{
		struct DxyzGrabberRemoteTrigger_eventSendStopToGrabber_Parms
		{
			FString IpAddress;
			int32 Port;
			FString TimeCode;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TimeCode;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IpAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzGrabberRemoteTrigger_eventSendStopToGrabber_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzGrabberRemoteTrigger_eventSendStopToGrabber_Parms), &Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzGrabberRemoteTrigger_eventSendStopToGrabber_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzGrabberRemoteTrigger_eventSendStopToGrabber_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::NewProp_IpAddress = { "IpAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzGrabberRemoteTrigger_eventSendStopToGrabber_Parms, IpAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::NewProp_TimeCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::NewProp_IpAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamixyz" },
		{ "Comment", "/** This function is beta, it is used to remotely trigger the \"Record\" feature in Grabber.\n    * @param IpAddress The ip address of the Dynamixyz Grabber to send the signal to (ex: \"127.0.0.1\")\n    * @param Port The port that will be used for the communication (ex: 1512)\n    * @param TimeCode When to start the Recording (ex: \"11:50:00:00\"). Leave it empty if you do not want to use a timecode.\n    * @return if the message was succesfully sent or not\n    */" },
		{ "CPP_Default_IpAddress", "127.0.0.1" },
		{ "CPP_Default_Port", "1512" },
		{ "CPP_Default_TimeCode", "" },
		{ "ModuleRelativePath", "Private/DxyzGrabberRemoteTrigger.h" },
		{ "ToolTip", "This function is beta, it is used to remotely trigger the \"Record\" feature in Grabber.\n@param IpAddress The ip address of the Dynamixyz Grabber to send the signal to (ex: \"127.0.0.1\")\n@param Port The port that will be used for the communication (ex: 1512)\n@param TimeCode When to start the Recording (ex: \"11:50:00:00\"). Leave it empty if you do not want to use a timecode.\n@return if the message was succesfully sent or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzGrabberRemoteTrigger, nullptr, "SendStopToGrabber", nullptr, nullptr, sizeof(DxyzGrabberRemoteTrigger_eventSendStopToGrabber_Parms), Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDxyzGrabberRemoteTrigger_NoRegister()
	{
		return UDxyzGrabberRemoteTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UDxyzGrabberRemoteTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDxyzGrabberRemoteTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDxyzGrabberRemoteTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStartToGrabber, "SendStartToGrabber" }, // 3683797865
		{ &Z_Construct_UFunction_UDxyzGrabberRemoteTrigger_SendStopToGrabber, "SendStopToGrabber" }, // 2310208721
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzGrabberRemoteTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DxyzGrabberRemoteTrigger.h" },
		{ "ModuleRelativePath", "Private/DxyzGrabberRemoteTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDxyzGrabberRemoteTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDxyzGrabberRemoteTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDxyzGrabberRemoteTrigger_Statics::ClassParams = {
		&UDxyzGrabberRemoteTrigger::StaticClass,
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
		0x000002A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDxyzGrabberRemoteTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzGrabberRemoteTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDxyzGrabberRemoteTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDxyzGrabberRemoteTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDxyzGrabberRemoteTrigger, 4112053882);
	template<> DXYZLIVELINKPLUGIN_API UClass* StaticClass<UDxyzGrabberRemoteTrigger>()
	{
		return UDxyzGrabberRemoteTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDxyzGrabberRemoteTrigger(Z_Construct_UClass_UDxyzGrabberRemoteTrigger, &UDxyzGrabberRemoteTrigger::StaticClass, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("UDxyzGrabberRemoteTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDxyzGrabberRemoteTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
