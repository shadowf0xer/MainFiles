// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VaFogOfWar/Public/VaFogBoundsVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaFogBoundsVolume() {}
// Cross Module References
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogBoundsVolume_NoRegister();
	VAFOGOFWAR_API UClass* Z_Construct_UClass_AVaFogBoundsVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_VaFogOfWar();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVaFogBoundsVolume::execScaleDistanceToLayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ScaleDistanceToLayer(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVaFogBoundsVolume::execTransformWorldToLayer)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AgentLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->TransformWorldToLayer(Z_Param_Out_AgentLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVaFogBoundsVolume::execGetCellExtent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCellExtent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVaFogBoundsVolume::execUpdateVolumeTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateVolumeTransform();
		P_NATIVE_END;
	}
	void AVaFogBoundsVolume::StaticRegisterNativesAVaFogBoundsVolume()
	{
		UClass* Class = AVaFogBoundsVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCellExtent", &AVaFogBoundsVolume::execGetCellExtent },
			{ "ScaleDistanceToLayer", &AVaFogBoundsVolume::execScaleDistanceToLayer },
			{ "TransformWorldToLayer", &AVaFogBoundsVolume::execTransformWorldToLayer },
			{ "UpdateVolumeTransform", &AVaFogBoundsVolume::execUpdateVolumeTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics
	{
		struct VaFogBoundsVolume_eventGetCellExtent_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogBoundsVolume_eventGetCellExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Bounds" },
		{ "Comment", "/** Get fog cell size in units */" },
		{ "ModuleRelativePath", "Public/VaFogBoundsVolume.h" },
		{ "ToolTip", "Get fog cell size in units" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVaFogBoundsVolume, nullptr, "GetCellExtent", nullptr, nullptr, sizeof(VaFogBoundsVolume_eventGetCellExtent_Parms), Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics
	{
		struct VaFogBoundsVolume_eventScaleDistanceToLayer_Parms
		{
			int32 Distance;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogBoundsVolume_eventScaleDistanceToLayer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::NewProp_Distance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogBoundsVolume_eventScaleDistanceToLayer_Parms, Distance), METADATA_PARAMS(Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::NewProp_Distance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Bounds" },
		{ "Comment", "/** Convert distance in wolrd units to the layer one */" },
		{ "ModuleRelativePath", "Public/VaFogBoundsVolume.h" },
		{ "ToolTip", "Convert distance in wolrd units to the layer one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVaFogBoundsVolume, nullptr, "ScaleDistanceToLayer", nullptr, nullptr, sizeof(VaFogBoundsVolume_eventScaleDistanceToLayer_Parms), Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics
	{
		struct VaFogBoundsVolume_eventTransformWorldToLayer_Parms
		{
			FVector AgentLocation;
			FIntPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogBoundsVolume_eventTransformWorldToLayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::NewProp_AgentLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::NewProp_AgentLocation = { "AgentLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VaFogBoundsVolume_eventTransformWorldToLayer_Parms, AgentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::NewProp_AgentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::NewProp_AgentLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::NewProp_AgentLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Bounds" },
		{ "Comment", "/** Convert world location of vector to layer one */" },
		{ "ModuleRelativePath", "Public/VaFogBoundsVolume.h" },
		{ "ToolTip", "Convert world location of vector to layer one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVaFogBoundsVolume, nullptr, "TransformWorldToLayer", nullptr, nullptr, sizeof(VaFogBoundsVolume_eventTransformWorldToLayer_Parms), Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVaFogBoundsVolume_UpdateVolumeTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVaFogBoundsVolume_UpdateVolumeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VaFog|Bounds" },
		{ "Comment", "/** Cache volume transform from scene and fog grid resolution from settings */" },
		{ "ModuleRelativePath", "Public/VaFogBoundsVolume.h" },
		{ "ToolTip", "Cache volume transform from scene and fog grid resolution from settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVaFogBoundsVolume_UpdateVolumeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVaFogBoundsVolume, nullptr, "UpdateVolumeTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVaFogBoundsVolume_UpdateVolumeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVaFogBoundsVolume_UpdateVolumeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVaFogBoundsVolume_UpdateVolumeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVaFogBoundsVolume_UpdateVolumeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVaFogBoundsVolume_NoRegister()
	{
		return AVaFogBoundsVolume::StaticClass();
	}
	struct Z_Construct_UClass_AVaFogBoundsVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugVolume_MetaData[];
#endif
		static void NewProp_bDebugVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugVolume;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVaFogBoundsVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_VaFogOfWar,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVaFogBoundsVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVaFogBoundsVolume_GetCellExtent, "GetCellExtent" }, // 1917051750
		{ &Z_Construct_UFunction_AVaFogBoundsVolume_ScaleDistanceToLayer, "ScaleDistanceToLayer" }, // 2397721573
		{ &Z_Construct_UFunction_AVaFogBoundsVolume_TransformWorldToLayer, "TransformWorldToLayer" }, // 1211670962
		{ &Z_Construct_UFunction_AVaFogBoundsVolume_UpdateVolumeTransform, "UpdateVolumeTransform" }, // 2493425864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogBoundsVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "VaFogBoundsVolume.h" },
		{ "ModuleRelativePath", "Public/VaFogBoundsVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_DebugTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Time to show debug grid */" },
		{ "ModuleRelativePath", "Public/VaFogBoundsVolume.h" },
		{ "ToolTip", "Time to show debug grid" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_DebugTime = { "DebugTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogBoundsVolume, DebugTime), METADATA_PARAMS(Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_DebugTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_DebugTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_bDebugVolume_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Show grid for this layer */" },
		{ "ModuleRelativePath", "Public/VaFogBoundsVolume.h" },
		{ "ToolTip", "Show grid for this layer" },
	};
#endif
	void Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_bDebugVolume_SetBit(void* Obj)
	{
		((AVaFogBoundsVolume*)Obj)->bDebugVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_bDebugVolume = { "bDebugVolume", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVaFogBoundsVolume), &Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_bDebugVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_bDebugVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_bDebugVolume_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VaFogBoundsVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVaFogBoundsVolume, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVaFogBoundsVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_DebugTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_bDebugVolume,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVaFogBoundsVolume_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVaFogBoundsVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVaFogBoundsVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVaFogBoundsVolume_Statics::ClassParams = {
		&AVaFogBoundsVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVaFogBoundsVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBoundsVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVaFogBoundsVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVaFogBoundsVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVaFogBoundsVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVaFogBoundsVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVaFogBoundsVolume, 4283285818);
	template<> VAFOGOFWAR_API UClass* StaticClass<AVaFogBoundsVolume>()
	{
		return AVaFogBoundsVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVaFogBoundsVolume(Z_Construct_UClass_AVaFogBoundsVolume, &AVaFogBoundsVolume::StaticClass, TEXT("/Script/VaFogOfWar"), TEXT("AVaFogBoundsVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVaFogBoundsVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
