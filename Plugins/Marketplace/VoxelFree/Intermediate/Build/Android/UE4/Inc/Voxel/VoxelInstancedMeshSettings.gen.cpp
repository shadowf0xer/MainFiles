// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelInstancedMeshSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelInstancedMeshSettings() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInt32Interval();
// End Cross Module References
class UScriptStruct* FVoxelSpawnerActorSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerActorSettings"), sizeof(FVoxelSpawnerActorSettings), Get_Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerActorSettings>()
{
	return FVoxelSpawnerActorSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerActorSettings(FVoxelSpawnerActorSettings::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerActorSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerActorSettings
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerActorSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerActorSettings")),new UScriptStruct::TCppStructOps<FVoxelSpawnerActorSettings>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerActorSettings;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifespan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Lifespan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerActorSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan_MetaData[] = {
		{ "Category", "Actor Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Set the lifespan of this actor. When it expires the object will be destroyed.\n// Set to 0 to disable\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Set the lifespan of this actor. When it expires the object will be destroyed.\nSet to 0 to disable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan = { "Lifespan", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerActorSettings, Lifespan), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Actor Settings" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerActorSettings, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Actor Settings" },
		{ "Comment", "// Actor to spawn to replace the instanced mesh. After spawn, the SetStaticMesh event will be called on the actor with Mesh as argument\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Actor to spawn to replace the instanced mesh. After spawn, the SetStaticMesh event will be called on the actor with Mesh as argument" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerActorSettings, ActorClass), Z_Construct_UClass_AVoxelSpawnerActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_Lifespan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_BodyInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::NewProp_ActorClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerActorSettings",
		sizeof(FVoxelSpawnerActorSettings),
		alignof(FVoxelSpawnerActorSettings),
		Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerActorSettings"), sizeof(FVoxelSpawnerActorSettings), Get_Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerActorSettings_Hash() { return 2225952961U; }
class UScriptStruct* FVoxelInstancedMeshSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelInstancedMeshSettings"), sizeof(FVoxelInstancedMeshSettings), Get_Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelInstancedMeshSettings>()
{
	return FVoxelInstancedMeshSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelInstancedMeshSettings(FVoxelInstancedMeshSettings::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelInstancedMeshSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelInstancedMeshSettings
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelInstancedMeshSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelInstancedMeshSettings")),new UScriptStruct::TCppStructOps<FVoxelInstancedMeshSettings>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelInstancedMeshSettings;
	struct Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HISMTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HISMTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BuildDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[];
#endif
		static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomNavigableGeometry_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomNavigableGeometry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[];
#endif
		static void NewProp_bUseAsOccluder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[];
#endif
		static void NewProp_bReceivesDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[];
#endif
		static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[];
#endif
		static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[];
#endif
		static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[];
#endif
		static void NewProp_bCastShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CullDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelInstancedMeshSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "// If you want to edit the HISM properties create a BP inheriting from HierarchicalInstancedStaticMeshComponent and set it here\n" },
		{ "DisplayName", "HISM Template" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "If you want to edit the HISM properties create a BP inheriting from HierarchicalInstancedStaticMeshComponent and set it here" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate = { "HISMTemplate", nullptr, (EPropertyFlags)0x0014040000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, HISMTemplate), Z_Construct_UClass_UVoxelHierarchicalInstancedStaticMeshComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// If more instances are added before BuildDelay seconds elapsed, the tree build is queued\n// This is useful to avoid spending lots of time building the tree for nothing.\n// However, it can lead to delays in foliage spawning.\n// To disable this feature entirely, set it to 0\n" },
		{ "DisplayName", "Culling Tree Build Delay" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "If more instances are added before BuildDelay seconds elapsed, the tree build is queued\nThis is useful to avoid spending lots of time building the tree for nothing.\nHowever, it can lead to delays in foliage spawning.\nTo disable this feature entirely, set it to 0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay = { "BuildDelay", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, BuildDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3) */" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, CustomDepthStencilValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** If true, the foliage will be rendered in the CustomDepth pass (usually used for outlines) */" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "If true, the foliage will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bRenderCustomDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/**\n\x09 * Lighting channels that placed foliage will be assigned. Lights with matching channels will affect the foliage.\n\x09 * These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Lighting channels that placed foliage will be assigned. Lights with matching channels will affect the foliage.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Force navmesh */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Force navmesh" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry = { "CustomNavigableGeometry", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, CustomNavigableGeometry), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Custom collision for foliage */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Custom collision for foliage" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/**\n\x09 * If enabled, foliage will render a pre-pass which allows it to occlude other primitives, and also allows \n\x09 * it to correctly receive DBuffer decals. Enabling this setting may have a negative performance impact.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "If enabled, foliage will render a pre-pass which allows it to occlude other primitives, and also allows\nit to correctly receive DBuffer decals. Enabling this setting may have a negative performance impact." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bUseAsOccluder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Whether the foliage receives decals. */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Whether the foliage receives decals." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bReceivesDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Whether this foliage should cast dynamic shadows as if it were a two sided material. */" },
		{ "EditCondition", "bCastShadow" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Whether this foliage should cast dynamic shadows as if it were a two sided material." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bCastShadowAsTwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true. */" },
		{ "EditCondition", "bCastShadow" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bAffectDistanceFieldLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true. */" },
		{ "EditCondition", "bCastShadow" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bAffectDynamicIndirectLighting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "/** Controls whether the foliage should cast a shadow or not. */" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Controls whether the foliage should cast a shadow or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_SetBit(void* Obj)
	{
		((FVoxelInstancedMeshSettings*)Obj)->bCastShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelInstancedMeshSettings), &Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "Instance Settings" },
		{ "Comment", "// Distance from camera at which each instance begins/completely to fade out\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
		{ "ToolTip", "Distance from camera at which each instance begins/completely to fade out" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInstancedMeshSettings, CullDistance), Z_Construct_UScriptStruct_FVoxelInt32Interval, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_HISMTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BuildDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomDepthStencilValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bRenderCustomDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_LightingChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CustomNavigableGeometry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_BodyInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bUseAsOccluder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bReceivesDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadowAsTwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDistanceFieldLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bAffectDynamicIndirectLighting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_bCastShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::NewProp_CullDistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelInstancedMeshSettings",
		sizeof(FVoxelInstancedMeshSettings),
		alignof(FVoxelInstancedMeshSettings),
		Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelInstancedMeshSettings"), sizeof(FVoxelInstancedMeshSettings), Get_Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelInstancedMeshSettings_Hash() { return 4012136905U; }
class UScriptStruct* FVoxelInt32Interval::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelInt32Interval_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelInt32Interval, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelInt32Interval"), sizeof(FVoxelInt32Interval), Get_Z_Construct_UScriptStruct_FVoxelInt32Interval_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelInt32Interval>()
{
	return FVoxelInt32Interval::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelInt32Interval(FVoxelInt32Interval::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelInt32Interval"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelInt32Interval
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelInt32Interval()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelInt32Interval")),new UScriptStruct::TCppStructOps<FVoxelInt32Interval>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelInt32Interval;
	struct Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelInt32Interval>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInt32Interval, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelInstancedMeshSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelInt32Interval, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::NewProp_Min,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelInt32Interval",
		sizeof(FVoxelInt32Interval),
		alignof(FVoxelInt32Interval),
		Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelInt32Interval()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelInt32Interval_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelInt32Interval"), sizeof(FVoxelInt32Interval), Get_Z_Construct_UScriptStruct_FVoxelInt32Interval_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelInt32Interval_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelInt32Interval_Hash() { return 1039681085U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
