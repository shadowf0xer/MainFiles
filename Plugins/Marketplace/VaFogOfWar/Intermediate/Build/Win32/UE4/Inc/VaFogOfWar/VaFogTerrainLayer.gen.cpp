// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaFogOfWar/Public/VaFogTerrainLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaFogTerrainLayer() {}
// Cross Module References
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogTerrainLayer_NoRegister();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogTerrainLayer();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogLayer();
	UPackage* Z_Construct_UPackage__Script_VaFogOfWar();
	VAFOGOFWAR_API UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVaFogTerrainLayer::execGetHeightLevelAtAgentLocation)
	{
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_AgentLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVaFogHeightLevel*)Z_Param__Result=P_THIS->GetHeightLevelAtAgentLocation(Z_Param_Out_AgentLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVaFogTerrainLayer::execGetHeightLevelAtLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EVaFogHeightLevel*)Z_Param__Result=P_THIS->GetHeightLevelAtLocation(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	void AVaFogTerrainLayer::StaticRegisterNativesAVaFogTerrainLayer()
	{
		UClass* Class = AVaFogTerrainLayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeightLevelAtAgentLocation", &AVaFogTerrainLayer::execGetHeightLevelAtAgentLocation },
			{ "GetHeightLevelAtLocation", &AVaFogTerrainLayer::execGetHeightLevelAtLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics
	{
		struct VaFogTerrainLayer_eventGetHeightLevelAtAgentLocation_Parms
		{
			FIntPoint AgentLocation;
			EVaFogHeightLevel ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AgentLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AgentLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogTerrainLayer_eventGetHeightLevelAtAgentLocation_Parms, ReturnValue), Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::NewProp_AgentLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::NewProp_AgentLocation = { "AgentLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogTerrainLayer_eventGetHeightLevelAtAgentLocation_Parms, AgentLocation), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::NewProp_AgentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::NewProp_AgentLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::NewProp_AgentLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Terrain" },
		{ "Comment", "/** Get initial terrain state at agent (internal) location */" },
		{ "ModuleRelativePath", "Public/VaFogTerrainLayer.h" },
		{ "ToolTip", "Get initial terrain state at agent (internal) location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVaFogTerrainLayer, nullptr, "GetHeightLevelAtAgentLocation", nullptr, nullptr, sizeof(VaFogTerrainLayer_eventGetHeightLevelAtAgentLocation_Parms), Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics
	{
		struct VaFogTerrainLayer_eventGetHeightLevelAtLocation_Parms
		{
			FVector Location;
			EVaFogHeightLevel ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogTerrainLayer_eventGetHeightLevelAtLocation_Parms, ReturnValue), Z_Construct_UEnum_VaFogOfWar_EVaFogHeightLevel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogTerrainLayer_eventGetHeightLevelAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Terrain" },
		{ "Comment", "/** Get initial terrain state at location */" },
		{ "ModuleRelativePath", "Public/VaFogTerrainLayer.h" },
		{ "ToolTip", "Get initial terrain state at location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVaFogTerrainLayer, nullptr, "GetHeightLevelAtLocation", nullptr, nullptr, sizeof(VaFogTerrainLayer_eventGetHeightLevelAtLocation_Parms), Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVaFogTerrainLayer_NoRegister()
	{
		return AVaFogTerrainLayer::StaticClass();
	}
	struct Z_Construct_UClass_AVaFogTerrainLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialTerrainTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialTerrainTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVaFogTerrainLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVaFogLayer,
		(UObject* (*)())Z_Construct_UPackage__Script_VaFogOfWar,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVaFogTerrainLayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtAgentLocation, "GetHeightLevelAtAgentLocation" }, // 3866386360
		{ &Z_Construct_UFunction_AVaFogTerrainLayer_GetHeightLevelAtLocation, "GetHeightLevelAtLocation" }, // 2641895818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogTerrainLayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Pre-configured layer for handling terrain and obstacles\n */" },
		{ "IncludePath", "VaFogTerrainLayer.h" },
		{ "ModuleRelativePath", "Public/VaFogTerrainLayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Pre-configured layer for handling terrain and obstacles" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogTerrainLayer_Statics::NewProp_InitialTerrainTexture_MetaData[] = {
		{ "Category", "Fog of War Terrain" },
		{ "Comment", "/** Initial terrain state to be applied into the source buffer */" },
		{ "ModuleRelativePath", "Public/VaFogTerrainLayer.h" },
		{ "ToolTip", "Initial terrain state to be applied into the source buffer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaFogTerrainLayer_Statics::NewProp_InitialTerrainTexture = { "InitialTerrainTexture", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogTerrainLayer, InitialTerrainTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaFogTerrainLayer_Statics::NewProp_InitialTerrainTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogTerrainLayer_Statics::NewProp_InitialTerrainTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVaFogTerrainLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogTerrainLayer_Statics::NewProp_InitialTerrainTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVaFogTerrainLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVaFogTerrainLayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVaFogTerrainLayer_Statics::ClassParams = {
		&AVaFogTerrainLayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVaFogTerrainLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogTerrainLayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVaFogTerrainLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogTerrainLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVaFogTerrainLayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVaFogTerrainLayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVaFogTerrainLayer, 1868964366);
	template<> VAFOGOFWAR_API UClass* StaticClass<AVaFogTerrainLayer>()
	{
		return AVaFogTerrainLayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVaFogTerrainLayer(Z_Construct_UClass_AVaFogTerrainLayer, &AVaFogTerrainLayer::StaticClass, TEXT("/Script/VaFogOfWar"), TEXT("AVaFogTerrainLayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVaFogTerrainLayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
