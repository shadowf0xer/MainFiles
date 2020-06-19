// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/IVoxelPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVoxelPool() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	static UEnum* EVoxelTaskType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelTaskType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelTaskType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelTaskType>()
	{
		return EVoxelTaskType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelTaskType(EVoxelTaskType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelTaskType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelTaskType_Hash() { return 3613143017U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelTaskType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelTaskType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelTaskType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelTaskType::ChunksMeshing", (int64)EVoxelTaskType::ChunksMeshing },
				{ "EVoxelTaskType::CollisionsChunksMeshing", (int64)EVoxelTaskType::CollisionsChunksMeshing },
				{ "EVoxelTaskType::VisibleChunksMeshing", (int64)EVoxelTaskType::VisibleChunksMeshing },
				{ "EVoxelTaskType::VisibleCollisionsChunksMeshing", (int64)EVoxelTaskType::VisibleCollisionsChunksMeshing },
				{ "EVoxelTaskType::CollisionCooking", (int64)EVoxelTaskType::CollisionCooking },
				{ "EVoxelTaskType::FoliageBuild", (int64)EVoxelTaskType::FoliageBuild },
				{ "EVoxelTaskType::HISMBuild", (int64)EVoxelTaskType::HISMBuild },
				{ "EVoxelTaskType::AsyncEditFunctions", (int64)EVoxelTaskType::AsyncEditFunctions },
				{ "EVoxelTaskType::MeshMerge", (int64)EVoxelTaskType::MeshMerge },
				{ "EVoxelTaskType::RenderOctree", (int64)EVoxelTaskType::RenderOctree },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AsyncEditFunctions.Comment", "// Async edit functions such as AddSphereAsync\n" },
				{ "AsyncEditFunctions.Name", "EVoxelTaskType::AsyncEditFunctions" },
				{ "AsyncEditFunctions.ToolTip", "Async edit functions such as AddSphereAsync" },
				{ "BlueprintType", "true" },
				{ "ChunksMeshing.Comment", "// Meshing of chunks that don't have collisions and are not visible\n" },
				{ "ChunksMeshing.Name", "EVoxelTaskType::ChunksMeshing" },
				{ "ChunksMeshing.ToolTip", "Meshing of chunks that don't have collisions and are not visible" },
				{ "CollisionCooking.Comment", "// PhysX collision cooking, once the meshing task is done\n" },
				{ "CollisionCooking.Name", "EVoxelTaskType::CollisionCooking" },
				{ "CollisionCooking.ToolTip", "PhysX collision cooking, once the meshing task is done" },
				{ "CollisionsChunksMeshing.Comment", "// Meshing of not visible chunks that have collisions\n" },
				{ "CollisionsChunksMeshing.Name", "EVoxelTaskType::CollisionsChunksMeshing" },
				{ "CollisionsChunksMeshing.ToolTip", "Meshing of not visible chunks that have collisions" },
				{ "FoliageBuild.Comment", "// Height spawners\n" },
				{ "FoliageBuild.Name", "EVoxelTaskType::FoliageBuild" },
				{ "FoliageBuild.ToolTip", "Height spawners" },
				{ "HISMBuild.Comment", "// Building of the instanced mesh components culling tree, used for spawners\n// The meshes are not updated until the build is done\n" },
				{ "HISMBuild.Name", "EVoxelTaskType::HISMBuild" },
				{ "HISMBuild.ToolTip", "Building of the instanced mesh components culling tree, used for spawners\nThe meshes are not updated until the build is done" },
				{ "MeshMerge.Comment", "// Mesh merge tasks are used after meshing to create the render buffers\n// Note: they are also used if bMergeChunks = false!\n" },
				{ "MeshMerge.Name", "EVoxelTaskType::MeshMerge" },
				{ "MeshMerge.ToolTip", "Mesh merge tasks are used after meshing to create the render buffers\nNote: they are also used if bMergeChunks = false!" },
				{ "ModuleRelativePath", "Public/IVoxelPool.h" },
				{ "RenderOctree.Comment", "// The render octree is used to determine the LODs to display\n// Should be done as fast as possible to start meshing tasks \n" },
				{ "RenderOctree.Name", "EVoxelTaskType::RenderOctree" },
				{ "RenderOctree.ToolTip", "The render octree is used to determine the LODs to display\nShould be done as fast as possible to start meshing tasks" },
				{ "VisibleChunksMeshing.Comment", "// Meshing of visible chunks that don't have collisions\n" },
				{ "VisibleChunksMeshing.Name", "EVoxelTaskType::VisibleChunksMeshing" },
				{ "VisibleChunksMeshing.ToolTip", "Meshing of visible chunks that don't have collisions" },
				{ "VisibleCollisionsChunksMeshing.Comment", "// Meshing of visible chunks that have collisions\n" },
				{ "VisibleCollisionsChunksMeshing.Name", "EVoxelTaskType::VisibleCollisionsChunksMeshing" },
				{ "VisibleCollisionsChunksMeshing.ToolTip", "Meshing of visible chunks that have collisions" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelTaskType",
				"EVoxelTaskType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
