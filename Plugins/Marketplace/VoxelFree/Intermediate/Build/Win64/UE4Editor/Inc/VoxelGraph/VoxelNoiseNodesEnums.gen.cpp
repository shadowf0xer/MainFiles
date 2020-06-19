// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelNoiseNodesEnums.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelNoiseNodesEnums() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_ECellularReturnType();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_ECellularDistanceFunction();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EInterp();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EFractalType();
// End Cross Module References
	static UEnum* ECellularReturnType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_ECellularReturnType, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("ECellularReturnType"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<ECellularReturnType>()
	{
		return ECellularReturnType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECellularReturnType(ECellularReturnType_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("ECellularReturnType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_ECellularReturnType_Hash() { return 3518076320U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_ECellularReturnType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECellularReturnType"), 0, Get_Z_Construct_UEnum_VoxelGraph_ECellularReturnType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECellularReturnType::CellValue", (int64)ECellularReturnType::CellValue },
				{ "ECellularReturnType::Distance", (int64)ECellularReturnType::Distance },
				{ "ECellularReturnType::Distance2", (int64)ECellularReturnType::Distance2 },
				{ "ECellularReturnType::Distance2Add", (int64)ECellularReturnType::Distance2Add },
				{ "ECellularReturnType::Distance2Sub", (int64)ECellularReturnType::Distance2Sub },
				{ "ECellularReturnType::Distance2Mul", (int64)ECellularReturnType::Distance2Mul },
				{ "ECellularReturnType::Distance2Div", (int64)ECellularReturnType::Distance2Div },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CellValue.Name", "ECellularReturnType::CellValue" },
				{ "Distance.Name", "ECellularReturnType::Distance" },
				{ "Distance2.Name", "ECellularReturnType::Distance2" },
				{ "Distance2Add.Name", "ECellularReturnType::Distance2Add" },
				{ "Distance2Div.Name", "ECellularReturnType::Distance2Div" },
				{ "Distance2Mul.Name", "ECellularReturnType::Distance2Mul" },
				{ "Distance2Sub.Name", "ECellularReturnType::Distance2Sub" },
				{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesEnums.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"ECellularReturnType",
				"ECellularReturnType",
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
	static UEnum* ECellularDistanceFunction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_ECellularDistanceFunction, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("ECellularDistanceFunction"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<ECellularDistanceFunction>()
	{
		return ECellularDistanceFunction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECellularDistanceFunction(ECellularDistanceFunction_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("ECellularDistanceFunction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_ECellularDistanceFunction_Hash() { return 3622535252U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_ECellularDistanceFunction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECellularDistanceFunction"), 0, Get_Z_Construct_UEnum_VoxelGraph_ECellularDistanceFunction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECellularDistanceFunction::Euclidean", (int64)ECellularDistanceFunction::Euclidean },
				{ "ECellularDistanceFunction::Manhattan", (int64)ECellularDistanceFunction::Manhattan },
				{ "ECellularDistanceFunction::Natural", (int64)ECellularDistanceFunction::Natural },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Euclidean.Name", "ECellularDistanceFunction::Euclidean" },
				{ "Manhattan.Name", "ECellularDistanceFunction::Manhattan" },
				{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesEnums.h" },
				{ "Natural.Name", "ECellularDistanceFunction::Natural" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"ECellularDistanceFunction",
				"ECellularDistanceFunction",
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
	static UEnum* EInterp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EInterp, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EInterp"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EInterp>()
	{
		return EInterp_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInterp(EInterp_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EInterp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EInterp_Hash() { return 2559856433U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EInterp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInterp"), 0, Get_Z_Construct_UEnum_VoxelGraph_EInterp_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInterp::Linear", (int64)EInterp::Linear },
				{ "EInterp::Hermite", (int64)EInterp::Hermite },
				{ "EInterp::Quintic", (int64)EInterp::Quintic },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Hermite.Name", "EInterp::Hermite" },
				{ "Linear.Name", "EInterp::Linear" },
				{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesEnums.h" },
				{ "Quintic.Name", "EInterp::Quintic" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EInterp",
				"EInterp",
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
	static UEnum* EFractalType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EFractalType, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EFractalType"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EFractalType>()
	{
		return EFractalType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFractalType(EFractalType_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EFractalType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EFractalType_Hash() { return 4168032200U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EFractalType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFractalType"), 0, Get_Z_Construct_UEnum_VoxelGraph_EFractalType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFractalType::FBM", (int64)EFractalType::FBM },
				{ "EFractalType::Billow", (int64)EFractalType::Billow },
				{ "EFractalType::RigidMulti", (int64)EFractalType::RigidMulti },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Billow.Name", "EFractalType::Billow" },
				{ "BlueprintType", "true" },
				{ "FBM.Name", "EFractalType::FBM" },
				{ "ModuleRelativePath", "Public/VoxelNodes/VoxelNoiseNodesEnums.h" },
				{ "RigidMulti.Name", "EFractalType::RigidMulti" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EFractalType",
				"EFractalType",
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
