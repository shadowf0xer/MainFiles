// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelGraphPreviewSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphPreviewSettings() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister();
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelMaterialConfig();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
	static UEnum* EVoxelGraphMaterialPreviewType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelGraphMaterialPreviewType"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphMaterialPreviewType>()
	{
		return EVoxelGraphMaterialPreviewType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelGraphMaterialPreviewType(EVoxelGraphMaterialPreviewType_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EVoxelGraphMaterialPreviewType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType_Hash() { return 3041022120U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelGraphMaterialPreviewType"), 0, Get_Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelGraphMaterialPreviewType::RGB", (int64)EVoxelGraphMaterialPreviewType::RGB },
				{ "EVoxelGraphMaterialPreviewType::Alpha", (int64)EVoxelGraphMaterialPreviewType::Alpha },
				{ "EVoxelGraphMaterialPreviewType::SingleIndex", (int64)EVoxelGraphMaterialPreviewType::SingleIndex },
				{ "EVoxelGraphMaterialPreviewType::MultiIndex_Overview", (int64)EVoxelGraphMaterialPreviewType::MultiIndex_Overview },
				{ "EVoxelGraphMaterialPreviewType::MultiIndex_SingleIndexPreview", (int64)EVoxelGraphMaterialPreviewType::MultiIndex_SingleIndexPreview },
				{ "EVoxelGraphMaterialPreviewType::MultiIndex_Wetness", (int64)EVoxelGraphMaterialPreviewType::MultiIndex_Wetness },
				{ "EVoxelGraphMaterialPreviewType::UV0", (int64)EVoxelGraphMaterialPreviewType::UV0 },
				{ "EVoxelGraphMaterialPreviewType::UV1", (int64)EVoxelGraphMaterialPreviewType::UV1 },
				{ "EVoxelGraphMaterialPreviewType::UV2", (int64)EVoxelGraphMaterialPreviewType::UV2 },
				{ "EVoxelGraphMaterialPreviewType::UV3", (int64)EVoxelGraphMaterialPreviewType::UV3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.Comment", "// Show the material Alpha value\n" },
				{ "Alpha.Name", "EVoxelGraphMaterialPreviewType::Alpha" },
				{ "Alpha.ToolTip", "Show the material Alpha value" },
				{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
				{ "MultiIndex_Overview.Comment", "// Blends the indices colors\n" },
				{ "MultiIndex_Overview.Name", "EVoxelGraphMaterialPreviewType::MultiIndex_Overview" },
				{ "MultiIndex_Overview.ToolTip", "Blends the indices colors" },
				{ "MultiIndex_SingleIndexPreview.Comment", "// Only shows the strength of a single index (set by MultiIndexToPreview)\n" },
				{ "MultiIndex_SingleIndexPreview.Name", "EVoxelGraphMaterialPreviewType::MultiIndex_SingleIndexPreview" },
				{ "MultiIndex_SingleIndexPreview.ToolTip", "Only shows the strength of a single index (set by MultiIndexToPreview)" },
				{ "MultiIndex_Wetness.Comment", "// Wetness\n" },
				{ "MultiIndex_Wetness.Name", "EVoxelGraphMaterialPreviewType::MultiIndex_Wetness" },
				{ "MultiIndex_Wetness.ToolTip", "Wetness" },
				{ "RGB.Comment", "// Show the material RGB values\n" },
				{ "RGB.Name", "EVoxelGraphMaterialPreviewType::RGB" },
				{ "RGB.ToolTip", "Show the material RGB values" },
				{ "SingleIndex.Comment", "// Assign one color per index\n" },
				{ "SingleIndex.Name", "EVoxelGraphMaterialPreviewType::SingleIndex" },
				{ "SingleIndex.ToolTip", "Assign one color per index" },
				{ "UV0.Comment", "// Red-Green preview of UV0\n" },
				{ "UV0.Name", "EVoxelGraphMaterialPreviewType::UV0" },
				{ "UV0.ToolTip", "Red-Green preview of UV0" },
				{ "UV1.Comment", "// Red-Green preview of UV1\n" },
				{ "UV1.Name", "EVoxelGraphMaterialPreviewType::UV1" },
				{ "UV1.ToolTip", "Red-Green preview of UV1" },
				{ "UV2.Comment", "// Red-Green preview of UV2\n" },
				{ "UV2.Name", "EVoxelGraphMaterialPreviewType::UV2" },
				{ "UV2.ToolTip", "Red-Green preview of UV2" },
				{ "UV3.Comment", "// Red-Green preview of UV3\n" },
				{ "UV3.Name", "EVoxelGraphMaterialPreviewType::UV3" },
				{ "UV3.ToolTip", "Red-Green preview of UV3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EVoxelGraphMaterialPreviewType",
				"EVoxelGraphMaterialPreviewType",
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
	static UEnum* EVoxelGraphPreviewType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelGraphPreviewType"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewType>()
	{
		return EVoxelGraphPreviewType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelGraphPreviewType(EVoxelGraphPreviewType_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EVoxelGraphPreviewType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType_Hash() { return 2984928346U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelGraphPreviewType"), 0, Get_Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelGraphPreviewType::Density", (int64)EVoxelGraphPreviewType::Density },
				{ "EVoxelGraphPreviewType::Material", (int64)EVoxelGraphPreviewType::Material },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Density.Name", "EVoxelGraphPreviewType::Density" },
				{ "Material.Name", "EVoxelGraphPreviewType::Material" },
				{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EVoxelGraphPreviewType",
				"EVoxelGraphPreviewType",
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
	static UEnum* EVoxelGraphPreviewAxes_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelGraphPreviewAxes"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphPreviewAxes>()
	{
		return EVoxelGraphPreviewAxes_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelGraphPreviewAxes(EVoxelGraphPreviewAxes_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EVoxelGraphPreviewAxes"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes_Hash() { return 2960077611U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelGraphPreviewAxes"), 0, Get_Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelGraphPreviewAxes::X", (int64)EVoxelGraphPreviewAxes::X },
				{ "EVoxelGraphPreviewAxes::Y", (int64)EVoxelGraphPreviewAxes::Y },
				{ "EVoxelGraphPreviewAxes::Z", (int64)EVoxelGraphPreviewAxes::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
				{ "X.Name", "EVoxelGraphPreviewAxes::X" },
				{ "Y.Name", "EVoxelGraphPreviewAxes::Y" },
				{ "Z.Name", "EVoxelGraphPreviewAxes::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EVoxelGraphPreviewAxes",
				"EVoxelGraphPreviewAxes",
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
	void UVoxelGraphPreviewSettings::StaticRegisterNativesUVoxelGraphPreviewSettings()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister()
	{
		return UVoxelGraphPreviewSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODToPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODToPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizeMaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizeMaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalizeMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalizeMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoNormalize_MetaData[];
#endif
		static void NewProp_bAutoNormalize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoNormalize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadowDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableWater_MetaData[];
#endif
		static void NewProp_bEnableWater_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableWater;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHeightBasedColor_MetaData[];
#endif
		static void NewProp_bHeightBasedColor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHeightBasedColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IndexColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IndexColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiIndexToPreview_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MultiIndexToPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialPreviewType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialPreviewType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialPreviewType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawColoredDistanceField_MetaData[];
#endif
		static void NewProp_bDrawColoredDistanceField_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawColoredDistanceField;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewType2D_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PreviewType2D;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PreviewType2D_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialConfig;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialConfig_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewedBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewedBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomToTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BottomToTop;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BottomToTop_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftToRight_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LeftToRight;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LeftToRight_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphPreviewSettings.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Graph), Z_Construct_UClass_UVoxelGraphGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LODToPreview_MetaData[] = {
		{ "Category", "Misc" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
		{ "Comment", "// Simulate querying a chunk at a specific LOD, eg to check fractal noise settings\n" },
		{ "DisplayName", "LOD to preview" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "Simulate querying a chunk at a specific LOD, eg to check fractal noise settings" },
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LODToPreview = { "LODToPreview", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, LODToPreview), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LODToPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LODToPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMaxValue_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// White\n" },
		{ "EditCondition", "!bAutoNormalize" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "White" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMaxValue = { "NormalizeMaxValue", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, NormalizeMaxValue), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMinValue_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Black\n" },
		{ "EditCondition", "!bAutoNormalize" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "Black" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMinValue = { "NormalizeMinValue", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, NormalizeMinValue), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "// Will set black to the lowest value in the image, and white to the highest\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "Will set black to the lowest value in the image, and white to the highest" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize_SetBit(void* Obj)
	{
		((UVoxelGraphPreviewSettings*)Obj)->bAutoNormalize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize = { "bAutoNormalize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MeshScale_MetaData[] = {
		{ "Category", "3D Preview Settings|Mesh" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "NoRebuild", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MeshScale = { "MeshScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "3D Preview Settings|Mesh" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "NoRebuild", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "3D Preview Settings|Mesh" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "NoRebuild", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShadowDensity_MetaData[] = {
		{ "Category", "3D Preview Settings|Raytraced Shadows" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "NoRebuild", "" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShadowDensity = { "ShadowDensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, ShadowDensity), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShadowDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShadowDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "3D Preview Settings|Raytraced Shadows" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "NoRebuild", "" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Brightness), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxSteps_MetaData[] = {
		{ "Category", "3D Preview Settings|Raytraced Shadows" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "NoRebuild", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxSteps = { "MaxSteps", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MaxSteps), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_StartBias_MetaData[] = {
		{ "Category", "3D Preview Settings|Raytraced Shadows" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "NoRebuild", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_StartBias = { "StartBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, StartBias), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_StartBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_StartBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LightDirection_MetaData[] = {
		{ "Category", "3D Preview Settings" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "NoRebuild", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LightDirection = { "LightDirection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, LightDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LightDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LightDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "3D Preview Settings" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "NoRebuild", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Height), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater_MetaData[] = {
		{ "Category", "3D Preview Color" },
		{ "EditCondition", "bHeightBasedColor" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater_SetBit(void* Obj)
	{
		((UVoxelGraphPreviewSettings*)Obj)->bEnableWater = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater = { "bEnableWater", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor_MetaData[] = {
		{ "Category", "3D Preview Color" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor_SetBit(void* Obj)
	{
		((UVoxelGraphPreviewSettings*)Obj)->bHeightBasedColor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor = { "bHeightBasedColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors_MetaData[] = {
		{ "Category", "2D Preview Color" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors = { "IndexColors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, IndexColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors_Inner = { "IndexColors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MultiIndexToPreview_MetaData[] = {
		{ "Category", "2D Preview Color" },
		{ "Comment", "// Used if material preview type is MultiIndex_SingleIndexPreview\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "Used if material preview type is MultiIndex_SingleIndexPreview" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MultiIndexToPreview = { "MultiIndexToPreview", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MultiIndexToPreview), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MultiIndexToPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MultiIndexToPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType_MetaData[] = {
		{ "Category", "2D Preview Color" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType = { "MaterialPreviewType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MaterialPreviewType), Z_Construct_UEnum_VoxelGraph_EVoxelGraphMaterialPreviewType, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField_MetaData[] = {
		{ "Category", "2D Preview Color" },
		{ "Comment", "// If true, will color the distance field orange when positive, blue when negative, and will apply a cosine to make progression easier to see\n// This coloring is directly derived from Inigo Quilez's work\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "If true, will color the distance field orange when positive, blue when negative, and will apply a cosine to make progression easier to see\nThis coloring is directly derived from Inigo Quilez's work" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField_SetBit(void* Obj)
	{
		((UVoxelGraphPreviewSettings*)Obj)->bDrawColoredDistanceField = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField = { "bDrawColoredDistanceField", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphPreviewSettings), &Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D_MetaData[] = {
		{ "Category", "2D Preview Color" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D = { "PreviewType2D", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, PreviewType2D), Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewType, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_VoxelSize_MetaData[] = {
		{ "Category", "Voxel World Settings" },
		{ "Comment", "// Value returned by the Voxel Size node\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "Value returned by the Voxel Size node" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, VoxelSize), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_VoxelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_VoxelSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Seeds_MetaData[] = {
		{ "Category", "Voxel World Settings" },
		{ "Comment", "// Seeds used by seed nodes\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "Seeds used by seed nodes" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialCollection_MetaData[] = {
		{ "Category", "Voxel World Settings" },
		{ "Comment", "// Use to preview Get Index from Material Collection\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "Use to preview Get Index from Material Collection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialCollection = { "MaterialCollection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MaterialCollection), Z_Construct_UClass_UVoxelMaterialCollectionBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig_MetaData[] = {
		{ "Category", "Voxel World Settings" },
		{ "Comment", "// Set this to the material config your voxel world will use\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "Set this to the material config your voxel world will use" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig = { "MaterialConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MaterialConfig), Z_Construct_UEnum_Voxel_EVoxelMaterialConfig, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewedBounds_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewedBounds = { "PreviewedBounds", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, PreviewedBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewedBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ResolutionScale_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ClampMax", "20" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "UIMax", "20" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ResolutionScale = { "ResolutionScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, ResolutionScale), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Resolution), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Resolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, Center), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop = { "BottomToTop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, BottomToTop), Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight_MetaData[] = {
		{ "Category", "Preview Zone" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight = { "LeftToRight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, LeftToRight), Z_Construct_UEnum_VoxelGraph_EVoxelGraphPreviewAxes, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "Preview Info" },
		{ "Comment", "// Max displayed value\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "Max displayed value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MaxValue), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "Preview Info" },
		{ "Comment", "// Min displayed value\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphPreviewSettings.h" },
		{ "ToolTip", "Min displayed value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphPreviewSettings, MinValue), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MinValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Graph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LODToPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_NormalizeMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bAutoNormalize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ShadowDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Brightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_StartBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LightDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bEnableWater,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bHeightBasedColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_IndexColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MultiIndexToPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialPreviewType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_bDrawColoredDistanceField,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewType2D_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_VoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaterialConfig_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_PreviewedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_ResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Resolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_BottomToTop_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_LeftToRight_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::NewProp_MinValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphPreviewSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::ClassParams = {
		&UVoxelGraphPreviewSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphPreviewSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphPreviewSettings, 523364803);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphPreviewSettings>()
	{
		return UVoxelGraphPreviewSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphPreviewSettings(Z_Construct_UClass_UVoxelGraphPreviewSettings, &UVoxelGraphPreviewSettings::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphPreviewSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphPreviewSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
