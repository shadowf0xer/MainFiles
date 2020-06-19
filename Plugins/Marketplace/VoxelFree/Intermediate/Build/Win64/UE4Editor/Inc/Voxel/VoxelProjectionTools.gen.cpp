// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelProjectionTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelProjectionTools() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelProjectionShape();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelProjectionHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelLineTraceParameters();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelProjectionTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelProjectionTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EVoxelProjectionShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelProjectionShape, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelProjectionShape"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelProjectionShape>()
	{
		return EVoxelProjectionShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelProjectionShape(EVoxelProjectionShape_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelProjectionShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelProjectionShape_Hash() { return 2244193729U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelProjectionShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelProjectionShape"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelProjectionShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelProjectionShape::Circle", (int64)EVoxelProjectionShape::Circle },
				{ "EVoxelProjectionShape::Square", (int64)EVoxelProjectionShape::Square },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Circle.Name", "EVoxelProjectionShape::Circle" },
				{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
				{ "Square.Name", "EVoxelProjectionShape::Square" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelProjectionShape",
				"EVoxelProjectionShape",
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
class UScriptStruct* FVoxelProjectionHit::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelProjectionHit_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelProjectionHit, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelProjectionHit"), sizeof(FVoxelProjectionHit), Get_Z_Construct_UScriptStruct_FVoxelProjectionHit_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelProjectionHit>()
{
	return FVoxelProjectionHit::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelProjectionHit(FVoxelProjectionHit::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelProjectionHit"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelProjectionHit
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelProjectionHit()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelProjectionHit")),new UScriptStruct::TCppStructOps<FVoxelProjectionHit>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelProjectionHit;
	struct Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanePosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelProjectionHit>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_Hit_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelProjectionHit, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_Hit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_PlanePosition_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Position on the projection plane\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
		{ "ToolTip", "Position on the projection plane" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_PlanePosition = { "PlanePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelProjectionHit, PlanePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_PlanePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_PlanePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_VoxelPosition_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_VoxelPosition = { "VoxelPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelProjectionHit, VoxelPosition), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_VoxelPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_VoxelPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_PlanePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::NewProp_VoxelPosition,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelProjectionHit",
		sizeof(FVoxelProjectionHit),
		alignof(FVoxelProjectionHit),
		Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelProjectionHit()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelProjectionHit_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelProjectionHit"), sizeof(FVoxelProjectionHit), Get_Z_Construct_UScriptStruct_FVoxelProjectionHit_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelProjectionHit_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelProjectionHit_Hash() { return 1581787902U; }
class UScriptStruct* FVoxelLineTraceParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelLineTraceParameters, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelLineTraceParameters"), sizeof(FVoxelLineTraceParameters), Get_Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelLineTraceParameters>()
{
	return FVoxelLineTraceParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelLineTraceParameters(FVoxelLineTraceParameters::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelLineTraceParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelLineTraceParameters
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelLineTraceParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelLineTraceParameters")),new UScriptStruct::TCppStructOps<FVoxelLineTraceParameters>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelLineTraceParameters;
	struct Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceHitColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebugType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionChannelsToIgnore;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannelsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeMake", "Voxel.VoxelProjectionTools.MakeVoxelLineTraceParameters" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelLineTraceParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawTime_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, DrawTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceHitColor_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceHitColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceHitColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceColor_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawDebugType_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawDebugType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawDebugType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore = { "CollisionChannelsToIgnore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, CollisionChannelsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_Inner = { "CollisionChannelsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelLineTraceParameters, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceHitColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_TraceColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::NewProp_CollisionChannel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelLineTraceParameters",
		sizeof(FVoxelLineTraceParameters),
		alignof(FVoxelLineTraceParameters),
		Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelLineTraceParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelLineTraceParameters"), sizeof(FVoxelLineTraceParameters), Get_Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelLineTraceParameters_Hash() { return 2244437331U; }
	DEFINE_FUNCTION(UVoxelProjectionTools::execCreateSurfaceVoxelsFromHitsWithExactValues)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsVoxels*)Z_Param__Result=UVoxelProjectionTools::CreateSurfaceVoxelsFromHitsWithExactValues(Z_Param_World,Z_Param_Out_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelProjectionTools::execCreateSurfaceVoxelsFromHits)
	{
		P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelSurfaceEditsVoxels*)Z_Param__Result=UVoxelProjectionTools::CreateSurfaceVoxelsFromHits(Z_Param_Out_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelProjectionTools::execGetHitsAveragePosition)
	{
		P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVoxelProjectionTools::GetHitsAveragePosition(Z_Param_Out_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelProjectionTools::execGetHitsAverageNormal)
	{
		P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVoxelProjectionTools::GetHitsAverageNormal(Z_Param_Out_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelProjectionTools::execGetHitsPositions)
	{
		P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FIntVector>*)Z_Param__Result=UVoxelProjectionTools::GetHitsPositions(Z_Param_Out_Hits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelProjectionTools::execFindProjectionVoxelsAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelLineTraceParameters,Z_Param_Parameters);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_ENUM(EVoxelProjectionShape,Z_Param_Shape);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NumRays);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVoxelProjectionTools::FindProjectionVoxelsAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Hits,Z_Param_World,Z_Param_Parameters,Z_Param_Position,Z_Param_Direction,Z_Param_Radius,EVoxelProjectionShape(Z_Param_Shape),Z_Param_NumRays,Z_Param_MaxDistance,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelProjectionTools::execFindProjectionVoxels)
	{
		P_GET_TARRAY_REF(FVoxelProjectionHit,Z_Param_Out_Hits);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelLineTraceParameters,Z_Param_Parameters);
		P_GET_STRUCT(FVector,Z_Param_Position);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_ENUM(EVoxelProjectionShape,Z_Param_Shape);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NumRays);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVoxelProjectionTools::FindProjectionVoxels(Z_Param_Out_Hits,Z_Param_World,Z_Param_Parameters,Z_Param_Position,Z_Param_Direction,Z_Param_Radius,EVoxelProjectionShape(Z_Param_Shape),Z_Param_NumRays,Z_Param_MaxDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelProjectionTools::execMakeVoxelLineTraceParameters)
	{
		P_GET_TARRAY(TEnumAsByte<ECollisionChannel>,Z_Param_CollisionChannelsToIgnore);
		P_GET_TARRAY(AActor*,Z_Param_ActorsToIgnore);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelLineTraceParameters*)Z_Param__Result=UVoxelProjectionTools::MakeVoxelLineTraceParameters(Z_Param_CollisionChannelsToIgnore,Z_Param_ActorsToIgnore,ECollisionChannel(Z_Param_CollisionChannel),EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime);
		P_NATIVE_END;
	}
	void UVoxelProjectionTools::StaticRegisterNativesUVoxelProjectionTools()
	{
		UClass* Class = UVoxelProjectionTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSurfaceVoxelsFromHits", &UVoxelProjectionTools::execCreateSurfaceVoxelsFromHits },
			{ "CreateSurfaceVoxelsFromHitsWithExactValues", &UVoxelProjectionTools::execCreateSurfaceVoxelsFromHitsWithExactValues },
			{ "FindProjectionVoxels", &UVoxelProjectionTools::execFindProjectionVoxels },
			{ "FindProjectionVoxelsAsync", &UVoxelProjectionTools::execFindProjectionVoxelsAsync },
			{ "GetHitsAverageNormal", &UVoxelProjectionTools::execGetHitsAverageNormal },
			{ "GetHitsAveragePosition", &UVoxelProjectionTools::execGetHitsAveragePosition },
			{ "GetHitsPositions", &UVoxelProjectionTools::execGetHitsPositions },
			{ "MakeVoxelLineTraceParameters", &UVoxelProjectionTools::execMakeVoxelLineTraceParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics
	{
		struct VoxelProjectionTools_eventCreateSurfaceVoxelsFromHits_Parms
		{
			TArray<FVoxelProjectionHit> Hits;
			FVoxelSurfaceEditsVoxels ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHits_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHits_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::NewProp_Hits_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
		{ "Comment", "// For some surface tools you'll need to use CreateSurfaceVoxelsFromHitsWithExactValues instead\n" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
		{ "ToolTip", "For some surface tools you'll need to use CreateSurfaceVoxelsFromHitsWithExactValues instead" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "CreateSurfaceVoxelsFromHits", nullptr, nullptr, sizeof(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHits_Parms), Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics
	{
		struct VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms
		{
			AVoxelWorld* World;
			TArray<FVoxelProjectionHit> Hits;
			FVoxelSurfaceEditsVoxels ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_Hits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
		{ "Comment", "// Will store the voxel values\n" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
		{ "ToolTip", "Will store the voxel values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "CreateSurfaceVoxelsFromHitsWithExactValues", nullptr, nullptr, sizeof(VoxelProjectionTools_eventCreateSurfaceVoxelsFromHitsWithExactValues_Parms), Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics
	{
		struct VoxelProjectionTools_eventFindProjectionVoxels_Parms
		{
			TArray<FVoxelProjectionHit> Hits;
			AVoxelWorld* World;
			FVoxelLineTraceParameters Parameters;
			FVector Position;
			FVector Direction;
			float Radius;
			EVoxelProjectionShape Shape;
			float NumRays;
			float MaxDistance;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumRays;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Shape;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_NumRays = { "NumRays", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, NumRays), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Shape), Z_Construct_UEnum_Voxel_EVoxelProjectionShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Parameters), Z_Construct_UScriptStruct_FVoxelLineTraceParameters, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxels_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_NumRays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Shape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Shape_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::NewProp_Hits_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
		{ "Comment", "/**\n\x09 * Find voxels using linetraces\n\x09 * @param World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Parameters\x09\x09\x09Linetraces parameters\n\x09 * @param Position\x09\x09\x09\x09The center of the linetraces\n\x09 * @param Direction\x09\x09\x09\x09The direction of the linetraces\n\x09 * @param Radius\x09\x09\x09\x09The radius in world space (cm)\n\x09 * @param Shape\x09\x09\x09\x09\x09The shape of the rays start positions\n\x09 * @param NumRays\x09\x09\x09\x09The approximate number of rays to trace\n\x09 * @param MaxDistance\x09\x09\x09The max ray distance\n\x09 * @return\x09Number of rays actually traced (should be close to NumRays)\n\x09 */" },
		{ "CPP_Default_MaxDistance", "1000000000.000000" },
		{ "CPP_Default_NumRays", "100.000000" },
		{ "CPP_Default_Radius", "100.000000" },
		{ "CPP_Default_Shape", "Circle" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
		{ "ToolTip", "Find voxels using linetraces\n@param World                                 The voxel world\n@param Parameters                    Linetraces parameters\n@param Position                              The center of the linetraces\n@param Direction                             The direction of the linetraces\n@param Radius                                The radius in world space (cm)\n@param Shape                                 The shape of the rays start positions\n@param NumRays                               The approximate number of rays to trace\n@param MaxDistance                   The max ray distance\n@return      Number of rays actually traced (should be close to NumRays)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "FindProjectionVoxels", nullptr, nullptr, sizeof(VoxelProjectionTools_eventFindProjectionVoxels_Parms), Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics
	{
		struct VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<FVoxelProjectionHit> Hits;
			AVoxelWorld* World;
			FVoxelLineTraceParameters Parameters;
			FVector Position;
			FVector Direction;
			float Radius;
			EVoxelProjectionShape Shape;
			float NumRays;
			float MaxDistance;
			bool bHideLatentWarnings;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NumRays;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Shape;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms), &Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, MaxDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_NumRays = { "NumRays", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, NumRays), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Shape), Z_Construct_UEnum_Voxel_EVoxelProjectionShape, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Parameters), Z_Construct_UScriptStruct_FVoxelLineTraceParameters, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_NumRays,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Shape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Shape_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Parameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_Hits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bHideLatentWarnings" },
		{ "Category", "Voxel|Tools|Projection Tools" },
		{ "Comment", "/**\n\x09 * Find voxels using linetraces, asynchronously\n\x09 * @param World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Parameters\x09\x09\x09Linetraces parameters\n\x09 * @param Position\x09\x09\x09\x09The center of the linetraces\n\x09 * @param Direction\x09\x09\x09\x09The direction of the linetraces\n\x09 * @param Radius\x09\x09\x09\x09The radius in world space (cm)\n\x09 * @param Shape\x09\x09\x09\x09\x09The shape of the rays start positions\n\x09 * @param NumRays\x09\x09\x09\x09The approximate number of rays to trace\n\x09 * @param MaxDistance\x09\x09\x09The max ray distance\n\x09 * @return\x09Number of rays actually traced (should be close to NumRays)\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_MaxDistance", "1000000000.000000" },
		{ "CPP_Default_NumRays", "100.000000" },
		{ "CPP_Default_Radius", "100.000000" },
		{ "CPP_Default_Shape", "Circle" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
		{ "ToolTip", "Find voxels using linetraces, asynchronously\n@param World                                 The voxel world\n@param Parameters                    Linetraces parameters\n@param Position                              The center of the linetraces\n@param Direction                             The direction of the linetraces\n@param Radius                                The radius in world space (cm)\n@param Shape                                 The shape of the rays start positions\n@param NumRays                               The approximate number of rays to trace\n@param MaxDistance                   The max ray distance\n@return      Number of rays actually traced (should be close to NumRays)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "FindProjectionVoxelsAsync", nullptr, nullptr, sizeof(VoxelProjectionTools_eventFindProjectionVoxelsAsync_Parms), Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics
	{
		struct VoxelProjectionTools_eventGetHitsAverageNormal_Parms
		{
			TArray<FVoxelProjectionHit> Hits;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsAverageNormal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsAverageNormal_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::NewProp_Hits_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "GetHitsAverageNormal", nullptr, nullptr, sizeof(VoxelProjectionTools_eventGetHitsAverageNormal_Parms), Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics
	{
		struct VoxelProjectionTools_eventGetHitsAveragePosition_Parms
		{
			TArray<FVoxelProjectionHit> Hits;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsAveragePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsAveragePosition_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::NewProp_Hits_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "GetHitsAveragePosition", nullptr, nullptr, sizeof(VoxelProjectionTools_eventGetHitsAveragePosition_Parms), Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics
	{
		struct VoxelProjectionTools_eventGetHitsPositions_Parms
		{
			TArray<FVoxelProjectionHit> Hits;
			TArray<FIntVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Hits;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hits_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits = { "Hits", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventGetHitsPositions_Parms, Hits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits_Inner = { "Hits", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelProjectionHit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::NewProp_Hits_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Tools|Projection Tools" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "GetHitsPositions", nullptr, nullptr, sizeof(VoxelProjectionTools_eventGetHitsPositions_Parms), Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics
	{
		struct VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms
		{
			TArray<TEnumAsByte<ECollisionChannel> > CollisionChannelsToIgnore;
			TArray<AActor*> ActorsToIgnore;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FLinearColor TraceColor;
			FLinearColor TraceHitColor;
			float DrawTime;
			FVoxelLineTraceParameters ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionChannelsToIgnore;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionChannelsToIgnore_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelLineTraceParameters, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, DrawTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore = { "CollisionChannelsToIgnore", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms, CollisionChannelsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_Inner = { "CollisionChannelsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_DrawTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_TraceHitColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_TraceColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_DrawDebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::NewProp_CollisionChannelsToIgnore_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "CollisionChannelsToIgnore, ActorsToIgnore, DrawDebugType, TraceColor, TraceHitColor, DrawTime" },
		{ "AutoCreateRefTerm", "CollisionChannelsToIgnore, ActorsToIgnore" },
		{ "Category", "Voxel" },
		{ "Comment", "// Make voxel line trace parameters\n" },
		{ "CPP_Default_CollisionChannel", "ECC_WorldDynamic" },
		{ "CPP_Default_DrawDebugType", "None" },
		{ "CPP_Default_DrawTime", "5.000000" },
		{ "CPP_Default_TraceColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_TraceHitColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
		{ "ToolTip", "Make voxel line trace parameters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProjectionTools, nullptr, "MakeVoxelLineTraceParameters", nullptr, nullptr, sizeof(VoxelProjectionTools_eventMakeVoxelLineTraceParameters_Parms), Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelProjectionTools_NoRegister()
	{
		return UVoxelProjectionTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelProjectionTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelProjectionTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelProjectionTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHits, "CreateSurfaceVoxelsFromHits" }, // 3567884946
		{ &Z_Construct_UFunction_UVoxelProjectionTools_CreateSurfaceVoxelsFromHitsWithExactValues, "CreateSurfaceVoxelsFromHitsWithExactValues" }, // 2440538757
		{ &Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxels, "FindProjectionVoxels" }, // 1670966426
		{ &Z_Construct_UFunction_UVoxelProjectionTools_FindProjectionVoxelsAsync, "FindProjectionVoxelsAsync" }, // 771123917
		{ &Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAverageNormal, "GetHitsAverageNormal" }, // 2008000625
		{ &Z_Construct_UFunction_UVoxelProjectionTools_GetHitsAveragePosition, "GetHitsAveragePosition" }, // 2423313031
		{ &Z_Construct_UFunction_UVoxelProjectionTools_GetHitsPositions, "GetHitsPositions" }, // 717186381
		{ &Z_Construct_UFunction_UVoxelProjectionTools_MakeVoxelLineTraceParameters, "MakeVoxelLineTraceParameters" }, // 4013277719
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelProjectionTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelProjectionTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelProjectionTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelProjectionTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelProjectionTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelProjectionTools_Statics::ClassParams = {
		&UVoxelProjectionTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelProjectionTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProjectionTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelProjectionTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelProjectionTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelProjectionTools, 543974066);
	template<> VOXEL_API UClass* StaticClass<UVoxelProjectionTools>()
	{
		return UVoxelProjectionTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelProjectionTools(Z_Construct_UClass_UVoxelProjectionTools, &UVoxelProjectionTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelProjectionTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelProjectionTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
