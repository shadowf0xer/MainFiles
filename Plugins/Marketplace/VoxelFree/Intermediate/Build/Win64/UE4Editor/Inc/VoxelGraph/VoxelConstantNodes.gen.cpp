// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelConstantNodes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelConstantNodes() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LOD_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LOD();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelSize_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_VoxelSize();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldSize_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_WorldSize();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant();
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory();
// End Cross Module References
	void UVoxelNode_LOD::StaticRegisterNativesUVoxelNode_LOD()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_LOD_NoRegister()
	{
		return UVoxelNode_LOD::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_LOD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_LOD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_LOD_Statics::Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// Returns the current LOD\n" },
		{ "DisplayName", "LOD" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "Returns the current LOD" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_LOD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_LOD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_LOD_Statics::ClassParams = {
		&UVoxelNode_LOD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_LOD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_LOD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_LOD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_LOD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_LOD, 3107067742);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_LOD>()
	{
		return UVoxelNode_LOD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_LOD(Z_Construct_UClass_UVoxelNode_LOD, &UVoxelNode_LOD::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_LOD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_LOD);
	void UVoxelNode_VoxelSize::StaticRegisterNativesUVoxelNode_VoxelSize()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_VoxelSize_NoRegister()
	{
		return UVoxelNode_VoxelSize::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_VoxelSize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// Voxel Size\n" },
		{ "DisplayName", "Voxel Size" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "Voxel Size" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_VoxelSize>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::ClassParams = {
		&UVoxelNode_VoxelSize::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_VoxelSize()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_VoxelSize_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_VoxelSize, 3761822839);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_VoxelSize>()
	{
		return UVoxelNode_VoxelSize::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_VoxelSize(Z_Construct_UClass_UVoxelNode_VoxelSize, &UVoxelNode_VoxelSize::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_VoxelSize"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_VoxelSize);
	void UVoxelNode_WorldSize::StaticRegisterNativesUVoxelNode_WorldSize()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_WorldSize_NoRegister()
	{
		return UVoxelNode_WorldSize::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_WorldSize_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_WorldSize_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_WorldSize_Statics::Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// World Size\n" },
		{ "DisplayName", "World Size" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "World Size" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_WorldSize_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_WorldSize>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_WorldSize_Statics::ClassParams = {
		&UVoxelNode_WorldSize::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_WorldSize_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_WorldSize_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_WorldSize()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_WorldSize_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_WorldSize, 2771129959);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_WorldSize>()
	{
		return UVoxelNode_WorldSize::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_WorldSize(Z_Construct_UClass_UVoxelNode_WorldSize, &UVoxelNode_WorldSize::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_WorldSize"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_WorldSize);
	void UVoxelNode_CompileTimeConstant::StaticRegisterNativesUVoxelNode_CompileTimeConstant()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant_NoRegister()
	{
		return UVoxelNode_CompileTimeConstant::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Constants_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Constants;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Constants_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Constants_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::Class_MetaDataParams[] = {
		{ "Category", "Constants" },
		{ "Comment", "// Use this to access compilation constants such as preview size, target...\n" },
		{ "DisplayName", "Compile-Time Constant" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelConstantNodes.h" },
		{ "Keywords", "is" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
		{ "ToolTip", "Use this to access compilation constants such as preview size, target..." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants = { "Constants", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_CompileTimeConstant, Constants), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_Key_KeyProp = { "Constants_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_ValueProp = { "Constants", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_CompileTimeConstant, Type), Z_Construct_UEnum_VoxelGraph_EVoxelPinCategory, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelConstantNodes.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_CompileTimeConstant, Name), METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Constants_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_CompileTimeConstant>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::ClassParams = {
		&UVoxelNode_CompileTimeConstant::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_CompileTimeConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_CompileTimeConstant_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_CompileTimeConstant, 4059635058);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_CompileTimeConstant>()
	{
		return UVoxelNode_CompileTimeConstant::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_CompileTimeConstant(Z_Construct_UClass_UVoxelNode_CompileTimeConstant, &UVoxelNode_CompileTimeConstant::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_CompileTimeConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_CompileTimeConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
