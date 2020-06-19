// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelExecNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelExecNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelSetterNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetColor_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetColor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetSingleIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetSingleIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_AddMultiIndex_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_AddMultiIndex();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetUVs_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetUVs();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetNode();
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelGraphOutput();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetValueNode_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_SetValueNode();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FunctionSeparator_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FunctionSeparator();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode();
	VOXELGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelNamedDataPin();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FlowMerge_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FlowMerge();
// End Cross Module References
	void UVoxelNode_MaterialSetter::StaticRegisterNativesUVoxelNode_MaterialSetter()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter_NoRegister()
	{
		return UVoxelNode_MaterialSetter::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSetterNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_MaterialSetter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::ClassParams = {
		&UVoxelNode_MaterialSetter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_MaterialSetter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_MaterialSetter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_MaterialSetter, 373099019);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_MaterialSetter>()
	{
		return UVoxelNode_MaterialSetter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_MaterialSetter(Z_Construct_UClass_UVoxelNode_MaterialSetter, &UVoxelNode_MaterialSetter::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_MaterialSetter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_MaterialSetter);
	void UVoxelNode_SetColor::StaticRegisterNativesUVoxelNode_SetColor()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_SetColor_NoRegister()
	{
		return UVoxelNode_SetColor::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SetColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SetColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetColor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Set the color at that position. Inputs between 0 and 1\n// Will not work in multi index!\n// In single index, Alpha will be ignored (as it's used for the index)\n" },
		{ "DisplayName", "Set Color" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
		{ "ToolTip", "Set the color at that position. Inputs between 0 and 1\nWill not work in multi index!\nIn single index, Alpha will be ignored (as it's used for the index)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SetColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetColor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetColor_Statics::ClassParams = {
		&UVoxelNode_SetColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SetColor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_SetColor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_SetColor, 3739498897);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SetColor>()
	{
		return UVoxelNode_SetColor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_SetColor(Z_Construct_UClass_UVoxelNode_SetColor, &UVoxelNode_SetColor::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_SetColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetColor);
	void UVoxelNode_SetSingleIndex::StaticRegisterNativesUVoxelNode_SetSingleIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_SetSingleIndex_NoRegister()
	{
		return UVoxelNode_SetSingleIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Set the material index at that position. Input clamped between 0 and 255.\n" },
		{ "DisplayName", "Set Single Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
		{ "ToolTip", "Set the material index at that position. Input clamped between 0 and 255." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetSingleIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::ClassParams = {
		&UVoxelNode_SetSingleIndex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SetSingleIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_SetSingleIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_SetSingleIndex, 1343170724);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SetSingleIndex>()
	{
		return UVoxelNode_SetSingleIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_SetSingleIndex(Z_Construct_UClass_UVoxelNode_SetSingleIndex, &UVoxelNode_SetSingleIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_SetSingleIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetSingleIndex);
	void UVoxelNode_SetMultiIndexWetness::StaticRegisterNativesUVoxelNode_SetMultiIndexWetness()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_NoRegister()
	{
		return UVoxelNode_SetMultiIndexWetness::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Set the multi index wetness as that position, between 0 and 1. Wetness can be queried using the GetMultiIndexWetness material function in your shader.\n" },
		{ "DisplayName", "Set Multi Index Wetness" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
		{ "ToolTip", "Set the multi index wetness as that position, between 0 and 1. Wetness can be queried using the GetMultiIndexWetness material function in your shader." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetMultiIndexWetness>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::ClassParams = {
		&UVoxelNode_SetMultiIndexWetness::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_SetMultiIndexWetness, 3232482183);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SetMultiIndexWetness>()
	{
		return UVoxelNode_SetMultiIndexWetness::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_SetMultiIndexWetness(Z_Construct_UClass_UVoxelNode_SetMultiIndexWetness, &UVoxelNode_SetMultiIndexWetness::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_SetMultiIndexWetness"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetMultiIndexWetness);
	void UVoxelNode_AddMultiIndex::StaticRegisterNativesUVoxelNode_AddMultiIndex()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_AddMultiIndex_NoRegister()
	{
		return UVoxelNode_AddMultiIndex::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Add multi index with the specified strength\n// The strength will be normalized according to the other strengths set, except if Lock Strength is true\n" },
		{ "DisplayName", "Add Multi Index" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
		{ "ToolTip", "Add multi index with the specified strength\nThe strength will be normalized according to the other strengths set, except if Lock Strength is true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_AddMultiIndex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::ClassParams = {
		&UVoxelNode_AddMultiIndex::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_AddMultiIndex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_AddMultiIndex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_AddMultiIndex, 73691844);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_AddMultiIndex>()
	{
		return UVoxelNode_AddMultiIndex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_AddMultiIndex(Z_Construct_UClass_UVoxelNode_AddMultiIndex, &UVoxelNode_AddMultiIndex::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_AddMultiIndex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_AddMultiIndex);
	void UVoxelNode_SetUVs::StaticRegisterNativesUVoxelNode_SetUVs()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_SetUVs_NoRegister()
	{
		return UVoxelNode_SetUVs::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SetUVs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetV_MetaData[];
#endif
		static void NewProp_bSetV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSetU_MetaData[];
#endif
		static void NewProp_bSetU_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSetU;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SetUVs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_MaterialSetter,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetUVs_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Set the material additional UVs channels\n// By default the plugin has 2 UV channels that can be queried using TexCoord[1] and TexCoord[2] in the material\n// Values should be between 0.f and 1.f\n// Index should be 0 or 1 (or 2/3 if you enabled them in VoxelUserDefinitions.h)\n// UVs 0 and 1 will not be set in MultiIndex!\n" },
		{ "DisplayName", "Set UV Channel" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
		{ "ToolTip", "Set the material additional UVs channels\nBy default the plugin has 2 UV channels that can be queried using TexCoord[1] and TexCoord[2] in the material\nValues should be between 0.f and 1.f\nIndex should be 0 or 1 (or 2/3 if you enabled them in VoxelUserDefinitions.h)\nUVs 0 and 1 will not be set in MultiIndex!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV_SetBit(void* Obj)
	{
		((UVoxelNode_SetUVs*)Obj)->bSetV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV = { "bSetV", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_SetUVs), &Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU_SetBit(void* Obj)
	{
		((UVoxelNode_SetUVs*)Obj)->bSetU = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU = { "bSetU", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_SetUVs), &Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_SetUVs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SetUVs_Statics::NewProp_bSetU,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SetUVs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetUVs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetUVs_Statics::ClassParams = {
		&UVoxelNode_SetUVs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_SetUVs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetUVs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SetUVs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_SetUVs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_SetUVs, 3082381383);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SetUVs>()
	{
		return UVoxelNode_SetUVs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_SetUVs(Z_Construct_UClass_UVoxelNode_SetUVs, &UVoxelNode_SetUVs::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_SetUVs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetUVs);
	void UVoxelNode_SetNode::StaticRegisterNativesUVoxelNode_SetNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_SetNode_NoRegister()
	{
		return UVoxelNode_SetNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SetNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedOutput_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedOutput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SetNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSetterNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetNode_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Set Node" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_CachedOutput_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_CachedOutput = { "CachedOutput", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_SetNode, CachedOutput), Z_Construct_UScriptStruct_FVoxelGraphOutput, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_CachedOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_CachedOutput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_SetNode, Index), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_SetNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_CachedOutput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_SetNode_Statics::NewProp_Index,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SetNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetNode_Statics::ClassParams = {
		&UVoxelNode_SetNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_SetNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetNode_Statics::PropPointers),
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SetNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_SetNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_SetNode, 768316995);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SetNode>()
	{
		return UVoxelNode_SetNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_SetNode(Z_Construct_UClass_UVoxelNode_SetNode, &UVoxelNode_SetNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_SetNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetNode);
	void UVoxelNode_SetValueNode::StaticRegisterNativesUVoxelNode_SetValueNode()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_SetValueNode_NoRegister()
	{
		return UVoxelNode_SetValueNode::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_SetValueNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_SetNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_SetValueNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::ClassParams = {
		&UVoxelNode_SetValueNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_SetValueNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_SetValueNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_SetValueNode, 2642876217);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_SetValueNode>()
	{
		return UVoxelNode_SetValueNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_SetValueNode(Z_Construct_UClass_UVoxelNode_SetValueNode, &UVoxelNode_SetValueNode::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_SetValueNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_SetValueNode);
	void UVoxelNode_FunctionSeparator::StaticRegisterNativesUVoxelNode_FunctionSeparator()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_FunctionSeparator_NoRegister()
	{
		return UVoxelNode_FunctionSeparator::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArgTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArgTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArgTypes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::Class_MetaDataParams[] = {
		{ "Category", "Flow Control" },
		{ "Comment", "// Break the graph into multiple functions\n" },
		{ "DisplayName", "Function Separator" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
		{ "ToolTip", "Break the graph into multiple functions" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::NewProp_ArgTypes_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::NewProp_ArgTypes = { "ArgTypes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_FunctionSeparator, ArgTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::NewProp_ArgTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::NewProp_ArgTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::NewProp_ArgTypes_Inner = { "ArgTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelNamedDataPin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::NewProp_ArgTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::NewProp_ArgTypes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FunctionSeparator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::ClassParams = {
		&UVoxelNode_FunctionSeparator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_FunctionSeparator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_FunctionSeparator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_FunctionSeparator, 899442213);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_FunctionSeparator>()
	{
		return UVoxelNode_FunctionSeparator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_FunctionSeparator(Z_Construct_UClass_UVoxelNode_FunctionSeparator, &UVoxelNode_FunctionSeparator::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_FunctionSeparator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FunctionSeparator);
	void UVoxelNode_FlowMerge::StaticRegisterNativesUVoxelNode_FlowMerge()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_FlowMerge_NoRegister()
	{
		return UVoxelNode_FlowMerge::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_FlowMerge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Types_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Types;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Types_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::Class_MetaDataParams[] = {
		{ "Category", "Flow Control" },
		{ "Comment", "// Merges exec flow\n" },
		{ "DisplayName", "Flow Merge" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelExecNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
		{ "ToolTip", "Merges exec flow" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelExecNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types = { "Types", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_FlowMerge, Types), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types_Inner = { "Types", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelNamedDataPin, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::NewProp_Types_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FlowMerge>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::ClassParams = {
		&UVoxelNode_FlowMerge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_FlowMerge()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_FlowMerge_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_FlowMerge, 2510092897);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_FlowMerge>()
	{
		return UVoxelNode_FlowMerge::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_FlowMerge(Z_Construct_UClass_UVoxelNode_FlowMerge, &UVoxelNode_FlowMerge::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_FlowMerge"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FlowMerge);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
