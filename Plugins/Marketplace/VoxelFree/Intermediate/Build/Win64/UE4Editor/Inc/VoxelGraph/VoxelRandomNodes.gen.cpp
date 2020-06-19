// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelRandomNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelRandomNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomFloat_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomFloat();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomInt_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_RandomInt();
// End Cross Module References
	void UVoxelNode_RandomFloat::StaticRegisterNativesUVoxelNode_RandomFloat()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_RandomFloat_NoRegister()
	{
		return UVoxelNode_RandomFloat::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_RandomFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::Class_MetaDataParams[] = {
		{ "Category", "Math|Float" },
		{ "Comment", "// A random number >= Min and <= Max\n" },
		{ "DisplayName", "Rand Float" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelRandomNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
		{ "ToolTip", "A random number >= Min and <= Max" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RandomFloat, Max), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RandomFloat, Min), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RandomFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::ClassParams = {
		&UVoxelNode_RandomFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_RandomFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_RandomFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_RandomFloat, 2816165192);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_RandomFloat>()
	{
		return UVoxelNode_RandomFloat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_RandomFloat(Z_Construct_UClass_UVoxelNode_RandomFloat, &UVoxelNode_RandomFloat::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_RandomFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RandomFloat);
	void UVoxelNode_RandomInt::StaticRegisterNativesUVoxelNode_RandomInt()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_RandomInt_NoRegister()
	{
		return UVoxelNode_RandomInt::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_RandomInt_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Min;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_RandomInt_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomInt_Statics::Class_MetaDataParams[] = {
		{ "Category", "Math|Integer" },
		{ "Comment", "// A random number >= Min and <= Max\n" },
		{ "DisplayName", "Rand int" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelRandomNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
		{ "ToolTip", "A random number >= Min and <= Max" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RandomInt, Max), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelRandomNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_RandomInt, Min), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_RandomInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Max,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_RandomInt_Statics::NewProp_Min,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_RandomInt_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_RandomInt>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_RandomInt_Statics::ClassParams = {
		&UVoxelNode_RandomInt::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_RandomInt_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_RandomInt_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_RandomInt()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_RandomInt_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_RandomInt, 3687979636);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_RandomInt>()
	{
		return UVoxelNode_RandomInt::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_RandomInt(Z_Construct_UClass_UVoxelNode_RandomInt, &UVoxelNode_RandomInt::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_RandomInt"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_RandomInt);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
