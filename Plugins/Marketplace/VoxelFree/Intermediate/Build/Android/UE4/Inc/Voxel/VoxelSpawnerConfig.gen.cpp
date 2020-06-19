// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelSpawnerConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerConfig() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerType();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerOutputName();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerDensity();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawner_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelRGBA();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerConfig_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerConfig();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSpawnerOutputsConfig_NoRegister();
// End Cross Module References
	static UEnum* EVoxelSpawnerConfigRayWorldType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerConfigRayWorldType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerConfigRayWorldType>()
	{
		return EVoxelSpawnerConfigRayWorldType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSpawnerConfigRayWorldType(EVoxelSpawnerConfigRayWorldType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSpawnerConfigRayWorldType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType_Hash() { return 681029881U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSpawnerConfigRayWorldType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSpawnerConfigRayWorldType::Flat", (int64)EVoxelSpawnerConfigRayWorldType::Flat },
				{ "EVoxelSpawnerConfigRayWorldType::Sphere", (int64)EVoxelSpawnerConfigRayWorldType::Sphere },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
				{ "Flat.Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
				{ "Flat.Name", "EVoxelSpawnerConfigRayWorldType::Flat" },
				{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
				{ "Sphere.Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
				{ "Sphere.Name", "EVoxelSpawnerConfigRayWorldType::Sphere" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSpawnerConfigRayWorldType",
				"EVoxelSpawnerConfigRayWorldType",
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
	static UEnum* EVoxelSpawnerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerType>()
	{
		return EVoxelSpawnerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSpawnerType(EVoxelSpawnerType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSpawnerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerType_Hash() { return 1845300828U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSpawnerType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSpawnerType::Ray", (int64)EVoxelSpawnerType::Ray },
				{ "EVoxelSpawnerType::Height", (int64)EVoxelSpawnerType::Height },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Height.Comment", "// These spawners uses a height output from the world generator to spawn, allowing for large spawn distance.\n" },
				{ "Height.Name", "EVoxelSpawnerType::Height" },
				{ "Height.ToolTip", "These spawners uses a height output from the world generator to spawn, allowing for large spawn distance." },
				{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
				{ "Ray.Comment", "// Will line trace the voxel geometry to find spawning locations. Works with any kind of world/shapes\n" },
				{ "Ray.Name", "EVoxelSpawnerType::Ray" },
				{ "Ray.ToolTip", "Will line trace the voxel geometry to find spawning locations. Works with any kind of world/shapes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSpawnerType",
				"EVoxelSpawnerType",
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
	static UEnum* EVoxelSpawnerConfigElementRandomGenerator_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerConfigElementRandomGenerator"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerConfigElementRandomGenerator>()
	{
		return EVoxelSpawnerConfigElementRandomGenerator_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSpawnerConfigElementRandomGenerator(EVoxelSpawnerConfigElementRandomGenerator_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSpawnerConfigElementRandomGenerator"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator_Hash() { return 2047121506U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSpawnerConfigElementRandomGenerator"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSpawnerConfigElementRandomGenerator::Sobol", (int64)EVoxelSpawnerConfigElementRandomGenerator::Sobol },
				{ "EVoxelSpawnerConfigElementRandomGenerator::Halton", (int64)EVoxelSpawnerConfigElementRandomGenerator::Halton },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
				{ "Halton.Comment", "// More uneven points than Sobol. Unreal uses Halton to spawn grass in the default Landscape system\n" },
				{ "Halton.Name", "EVoxelSpawnerConfigElementRandomGenerator::Halton" },
				{ "Halton.ToolTip", "More uneven points than Sobol. Unreal uses Halton to spawn grass in the default Landscape system" },
				{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
				{ "Sobol.Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n// Evenly distributed points\n" },
				{ "Sobol.Name", "EVoxelSpawnerConfigElementRandomGenerator::Sobol" },
				{ "Sobol.ToolTip", "/\n/\n/\n Evenly distributed points" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSpawnerConfigElementRandomGenerator",
				"EVoxelSpawnerConfigElementRandomGenerator",
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
	static UEnum* EVoxelSpawnerDensityTransform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerDensityTransform"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerDensityTransform>()
	{
		return EVoxelSpawnerDensityTransform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSpawnerDensityTransform(EVoxelSpawnerDensityTransform_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSpawnerDensityTransform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform_Hash() { return 3872221664U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSpawnerDensityTransform"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSpawnerDensityTransform::Identity", (int64)EVoxelSpawnerDensityTransform::Identity },
				{ "EVoxelSpawnerDensityTransform::OneMinus", (int64)EVoxelSpawnerDensityTransform::OneMinus },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Identity.DisplayName", "None" },
				{ "Identity.Name", "EVoxelSpawnerDensityTransform::Identity" },
				{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
				{ "OneMinus.DisplayName", "1 - X" },
				{ "OneMinus.Name", "EVoxelSpawnerDensityTransform::OneMinus" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSpawnerDensityTransform",
				"EVoxelSpawnerDensityTransform",
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
	static UEnum* EVoxelSpawnerUVAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerUVAxis"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerUVAxis>()
	{
		return EVoxelSpawnerUVAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSpawnerUVAxis(EVoxelSpawnerUVAxis_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSpawnerUVAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis_Hash() { return 855207795U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSpawnerUVAxis"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSpawnerUVAxis::U", (int64)EVoxelSpawnerUVAxis::U },
				{ "EVoxelSpawnerUVAxis::V", (int64)EVoxelSpawnerUVAxis::V },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
				{ "U.Name", "EVoxelSpawnerUVAxis::U" },
				{ "V.Name", "EVoxelSpawnerUVAxis::V" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSpawnerUVAxis",
				"EVoxelSpawnerUVAxis",
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
	static UEnum* EVoxelSpawnerDensityType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelSpawnerDensityType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelSpawnerDensityType>()
	{
		return EVoxelSpawnerDensityType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelSpawnerDensityType(EVoxelSpawnerDensityType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelSpawnerDensityType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType_Hash() { return 3601763189U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelSpawnerDensityType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelSpawnerDensityType::Constant", (int64)EVoxelSpawnerDensityType::Constant },
				{ "EVoxelSpawnerDensityType::GeneratorOutput", (int64)EVoxelSpawnerDensityType::GeneratorOutput },
				{ "EVoxelSpawnerDensityType::MaterialRGBA", (int64)EVoxelSpawnerDensityType::MaterialRGBA },
				{ "EVoxelSpawnerDensityType::MaterialUVs", (int64)EVoxelSpawnerDensityType::MaterialUVs },
				{ "EVoxelSpawnerDensityType::MaterialFiveWayBlend", (int64)EVoxelSpawnerDensityType::MaterialFiveWayBlend },
				{ "EVoxelSpawnerDensityType::SingleIndex", (int64)EVoxelSpawnerDensityType::SingleIndex },
				{ "EVoxelSpawnerDensityType::MultiIndex", (int64)EVoxelSpawnerDensityType::MultiIndex },
				{ "EVoxelSpawnerDensityType::Foliage", (int64)EVoxelSpawnerDensityType::Foliage },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Constant.Comment", "// Use a constant as density\n" },
				{ "Constant.Name", "EVoxelSpawnerDensityType::Constant" },
				{ "Constant.ToolTip", "Use a constant as density" },
				{ "Foliage.Comment", "// Use the voxel foliage channels. Only for Ray Spawners.\n" },
				{ "Foliage.Name", "EVoxelSpawnerDensityType::Foliage" },
				{ "Foliage.ToolTip", "Use the voxel foliage channels. Only for Ray Spawners." },
				{ "GeneratorOutput.Comment", "// Use a generator output\n" },
				{ "GeneratorOutput.Name", "EVoxelSpawnerDensityType::GeneratorOutput" },
				{ "GeneratorOutput.ToolTip", "Use a generator output" },
				{ "MaterialFiveWayBlend.Comment", "// Use a five way blend strength. Only for Ray Spawners.\n" },
				{ "MaterialFiveWayBlend.Name", "EVoxelSpawnerDensityType::MaterialFiveWayBlend" },
				{ "MaterialFiveWayBlend.ToolTip", "Use a five way blend strength. Only for Ray Spawners." },
				{ "MaterialRGBA.Comment", "// Use one of the material RGBA channels. Only for Ray Spawners.\n" },
				{ "MaterialRGBA.Name", "EVoxelSpawnerDensityType::MaterialRGBA" },
				{ "MaterialRGBA.ToolTip", "Use one of the material RGBA channels. Only for Ray Spawners." },
				{ "MaterialUVs.Comment", "// Use the material UV channels. Only for Ray Spawners.\n" },
				{ "MaterialUVs.Name", "EVoxelSpawnerDensityType::MaterialUVs" },
				{ "MaterialUVs.ToolTip", "Use the material UV channels. Only for Ray Spawners." },
				{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
				{ "MultiIndex.Comment", "// Use a multi index channel. Only for Ray Spawners.\n" },
				{ "MultiIndex.Name", "EVoxelSpawnerDensityType::MultiIndex" },
				{ "MultiIndex.ToolTip", "Use a multi index channel. Only for Ray Spawners." },
				{ "SingleIndex.Comment", "// Use a single index channel. Only for Ray Spawners.\n" },
				{ "SingleIndex.Name", "EVoxelSpawnerDensityType::SingleIndex" },
				{ "SingleIndex.ToolTip", "Use a single index channel. Only for Ray Spawners." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelSpawnerDensityType",
				"EVoxelSpawnerDensityType",
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
class UScriptStruct* FVoxelSpawnerConfigFiveWayBlendSetup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigFiveWayBlendSetup"), sizeof(FVoxelSpawnerConfigFiveWayBlendSetup), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerConfigFiveWayBlendSetup>()
{
	return FVoxelSpawnerConfigFiveWayBlendSetup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup(FVoxelSpawnerConfigFiveWayBlendSetup::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerConfigFiveWayBlendSetup"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigFiveWayBlendSetup
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigFiveWayBlendSetup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerConfigFiveWayBlendSetup")),new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigFiveWayBlendSetup>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigFiveWayBlendSetup;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFourWayBlend_MetaData[];
#endif
		static void NewProp_bFourWayBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFourWayBlend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigFiveWayBlendSetup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If true, will ignore Alpha\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "If true, will ignore Alpha" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend_SetBit(void* Obj)
	{
		((FVoxelSpawnerConfigFiveWayBlendSetup*)Obj)->bFourWayBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend = { "bFourWayBlend", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigFiveWayBlendSetup), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::NewProp_bFourWayBlend,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerConfigFiveWayBlendSetup",
		sizeof(FVoxelSpawnerConfigFiveWayBlendSetup),
		alignof(FVoxelSpawnerConfigFiveWayBlendSetup),
		Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerConfigFiveWayBlendSetup"), sizeof(FVoxelSpawnerConfigFiveWayBlendSetup), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup_Hash() { return 530684327U; }
class UScriptStruct* FVoxelSpawnerConfigRayGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigRayGroup"), sizeof(FVoxelSpawnerConfigRayGroup), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerConfigRayGroup>()
{
	return FVoxelSpawnerConfigRayGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerConfigRayGroup(FVoxelSpawnerConfigRayGroup::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerConfigRayGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigRayGroup
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigRayGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerConfigRayGroup")),new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigRayGroup>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigRayGroup;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spawners;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GenerationDistanceInVoxels_EditorOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInChunks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GenerationDistanceInChunks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_EditorOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ChunkSize_EditorOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigRayGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigRayGroup, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly = { "GenerationDistanceInVoxels_EditorOnly", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigRayGroup, GenerationDistanceInVoxels_EditorOnly), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInChunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInChunks = { "GenerationDistanceInChunks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigRayGroup, GenerationDistanceInChunks), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInChunks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_ChunkSize_EditorOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_ChunkSize_EditorOnly = { "ChunkSize_EditorOnly", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigRayGroup, ChunkSize_EditorOnly), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_ChunkSize_EditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_ChunkSize_EditorOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_LOD_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigRayGroup, LOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_LOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_LOD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_Spawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_GenerationDistanceInChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_ChunkSize_EditorOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::NewProp_LOD,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerConfigRayGroup",
		sizeof(FVoxelSpawnerConfigRayGroup),
		alignof(FVoxelSpawnerConfigRayGroup),
		Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerConfigRayGroup"), sizeof(FVoxelSpawnerConfigRayGroup), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup_Hash() { return 1728103999U; }
class UScriptStruct* FVoxelSpawnerConfigHeightGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigHeightGroup"), sizeof(FVoxelSpawnerConfigHeightGroup), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerConfigHeightGroup>()
{
	return FVoxelSpawnerConfigHeightGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerConfigHeightGroup(FVoxelSpawnerConfigHeightGroup::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerConfigHeightGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigHeightGroup
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigHeightGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerConfigHeightGroup")),new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigHeightGroup>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigHeightGroup;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spawners;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GenerationDistanceInVoxels_EditorOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInChunks_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GenerationDistanceInChunks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ChunkSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightGraphOutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightGraphOutputName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigHeightGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigHeightGroup, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly = { "GenerationDistanceInVoxels_EditorOnly", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigHeightGroup, GenerationDistanceInVoxels_EditorOnly), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInChunks_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInChunks = { "GenerationDistanceInChunks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigHeightGroup, GenerationDistanceInChunks), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInChunks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_ChunkSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_ChunkSize = { "ChunkSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigHeightGroup, ChunkSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_ChunkSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_ChunkSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_HeightGraphOutputName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_HeightGraphOutputName = { "HeightGraphOutputName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigHeightGroup, HeightGraphOutputName), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_HeightGraphOutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_HeightGraphOutputName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_Spawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_GenerationDistanceInChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_ChunkSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::NewProp_HeightGraphOutputName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerConfigHeightGroup",
		sizeof(FVoxelSpawnerConfigHeightGroup),
		alignof(FVoxelSpawnerConfigHeightGroup),
		Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerConfigHeightGroup"), sizeof(FVoxelSpawnerConfigHeightGroup), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup_Hash() { return 247158U; }
class UScriptStruct* FVoxelSpawnerConfigElement_Ray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigElement_Ray"), sizeof(FVoxelSpawnerConfigElement_Ray), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerConfigElement_Ray>()
{
	return FVoxelSpawnerConfigElement_Ray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerConfigElement_Ray(FVoxelSpawnerConfigElement_Ray::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerConfigElement_Ray"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElement_Ray
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElement_Ray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerConfigElement_Ray")),new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElement_Ray>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElement_Ray;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Advanced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityGraphOutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DensityGraphOutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DensityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElement_Ray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Advanced_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Ray, Advanced), Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Advanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Advanced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityGraphOutputName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityGraphOutputName = { "DensityGraphOutputName", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Ray, DensityGraphOutputName_DEPRECATED), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityGraphOutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityGraphOutputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityMultiplier = { "DensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Ray, DensityMultiplier), Z_Construct_UScriptStruct_FVoxelSpawnerDensity, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Density_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Ray, Density), Z_Construct_UScriptStruct_FVoxelSpawnerDensity, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Spawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Ray, Spawner), Z_Construct_UClass_UVoxelSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Spawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Spawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Advanced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityGraphOutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_DensityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::NewProp_Spawner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerConfigElement_Ray",
		sizeof(FVoxelSpawnerConfigElement_Ray),
		alignof(FVoxelSpawnerConfigElement_Ray),
		Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerConfigElement_Ray"), sizeof(FVoxelSpawnerConfigElement_Ray), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Ray_Hash() { return 3502239180U; }
class UScriptStruct* FVoxelSpawnerConfigElement_Height::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigElement_Height"), sizeof(FVoxelSpawnerConfigElement_Height), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerConfigElement_Height>()
{
	return FVoxelSpawnerConfigElement_Height::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerConfigElement_Height(FVoxelSpawnerConfigElement_Height::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerConfigElement_Height"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElement_Height
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElement_Height()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerConfigElement_Height")),new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElement_Height>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElement_Height;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Advanced_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Advanced;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityGraphOutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DensityGraphOutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElement_Height>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Advanced_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Advanced = { "Advanced", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Height, Advanced), Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Advanced_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Advanced_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_DensityGraphOutputName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_DensityGraphOutputName = { "DensityGraphOutputName", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Height, DensityGraphOutputName_DEPRECATED), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_DensityGraphOutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_DensityGraphOutputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Density_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Height, Density), Z_Construct_UScriptStruct_FVoxelSpawnerDensity, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Spawner_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElement_Height, Spawner), Z_Construct_UClass_UVoxelSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Spawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Spawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Advanced,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_DensityGraphOutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::NewProp_Spawner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerConfigElement_Height",
		sizeof(FVoxelSpawnerConfigElement_Height),
		alignof(FVoxelSpawnerConfigElement_Height),
		Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerConfigElement_Height"), sizeof(FVoxelSpawnerConfigElement_Height), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElement_Height_Hash() { return 1100516139U; }
class UScriptStruct* FVoxelSpawnerConfigElementAdvanced_Ray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigElementAdvanced_Ray"), sizeof(FVoxelSpawnerConfigElementAdvanced_Ray), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerConfigElementAdvanced_Ray>()
{
	return FVoxelSpawnerConfigElementAdvanced_Ray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray(FVoxelSpawnerConfigElementAdvanced_Ray::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerConfigElementAdvanced_Ray"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElementAdvanced_Ray
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElementAdvanced_Ray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerConfigElementAdvanced_Ray")),new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElementAdvanced_Ray>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElementAdvanced_Ray;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RandomGenerator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RandomGenerator_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DefaultSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeedName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotDespawn_MetaData[];
#endif
		static void NewProp_bDoNotDespawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotDespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[];
#endif
		static void NewProp_bSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElementAdvanced_Ray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Ray, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator = { "RandomGenerator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Ray, RandomGenerator), Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_DefaultSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_DefaultSeed = { "DefaultSeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Ray, DefaultSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_DefaultSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_DefaultSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_SeedName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_SeedName = { "SeedName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Ray, SeedName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_SeedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_SeedName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn_SetBit(void* Obj)
	{
		((FVoxelSpawnerConfigElementAdvanced_Ray*)Obj)->bDoNotDespawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn = { "bDoNotDespawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigElementAdvanced_Ray), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave_SetBit(void* Obj)
	{
		((FVoxelSpawnerConfigElementAdvanced_Ray*)Obj)->bSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigElementAdvanced_Ray), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_RandomGenerator_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_DefaultSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_SeedName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bDoNotDespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::NewProp_bSave,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerConfigElementAdvanced_Ray",
		sizeof(FVoxelSpawnerConfigElementAdvanced_Ray),
		alignof(FVoxelSpawnerConfigElementAdvanced_Ray),
		Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerConfigElementAdvanced_Ray"), sizeof(FVoxelSpawnerConfigElementAdvanced_Ray), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Ray_Hash() { return 557473981U; }
class UScriptStruct* FVoxelSpawnerConfigElementAdvanced_Height::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigElementAdvanced_Height"), sizeof(FVoxelSpawnerConfigElementAdvanced_Height), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerConfigElementAdvanced_Height>()
{
	return FVoxelSpawnerConfigElementAdvanced_Height::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height(FVoxelSpawnerConfigElementAdvanced_Height::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerConfigElementAdvanced_Height"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElementAdvanced_Height
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElementAdvanced_Height()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerConfigElementAdvanced_Height")),new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElementAdvanced_Height>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigElementAdvanced_Height;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeDensityFirst_MetaData[];
#endif
		static void NewProp_bComputeDensityFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeDensityFirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RandomGenerator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RandomGenerator_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DefaultSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeedName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotDespawn_MetaData[];
#endif
		static void NewProp_bDoNotDespawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotDespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[];
#endif
		static void NewProp_bSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigElementAdvanced_Height>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Height, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst_SetBit(void* Obj)
	{
		((FVoxelSpawnerConfigElementAdvanced_Height*)Obj)->bComputeDensityFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst = { "bComputeDensityFirst", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigElementAdvanced_Height), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator = { "RandomGenerator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Height, RandomGenerator), Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_DefaultSeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_DefaultSeed = { "DefaultSeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Height, DefaultSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_DefaultSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_DefaultSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_SeedName_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_SeedName = { "SeedName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigElementAdvanced_Height, SeedName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_SeedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_SeedName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn_SetBit(void* Obj)
	{
		((FVoxelSpawnerConfigElementAdvanced_Height*)Obj)->bDoNotDespawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn = { "bDoNotDespawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigElementAdvanced_Height), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave_SetBit(void* Obj)
	{
		((FVoxelSpawnerConfigElementAdvanced_Height*)Obj)->bSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigElementAdvanced_Height), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bComputeDensityFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_RandomGenerator_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_DefaultSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_SeedName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bDoNotDespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::NewProp_bSave,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerConfigElementAdvanced_Height",
		sizeof(FVoxelSpawnerConfigElementAdvanced_Height),
		alignof(FVoxelSpawnerConfigElementAdvanced_Height),
		Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerConfigElementAdvanced_Height"), sizeof(FVoxelSpawnerConfigElementAdvanced_Height), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigElementAdvanced_Height_Hash() { return 784409070U; }
class UScriptStruct* FVoxelSpawnerConfigSpawner::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigSpawner"), sizeof(FVoxelSpawnerConfigSpawner), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerConfigSpawner>()
{
	return FVoxelSpawnerConfigSpawner::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerConfigSpawner(FVoxelSpawnerConfigSpawner::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerConfigSpawner"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigSpawner
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigSpawner()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerConfigSpawner")),new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigSpawner>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigSpawner;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bComputeDensityFirst_HeightOnly_MetaData[];
#endif
		static void NewProp_bComputeDensityFirst_HeightOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bComputeDensityFirst_HeightOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RandomGenerator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RandomGenerator_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Seed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotDespawn_MetaData[];
#endif
		static void NewProp_bDoNotDespawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotDespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSave_MetaData[];
#endif
		static void NewProp_bSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInChunks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GenerationDistanceInChunks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_GenerationDistanceInVoxels_EditorOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkSize_EditorOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ChunkSize_EditorOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightGraphOutputName_HeightOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightGraphOutputName_HeightOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityMultiplier_RayOnly_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DensityMultiplier_RayOnly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Density;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SpawnerType;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigSpawner>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Controls whether to compute the density or the height first. Try both and see which is faster\n// If false, the following are true when querying the density:\n// - for flat worlds: Z = Height\n// - for sphere worlds: Length(X, Y, Z) = Height\n" },
		{ "DisplayName", "Compute Density First" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Controls whether to compute the density or the height first. Try both and see which is faster\nIf false, the following are true when querying the density:\n- for flat worlds: Z = Height\n- for sphere worlds: Length(X, Y, Z) = Height" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly_SetBit(void* Obj)
	{
		((FVoxelSpawnerConfigSpawner*)Obj)->bComputeDensityFirst_HeightOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly = { "bComputeDensityFirst_HeightOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigSpawner), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Unique ID used when saving spawners to disk\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Unique ID used when saving spawners to disk" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Controls the spawning pattern\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Controls the spawning pattern" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator = { "RandomGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, RandomGenerator), Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigElementRandomGenerator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Seed_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Seed for this spawner. Note that changing this is not required to get unique results per spawner.\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Seed for this spawner. Note that changing this is not required to get unique results per spawner." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, Seed), Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Seed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If false, instances that are out of range will be despawned. If true, they will stay forever.\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "If false, instances that are out of range will be despawned. If true, they will stay forever." },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn_SetBit(void* Obj)
	{
		((FVoxelSpawnerConfigSpawner*)Obj)->bDoNotDespawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn = { "bDoNotDespawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigSpawner), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Whether to save the instances that are removed\n// If false will also respawn instances if they are out of range\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Whether to save the instances that are removed\nIf false will also respawn instances if they are out of range" },
	};
#endif
	void Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave_SetBit(void* Obj)
	{
		((FVoxelSpawnerConfigSpawner*)Obj)->bSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave = { "bSave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FVoxelSpawnerConfigSpawner), &Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInChunks_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInChunks = { "GenerationDistanceInChunks", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, GenerationDistanceInChunks), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInChunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInChunks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Generation distance in voxels\n" },
		{ "DisplayName", "Generation Distance" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Generation distance in voxels" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly = { "GenerationDistanceInVoxels_EditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, GenerationDistanceInVoxels_EditorOnly), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_LOD_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// The LOD of the mesh to trace rays against\n// High LOD = faster but less precise\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "The LOD of the mesh to trace rays against\nHigh LOD = faster but less precise" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, LOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_LOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_LOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_ChunkSize_EditorOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Chunk size, affects the LOD if ray spawner\n" },
		{ "DisplayName", "Chunk Size" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Chunk size, affects the LOD if ray spawner" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_ChunkSize_EditorOnly = { "ChunkSize_EditorOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, ChunkSize_EditorOnly), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_ChunkSize_EditorOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_ChunkSize_EditorOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_HeightGraphOutputName_HeightOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// The name of the custom graph output used to determine the height\n" },
		{ "DisplayName", "Height Graph Output Name" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "The name of the custom graph output used to determine the height" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_HeightGraphOutputName_HeightOnly = { "HeightGraphOutputName_HeightOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, HeightGraphOutputName_HeightOnly), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_HeightGraphOutputName_HeightOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_HeightGraphOutputName_HeightOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_DensityMultiplier_RayOnly_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Final Density = Density * DensityMultiplier. Use this to eg paint an Erase Foliage channel.\n" },
		{ "DisplayName", "Density Multiplier" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Final Density = Density * DensityMultiplier. Use this to eg paint an Erase Foliage channel." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_DensityMultiplier_RayOnly = { "DensityMultiplier_RayOnly", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, DensityMultiplier_RayOnly), Z_Construct_UScriptStruct_FVoxelSpawnerDensity, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_DensityMultiplier_RayOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_DensityMultiplier_RayOnly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Density_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, Density), Z_Construct_UScriptStruct_FVoxelSpawnerDensity, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Density_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Density_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType = { "SpawnerType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, SpawnerType), Z_Construct_UEnum_Voxel_EVoxelSpawnerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Spawner_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Spawner = { "Spawner", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawner, Spawner), Z_Construct_UClass_UVoxelSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Spawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Spawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bComputeDensityFirst_HeightOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_RandomGenerator_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bDoNotDespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_bSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInChunks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_GenerationDistanceInVoxels_EditorOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_LOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_ChunkSize_EditorOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_HeightGraphOutputName_HeightOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_DensityMultiplier_RayOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Density,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_SpawnerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::NewProp_Spawner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerConfigSpawner",
		sizeof(FVoxelSpawnerConfigSpawner),
		alignof(FVoxelSpawnerConfigSpawner),
		Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerConfigSpawner"), sizeof(FVoxelSpawnerConfigSpawner), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner_Hash() { return 3150541508U; }
class UScriptStruct* FVoxelSpawnerConfigSpawnerSeed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerConfigSpawnerSeed"), sizeof(FVoxelSpawnerConfigSpawnerSeed), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerConfigSpawnerSeed>()
{
	return FVoxelSpawnerConfigSpawnerSeed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed(FVoxelSpawnerConfigSpawnerSeed::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerConfigSpawnerSeed"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigSpawnerSeed
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigSpawnerSeed()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerConfigSpawnerSeed")),new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigSpawnerSeed>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerConfigSpawnerSeed;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_DefaultSeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeedName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerConfigSpawnerSeed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewProp_DefaultSeed_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Seed if SeedName is not found in the voxel world seed map\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Seed if SeedName is not found in the voxel world seed map" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewProp_DefaultSeed = { "DefaultSeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawnerSeed, DefaultSeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewProp_DefaultSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewProp_DefaultSeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewProp_SeedName_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Name referencing to the voxel world seed map\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Name referencing to the voxel world seed map" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewProp_SeedName = { "SeedName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerConfigSpawnerSeed, SeedName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewProp_SeedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewProp_SeedName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewProp_DefaultSeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::NewProp_SeedName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerConfigSpawnerSeed",
		sizeof(FVoxelSpawnerConfigSpawnerSeed),
		alignof(FVoxelSpawnerConfigSpawnerSeed),
		Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerConfigSpawnerSeed"), sizeof(FVoxelSpawnerConfigSpawnerSeed), Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawnerSeed_Hash() { return 3205415695U; }
class UScriptStruct* FVoxelSpawnerDensity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerDensity, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerDensity"), sizeof(FVoxelSpawnerDensity), Get_Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerDensity>()
{
	return FVoxelSpawnerDensity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerDensity(FVoxelSpawnerDensity::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerDensity"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerDensity
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerDensity()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerDensity")),new UScriptStruct::TCppStructOps<FVoxelSpawnerDensity>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerDensity;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Transform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FoliageChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FoliageChannel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiIndexChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MultiIndexChannels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiIndexChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleIndexChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SingleIndexChannels;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SingleIndexChannels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiveWayBlendChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FiveWayBlendChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UVAxis;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UVAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RGBAChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RGBAChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RGBAChannel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratorOutputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeneratorOutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Constant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerDensity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Transform to apply to the density\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Transform to apply to the density" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, Transform), Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FoliageChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FoliageChannel = { "FoliageChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, FoliageChannel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FoliageChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FoliageChannel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FoliageChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels = { "MultiIndexChannels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, MultiIndexChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels_Inner = { "MultiIndexChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels = { "SingleIndexChannels", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, SingleIndexChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels_Inner = { "SingleIndexChannels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FiveWayBlendChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FiveWayBlendChannel = { "FiveWayBlendChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, FiveWayBlendChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FiveWayBlendChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FiveWayBlendChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis_MetaData[] = {
		{ "Category", "Voxel" },
		{ "DisplayName", "UV Axis" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis = { "UVAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, UVAxis), Z_Construct_UEnum_Voxel_EVoxelSpawnerUVAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ClampMax", "3" },
		{ "ClampMin", "0" },
		{ "DisplayName", "UV Channel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, UVChannel), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel_MetaData[] = {
		{ "Category", "Voxel" },
		{ "DisplayName", "RGBA Channel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel = { "RGBAChannel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, RGBAChannel), Z_Construct_UEnum_Voxel_EVoxelRGBA, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_GeneratorOutputName_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Your world generator needs to have a float output named like this\n" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ToolTip", "Your world generator needs to have a float output named like this" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_GeneratorOutputName = { "GeneratorOutputName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, GeneratorOutputName), Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_GeneratorOutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_GeneratorOutputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Constant_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, Constant), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Constant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Constant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerDensity, Type), Z_Construct_UEnum_Voxel_EVoxelSpawnerDensityType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Transform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FoliageChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FoliageChannel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_MultiIndexChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_SingleIndexChannels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_FiveWayBlendChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_UVChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_RGBAChannel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_GeneratorOutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Constant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerDensity",
		sizeof(FVoxelSpawnerDensity),
		alignof(FVoxelSpawnerDensity),
		Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerDensity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerDensity"), sizeof(FVoxelSpawnerDensity), Get_Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerDensity_Hash() { return 3528544834U; }
class UScriptStruct* FVoxelSpawnerOutputName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSpawnerOutputName, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSpawnerOutputName"), sizeof(FVoxelSpawnerOutputName), Get_Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSpawnerOutputName>()
{
	return FVoxelSpawnerOutputName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSpawnerOutputName(FVoxelSpawnerOutputName::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSpawnerOutputName"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerOutputName
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerOutputName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSpawnerOutputName")),new UScriptStruct::TCppStructOps<FVoxelSpawnerOutputName>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSpawnerOutputName;
	struct Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSpawnerOutputName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSpawnerOutputName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::NewProp_Name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSpawnerOutputName",
		sizeof(FVoxelSpawnerOutputName),
		alignof(FVoxelSpawnerOutputName),
		Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSpawnerOutputName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSpawnerOutputName"), sizeof(FVoxelSpawnerOutputName), Get_Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSpawnerOutputName_Hash() { return 662722894U; }
	void UVoxelSpawnerConfig::StaticRegisterNativesUVoxelSpawnerConfig()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSpawnerConfig_NoRegister()
	{
		return UVoxelSpawnerConfig::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSpawnerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightSpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeightSpawners;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightSpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaySpawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RaySpawners;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RaySpawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spawners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Spawners;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spawners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiveWayBlendSetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FiveWayBlendSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldGeneratorOutputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGeneratorOutputs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WorldType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSpawnerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerConfig.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners = { "HeightSpawners", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, HeightSpawners_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners_Inner = { "HeightSpawners", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerConfigHeightGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners = { "RaySpawners", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, RaySpawners_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners_Inner = { "RaySpawners", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerConfigRayGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners_MetaData[] = {
		{ "Category", "Spawners" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners = { "Spawners", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, Spawners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners_Inner = { "Spawners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelSpawnerConfigSpawner, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_FiveWayBlendSetup_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_FiveWayBlendSetup = { "FiveWayBlendSetup", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, FiveWayBlendSetup), Z_Construct_UScriptStruct_FVoxelSpawnerConfigFiveWayBlendSetup, METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_FiveWayBlendSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_FiveWayBlendSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldGeneratorOutputs_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldGeneratorOutputs = { "WorldGeneratorOutputs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, WorldGeneratorOutputs), Z_Construct_UClass_UVoxelSpawnerOutputsConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldGeneratorOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldGeneratorOutputs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerConfig.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType = { "WorldType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSpawnerConfig, WorldType), Z_Construct_UEnum_Voxel_EVoxelSpawnerConfigRayWorldType, METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSpawnerConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_HeightSpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_RaySpawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_Spawners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_FiveWayBlendSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldGeneratorOutputs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSpawnerConfig_Statics::NewProp_WorldType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSpawnerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSpawnerConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSpawnerConfig_Statics::ClassParams = {
		&UVoxelSpawnerConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSpawnerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSpawnerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSpawnerConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSpawnerConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSpawnerConfig, 800858459);
	template<> VOXEL_API UClass* StaticClass<UVoxelSpawnerConfig>()
	{
		return UVoxelSpawnerConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSpawnerConfig(Z_Construct_UClass_UVoxelSpawnerConfig, &UVoxelSpawnerConfig::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSpawnerConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSpawnerConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
