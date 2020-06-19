// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelMultiplayer/VoxelMultiplayerTcp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMultiplayerTcp() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerTcpInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerTcpInterface();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMultiplayerInterface();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelMultiplayerTcpInterface::execStartServer)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ip);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartServer(Z_Param_Out_OutError,Z_Param_Ip,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelMultiplayerTcpInterface::execConnectToServer)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutError);
		P_GET_PROPERTY(FStrProperty,Z_Param_Ip);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConnectToServer(Z_Param_Out_OutError,Z_Param_Ip,Z_Param_Port);
		P_NATIVE_END;
	}
	void UVoxelMultiplayerTcpInterface::StaticRegisterNativesUVoxelMultiplayerTcpInterface()
	{
		UClass* Class = UVoxelMultiplayerTcpInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectToServer", &UVoxelMultiplayerTcpInterface::execConnectToServer },
			{ "StartServer", &UVoxelMultiplayerTcpInterface::execStartServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics
	{
		struct VoxelMultiplayerTcpInterface_eventConnectToServer_Parms
		{
			FString OutError;
			FString Ip;
			int32 Port;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ip;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelMultiplayerTcpInterface_eventConnectToServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelMultiplayerTcpInterface_eventConnectToServer_Parms), &Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMultiplayerTcpInterface_eventConnectToServer_Parms, Port), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_Ip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMultiplayerTcpInterface_eventConnectToServer_Parms, Ip), METADATA_PARAMS(Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_Ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_Ip_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMultiplayerTcpInterface_eventConnectToServer_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_Ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Multiplayer|Tcp" },
		{ "Comment", "/**\n\x09 * Connect to a TCP server\n\x09 * @param\x09Ip\x09\x09The IPv4 of the server\n\x09 * @param\x09Port\x09The port of the server\n\x09 */" },
		{ "CPP_Default_Ip", "127.0.0.1" },
		{ "CPP_Default_Port", "10000" },
		{ "ModuleRelativePath", "Public/VoxelMultiplayer/VoxelMultiplayerTcp.h" },
		{ "ToolTip", "Connect to a TCP server\n@param       Ip              The IPv4 of the server\n@param       Port    The port of the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMultiplayerTcpInterface, nullptr, "ConnectToServer", nullptr, nullptr, sizeof(VoxelMultiplayerTcpInterface_eventConnectToServer_Parms), Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics
	{
		struct VoxelMultiplayerTcpInterface_eventStartServer_Parms
		{
			FString OutError;
			FString Ip;
			int32 Port;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ip_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Ip;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelMultiplayerTcpInterface_eventStartServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelMultiplayerTcpInterface_eventStartServer_Parms), &Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMultiplayerTcpInterface_eventStartServer_Parms, Port), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_Ip_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_Ip = { "Ip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMultiplayerTcpInterface_eventStartServer_Parms, Ip), METADATA_PARAMS(Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_Ip_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_Ip_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelMultiplayerTcpInterface_eventStartServer_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_Ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::NewProp_OutError,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Multiplayer|Tcp" },
		{ "Comment", "/**\n\x09 * Start a TCP server\n\x09 * @param\x09Ip\x09\x09The IPv4 to accept connection on. 0.0.0.0 to accept all\n\x09 * @param\x09Port\x09The port of the server\n\x09 */" },
		{ "CPP_Default_Ip", "0.0.0.0" },
		{ "CPP_Default_Port", "10000" },
		{ "ModuleRelativePath", "Public/VoxelMultiplayer/VoxelMultiplayerTcp.h" },
		{ "ToolTip", "Start a TCP server\n@param       Ip              The IPv4 to accept connection on. 0.0.0.0 to accept all\n@param       Port    The port of the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelMultiplayerTcpInterface, nullptr, "StartServer", nullptr, nullptr, sizeof(VoxelMultiplayerTcpInterface_eventStartServer_Parms), Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelMultiplayerTcpInterface_NoRegister()
	{
		return UVoxelMultiplayerTcpInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelMultiplayerTcpInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelMultiplayerTcpInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelMultiplayerInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelMultiplayerTcpInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_ConnectToServer, "ConnectToServer" }, // 3388610149
		{ &Z_Construct_UFunction_UVoxelMultiplayerTcpInterface_StartServer, "StartServer" }, // 1708850520
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelMultiplayerTcpInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// TCP interface, only accepts IPv4\n" },
		{ "IncludePath", "VoxelMultiplayer/VoxelMultiplayerTcp.h" },
		{ "ModuleRelativePath", "Public/VoxelMultiplayer/VoxelMultiplayerTcp.h" },
		{ "ToolTip", "TCP interface, only accepts IPv4" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelMultiplayerTcpInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelMultiplayerTcpInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelMultiplayerTcpInterface_Statics::ClassParams = {
		&UVoxelMultiplayerTcpInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelMultiplayerTcpInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelMultiplayerTcpInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelMultiplayerTcpInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelMultiplayerTcpInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelMultiplayerTcpInterface, 2361606518);
	template<> VOXEL_API UClass* StaticClass<UVoxelMultiplayerTcpInterface>()
	{
		return UVoxelMultiplayerTcpInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelMultiplayerTcpInterface(Z_Construct_UClass_UVoxelMultiplayerTcpInterface, &UVoxelMultiplayerTcpInterface::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelMultiplayerTcpInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelMultiplayerTcpInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
