// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaFogOfWar/Public/VaFogLayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaFogLayer() {}
// Cross Module References
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogLayer_NoRegister();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogLayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VaFogOfWar();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_UVaFogAgentComponent_NoRegister();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogBoundsVolume_NoRegister();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogTerrainLayer_NoRegister();
	VAFOGOFWAR_API UEnum* Z_Construct_UEnum_VaFogOfWar_EVaFogLayerChannel();
// End Cross Module References
	DEFINE_FUNCTION(AVaFogLayer::execIsLocationRevealed)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocationRevealed(Z_Param_Out_InLocation);
		P_NATIVE_END;
	}
	void AVaFogLayer::StaticRegisterNativesAVaFogLayer()
	{
		UClass* Class = AVaFogLayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLocationRevealed", &AVaFogLayer::execIsLocationRevealed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics
	{
		struct VaFogLayer_eventIsLocationRevealed_Parms
		{
			FVector InLocation;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VaFogLayer_eventIsLocationRevealed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VaFogLayer_eventIsLocationRevealed_Parms), &Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogLayer_eventIsLocationRevealed_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::NewProp_InLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::NewProp_InLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|FogLayer" },
		{ "Comment", "/** Is location is revealed on layer  */" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ToolTip", "Is location is revealed on layer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVaFogLayer, nullptr, "IsLocationRevealed", nullptr, nullptr, sizeof(VaFogLayer_eventIsLocationRevealed_Parms), Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVaFogLayer_NoRegister()
	{
		return AVaFogLayer::StaticClass();
	}
	struct Z_Construct_UClass_AVaFogLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpscaleTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpscaleTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugBuffers_MetaData[];
#endif
		static void NewProp_bDebugBuffers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugBuffers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugAgentsColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DebugAgentsColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugAgents_MetaData[];
#endif
		static void NewProp_bDebugAgents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugAgents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogAgents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FogAgents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FogAgents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundsVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainLayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TerrainLayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LayerChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LayerChannel_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVaFogLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VaFogOfWar,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVaFogLayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVaFogLayer_IsLocationRevealed, "IsLocationRevealed" }, // 1638662110
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VaFogLayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0020080800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogLayer, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::NewProp_UpscaleTexture_MetaData[] = {
		{ "Category", "Fog of War" },
		{ "Comment", "/** Upscaled FoW buffer as image (check bDebugUpscaleTexture) */" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ToolTip", "Upscaled FoW buffer as image (check bDebugUpscaleTexture)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_UpscaleTexture = { "UpscaleTexture", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogLayer, UpscaleTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_UpscaleTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_UpscaleTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::NewProp_SourceTexture_MetaData[] = {
		{ "Category", "Fog of War" },
		{ "Comment", "/** Low-res FoW source buffer as image (check bDebugBuffers) */" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ToolTip", "Low-res FoW source buffer as image (check bDebugBuffers)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogLayer, SourceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_SourceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_SourceTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugBuffers_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Enable source and upscale buffer to texture drawing */" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ToolTip", "Enable source and upscale buffer to texture drawing" },
	};
#endif
	void Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugBuffers_SetBit(void* Obj)
	{
		((AVaFogLayer*)Obj)->bDebugBuffers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugBuffers = { "bDebugBuffers", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVaFogLayer), &Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugBuffers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugBuffers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::NewProp_DebugAgentsColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Color to draw */" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ToolTip", "Color to draw" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_DebugAgentsColor = { "DebugAgentsColor", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogLayer, DebugAgentsColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_DebugAgentsColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_DebugAgentsColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugAgents_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Show agents vision radius for this layer */" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ToolTip", "Show agents vision radius for this layer" },
	};
#endif
	void Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugAgents_SetBit(void* Obj)
	{
		((AVaFogLayer*)Obj)->bDebugAgents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugAgents = { "bDebugAgents", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVaFogLayer), &Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugAgents_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugAgents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::NewProp_FogAgents_MetaData[] = {
		{ "Category", "Fog of War" },
		{ "Comment", "/** Registered fog agents for layer */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ToolTip", "Registered fog agents for layer" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_FogAgents = { "FogAgents", nullptr, (EPropertyFlags)0x0020088000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogLayer, FogAgents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_FogAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_FogAgents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_FogAgents_Inner = { "FogAgents", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVaFogAgentComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::NewProp_BoundsVolume_MetaData[] = {
		{ "Category", "Fog of War" },
		{ "Comment", "/** Fog bounds volume we're linked in */" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ToolTip", "Fog bounds volume we're linked in" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_BoundsVolume = { "BoundsVolume", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogLayer, BoundsVolume), Z_Construct_UClass_AVaFogBoundsVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_BoundsVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_BoundsVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::NewProp_TerrainLayer_MetaData[] = {
		{ "Category", "Fog of War" },
		{ "Comment", "/** Layer that provides world information */" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ToolTip", "Layer that provides world information" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_TerrainLayer = { "TerrainLayer", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogLayer, TerrainLayer), Z_Construct_UClass_AVaFogTerrainLayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_TerrainLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_TerrainLayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogLayer_Statics::NewProp_LayerChannel_MetaData[] = {
		{ "Category", "Fog of War" },
		{ "Comment", "/** Defines which refresh logic will be used: permanent drawing or runtime visible area */" },
		{ "ModuleRelativePath", "Public/VaFogLayer.h" },
		{ "ToolTip", "Defines which refresh logic will be used: permanent drawing or runtime visible area" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_LayerChannel = { "LayerChannel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogLayer, LayerChannel), Z_Construct_UEnum_VaFogOfWar_EVaFogLayerChannel, METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_LayerChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::NewProp_LayerChannel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVaFogLayer_Statics::NewProp_LayerChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVaFogLayer_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_UpscaleTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_SourceTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugBuffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_DebugAgentsColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_bDebugAgents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_FogAgents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_FogAgents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_BoundsVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_TerrainLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_LayerChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogLayer_Statics::NewProp_LayerChannel_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVaFogLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVaFogLayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVaFogLayer_Statics::ClassParams = {
		&AVaFogLayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVaFogLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVaFogLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVaFogLayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVaFogLayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVaFogLayer, 2907204892);
	template<> VAFOGOFWAR_API UClass* StaticClass<AVaFogLayer>()
	{
		return AVaFogLayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVaFogLayer(Z_Construct_UClass_AVaFogLayer, &AVaFogLayer::StaticClass, TEXT("/Script/VaFogOfWar"), TEXT("AVaFogLayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVaFogLayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
