// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelDebug/VoxelDebugUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDebugUtilities() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDebugUtilities_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDebugUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelDataType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelDebugUtilities::execDrawDataOctree)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_ENUM(EVoxelDataType,Z_Param_DataType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
		P_GET_UBOOL(Z_Param_bShowSingle);
		P_GET_UBOOL(Z_Param_bShowCached);
		P_GET_STRUCT(FColor,Z_Param_SingleColor);
		P_GET_STRUCT(FColor,Z_Param_SingleDirtyColor);
		P_GET_STRUCT(FColor,Z_Param_CachedColor);
		P_GET_STRUCT(FColor,Z_Param_DirtyColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDebugUtilities::DrawDataOctree(Z_Param_World,EVoxelDataType(Z_Param_DataType),Z_Param_Lifetime,Z_Param_bShowSingle,Z_Param_bShowCached,Z_Param_SingleColor,Z_Param_SingleDirtyColor,Z_Param_CachedColor,Z_Param_DirtyColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDebugUtilities::execDebugVoxelsInsideBounds)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_UBOOL(Z_Param_bDebugDensities);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDebugUtilities::DebugVoxelsInsideBounds(Z_Param_World,Z_Param_Bounds,Z_Param_Color,Z_Param_Lifetime,Z_Param_Thickness,Z_Param_bDebugDensities,Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelDebugUtilities::execDrawDebugIntBox)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelDebugUtilities::DrawDebugIntBox(Z_Param_World,Z_Param_Bounds,Z_Param_Transform,Z_Param_Lifetime,Z_Param_Thickness,Z_Param_Color);
		P_NATIVE_END;
	}
	void UVoxelDebugUtilities::StaticRegisterNativesUVoxelDebugUtilities()
	{
		UClass* Class = UVoxelDebugUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugVoxelsInsideBounds", &UVoxelDebugUtilities::execDebugVoxelsInsideBounds },
			{ "DrawDataOctree", &UVoxelDebugUtilities::execDrawDataOctree },
			{ "DrawDebugIntBox", &UVoxelDebugUtilities::execDrawDebugIntBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics
	{
		struct VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			FLinearColor Color;
			float Lifetime;
			float Thickness;
			bool bDebugDensities;
			FLinearColor TextColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static void NewProp_bDebugDensities_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugDensities;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_bDebugDensities_SetBit(void* Obj)
	{
		((VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms*)Obj)->bDebugDensities = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_bDebugDensities = { "bDebugDensities", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms), &Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_bDebugDensities_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, Lifetime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_bDebugDensities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Debug" },
		{ "CPP_Default_bDebugDensities", "true" },
		{ "CPP_Default_Color", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Lifetime", "1.000000" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "1.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelDebugUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDebugUtilities, nullptr, "DebugVoxelsInsideBounds", nullptr, nullptr, sizeof(VoxelDebugUtilities_eventDebugVoxelsInsideBounds_Parms), Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics
	{
		struct VoxelDebugUtilities_eventDrawDataOctree_Parms
		{
			AVoxelWorld* World;
			EVoxelDataType DataType;
			float Lifetime;
			bool bShowSingle;
			bool bShowCached;
			FColor SingleColor;
			FColor SingleDirtyColor;
			FColor CachedColor;
			FColor DirtyColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirtyColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SingleDirtyColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SingleColor;
		static void NewProp_bShowCached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowCached;
		static void NewProp_bShowSingle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowSingle;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DirtyColor = { "DirtyColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, DirtyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_CachedColor = { "CachedColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, CachedColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_SingleDirtyColor = { "SingleDirtyColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, SingleDirtyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_SingleColor = { "SingleColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, SingleColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowCached_SetBit(void* Obj)
	{
		((VoxelDebugUtilities_eventDrawDataOctree_Parms*)Obj)->bShowCached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowCached = { "bShowCached", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDebugUtilities_eventDrawDataOctree_Parms), &Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowCached_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowSingle_SetBit(void* Obj)
	{
		((VoxelDebugUtilities_eventDrawDataOctree_Parms*)Obj)->bShowSingle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowSingle = { "bShowSingle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelDebugUtilities_eventDrawDataOctree_Parms), &Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowSingle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, Lifetime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, DataType), Z_Construct_UEnum_Voxel_EVoxelDataType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDataOctree_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DirtyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_CachedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_SingleDirtyColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_SingleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowCached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_bShowSingle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_Lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Debug" },
		{ "CPP_Default_bShowCached", "false" },
		{ "CPP_Default_bShowSingle", "false" },
		{ "CPP_Default_CachedColor", "(R=255,G=0,B=0,A=255)" },
		{ "CPP_Default_DirtyColor", "(R=255,G=0,B=0,A=255)" },
		{ "CPP_Default_Lifetime", "0.000000" },
		{ "CPP_Default_SingleColor", "(R=255,G=0,B=0,A=255)" },
		{ "CPP_Default_SingleDirtyColor", "(R=255,G=0,B=0,A=255)" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelDebugUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDebugUtilities, nullptr, "DrawDataOctree", nullptr, nullptr, sizeof(VoxelDebugUtilities_eventDrawDataOctree_Parms), Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics
	{
		struct VoxelDebugUtilities_eventDrawDebugIntBox_Parms
		{
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			FTransform Transform;
			float Lifetime;
			float Thickness;
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thickness;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, Thickness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, Lifetime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelDebugUtilities_eventDrawDebugIntBox_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Thickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Lifetime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Transform" },
		{ "Category", "Voxel|Debug" },
		{ "CPP_Default_Color", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Lifetime", "1.000000" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelDebugUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelDebugUtilities, nullptr, "DrawDebugIntBox", nullptr, nullptr, sizeof(VoxelDebugUtilities_eventDrawDebugIntBox_Parms), Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelDebugUtilities_NoRegister()
	{
		return UVoxelDebugUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDebugUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDebugUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelDebugUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelDebugUtilities_DebugVoxelsInsideBounds, "DebugVoxelsInsideBounds" }, // 381466795
		{ &Z_Construct_UFunction_UVoxelDebugUtilities_DrawDataOctree, "DrawDataOctree" }, // 2659249392
		{ &Z_Construct_UFunction_UVoxelDebugUtilities_DrawDebugIntBox, "DrawDebugIntBox" }, // 351957762
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDebugUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelDebug/VoxelDebugUtilities.h" },
		{ "ModuleRelativePath", "Public/VoxelDebug/VoxelDebugUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDebugUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDebugUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDebugUtilities_Statics::ClassParams = {
		&UVoxelDebugUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDebugUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDebugUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDebugUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDebugUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDebugUtilities, 3157865898);
	template<> VOXEL_API UClass* StaticClass<UVoxelDebugUtilities>()
	{
		return UVoxelDebugUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDebugUtilities(Z_Construct_UClass_UVoxelDebugUtilities, &UVoxelDebugUtilities::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelDebugUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDebugUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
