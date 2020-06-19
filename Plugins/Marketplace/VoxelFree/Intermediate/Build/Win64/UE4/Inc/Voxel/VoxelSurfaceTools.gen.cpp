// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelSurfaceTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSurfaceTools() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSurfaceTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSamplerMode();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelFoliage();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelPaintMaterial();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelMaterial();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FModifiedVoxelValue();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
// End Cross Module References
	static UEnum* EVoxelSDFMergeMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSDFMergeMode"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSDFMergeMode>()
	{
		return EVoxelSDFMergeMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSDFMergeMode(EVoxelSDFMergeMode_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSDFMergeMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Hash() { return 3251788708U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSDFMergeMode"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSDFMergeMode::Union", (int64)EVoxelSDFMergeMode::Union },
				{ "EVoxelSDFMergeMode::Intersection", (int64)EVoxelSDFMergeMode::Intersection },
				{ "EVoxelSDFMergeMode::Override", (int64)EVoxelSDFMergeMode::Override },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Intersection.Comment", "// Destructive mode: will only shrink the surface\n" },
				{ "Intersection.Name", "EVoxelSDFMergeMode::Intersection" },
				{ "Intersection.ToolTip", "Destructive mode: will only shrink the surface" },
				{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
				{ "Override.Comment", "// Will add and remove at the same time\n" },
				{ "Override.Name", "EVoxelSDFMergeMode::Override" },
				{ "Override.ToolTip", "Will add and remove at the same time" },
				{ "Union.Comment", "// Additive mode: will only grow the surface\n" },
				{ "Union.Name", "EVoxelSDFMergeMode::Union" },
				{ "Union.ToolTip", "Additive mode: will only grow the surface" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSDFMergeMode",
				"EVoxelSDFMergeMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execDebugSurfaceVoxels)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::DebugSurfaceVoxels(Z_Param_World,Z_Param_Out_ProcessedVoxels,Z_Param_Lifetime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execEditVoxelFoliageAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelFoliage,Z_Param_Out_ModifiedVoxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_ENUM(EVoxelRGBA,Z_Param_Layer);
		P_GET_STRUCT(FVoxelSurfaceEditsProcessedVoxels,Z_Param_ProcessedVoxels);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::EditVoxelFoliageAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedVoxels,Z_Param_World,EVoxelRGBA(Z_Param_Layer),Z_Param_ProcessedVoxels,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execEditVoxelFoliage)
	{
		P_GET_TARRAY_REF(FModifiedVoxelFoliage,Z_Param_Out_ModifiedVoxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_ENUM(EVoxelRGBA,Z_Param_Layer);
		P_GET_STRUCT(FVoxelSurfaceEditsProcessedVoxels,Z_Param_ProcessedVoxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::EditVoxelFoliage(Z_Param_Out_ModifiedVoxels,Z_Param_World,EVoxelRGBA(Z_Param_Layer),Z_Param_ProcessedVoxels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execEditVoxelMaterialsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedVoxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelPaintMaterial,Z_Param_Out_PaintMaterial);
		P_GET_STRUCT(FVoxelSurfaceEditsProcessedVoxels,Z_Param_ProcessedVoxels);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::EditVoxelMaterialsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedVoxels,Z_Param_World,Z_Param_Out_PaintMaterial,Z_Param_ProcessedVoxels,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execEditVoxelMaterials)
	{
		P_GET_TARRAY_REF(FModifiedVoxelMaterial,Z_Param_Out_ModifiedVoxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT_REF(FVoxelPaintMaterial,Z_Param_Out_PaintMaterial);
		P_GET_STRUCT(FVoxelSurfaceEditsProcessedVoxels,Z_Param_ProcessedVoxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::EditVoxelMaterials(Z_Param_Out_ModifiedVoxels,Z_Param_World,Z_Param_Out_PaintMaterial,Z_Param_ProcessedVoxels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execEditVoxelValuesAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedVoxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelSurfaceEditsProcessedVoxels,Z_Param_ProcessedVoxels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceDivisor);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::EditVoxelValuesAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ModifiedVoxels,Z_Param_World,Z_Param_ProcessedVoxels,Z_Param_DistanceDivisor,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execEditVoxelValues)
	{
		P_GET_TARRAY_REF(FModifiedVoxelValue,Z_Param_Out_ModifiedVoxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelSurfaceEditsProcessedVoxels,Z_Param_ProcessedVoxels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistanceDivisor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::EditVoxelValues(Z_Param_Out_ModifiedVoxels,Z_Param_World,Z_Param_ProcessedVoxels,Z_Param_DistanceDivisor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyFlatten)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_PlanePoint);
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
		P_GET_ENUM(EVoxelSDFMergeMode,Z_Param_MergeMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyFlatten(Z_Param_World,Z_Param_PlanePoint,Z_Param_PlaneNormal,EVoxelSDFMergeMode(Z_Param_MergeMode),Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyTerrace)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TerraceHeightInVoxels);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
		P_GET_PROPERTY(FIntProperty,Z_Param_ImmutableVoxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyTerrace(Z_Param_TerraceHeightInVoxels,Z_Param_Angle,Z_Param_ImmutableVoxels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execGetStrengthMaskScale)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ScaleX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_ScaleY);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Mask);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SizeY);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::GetStrengthMaskScale(Z_Param_Out_ScaleX,Z_Param_Out_ScaleY,Z_Param_World,Z_Param_Mask,Z_Param_SizeX,Z_Param_SizeY,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStrengthMask)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Mask);
		P_GET_STRUCT(FVector,Z_Param_EditPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleY);
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
		P_GET_STRUCT(FVector,Z_Param_PlaneTangent);
		P_GET_ENUM(EVoxelSamplerMode,Z_Param_SamplerMode);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyStrengthMask(Z_Param_World,Z_Param_Mask,Z_Param_EditPosition,Z_Param_ScaleX,Z_Param_ScaleY,Z_Param_PlaneNormal,Z_Param_PlaneTangent,EVoxelSamplerMode(Z_Param_SamplerMode),Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyTipFalloff)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyTipFalloff(Z_Param_World,Z_Param_Center,Z_Param_Radius,Z_Param_Falloff,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplySphericalFalloff)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplySphericalFalloff(Z_Param_World,Z_Param_Center,Z_Param_Radius,Z_Param_Falloff,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplySmoothFalloff)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplySmoothFalloff(Z_Param_World,Z_Param_Center,Z_Param_Radius,Z_Param_Falloff,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyLinearFalloff)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Falloff);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyLinearFalloff(Z_Param_World,Z_Param_Center,Z_Param_Radius,Z_Param_Falloff,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStrengthCurve)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_OBJECT(UCurveFloat,Z_Param_StrengthCurve);
		P_GET_UBOOL(Z_Param_bConvertToVoxelSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyStrengthCurve(Z_Param_World,Z_Param_Center,Z_Param_Radius,Z_Param_StrengthCurve,Z_Param_bConvertToVoxelSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyConstantStrength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Strength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStackElement*)Z_Param__Result=UVoxelSurfaceTools::ApplyConstantStrength(Z_Param_Strength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execGetBounds)
	{
		P_GET_STRUCT(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Voxels);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelIntBox*)Z_Param__Result=UVoxelSurfaceTools::GetBounds(Z_Param_Voxels);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStackAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsProcessedVoxels,Z_Param_Out_ProcessedVoxels);
		P_GET_STRUCT(FVoxelSurfaceEditsVoxels,Z_Param_Voxels);
		P_GET_STRUCT(FVoxelSurfaceEditsStack,Z_Param_Stack);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::ApplyStackAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_ProcessedVoxels,Z_Param_Voxels,Z_Param_Stack,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execApplyStack)
	{
		P_GET_STRUCT(FVoxelSurfaceEditsVoxels,Z_Param_Voxels);
		P_GET_STRUCT(FVoxelSurfaceEditsStack,Z_Param_Stack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsProcessedVoxels*)Z_Param__Result=UVoxelSurfaceTools::ApplyStack(Z_Param_Voxels,Z_Param_Stack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execAddToStack)
	{
		P_GET_STRUCT(FVoxelSurfaceEditsStack,Z_Param_Stack);
		P_GET_STRUCT(FVoxelSurfaceEditsStackElement,Z_Param_Element);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsStack*)Z_Param__Result=UVoxelSurfaceTools::AddToStack(Z_Param_Stack,Z_Param_Element);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxels2DAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bComputeNormals);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::FindSurfaceVoxels2DAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxels2D)
	{
		P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bComputeNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::FindSurfaceVoxels2D(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxelsFromDistanceField)
	{
		P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_GET_UBOOL(Z_Param_bMultiThreaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::FindSurfaceVoxelsFromDistanceField(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_MaxDistance,Z_Param_bMultiThreaded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxelsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bComputeNormals);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::FindSurfaceVoxelsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelSurfaceTools::execFindSurfaceVoxels)
	{
		P_GET_STRUCT_REF(FVoxelSurfaceEditsVoxels,Z_Param_Out_Voxels);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_UBOOL(Z_Param_bComputeNormals);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelSurfaceTools::FindSurfaceVoxels(Z_Param_Out_Voxels,Z_Param_World,Z_Param_Bounds,Z_Param_bComputeNormals);
		P_NATIVE_END;
	}
	void UVoxelSurfaceTools::StaticRegisterNativesUVoxelSurfaceTools()
	{
		UClass* Class = UVoxelSurfaceTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToStack", &UVoxelSurfaceTools::execAddToStack },
			{ "ApplyConstantStrength", &UVoxelSurfaceTools::execApplyConstantStrength },
			{ "ApplyFlatten", &UVoxelSurfaceTools::execApplyFlatten },
			{ "ApplyLinearFalloff", &UVoxelSurfaceTools::execApplyLinearFalloff },
			{ "ApplySmoothFalloff", &UVoxelSurfaceTools::execApplySmoothFalloff },
			{ "ApplySphericalFalloff", &UVoxelSurfaceTools::execApplySphericalFalloff },
			{ "ApplyStack", &UVoxelSurfaceTools::execApplyStack },
			{ "ApplyStackAsync", &UVoxelSurfaceTools::execApplyStackAsync },
			{ "ApplyStrengthCurve", &UVoxelSurfaceTools::execApplyStrengthCurve },
			{ "ApplyStrengthMask", &UVoxelSurfaceTools::execApplyStrengthMask },
			{ "ApplyTerrace", &UVoxelSurfaceTools::execApplyTerrace },
			{ "ApplyTipFalloff", &UVoxelSurfaceTools::execApplyTipFalloff },
			{ "DebugSurfaceVoxels", &UVoxelSurfaceTools::execDebugSurfaceVoxels },
			{ "EditVoxelFoliage", &UVoxelSurfaceTools::execEditVoxelFoliage },
			{ "EditVoxelFoliageAsync", &UVoxelSurfaceTools::execEditVoxelFoliageAsync },
			{ "EditVoxelMaterials", &UVoxelSurfaceTools::execEditVoxelMaterials },
			{ "EditVoxelMaterialsAsync", &UVoxelSurfaceTools::execEditVoxelMaterialsAsync },
			{ "EditVoxelValues", &UVoxelSurfaceTools::execEditVoxelValues },
			{ "EditVoxelValuesAsync", &UVoxelSurfaceTools::execEditVoxelValuesAsync },
			{ "FindSurfaceVoxels", &UVoxelSurfaceTools::execFindSurfaceVoxels },
			{ "FindSurfaceVoxels2D", &UVoxelSurfaceTools::execFindSurfaceVoxels2D },
			{ "FindSurfaceVoxels2DAsync", &UVoxelSurfaceTools::execFindSurfaceVoxels2DAsync },
			{ "FindSurfaceVoxelsAsync", &UVoxelSurfaceTools::execFindSurfaceVoxelsAsync },
			{ "FindSurfaceVoxelsFromDistanceField", &UVoxelSurfaceTools::execFindSurfaceVoxelsFromDistanceField },
			{ "GetBounds", &UVoxelSurfaceTools::execGetBounds },
			{ "GetStrengthMaskScale", &UVoxelSurfaceTools::execGetStrengthMaskScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics
	{
		struct VoxelSurfaceTools_eventAddToStack_Parms
		{
			FVoxelSurfaceEditsStack Stack;
			FVoxelSurfaceEditsStackElement Element;
			FVoxelSurfaceEditsStack ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Element;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventAddToStack_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Element = { "Element", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventAddToStack_Parms, Element), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventAddToStack_Parms, Stack), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Element,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::NewProp_Stack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "AddToStack", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventAddToStack_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics
	{
		struct VoxelSurfaceTools_eventApplyConstantStrength_Parms
		{
			float Strength;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyConstantStrength_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyConstantStrength_Parms, Strength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::NewProp_Strength,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "// Apply a constant strength to the surface voxels\n" },
		{ "CPP_Default_Strength", "1.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a constant strength to the surface voxels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyConstantStrength", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplyConstantStrength_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics
	{
		struct VoxelSurfaceTools_eventApplyFlatten_Parms
		{
			AVoxelWorld* World;
			FVector PlanePoint;
			FVector PlaneNormal;
			EVoxelSDFMergeMode MergeMode;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MergeMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MergeMode_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanePoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyFlatten_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyFlatten_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode = { "MergeMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, MergeMode), Z_Construct_UEnum_Voxel_EVoxelSDFMergeMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlanePoint = { "PlanePoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, PlanePoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyFlatten_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_MergeMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_PlanePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Make surface voxels go towards a plane\n\x09 * Important: if bExactDistanceField = true, this node should be called last! Modifying strengths after it will result\n\x09 * in glitchy behavior\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, required if bConvertToVoxelSpace = true\n\x09 * @param\x09PlanePoint\x09\x09\x09\x09""A point in the flatten plane, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09PlaneNormal\x09\x09\x09\x09The normal of the plane\n\x09 * @param\x09MergeMode\x09\x09\x09\x09How to merge the plane SDF\n\x09 * @param\x09""bConvertToVoxelSpace\x09If true, converts PlanePoint from world space to voxel space. Requires World to be non null\n\x09 * @return\x09\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_MergeMode", "Override" },
		{ "CPP_Default_PlaneNormal", "0.000000,0.000000,1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Make surface voxels go towards a plane\nImportant: if bExactDistanceField = true, this node should be called last! Modifying strengths after it will result\nin glitchy behavior\n@param       World                                   The voxel world, required if bConvertToVoxelSpace = true\n@param       PlanePoint                              A point in the flatten plane, in world space if bConvertToVoxelSpace = true\n@param       PlaneNormal                             The normal of the plane\n@param       MergeMode                               How to merge the plane SDF\n@param       bConvertToVoxelSpace    If true, converts PlanePoint from world space to voxel space. Requires World to be non null\n@return" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyFlatten", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplyFlatten_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics
	{
		struct VoxelSurfaceTools_eventApplyLinearFalloff_Parms
		{
			AVoxelWorld* World;
			FVector Center;
			float Radius;
			float Falloff;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyLinearFalloff_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyLinearFalloff_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyLinearFalloff_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyLinearFalloff_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyLinearFalloff_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyLinearFalloff_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyLinearFalloff_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply a linear falloff to surface voxels, based on their distance from a point.\n\x09 * If Distance is between 0 and Radius: Strength = 1\n\x09 * If Distance is between Radius and Radius + Falloff: 0 <= Strength <= 1\n\x09 * If Distance is beyond Radius + Falloff: Strength = 0\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09""Center\x09\x09\x09\x09\x09The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""Falloff\x09\x09\x09\x09\x09The falloff, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a linear falloff to surface voxels, based on their distance from a point.\nIf Distance is between 0 and Radius: Strength = 1\nIf Distance is between Radius and Radius + Falloff: 0 <= Strength <= 1\nIf Distance is beyond Radius + Falloff: Strength = 0\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       Center                                  The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n@param       Radius                                  The radius, in cm if bConvertToVoxelSpace = true\n@param       Falloff                                 The falloff, in cm if bConvertToVoxelSpace = true\n@param       bConvertToVoxelSpace    Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n@return      New voxels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyLinearFalloff", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplyLinearFalloff_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics
	{
		struct VoxelSurfaceTools_eventApplySmoothFalloff_Parms
		{
			AVoxelWorld* World;
			FVector Center;
			float Radius;
			float Falloff;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplySmoothFalloff_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplySmoothFalloff_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplySmoothFalloff_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplySmoothFalloff_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplySmoothFalloff_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplySmoothFalloff_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplySmoothFalloff_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply a smooth falloff to surface voxels, based on their distance from a point.\n\x09 * If Distance is between 0 and Radius: Strength = 1\n\x09 * If Distance is between Radius and Radius + Falloff: 0 <= Strength <= 1\n\x09 * If Distance is beyond Radius + Falloff: Strength = 0\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09""Center\x09\x09\x09\x09\x09The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""Falloff\x09\x09\x09\x09\x09The falloff, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a smooth falloff to surface voxels, based on their distance from a point.\nIf Distance is between 0 and Radius: Strength = 1\nIf Distance is between Radius and Radius + Falloff: 0 <= Strength <= 1\nIf Distance is beyond Radius + Falloff: Strength = 0\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       Center                                  The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n@param       Radius                                  The radius, in cm if bConvertToVoxelSpace = true\n@param       Falloff                                 The falloff, in cm if bConvertToVoxelSpace = true\n@param       bConvertToVoxelSpace    Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n@return      New voxels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplySmoothFalloff", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplySmoothFalloff_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics
	{
		struct VoxelSurfaceTools_eventApplySphericalFalloff_Parms
		{
			AVoxelWorld* World;
			FVector Center;
			float Radius;
			float Falloff;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplySphericalFalloff_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplySphericalFalloff_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplySphericalFalloff_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplySphericalFalloff_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplySphericalFalloff_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplySphericalFalloff_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplySphericalFalloff_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply a spherical falloff to surface voxels, based on their distance from a point.\n\x09 * If Distance is between 0 and Radius: Strength = 1\n\x09 * If Distance is between Radius and Radius + Falloff: 0 <= Strength <= 1\n\x09 * If Distance is beyond Radius + Falloff: Strength = 0\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09""Center\x09\x09\x09\x09\x09The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""Falloff\x09\x09\x09\x09\x09The falloff, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a spherical falloff to surface voxels, based on their distance from a point.\nIf Distance is between 0 and Radius: Strength = 1\nIf Distance is between Radius and Radius + Falloff: 0 <= Strength <= 1\nIf Distance is beyond Radius + Falloff: Strength = 0\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       Center                                  The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n@param       Radius                                  The radius, in cm if bConvertToVoxelSpace = true\n@param       Falloff                                 The falloff, in cm if bConvertToVoxelSpace = true\n@param       bConvertToVoxelSpace    Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n@return      New voxels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplySphericalFalloff", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplySphericalFalloff_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics
	{
		struct VoxelSurfaceTools_eventApplyStack_Parms
		{
			FVoxelSurfaceEditsVoxels Voxels;
			FVoxelSurfaceEditsStack Stack;
			FVoxelSurfaceEditsProcessedVoxels ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStack_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStack_Parms, Stack), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStack_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Stack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::NewProp_Voxels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStack", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplyStack_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics
	{
		struct VoxelSurfaceTools_eventApplyStackAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			FVoxelSurfaceEditsVoxels Voxels;
			FVoxelSurfaceEditsStack Stack;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stack;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyStackAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyStackAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Stack = { "Stack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, Stack), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStackAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Stack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_Voxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStackAsync", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplyStackAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics
	{
		struct VoxelSurfaceTools_eventApplyStrengthCurve_Parms
		{
			AVoxelWorld* World;
			FVector Center;
			float Radius;
			UCurveFloat* StrengthCurve;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StrengthCurve;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyStrengthCurve_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyStrengthCurve_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_StrengthCurve = { "StrengthCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, StrengthCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthCurve_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_StrengthCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply a strength curve to surface voxels, based on their distance from a point:\n\x09 * Strength = Curve.SampleAt(Distance(Voxel.Position, Center) / Radius)\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09""Center\x09\x09\x09\x09\x09The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius to divide the distance by, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09StrengthCurve\x09\x09\x09The strength curve\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center and Radius from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a strength curve to surface voxels, based on their distance from a point:\nStrength = Curve.SampleAt(Distance(Voxel.Position, Center) / Radius)\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       Center                                  The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n@param       Radius                                  The radius to divide the distance by, in cm if bConvertToVoxelSpace = true\n@param       StrengthCurve                   The strength curve\n@param       bConvertToVoxelSpace    Converts Center and Radius from world space to voxel space. Requires World to be non null\n@return      New voxels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStrengthCurve", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplyStrengthCurve_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics
	{
		struct VoxelSurfaceTools_eventApplyStrengthMask_Parms
		{
			AVoxelWorld* World;
			FVoxelFloatTexture Mask;
			FVector EditPosition;
			float ScaleX;
			float ScaleY;
			FVector PlaneNormal;
			FVector PlaneTangent;
			EVoxelSamplerMode SamplerMode;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SamplerMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SamplerMode_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneTangent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EditPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyStrengthMask_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyStrengthMask_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode = { "SamplerMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, SamplerMode), Z_Construct_UEnum_Voxel_EVoxelSamplerMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneTangent = { "PlaneTangent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, PlaneTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, ScaleY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, ScaleX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_EditPosition = { "EditPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, EditPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, Mask), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyStrengthMask_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_SamplerMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_PlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_ScaleX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_EditPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply a strength mask to surface voxels, based on their position projected onto a plane\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09Mask\x09\x09\x09\x09\x09The mask to apply\n\x09 * @param\x09""EditPosition\x09\x09\x09The voxel positions are computed relative to this. In world space if bConvertToVoxelSpace = true\n\x09 * @param\x09ScaleX\x09\x09\x09\x09\x09The sampling scale on the X axis. The bigger, the bigger the projected image will be.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09Recommended: Wanted size in voxels of the image / image size in pixels.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09""Can use GetStrengthMaskScale.\n\x09 * @param\x09ScaleY\x09\x09\x09\x09\x09The sampling scale on the Y axis. The bigger, the bigger the projected image will be.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09Recommended: Wanted size in voxels of the image / image size in pixels.\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09\x09""Can use GetStrengthMaskScale.\n\x09 * @param\x09PlaneNormal\n\x09 * @param\x09PlaneTangent\n\x09 * @param\x09SamplerMode\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center and Radius from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_PlaneNormal", "0.000000,0.000000,1.000000" },
		{ "CPP_Default_PlaneTangent", "1.000000,0.000000,0.000000" },
		{ "CPP_Default_SamplerMode", "Tile" },
		{ "CPP_Default_ScaleX", "1.000000" },
		{ "CPP_Default_ScaleY", "1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a strength mask to surface voxels, based on their position projected onto a plane\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       Mask                                    The mask to apply\n@param       EditPosition                    The voxel positions are computed relative to this. In world space if bConvertToVoxelSpace = true\n@param       ScaleX                                  The sampling scale on the X axis. The bigger, the bigger the projected image will be.\n                                                                     Recommended: Wanted size in voxels of the image / image size in pixels.\n                                                                     Can use GetStrengthMaskScale.\n@param       ScaleY                                  The sampling scale on the Y axis. The bigger, the bigger the projected image will be.\n                                                                     Recommended: Wanted size in voxels of the image / image size in pixels.\n                                                                     Can use GetStrengthMaskScale.\n@param       PlaneNormal\n@param       PlaneTangent\n@param       SamplerMode\n@param       bConvertToVoxelSpace    Converts Center and Radius from world space to voxel space. Requires World to be non null\n@return      New voxels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyStrengthMask", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplyStrengthMask_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics
	{
		struct VoxelSurfaceTools_eventApplyTerrace_Parms
		{
			int32 TerraceHeightInVoxels;
			float Angle;
			int32 ImmutableVoxels;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ImmutableVoxels;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TerraceHeightInVoxels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ImmutableVoxels = { "ImmutableVoxels", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, ImmutableVoxels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, Angle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_TerraceHeightInVoxels = { "TerraceHeightInVoxels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTerrace_Parms, TerraceHeightInVoxels), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_ImmutableVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_Angle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::NewProp_TerraceHeightInVoxels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ImmutableVoxels" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply terracing\n\x09 * @param\x09TerraceHeightInVoxels\x09The height of the terraces in voxels\n\x09 * @param\x09""Angle\x09\x09\x09\x09\x09The angle in degrees of the terraces borders. Not entirely precise. Between 0 and 180.\n\x09 * @param\x09ImmutableVoxels\x09\x09\x09The number of voxels to not change per terrace/height of the \"top layer\" of each terrace\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_Angle", "75.000000" },
		{ "CPP_Default_ImmutableVoxels", "1" },
		{ "CPP_Default_TerraceHeightInVoxels", "5" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply terracing\n@param       TerraceHeightInVoxels   The height of the terraces in voxels\n@param       Angle                                   The angle in degrees of the terraces borders. Not entirely precise. Between 0 and 180.\n@param       ImmutableVoxels                 The number of voxels to not change per terrace/height of the \"top layer\" of each terrace\n@return      New voxels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyTerrace", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplyTerrace_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics
	{
		struct VoxelSurfaceTools_eventApplyTipFalloff_Parms
		{
			AVoxelWorld* World;
			FVector Center;
			float Radius;
			float Falloff;
			bool bConvertToVoxelSpace;
			FVoxelSurfaceEditsStackElement ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Falloff;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTipFalloff_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventApplyTipFalloff_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventApplyTipFalloff_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTipFalloff_Parms, Falloff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTipFalloff_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTipFalloff_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventApplyTipFalloff_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_Falloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Apply a tip falloff to surface voxels, based on their distance from a point.\n\x09 * If Distance is between 0 and Radius: Strength = 1\n\x09 * If Distance is between Radius and Radius + Falloff: 0 <= Strength <= 1\n\x09 * If Distance is beyond Radius + Falloff: Strength = 0\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, can be null if bConvertToVoxelSpace = false\n\x09 * @param\x09""Center\x09\x09\x09\x09\x09The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n\x09 * @param\x09Radius\x09\x09\x09\x09\x09The radius, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""Falloff\x09\x09\x09\x09\x09The falloff, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n\x09 * @return\x09New voxels\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Apply a tip falloff to surface voxels, based on their distance from a point.\nIf Distance is between 0 and Radius: Strength = 1\nIf Distance is between Radius and Radius + Falloff: 0 <= Strength <= 1\nIf Distance is beyond Radius + Falloff: Strength = 0\n@param       World                                   The voxel world, can be null if bConvertToVoxelSpace = false\n@param       Center                                  The center to compute the distance from, in world space if bConvertToVoxelSpace = true\n@param       Radius                                  The radius, in cm if bConvertToVoxelSpace = true\n@param       Falloff                                 The falloff, in cm if bConvertToVoxelSpace = true\n@param       bConvertToVoxelSpace    Converts Center, Radius and Falloff from world space to voxel space. Requires World to be non null\n@return      New voxels" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "ApplyTipFalloff", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventApplyTipFalloff_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics
	{
		struct VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms
		{
			AVoxelWorld* World;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			float Lifetime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessedVoxels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms, Lifetime), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_Lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "CPP_Default_Lifetime", "1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "DebugSurfaceVoxels", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventDebugSurfaceVoxels_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics
	{
		struct VoxelSurfaceTools_eventEditVoxelFoliage_Parms
		{
			TArray<FModifiedVoxelFoliage> ModifiedVoxels;
			AVoxelWorld* World;
			EVoxelRGBA Layer;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Layer_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelFoliage_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelFoliage_Parms, Layer), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_Layer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelFoliage_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelFoliage_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelFoliage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_Layer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_ModifiedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::NewProp_ModifiedVoxels_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "EditVoxelFoliage", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventEditVoxelFoliage_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics
	{
		struct VoxelSurfaceTools_eventEditVoxelFoliageAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelFoliage> ModifiedVoxels;
			AVoxelWorld* World;
			EVoxelRGBA Layer;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Layer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Layer_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventEditVoxelFoliageAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventEditVoxelFoliageAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelFoliageAsync_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelFoliageAsync_Parms, Layer), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_Layer_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelFoliageAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelFoliageAsync_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelFoliage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelFoliageAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelFoliageAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_Layer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_Layer_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_ModifiedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_ModifiedVoxels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "EditVoxelFoliageAsync", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventEditVoxelFoliageAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics
	{
		struct VoxelSurfaceTools_eventEditVoxelMaterials_Parms
		{
			TArray<FModifiedVoxelMaterial> ModifiedVoxels;
			AVoxelWorld* World;
			FVoxelPaintMaterial PaintMaterial;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelMaterials_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_PaintMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelMaterials_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_PaintMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_PaintMaterial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelMaterials_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelMaterials_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_ModifiedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::NewProp_ModifiedVoxels_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "EditVoxelMaterials", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventEditVoxelMaterials_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics
	{
		struct VoxelSurfaceTools_eventEditVoxelMaterialsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelMaterial> ModifiedVoxels;
			AVoxelWorld* World;
			FVoxelPaintMaterial PaintMaterial;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaintMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PaintMaterial;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventEditVoxelMaterialsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventEditVoxelMaterialsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelMaterialsAsync_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_PaintMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_PaintMaterial = { "PaintMaterial", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelMaterialsAsync_Parms, PaintMaterial), Z_Construct_UScriptStruct_FVoxelPaintMaterial, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_PaintMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_PaintMaterial_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelMaterialsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelMaterialsAsync_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelMaterial, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelMaterialsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelMaterialsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_PaintMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_ModifiedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_ModifiedVoxels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "EditVoxelMaterialsAsync", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventEditVoxelMaterialsAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics
	{
		struct VoxelSurfaceTools_eventEditVoxelValues_Parms
		{
			TArray<FModifiedVoxelValue> ModifiedVoxels;
			AVoxelWorld* World;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			float DistanceDivisor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceDivisor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::NewProp_DistanceDivisor = { "DistanceDivisor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelValues_Parms, DistanceDivisor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelValues_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelValues_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::NewProp_DistanceDivisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::NewProp_ModifiedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::NewProp_ModifiedVoxels_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DistanceDivisor" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "CPP_Default_DistanceDivisor", "1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "EditVoxelValues", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventEditVoxelValues_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics
	{
		struct VoxelSurfaceTools_eventEditVoxelValuesAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FModifiedVoxelValue> ModifiedVoxels;
			AVoxelWorld* World;
			FVoxelSurfaceEditsProcessedVoxels ProcessedVoxels;
			float DistanceDivisor;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceDivisor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProcessedVoxels;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ModifiedVoxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifiedVoxels_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventEditVoxelValuesAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventEditVoxelValuesAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_DistanceDivisor = { "DistanceDivisor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelValuesAsync_Parms, DistanceDivisor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_ProcessedVoxels = { "ProcessedVoxels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelValuesAsync_Parms, ProcessedVoxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelValuesAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_ModifiedVoxels = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelValuesAsync_Parms, ModifiedVoxels), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_ModifiedVoxels_Inner = { "ModifiedVoxels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FModifiedVoxelValue, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelValuesAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventEditVoxelValuesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_DistanceDivisor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_ProcessedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_ModifiedVoxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_ModifiedVoxels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "DistanceDivisor, bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_DistanceDivisor", "1.000000" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "EditVoxelValuesAsync", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventEditVoxelValuesAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics
	{
		struct VoxelSurfaceTools_eventFindSurfaceVoxels_Parms
		{
			FVoxelSurfaceEditsVoxels Voxels;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bComputeNormals;
		};
		static void NewProp_bComputeNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxels_Parms*)Obj)->bComputeNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_bComputeNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::NewProp_Voxels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
		{ "CPP_Default_bComputeNormals", "false" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxels", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics
	{
		struct VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms
		{
			FVoxelSurfaceEditsVoxels Voxels;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bComputeNormals;
		};
		static void NewProp_bComputeNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms*)Obj)->bComputeNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_bComputeNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::NewProp_Voxels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
		{ "CPP_Default_bComputeNormals", "false" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxels2D", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2D_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics
	{
		struct VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelSurfaceEditsVoxels Voxels;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bComputeNormals;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bComputeNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms*)Obj)->bComputeNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_bComputeNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_Voxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
		{ "CPP_Default_bComputeNormals", "false" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Find voxels that are on the surface. Only keep the one with the surface right above them that are facing up. If 2 surface voxels have the same X Y, will only keep the one with the higher Z\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxels2DAsync", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventFindSurfaceVoxels2DAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics
	{
		struct VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelSurfaceEditsVoxels Voxels;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			bool bComputeNormals;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bComputeNormals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeNormals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms*)Obj)->bComputeNormals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals = { "bComputeNormals", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_bComputeNormals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_Voxels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09\x09\x09""Bounds to look in\n\x09 * @param\x09""bComputeNormals\x09\x09\x09If true, compute the voxel normals. More expensive, but required for some functions.\n\x09 */" },
		{ "CPP_Default_bComputeNormals", "false" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Find voxels that are on the surface. Faster than FindSurfaceVoxelsFromDistanceField, but the values won't be exact distances\n@param       World                                   The voxel world\n@param       Bounds                                  Bounds to look in\n@param       bComputeNormals                 If true, compute the voxel normals. More expensive, but required for some functions." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxelsAsync", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsAsync_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics
	{
		struct VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms
		{
			FVoxelSurfaceEditsVoxels Voxels;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			float MaxDistance;
			bool bMultiThreaded;
		};
		static void NewProp_bMultiThreaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiThreaded;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms*)Obj)->bMultiThreaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded = { "bMultiThreaded", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_bMultiThreaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::NewProp_Voxels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bMultiThreaded" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Find voxels that are on the surface using an exact computation of the distance field using the GPU\n\x09 * @param\x09World\x09\x09\x09The voxel world\n\x09 * @param\x09""Bounds\x09\x09\x09""Bounds to look in\n\x09 * @param\x09MaxDistance\x09\x09How far from the surface the distance field needs to be exact. Keep low for better performance. Approximation: MaxDistance = Edit Strength + 3\n\x09 * @param\x09""bMultiThreaded\x09If true will multithread the CPU loops\n\x09 */" },
		{ "CPP_Default_bMultiThreaded", "false" },
		{ "CPP_Default_MaxDistance", "2.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Find voxels that are on the surface using an exact computation of the distance field using the GPU\n@param       World                   The voxel world\n@param       Bounds                  Bounds to look in\n@param       MaxDistance             How far from the surface the distance field needs to be exact. Keep low for better performance. Approximation: MaxDistance = Edit Strength + 3\n@param       bMultiThreaded  If true will multithread the CPU loops" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "FindSurfaceVoxelsFromDistanceField", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventFindSurfaceVoxelsFromDistanceField_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics
	{
		struct VoxelSurfaceTools_eventGetBounds_Parms
		{
			FVoxelSurfaceEditsProcessedVoxels Voxels;
			FVoxelIntBox ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Voxels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_Voxels = { "Voxels", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetBounds_Parms, Voxels), Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::NewProp_Voxels,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "GetBounds", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventGetBounds_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics
	{
		struct VoxelSurfaceTools_eventGetStrengthMaskScale_Parms
		{
			float ScaleX;
			float ScaleY;
			AVoxelWorld* World;
			FVoxelFloatTexture Mask;
			float SizeX;
			float SizeY;
			bool bConvertToVoxelSpace;
		};
		static void NewProp_bConvertToVoxelSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bConvertToVoxelSpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace_SetBit(void* Obj)
	{
		((VoxelSurfaceTools_eventGetStrengthMaskScale_Parms*)Obj)->bConvertToVoxelSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace = { "bConvertToVoxelSpace", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms), &Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, Mask), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, ScaleY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms, ScaleX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_bConvertToVoxelSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_Mask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::NewProp_ScaleX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bConvertToVoxelSpace" },
		{ "Category", "Voxel|Tools|Surface Tools" },
		{ "Comment", "/**\n\x09 * Compute the scale for ApplyStrengthMask from a wanted size\n\x09 * @param\x09World\x09\x09\x09\x09\x09The voxel world, required if bConvertToVoxelSpace = true\n\x09 * @param\x09Mask\x09\x09\x09\x09\x09The mask\n\x09 * @param\x09SizeX\x09\x09\x09\x09\x09The wanted size on the X axis, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09SizeY\x09\x09\x09\x09\x09The wanted size on the Y axis, in cm if bConvertToVoxelSpace = true\n\x09 * @param\x09""bConvertToVoxelSpace\x09""Converts SizeX and SizeY from world space to voxel space. Requires World to be non null\n\x09 */" },
		{ "CPP_Default_bConvertToVoxelSpace", "true" },
		{ "CPP_Default_SizeX", "1000.000000" },
		{ "CPP_Default_SizeY", "1000.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
		{ "ToolTip", "Compute the scale for ApplyStrengthMask from a wanted size\n@param       World                                   The voxel world, required if bConvertToVoxelSpace = true\n@param       Mask                                    The mask\n@param       SizeX                                   The wanted size on the X axis, in cm if bConvertToVoxelSpace = true\n@param       SizeY                                   The wanted size on the Y axis, in cm if bConvertToVoxelSpace = true\n@param       bConvertToVoxelSpace    Converts SizeX and SizeY from world space to voxel space. Requires World to be non null" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSurfaceTools, nullptr, "GetStrengthMaskScale", nullptr, nullptr, sizeof(VoxelSurfaceTools_eventGetStrengthMaskScale_Parms), Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelSurfaceTools_NoRegister()
	{
		return UVoxelSurfaceTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSurfaceTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSurfaceTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelSurfaceTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_AddToStack, "AddToStack" }, // 798643682
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyConstantStrength, "ApplyConstantStrength" }, // 2517890902
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyFlatten, "ApplyFlatten" }, // 1504225592
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyLinearFalloff, "ApplyLinearFalloff" }, // 2376912777
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplySmoothFalloff, "ApplySmoothFalloff" }, // 2449034659
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplySphericalFalloff, "ApplySphericalFalloff" }, // 3476507471
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStack, "ApplyStack" }, // 3531819585
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStackAsync, "ApplyStackAsync" }, // 822223968
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthCurve, "ApplyStrengthCurve" }, // 3367885046
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyStrengthMask, "ApplyStrengthMask" }, // 1708940210
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTerrace, "ApplyTerrace" }, // 4048478989
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_ApplyTipFalloff, "ApplyTipFalloff" }, // 2992308945
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_DebugSurfaceVoxels, "DebugSurfaceVoxels" }, // 1872795653
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliage, "EditVoxelFoliage" }, // 1007757034
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelFoliageAsync, "EditVoxelFoliageAsync" }, // 1399454976
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterials, "EditVoxelMaterials" }, // 2910816976
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelMaterialsAsync, "EditVoxelMaterialsAsync" }, // 3505183697
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValues, "EditVoxelValues" }, // 1774128693
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_EditVoxelValuesAsync, "EditVoxelValuesAsync" }, // 135743047
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels, "FindSurfaceVoxels" }, // 3575977408
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2D, "FindSurfaceVoxels2D" }, // 201533068
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxels2DAsync, "FindSurfaceVoxels2DAsync" }, // 1797305117
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsAsync, "FindSurfaceVoxelsAsync" }, // 1138839659
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_FindSurfaceVoxelsFromDistanceField, "FindSurfaceVoxelsFromDistanceField" }, // 4136070017
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_GetBounds, "GetBounds" }, // 2738729792
		{ &Z_Construct_UFunction_UVoxelSurfaceTools_GetStrengthMaskScale, "GetStrengthMaskScale" }, // 123449177
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSurfaceTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelSurfaceTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSurfaceTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSurfaceTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSurfaceTools_Statics::ClassParams = {
		&UVoxelSurfaceTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSurfaceTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSurfaceTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSurfaceTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSurfaceTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSurfaceTools, 1262739789);
	template<> VOXEL_API UClass* StaticClass<UVoxelSurfaceTools>()
	{
		return UVoxelSurfaceTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSurfaceTools(Z_Construct_UClass_UVoxelSurfaceTools, &UVoxelSurfaceTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSurfaceTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSurfaceTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
