// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelPinCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPinCategory() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
// End Cross Module References
	static UEnum* EVoxelDataPinCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelDataPinCategory"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelDataPinCategory>()
	{
		return EVoxelDataPinCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelDataPinCategory(EVoxelDataPinCategory_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EVoxelDataPinCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Hash() { return 1050478953U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelDataPinCategory"), 0, Get_Z_Construct_UEnum_VoxelGraph_EVoxelDataPinCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelDataPinCategory::Boolean", (int64)EVoxelDataPinCategory::Boolean },
				{ "EVoxelDataPinCategory::Int", (int64)EVoxelDataPinCategory::Int },
				{ "EVoxelDataPinCategory::Float", (int64)EVoxelDataPinCategory::Float },
				{ "EVoxelDataPinCategory::Material", (int64)EVoxelDataPinCategory::Material },
				{ "EVoxelDataPinCategory::Color", (int64)EVoxelDataPinCategory::Color },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Boolean.Name", "EVoxelDataPinCategory::Boolean" },
				{ "Color.Name", "EVoxelDataPinCategory::Color" },
				{ "Float.Name", "EVoxelDataPinCategory::Float" },
				{ "Int.Name", "EVoxelDataPinCategory::Int" },
				{ "Material.Name", "EVoxelDataPinCategory::Material" },
				{ "ModuleRelativePath", "Public/VoxelPinCategory.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EVoxelDataPinCategory",
				"EVoxelDataPinCategory",
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
	static UEnum* EVoxelPinCategory_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelPinCategory"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelPinCategory>()
	{
		return EVoxelPinCategory_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelPinCategory(EVoxelPinCategory_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EVoxelPinCategory"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Hash() { return 2635478180U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelPinCategory"), 0, Get_Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelPinCategory::Exec", (int64)EVoxelPinCategory::Exec },
				{ "EVoxelPinCategory::Boolean", (int64)EVoxelPinCategory::Boolean },
				{ "EVoxelPinCategory::Int", (int64)EVoxelPinCategory::Int },
				{ "EVoxelPinCategory::Float", (int64)EVoxelPinCategory::Float },
				{ "EVoxelPinCategory::Material", (int64)EVoxelPinCategory::Material },
				{ "EVoxelPinCategory::Color", (int64)EVoxelPinCategory::Color },
				{ "EVoxelPinCategory::Seed", (int64)EVoxelPinCategory::Seed },
				{ "EVoxelPinCategory::Wildcard", (int64)EVoxelPinCategory::Wildcard },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Boolean.Name", "EVoxelPinCategory::Boolean" },
				{ "Color.Name", "EVoxelPinCategory::Color" },
				{ "Exec.Name", "EVoxelPinCategory::Exec" },
				{ "Float.Name", "EVoxelPinCategory::Float" },
				{ "Int.Name", "EVoxelPinCategory::Int" },
				{ "Material.Name", "EVoxelPinCategory::Material" },
				{ "ModuleRelativePath", "Public/VoxelPinCategory.h" },
				{ "Seed.Name", "EVoxelPinCategory::Seed" },
				{ "Wildcard.Hidden", "" },
				{ "Wildcard.Name", "EVoxelPinCategory::Wildcard" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EVoxelPinCategory",
				"EVoxelPinCategory",
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
