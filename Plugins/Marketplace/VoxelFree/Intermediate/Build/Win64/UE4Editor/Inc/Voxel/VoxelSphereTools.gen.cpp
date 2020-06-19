// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelSphereTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSphereTools() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSphereTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphereToGeneratorAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bRevertValues);
		P_GET_UBOOL(Z_Param_bRevertMaterials);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RevertSphereToGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_HistoryPosition);
		P_GET_UBOOL(Z_Param_bRevertValues);
		P_GET_UBOOL(Z_Param_bRevertMaterials);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RevertSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_HistoryPosition,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execTrimSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bAdditive);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::TrimSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Normal,Z_Param_Radius,Z_Param_Falloff,Z_Param_bAdditive,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSharpenSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SharpenSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSmoothSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SmoothSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execApplyKernelSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FirstDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SecondDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThirdDegreeNeighborMultiplier);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::ApplyKernelSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_CenterMultiplier,Z_Param_FirstDegreeNeighborMultiplier,Z_Param_SecondDegreeNeighborMultiplier,Z_Param_ThirdDegreeNeighborMultiplier,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSetMaterialSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVoxelPaintMaterial,Z_Param_PaintMaterial);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SetMaterialSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_PaintMaterial,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execRemoveSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RemoveSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execAddSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::AddSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSetValueSphereAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SetValueSphereAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_Value,Z_Param_bConvertToVoxelSpace,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphereToGenerator)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bRevertValues);
		P_GET_UBOOL(Z_Param_bRevertMaterials);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RevertSphereToGenerator(Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execRevertSphere)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_HistoryPosition);
		P_GET_UBOOL(Z_Param_bRevertValues);
		P_GET_UBOOL(Z_Param_bRevertMaterials);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RevertSphere(Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_HistoryPosition,Z_Param_bRevertValues,Z_Param_bRevertMaterials,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execTrimSphere)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FVector,Z_Param_Normal);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bAdditive);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::TrimSphere(Z_Param_World,Z_Param_Position,Z_Param_Normal,Z_Param_Radius,Z_Param_Falloff,Z_Param_bAdditive,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSharpenSphere)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SharpenSphere(Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSmoothSphere)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SmoothSphere(Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_Strength,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execApplyKernelSphere)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CenterMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FirstDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SecondDegreeNeighborMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ThirdDegreeNeighborMultiplier);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::ApplyKernelSphere(Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_CenterMultiplier,Z_Param_FirstDegreeNeighborMultiplier,Z_Param_SecondDegreeNeighborMultiplier,Z_Param_ThirdDegreeNeighborMultiplier,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSetMaterialSphere)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_STRUCT(FVoxelPaintMaterial,Z_Param_PaintMaterial);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SetMaterialSphere(Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_PaintMaterial,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execRemoveSphere)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::RemoveSphere(Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execAddSphere)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::AddSphere(Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSphereTools::execSetValueSphere)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSphereTools::SetValueSphere(Z_Param_World,Z_Param_Position,Z_Param_Radius,Z_Param_Value,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	void UVoxelSphereTools::StaticRegisterNativesUVoxelSphereTools()
	{
		UClass* Class = UVoxelSphereTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSphere", &UVoxelSphereTools::execAddSphere },
			{ "AddSphereAsync", &UVoxelSphereTools::execAddSphereAsync },
			{ "ApplyKernelSphere", &UVoxelSphereTools::execApplyKernelSphere },
			{ "ApplyKernelSphereAsync", &UVoxelSphereTools::execApplyKernelSphereAsync },
			{ "RemoveSphere", &UVoxelSphereTools::execRemoveSphere },
			{ "RemoveSphereAsync", &UVoxelSphereTools::execRemoveSphereAsync },
			{ "RevertSphere", &UVoxelSphereTools::execRevertSphere },
			{ "RevertSphereAsync", &UVoxelSphereTools::execRevertSphereAsync },
			{ "RevertSphereToGenerator", &UVoxelSphereTools::execRevertSphereToGenerator },
			{ "RevertSphereToGeneratorAsync", &UVoxelSphereTools::execRevertSphereToGeneratorAsync },
			{ "SetMaterialSphere", &UVoxelSphereTools::execSetMaterialSphere },
			{ "SetMaterialSphereAsync", &UVoxelSphereTools::execSetMaterialSphereAsync },
			{ "SetValueSphere", &UVoxelSphereTools::execSetValueSphere },
			{ "SetValueSphereAsync", &UVoxelSphereTools::execSetValueSphereAsync },
			{ "SharpenSphere", &UVoxelSphereTools::execSharpenSphere },
			{ "SharpenSphereAsync", &UVoxelSphereTools::execSharpenSphereAsync },
			{ "SmoothSphere", &UVoxelSphereTools::execSmoothSphere },
			{ "SmoothSphereAsync", &UVoxelSphereTools::execSmoothSphereAsync },
			{ "TrimSphere", &UVoxelSphereTools::execTrimSphere },
			{ "TrimSphereAsync", &UVoxelSphereTools::execTrimSphereAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics
	{
		struct VoxelSphereTools_eventAddSphere_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphere_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Add a sphere\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Add a sphere\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "AddSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventAddSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_AddSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_AddSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics
	{
		struct VoxelSphereTools_eventAddSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventAddSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventAddSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Add a sphere\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Add a sphere\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "AddSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventAddSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics
	{
		struct VoxelSphereTools_eventApplyKernelSphere_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			float CenterMultiplier;
			float FirstDegreeNeighborMultiplier;
			float SecondDegreeNeighborMultiplier;
			float ThirdDegreeNeighborMultiplier;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ThirdDegreeNeighborMultiplier = { "ThirdDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, ThirdDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_SecondDegreeNeighborMultiplier = { "SecondDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, SecondDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_FirstDegreeNeighborMultiplier = { "FirstDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, FirstDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_CenterMultiplier = { "CenterMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, CenterMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphere_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_ThirdDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_SecondDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_FirstDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_CenterMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Apply a 3x3x3 kernel\n\x09 * @param\x09World\x09\x09\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""CenterMultiplier\x09\x09\x09\x09Multiplier of the center value\n\x09 * @param\x09""FirstDegreeNeighborMultiplier\x09Multiplier of the immediate neighbors, which share 2 coordinates with the center\n\x09 * @param   SecondDegreeNeighborMultiplier\x09Multiplier of the near corners neighbors, which share 1 coordinates with the center\n\x09 * @param   ThirdDegreeNeighborMultiplier\x09Multiplier of the far corners neighbors, which share 0 coordinates with the center\n\x09 * @param\x09""bConvertToVoxelSpace\x09\x09\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_CenterMultiplier", "0.037000" },
		{ "CPP_Default_FirstDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_SecondDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_ThirdDegreeNeighborMultiplier", "0.037000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Apply a 3x3x3 kernel\n@param       World                                                   The voxel world\n@param       Position                                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       CenterMultiplier                                Multiplier of the center value\n@param       FirstDegreeNeighborMultiplier   Multiplier of the immediate neighbors, which share 2 coordinates with the center\n@param   SecondDegreeNeighborMultiplier      Multiplier of the near corners neighbors, which share 1 coordinates with the center\n@param   ThirdDegreeNeighborMultiplier       Multiplier of the far corners neighbors, which share 0 coordinates with the center\n@param       bConvertToVoxelSpace                    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "ApplyKernelSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventApplyKernelSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics
	{
		struct VoxelSphereTools_eventApplyKernelSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			float CenterMultiplier;
			float FirstDegreeNeighborMultiplier;
			float SecondDegreeNeighborMultiplier;
			float ThirdDegreeNeighborMultiplier;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThirdDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FirstDegreeNeighborMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CenterMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventApplyKernelSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ThirdDegreeNeighborMultiplier = { "ThirdDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, ThirdDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_SecondDegreeNeighborMultiplier = { "SecondDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, SecondDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_FirstDegreeNeighborMultiplier = { "FirstDegreeNeighborMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, FirstDegreeNeighborMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_CenterMultiplier = { "CenterMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, CenterMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventApplyKernelSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_ThirdDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_SecondDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_FirstDegreeNeighborMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_CenterMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Apply a 3x3x3 kernel\n\x09 * @param\x09World\x09\x09\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""CenterMultiplier\x09\x09\x09\x09Multiplier of the center value\n\x09 * @param\x09""FirstDegreeNeighborMultiplier\x09Multiplier of the immediate neighbors, which share 2 coordinates with the center\n\x09 * @param   SecondDegreeNeighborMultiplier\x09Multiplier of the near corners neighbors, which share 1 coordinates with the center\n\x09 * @param   ThirdDegreeNeighborMultiplier\x09Multiplier of the far corners neighbors, which share 0 coordinates with the center\n\x09 * @param\x09""bConvertToVoxelSpace\x09\x09\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_CenterMultiplier", "0.037000" },
		{ "CPP_Default_FirstDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_SecondDegreeNeighborMultiplier", "0.037000" },
		{ "CPP_Default_ThirdDegreeNeighborMultiplier", "0.037000" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Apply a 3x3x3 kernel\n@param       World                                                   The voxel world\n@param       Position                                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       CenterMultiplier                                Multiplier of the center value\n@param       FirstDegreeNeighborMultiplier   Multiplier of the immediate neighbors, which share 2 coordinates with the center\n@param   SecondDegreeNeighborMultiplier      Multiplier of the near corners neighbors, which share 1 coordinates with the center\n@param   ThirdDegreeNeighborMultiplier       Multiplier of the far corners neighbors, which share 0 coordinates with the center\n@param       bConvertToVoxelSpace                    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "ApplyKernelSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventApplyKernelSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics
	{
		struct VoxelSphereTools_eventRemoveSphere_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphere_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Remove a sphere\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Remove a sphere\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RemoveSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventRemoveSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics
	{
		struct VoxelSphereTools_eventRemoveSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRemoveSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRemoveSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Remove a sphere\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Remove a sphere\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RemoveSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventRemoveSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics
	{
		struct VoxelSphereTools_eventRevertSphere_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			int32 HistoryPosition;
			bool bRevertValues;
			bool bRevertMaterials;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRevertMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
		static void NewProp_bRevertValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HistoryPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bRevertMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphere_Parms*)Obj)->bRevertValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_HistoryPosition = { "HistoryPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, HistoryPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphere_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_bRevertValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_HistoryPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to a previous frame in the undo history.\n\x09 * Can be used to \"paint\" the undo history\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\x09\x09\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09HistoryPosition\x09\x09\x09The history position to go back to. You can use GetHistoryPosition to get it.\n\x09 * @param\x09""bRevertValues\x09\x09\x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials\x09\x09Whether to revert materials\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bRevertMaterials", "true" },
		{ "CPP_Default_bRevertValues", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Reverts the voxels inside a sphere shape to a previous frame in the undo history.\nCan be used to \"paint\" the undo history\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       HistoryPosition                 The history position to go back to. You can use GetHistoryPosition to get it.\n@param       bRevertValues                   Whether to revert values\n@param       bRevertMaterials                Whether to revert materials\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventRevertSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics
	{
		struct VoxelSphereTools_eventRevertSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			int32 HistoryPosition;
			bool bRevertValues;
			bool bRevertMaterials;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRevertMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
		static void NewProp_bRevertValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HistoryPosition;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bRevertMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereAsync_Parms*)Obj)->bRevertValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_HistoryPosition = { "HistoryPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, HistoryPosition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_bRevertValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_HistoryPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to a previous frame in the undo history.\n\x09 * Can be used to \"paint\" the undo history\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\x09\x09\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09HistoryPosition\x09\x09\x09The history position to go back to. You can use GetHistoryPosition to get it.\n\x09 * @param\x09""bRevertValues\x09\x09\x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials\x09\x09Whether to revert materials\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bRevertMaterials", "true" },
		{ "CPP_Default_bRevertValues", "true" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Reverts the voxels inside a sphere shape to a previous frame in the undo history.\nCan be used to \"paint\" the undo history\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       HistoryPosition                 The history position to go back to. You can use GetHistoryPosition to get it.\n@param       bRevertValues                   Whether to revert values\n@param       bRevertMaterials                Whether to revert materials\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventRevertSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics
	{
		struct VoxelSphereTools_eventRevertSphereToGenerator_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			bool bRevertValues;
			bool bRevertMaterials;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRevertMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
		static void NewProp_bRevertValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bRevertMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGenerator_Parms*)Obj)->bRevertValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGenerator_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_bRevertValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to their generator value\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\x09\x09\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""bRevertValues\x09\x09\x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials\x09\x09Whether to revert materials\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bRevertMaterials", "true" },
		{ "CPP_Default_bRevertValues", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Reverts the voxels inside a sphere shape to their generator value\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       bRevertValues                   Whether to revert values\n@param       bRevertMaterials                Whether to revert materials\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphereToGenerator", nullptr, nullptr, sizeof(VoxelSphereTools_eventRevertSphereToGenerator_Parms), Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics
	{
		struct VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			bool bRevertValues;
			bool bRevertMaterials;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bRevertMaterials_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertMaterials;
		static void NewProp_bRevertValues_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertValues;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bRevertMaterials = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials = { "bRevertMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms*)Obj)->bRevertValues = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues = { "bRevertValues", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_bRevertValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Reverts the voxels inside a sphere shape to their generator value\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\x09\x09\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""bRevertValues\x09\x09\x09Whether to revert values\n\x09 * @param\x09""bRevertMaterials\x09\x09Whether to revert materials\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_bRevertMaterials", "true" },
		{ "CPP_Default_bRevertValues", "true" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Reverts the voxels inside a sphere shape to their generator value\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       bRevertValues                   Whether to revert values\n@param       bRevertMaterials                Whether to revert materials\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "RevertSphereToGeneratorAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventRevertSphereToGeneratorAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics
	{
		struct VoxelSphereTools_eventSetMaterialSphere_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			FVoxelPaintMaterial PaintMaterial;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphere_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Paint material in a sphere shape\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09PaintMaterial\x09\x09\x09The material to paint\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Paint material in a sphere shape\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       PaintMaterial                   The material to paint\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetMaterialSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventSetMaterialSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics
	{
		struct VoxelSphereTools_eventSetMaterialSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			FVoxelPaintMaterial PaintMaterial;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetMaterialSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetMaterialSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Paint material in a sphere shape\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09PaintMaterial\x09\x09\x09The material to paint\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Paint material in a sphere shape\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       PaintMaterial                   The material to paint\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetMaterialSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventSetMaterialSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics
	{
		struct VoxelSphereTools_eventSetValueSphere_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			float Value;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphere_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Set the density in a sphere\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09Value\x09\x09\x09\x09\x09The density to set\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Set the density in a sphere\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       Value                                   The density to set\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetValueSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventSetValueSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics
	{
		struct VoxelSphereTools_eventSetValueSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			float Value;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSetValueSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSetValueSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Set the density in a sphere\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09Value\x09\x09\x09\x09\x09The density to set\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Set the density in a sphere\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       Value                                   The density to set\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SetValueSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventSetValueSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics
	{
		struct VoxelSphereTools_eventSharpenSphere_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			float Strength;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSharpenSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSharpenSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSharpenSphere_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSharpenSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSharpenSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSharpenSphere_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Sharpen a sphere\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\x09\x09\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09Strength\x09\x09\x09\x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_Strength", "0.100000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Sharpen a sphere\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       Strength                                The strength of the smoothing (preferably between 0 and 1)\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SharpenSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventSharpenSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics
	{
		struct VoxelSphereTools_eventSharpenSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			float Strength;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSharpenSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSharpenSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSharpenSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSharpenSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSharpenSphereAsync_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSharpenSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSharpenSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSharpenSphereAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSharpenSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSharpenSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Sharpen a sphere asynchronously\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\x09\x09\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09Strength\x09\x09\x09\x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_Strength", "0.100000" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Sharpen a sphere asynchronously\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       Strength                                The strength of the smoothing (preferably between 0 and 1)\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SharpenSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventSharpenSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics
	{
		struct VoxelSphereTools_eventSmoothSphere_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			float Strength;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphere_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Smooth a sphere\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\x09\x09\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09Strength\x09\x09\x09\x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_Strength", "0.100000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Smooth a sphere\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       Strength                                The strength of the smoothing (preferably between 0 and 1)\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SmoothSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventSmoothSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics
	{
		struct VoxelSphereTools_eventSmoothSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			float Radius;
			float Strength;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventSmoothSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventSmoothSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Strength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Smooth a sphere asynchronously\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\x09\x09\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09Strength\x09\x09\x09\x09The strength of the smoothing (preferably between 0 and 1)\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position and radius will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_Strength", "0.100000" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Smooth a sphere asynchronously\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       Strength                                The strength of the smoothing (preferably between 0 and 1)\n@param       bConvertToVoxelSpace    If true, the position and radius will be converted to voxel space. Else they will be used directly" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "SmoothSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventSmoothSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics
	{
		struct VoxelSphereTools_eventTrimSphere_Parms
		{
			AVoxelWorld* World;
			FVector Position;
			FVector Normal;
			float Radius;
			float Falloff;
			bool bAdditive;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphere_Parms*)Obj)->bAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphere_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphere_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_bAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Trim tool: used to quickly flatten large portions of the world\n\x09 * Best results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\n\x09 * This ensures the tool usage is relatively smooth.\n\x09 * \n\x09 * Works by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\n\x09 * The shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\x09\x09\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Normal\x09\x09\x09\x09\x09The normal\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""Falloff\x09\x09\x09\x09\x09The falloff, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""bAdditive\x09\x09\x09\x09Whether to add or remove voxels\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position, radius and falloff will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bAdditive", "false" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Trim tool: used to quickly flatten large portions of the world\nBest results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\nThis ensures the tool usage is relatively smooth.\n\nWorks by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\nThe shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Normal                                  The normal\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       Falloff                                 The falloff, in cm if ConvertToVoxelSpace is true\n@param       bAdditive                               Whether to add or remove voxels\n@param       bConvertToVoxelSpace    If true, the position, radius and falloff will be converted to voxel space. Else they will be used directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "TrimSphere", nullptr, nullptr, sizeof(VoxelSphereTools_eventTrimSphere_Parms), Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_TrimSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_TrimSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics
	{
		struct VoxelSphereTools_eventTrimSphereAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			AVoxelWorld* World;
			FVector Position;
			FVector Normal;
			float Radius;
			float Falloff;
			bool bAdditive;
			bool bConvertToVoxelSpace;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static void NewProp_bAdditive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAdditive;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive_SetBit(void* Obj)
	{
		((VoxelSphereTools_eventTrimSphereAsync_Parms*)Obj)->bAdditive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive = { "bAdditive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSphereTools_eventTrimSphereAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_bAdditive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Sphere Tools" },
		{ "Comment", "/**\n\x09 * Trim tool: used to quickly flatten large portions of the world\n\x09 * Best results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\n\x09 * This ensures the tool usage is relatively smooth.\n\x09 * \n\x09 * Works by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\n\x09 * The shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\x09\x09\n\x09 * @param\x09Position\x09\x09\x09\x09The position of the center, in world space if ConvertToVoxelSpace is true\n\x09 * @param\x09Normal\x09\x09\x09\x09\x09The normal\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""Falloff\x09\x09\x09\x09\x09The falloff, in cm if ConvertToVoxelSpace is true\n\x09 * @param\x09""bAdditive\x09\x09\x09\x09Whether to add or remove voxels\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, the position, radius and falloff will be converted to voxel space. Else they will be used directly\n\x09 */" },
		{ "CPP_Default_bAdditive", "false" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
		{ "ToolTip", "Trim tool: used to quickly flatten large portions of the world\nBest results are obtained when Position and Normal are averages: use FindProjectionVoxels to do some linetraces, and then GetAveragePosition/Normal on the result\nThis ensures the tool usage is relatively smooth.\n\nWorks by stamping a shape into the world (if bAdditive = false, the stamp is destructive: voxels are removed instead)\nThe shape is the smooth union of a sphere SDF and a plane SDF. The smoothness of the union is controlled by the Falloff parameter.\n@param       World                                   The voxel world\n@param       Position                                The position of the center, in world space if ConvertToVoxelSpace is true\n@param       Normal                                  The normal\n@param       Radius                                  The radius, in cm if ConvertToVoxelSpace is true\n@param       Falloff                                 The falloff, in cm if ConvertToVoxelSpace is true\n@param       bAdditive                               Whether to add or remove voxels\n@param       bConvertToVoxelSpace    If true, the position, radius and falloff will be converted to voxel space. Else they will be used directly" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSphereTools, nullptr, "TrimSphereAsync", nullptr, nullptr, sizeof(VoxelSphereTools_eventTrimSphereAsync_Parms), Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelSphereTools_NoRegister()
	{
		return UVoxelSphereTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSphereTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSphereTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelSphereTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSphereTools_AddSphere, "AddSphere" }, // 1333403281
		{ &Z_Construct_UFunction_UVoxelSphereTools_AddSphereAsync, "AddSphereAsync" }, // 4049188757
		{ &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphere, "ApplyKernelSphere" }, // 1148351458
		{ &Z_Construct_UFunction_UVoxelSphereTools_ApplyKernelSphereAsync, "ApplyKernelSphereAsync" }, // 2680549093
		{ &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphere, "RemoveSphere" }, // 3884920783
		{ &Z_Construct_UFunction_UVoxelSphereTools_RemoveSphereAsync, "RemoveSphereAsync" }, // 4154174569
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphere, "RevertSphere" }, // 2260342653
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereAsync, "RevertSphereAsync" }, // 88593789
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGenerator, "RevertSphereToGenerator" }, // 2966194778
		{ &Z_Construct_UFunction_UVoxelSphereTools_RevertSphereToGeneratorAsync, "RevertSphereToGeneratorAsync" }, // 3227105219
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphere, "SetMaterialSphere" }, // 989507018
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetMaterialSphereAsync, "SetMaterialSphereAsync" }, // 1072632566
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphere, "SetValueSphere" }, // 3637594187
		{ &Z_Construct_UFunction_UVoxelSphereTools_SetValueSphereAsync, "SetValueSphereAsync" }, // 4202168729
		{ &Z_Construct_UFunction_UVoxelSphereTools_SharpenSphere, "SharpenSphere" }, // 3297477951
		{ &Z_Construct_UFunction_UVoxelSphereTools_SharpenSphereAsync, "SharpenSphereAsync" }, // 1231612632
		{ &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphere, "SmoothSphere" }, // 1445684145
		{ &Z_Construct_UFunction_UVoxelSphereTools_SmoothSphereAsync, "SmoothSphereAsync" }, // 2342977673
		{ &Z_Construct_UFunction_UVoxelSphereTools_TrimSphere, "TrimSphere" }, // 788501481
		{ &Z_Construct_UFunction_UVoxelSphereTools_TrimSphereAsync, "TrimSphereAsync" }, // 1217814284
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSphereTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelSphereTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSphereTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSphereTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSphereTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSphereTools_Statics::ClassParams = {
		&UVoxelSphereTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSphereTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSphereTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSphereTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSphereTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSphereTools, 1801704522);
	template<> VOXEL_API UClass* StaticClass<UVoxelSphereTools>()
	{
		return UVoxelSphereTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSphereTools(Z_Construct_UClass_UVoxelSphereTools, &UVoxelSphereTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSphereTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSphereTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
