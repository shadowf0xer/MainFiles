// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelParameterNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelParameterNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FloatParameter_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_FloatParameter();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelOptionallyExposedNode();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IntParameter_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IntParameter();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ColorParameter_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ColorParameter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BoolParameter_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_BoolParameter();
// End Cross Module References
	void UVoxelNode_FloatParameter::StaticRegisterNativesUVoxelNode_FloatParameter()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_FloatParameter_NoRegister()
	{
		return UVoxelNode_FloatParameter::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_FloatParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelOptionallyExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Float parameter\n" },
		{ "DisplayName", "float parameter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelParameterNodes.h" },
		{ "Keywords", "constant" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
		{ "ToolTip", "Float parameter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_FloatParameter, Value), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_FloatParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::ClassParams = {
		&UVoxelNode_FloatParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_FloatParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_FloatParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_FloatParameter, 4223866805);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_FloatParameter>()
	{
		return UVoxelNode_FloatParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_FloatParameter(Z_Construct_UClass_UVoxelNode_FloatParameter, &UVoxelNode_FloatParameter::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_FloatParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_FloatParameter);
	void UVoxelNode_IntParameter::StaticRegisterNativesUVoxelNode_IntParameter()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_IntParameter_NoRegister()
	{
		return UVoxelNode_IntParameter::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_IntParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_IntParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelOptionallyExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_IntParameter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Int parameter\n" },
		{ "DisplayName", "int parameter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelParameterNodes.h" },
		{ "Keywords", "constant" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
		{ "ToolTip", "Int parameter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_IntParameter_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_IntParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_IntParameter, Value), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_IntParameter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IntParameter_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_IntParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_IntParameter_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_IntParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IntParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IntParameter_Statics::ClassParams = {
		&UVoxelNode_IntParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_IntParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IntParameter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_IntParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IntParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_IntParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_IntParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_IntParameter, 3782401521);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_IntParameter>()
	{
		return UVoxelNode_IntParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_IntParameter(Z_Construct_UClass_UVoxelNode_IntParameter, &UVoxelNode_IntParameter::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_IntParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IntParameter);
	void UVoxelNode_ColorParameter::StaticRegisterNativesUVoxelNode_ColorParameter()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_ColorParameter_NoRegister()
	{
		return UVoxelNode_ColorParameter::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_ColorParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelOptionallyExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Color parameter\n" },
		{ "DisplayName", "color parameter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelParameterNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
		{ "ToolTip", "Color parameter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_ColorParameter, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::NewProp_Color,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_ColorParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::ClassParams = {
		&UVoxelNode_ColorParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_ColorParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_ColorParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_ColorParameter, 3526311421);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_ColorParameter>()
	{
		return UVoxelNode_ColorParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_ColorParameter(Z_Construct_UClass_UVoxelNode_ColorParameter, &UVoxelNode_ColorParameter::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_ColorParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_ColorParameter);
	void UVoxelNode_BoolParameter::StaticRegisterNativesUVoxelNode_BoolParameter()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_BoolParameter_NoRegister()
	{
		return UVoxelNode_BoolParameter::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_BoolParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelOptionallyExposedNode,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Bool parameter\n" },
		{ "DisplayName", "bool parameter" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelParameterNodes.h" },
		{ "Keywords", "constant" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
		{ "ToolTip", "Bool parameter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelParameterNodes.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((UVoxelNode_BoolParameter*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_BoolParameter), &Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::NewProp_Value,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_BoolParameter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::ClassParams = {
		&UVoxelNode_BoolParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_BoolParameter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_BoolParameter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_BoolParameter, 3973447232);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_BoolParameter>()
	{
		return UVoxelNode_BoolParameter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_BoolParameter(Z_Construct_UClass_UVoxelNode_BoolParameter, &UVoxelNode_BoolParameter::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_BoolParameter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_BoolParameter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
