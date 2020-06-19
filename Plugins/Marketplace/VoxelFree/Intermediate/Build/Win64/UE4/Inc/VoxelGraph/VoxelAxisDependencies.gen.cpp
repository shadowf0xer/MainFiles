// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelAxisDependencies.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelAxisDependencies() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
// End Cross Module References
	static UEnum* EVoxelFunctionAxisDependencies_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelFunctionAxisDependencies"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelFunctionAxisDependencies>()
	{
		return EVoxelFunctionAxisDependencies_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelFunctionAxisDependencies(EVoxelFunctionAxisDependencies_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EVoxelFunctionAxisDependencies"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Hash() { return 1295910232U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelFunctionAxisDependencies"), 0, Get_Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelFunctionAxisDependencies::X", (int64)EVoxelFunctionAxisDependencies::X },
				{ "EVoxelFunctionAxisDependencies::XYWithCache", (int64)EVoxelFunctionAxisDependencies::XYWithCache },
				{ "EVoxelFunctionAxisDependencies::XYWithoutCache", (int64)EVoxelFunctionAxisDependencies::XYWithoutCache },
				{ "EVoxelFunctionAxisDependencies::XYZWithCache", (int64)EVoxelFunctionAxisDependencies::XYZWithCache },
				{ "EVoxelFunctionAxisDependencies::XYZWithoutCache", (int64)EVoxelFunctionAxisDependencies::XYZWithoutCache },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VoxelAxisDependencies.h" },
				{ "X.Name", "EVoxelFunctionAxisDependencies::X" },
				{ "XYWithCache.Comment", "// X was run\n" },
				{ "XYWithCache.Name", "EVoxelFunctionAxisDependencies::XYWithCache" },
				{ "XYWithCache.ToolTip", "X was run" },
				{ "XYWithoutCache.Comment", "// X wasn't run\n" },
				{ "XYWithoutCache.Name", "EVoxelFunctionAxisDependencies::XYWithoutCache" },
				{ "XYWithoutCache.ToolTip", "X wasn't run" },
				{ "XYZWithCache.Comment", "// XY was run\n" },
				{ "XYZWithCache.Name", "EVoxelFunctionAxisDependencies::XYZWithCache" },
				{ "XYZWithCache.ToolTip", "XY was run" },
				{ "XYZWithoutCache.Comment", "// XY wasn't run\n" },
				{ "XYZWithoutCache.Name", "EVoxelFunctionAxisDependencies::XYZWithoutCache" },
				{ "XYZWithoutCache.ToolTip", "XY wasn't run" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EVoxelFunctionAxisDependencies",
				"EVoxelFunctionAxisDependencies",
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
