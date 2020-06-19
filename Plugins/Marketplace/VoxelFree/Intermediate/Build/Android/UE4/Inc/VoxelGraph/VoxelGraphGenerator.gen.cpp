// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelGraphGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphGenerator() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphGenerator();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGenerator();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_NoRegister();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister();
// End Cross Module References
	static UEnum* EVoxelGraphGeneratorDebugLevel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelGraphGeneratorDebugLevel"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelGraphGeneratorDebugLevel>()
	{
		return EVoxelGraphGeneratorDebugLevel_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelGraphGeneratorDebugLevel(EVoxelGraphGeneratorDebugLevel_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EVoxelGraphGeneratorDebugLevel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Hash() { return 2048264021U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelGraphGeneratorDebugLevel"), 0, Get_Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining", (int64)EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining },
				{ "EVoxelGraphGeneratorDebugLevel::AfterMacroInlining", (int64)EVoxelGraphGeneratorDebugLevel::AfterMacroInlining },
				{ "EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace", (int64)EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace },
				{ "EVoxelGraphGeneratorDebugLevel::Output", (int64)EVoxelGraphGeneratorDebugLevel::Output },
				{ "EVoxelGraphGeneratorDebugLevel::Function", (int64)EVoxelGraphGeneratorDebugLevel::Function },
				{ "EVoxelGraphGeneratorDebugLevel::Axis", (int64)EVoxelGraphGeneratorDebugLevel::Axis },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AfterBiomeMergeReplace.Name", "EVoxelGraphGeneratorDebugLevel::AfterBiomeMergeReplace" },
				{ "AfterMacroInlining.Name", "EVoxelGraphGeneratorDebugLevel::AfterMacroInlining" },
				{ "Axis.Name", "EVoxelGraphGeneratorDebugLevel::Axis" },
				{ "BeforeMacroInlining.Name", "EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining" },
				{ "Function.Name", "EVoxelGraphGeneratorDebugLevel::Function" },
				{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
				{ "Output.Name", "EVoxelGraphGeneratorDebugLevel::Output" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EVoxelGraphGeneratorDebugLevel",
				"EVoxelGraphGeneratorDebugLevel",
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
	void UVoxelGraphGenerator::StaticRegisterNativesUVoxelGraphGenerator()
	{
	}
	UClass* Z_Construct_UClass_UVoxelGraphGenerator_NoRegister()
	{
		return UVoxelGraphGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewTextureSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewTextureSave;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewTextureSave_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelTextureParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_VoxelTextureParameters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VoxelTextureParameters_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VoxelTextureParameters_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ColorParameters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ColorParameters_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParameters_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoolParameters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoolParameters_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoolParameters_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_IntParameters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_IntParameters_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntParameters_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FloatParameters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FloatParameters_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatParameters_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelDebugGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelDebugGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoxelGraph_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelGraph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstNodePinId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FirstNodePinId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstNode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstNode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DebugNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DebugNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideDataNodes_MetaData[];
#endif
		static void NewProp_bHideDataNodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideDataNodes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodesDepthScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NodesDepthScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisDependenciesToDebug_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisDependenciesToDebug;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisDependenciesToDebug_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunctionToDebug_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FunctionToDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetToDebug_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetToDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DebugLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowPinsIds_MetaData[];
#endif
		static void NewProp_bShowPinsIds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPinsIds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugGraph_MetaData[];
#endif
		static void NewProp_bEnableDebugGraph_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugGraph;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDetailedErrors_MetaData[];
#endif
		static void NewProp_bDetailedErrors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDetailedErrors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFunctions_MetaData[];
#endif
		static void NewProp_bShowFunctions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFunctions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideRangeAnalysisErrors_MetaData[];
#endif
		static void NewProp_bHideRangeAnalysisErrors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideRangeAnalysisErrors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRangeAnalysis_MetaData[];
#endif
		static void NewProp_bEnableRangeAnalysis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRangeAnalysis;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSavePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LastSavePath;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaveLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompileToCppOnSave_MetaData[];
#endif
		static void NewProp_bCompileToCppOnSave_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompileToCppOnSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData[];
#endif
		static void NewProp_bShowFlowMergeAndFunctionsWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowFlowMergeAndFunctionsWarnings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRangeAnalysisDebug_MetaData[];
#endif
		static void NewProp_bEnableRangeAnalysisDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRangeAnalysisDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStats_MetaData[];
#endif
		static void NewProp_bEnableStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticPreview_MetaData[];
#endif
		static void NewProp_bAutomaticPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelTransformableWorldGenerator,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A graph world generator\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelGraphGenerator.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "ToolTip", "A graph world generator" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture = { "PreviewTexture", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, PreviewTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave = { "PreviewTextureSave", nullptr, (EPropertyFlags)0x0040000c00000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, PreviewTextureSave), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_Inner = { "PreviewTextureSave", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelTextureParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelTextureParameters = { "VoxelTextureParameters", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, VoxelTextureParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelTextureParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelTextureParameters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelTextureParameters_Key_KeyProp = { "VoxelTextureParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelTextureParameters_ValueProp = { "VoxelTextureParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_ColorParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_ColorParameters = { "ColorParameters", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, ColorParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_ColorParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_ColorParameters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_ColorParameters_Key_KeyProp = { "ColorParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_ColorParameters_ValueProp = { "ColorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_BoolParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_BoolParameters = { "BoolParameters", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, BoolParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_BoolParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_BoolParameters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_BoolParameters_Key_KeyProp = { "BoolParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_BoolParameters_ValueProp = { "BoolParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_IntParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_IntParameters = { "IntParameters", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, IntParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_IntParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_IntParameters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_IntParameters_Key_KeyProp = { "IntParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_IntParameters_ValueProp = { "IntParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FloatParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FloatParameters = { "FloatParameters", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, FloatParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FloatParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FloatParameters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FloatParameters_Key_KeyProp = { "FloatParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FloatParameters_ValueProp = { "FloatParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings = { "PreviewSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, PreviewSettings), Z_Construct_UClass_UVoxelGraphPreviewSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph = { "VoxelDebugGraph", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, VoxelDebugGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph = { "VoxelGraph", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, VoxelGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId = { "FirstNodePinId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, FirstNodePinId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode = { "FirstNode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, FirstNode), Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes = { "DebugNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, DebugNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_Inner = { "DebugNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bHideDataNodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes = { "bHideDataNodes", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Increase this if your macro nodes are overlapping in the debug graph\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Increase this if your macro nodes are overlapping in the debug graph" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor = { "NodesDepthScaleFactor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, NodesDepthScaleFactor), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The axis to debug, if DebugLevel is Axis\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The axis to debug, if DebugLevel is Axis" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug = { "AxisDependenciesToDebug", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, AxisDependenciesToDebug), Z_Construct_UEnum_VoxelGraph_EVoxelFunctionAxisDependencies, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The function to debug, if DebugLevel is below or equal to Function\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The function to debug, if DebugLevel is below or equal to Function" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug = { "FunctionToDebug", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, FunctionToDebug), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The target to debug, if DebugLevel is below or equal to Target\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The target to debug, if DebugLevel is below or equal to Target" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug = { "TargetToDebug", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, TargetToDebug), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// The level of compilation to debug\n" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "The level of compilation to debug" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel = { "DebugLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, DebugLevel), Z_Construct_UEnum_VoxelGraph_EVoxelGraphGeneratorDebugLevel, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_MetaData[] = {
		{ "Category", "Debug" },
		{ "EditCondition", "bEnableDebugGraph" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bShowPinsIds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds = { "bShowPinsIds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Can be enabled in Window->Debug Graph\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Can be enabled in Window->Debug Graph" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bEnableDebugGraph = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph = { "bEnableDebugGraph", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Show errors callstacks\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Show errors callstacks" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bDetailedErrors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors = { "bDetailedErrors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Will show the nodes functions. If DetailedErrors is false, will only show TargetToDebug\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "Refresh", "" },
		{ "ToolTip", "Will show the nodes functions. If DetailedErrors is false, will only show TargetToDebug" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bShowFunctions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions = { "bShowFunctions", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideRangeAnalysisErrors_MetaData[] = {
		{ "Category", "Range Analysis" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideRangeAnalysisErrors_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bHideRangeAnalysisErrors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideRangeAnalysisErrors = { "bHideRangeAnalysisErrors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideRangeAnalysisErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideRangeAnalysisErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideRangeAnalysisErrors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_MetaData[] = {
		{ "Category", "Range Analysis" },
		{ "Comment", "// Range analysis gives a pretty significant speed-up. You should not disable it\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "ToolTip", "Range analysis gives a pretty significant speed-up. You should not disable it" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bEnableRangeAnalysis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis = { "bEnableRangeAnalysis", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath = { "LastSavePath", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, LastSavePath), METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation_MetaData[] = {
		{ "Category", "Automatic compilation" },
		{ "Comment", "// Relative to project directory\n" },
		{ "EditCondition", "bCompileToCppOnSave" },
		{ "FilePathFilter", "h" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
		{ "ToolTip", "Relative to project directory" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation = { "SaveLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, SaveLocation), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_MetaData[] = {
		{ "Category", "Automatic compilation" },
		{ "DisplayName", "Compile to C++ on Save" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bCompileToCppOnSave = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave = { "bCompileToCppOnSave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bShowFlowMergeAndFunctionsWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings = { "bShowFlowMergeAndFunctionsWarnings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysisDebug_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysisDebug_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bEnableRangeAnalysisDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysisDebug = { "bEnableRangeAnalysisDebug", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysisDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysisDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysisDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableStats_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableStats_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bEnableStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableStats = { "bEnableStats", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableStats_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_SetBit(void* Obj)
	{
		((UVoxelGraphGenerator*)Obj)->bAutomaticPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview = { "bAutomaticPreview", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelGraphGenerator), &Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelGraphGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelGraphGenerator, Outputs), Z_Construct_UClass_UVoxelGraphOutputsConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelGraphGenerator_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewTextureSave_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelTextureParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelTextureParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelTextureParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_ColorParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_ColorParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_ColorParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_BoolParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_BoolParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_BoolParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_IntParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_IntParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_IntParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FloatParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FloatParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FloatParameters_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_PreviewSettings,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelDebugGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_VoxelGraph,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNodePinId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FirstNode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AllNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideDataNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_NodesDepthScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_AxisDependenciesToDebug_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_FunctionToDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_TargetToDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_DebugLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowPinsIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableDebugGraph,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bDetailedErrors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFunctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bHideRangeAnalysisErrors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysis,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_LastSavePath,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_SaveLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bCompileToCppOnSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bShowFlowMergeAndFunctionsWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableRangeAnalysisDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bEnableStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_bAutomaticPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelGraphGenerator_Statics::NewProp_Outputs,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister, (int32)VTABLE_OFFSET(UVoxelGraphGenerator, IVoxelEditorDelegatesInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphGenerator_Statics::ClassParams = {
		&UVoxelGraphGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelGraphGenerator_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphGenerator, 64871384);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphGenerator>()
	{
		return UVoxelGraphGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphGenerator(Z_Construct_UClass_UVoxelGraphGenerator, &UVoxelGraphGenerator::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
