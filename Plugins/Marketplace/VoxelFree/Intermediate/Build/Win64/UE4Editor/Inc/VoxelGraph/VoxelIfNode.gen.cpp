// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelNodes/VoxelIfNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelIfNode() {}
// Cross Module References
	VOXELGRAPH_API UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_If_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_If();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeHelper();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue();
// End Cross Module References
	static UEnum* EVoxelNodeIfBranchToUseForRangeAnalysis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis, Z_Construct_UPackage__Script_VoxelGraph(), TEXT("EVoxelNodeIfBranchToUseForRangeAnalysis"));
		}
		return Singleton;
	}
	template<> VOXELGRAPH_API UEnum* StaticEnum<EVoxelNodeIfBranchToUseForRangeAnalysis>()
	{
		return EVoxelNodeIfBranchToUseForRangeAnalysis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelNodeIfBranchToUseForRangeAnalysis(EVoxelNodeIfBranchToUseForRangeAnalysis_StaticEnum, TEXT("/Script/VoxelGraph"), TEXT("EVoxelNodeIfBranchToUseForRangeAnalysis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Hash() { return 2292919338U; }
	UEnum* Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelGraph();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelNodeIfBranchToUseForRangeAnalysis"), 0, Get_Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelNodeIfBranchToUseForRangeAnalysis::None", (int64)EVoxelNodeIfBranchToUseForRangeAnalysis::None },
				{ "EVoxelNodeIfBranchToUseForRangeAnalysis::UseTrue", (int64)EVoxelNodeIfBranchToUseForRangeAnalysis::UseTrue },
				{ "EVoxelNodeIfBranchToUseForRangeAnalysis::UseFalse", (int64)EVoxelNodeIfBranchToUseForRangeAnalysis::UseFalse },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
				{ "None.Name", "EVoxelNodeIfBranchToUseForRangeAnalysis::None" },
				{ "UseFalse.Name", "EVoxelNodeIfBranchToUseForRangeAnalysis::UseFalse" },
				{ "UseTrue.Name", "EVoxelNodeIfBranchToUseForRangeAnalysis::UseTrue" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VoxelGraph,
				nullptr,
				"EVoxelNodeIfBranchToUseForRangeAnalysis",
				"EVoxelNodeIfBranchToUseForRangeAnalysis",
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
	void UVoxelNode_If::StaticRegisterNativesUVoxelNode_If()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_If_NoRegister()
	{
		return UVoxelNode_If::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_If_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchToUseForRangeAnalysis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BranchToUseForRangeAnalysis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BranchToUseForRangeAnalysis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreRangeAnalysisErrors_MetaData[];
#endif
		static void NewProp_bIgnoreRangeAnalysisErrors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreRangeAnalysisErrors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_If_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNodeHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_If_Statics::Class_MetaDataParams[] = {
		{ "Category", "Flow Control" },
		{ "Comment", "// Branch node\n" },
		{ "DisplayName", "If" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelIfNode.h" },
		{ "Keywords", "branch" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "Branch node" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// If the condition range analysis fails, use this branch instead of failing.\n// DO NOT CHANGE THIS UNLESS YOU KNOW WHAT YOU ARE DOING, ELSE YOUR WORLD WILL HAVE HOLES\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "If the condition range analysis fails, use this branch instead of failing.\nDO NOT CHANGE THIS UNLESS YOU KNOW WHAT YOU ARE DOING, ELSE YOUR WORLD WILL HAVE HOLES" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis = { "BranchToUseForRangeAnalysis", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelNode_If, BranchToUseForRangeAnalysis), Z_Construct_UEnum_VoxelGraph_EVoxelNodeIfBranchToUseForRangeAnalysis, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_bIgnoreRangeAnalysisErrors_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Use this to hide range analysis errors on this node\n" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "Use this to hide range analysis errors on this node" },
	};
#endif
	void Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_bIgnoreRangeAnalysisErrors_SetBit(void* Obj)
	{
		((UVoxelNode_If*)Obj)->bIgnoreRangeAnalysisErrors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_bIgnoreRangeAnalysisErrors = { "bIgnoreRangeAnalysisErrors", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelNode_If), &Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_bIgnoreRangeAnalysisErrors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_bIgnoreRangeAnalysisErrors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_bIgnoreRangeAnalysisErrors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelNode_If_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_BranchToUseForRangeAnalysis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelNode_If_Statics::NewProp_bIgnoreRangeAnalysisErrors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_If_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_If>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_If_Statics::ClassParams = {
		&UVoxelNode_If::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelNode_If_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_If_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_If_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_If()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_If_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_If, 3629166313);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_If>()
	{
		return UVoxelNode_If::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_If(Z_Construct_UClass_UVoxelNode_If, &UVoxelNode_If::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_If"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_If);
	void UVoxelNode_IfWithDefaultToFalse::StaticRegisterNativesUVoxelNode_IfWithDefaultToFalse()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_NoRegister()
	{
		return UVoxelNode_IfWithDefaultToFalse::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_If,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Helper\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelIfNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "Helper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IfWithDefaultToFalse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::ClassParams = {
		&UVoxelNode_IfWithDefaultToFalse::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_IfWithDefaultToFalse, 1498065693);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_IfWithDefaultToFalse>()
	{
		return UVoxelNode_IfWithDefaultToFalse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_IfWithDefaultToFalse(Z_Construct_UClass_UVoxelNode_IfWithDefaultToFalse, &UVoxelNode_IfWithDefaultToFalse::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_IfWithDefaultToFalse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IfWithDefaultToFalse);
	void UVoxelNode_IfWithDefaultToTrue::StaticRegisterNativesUVoxelNode_IfWithDefaultToTrue()
	{
	}
	UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_NoRegister()
	{
		return UVoxelNode_IfWithDefaultToTrue::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelNode_If,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Helper\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelIfNode.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelIfNode.h" },
		{ "ToolTip", "Helper" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_IfWithDefaultToTrue>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::ClassParams = {
		&UVoxelNode_IfWithDefaultToTrue::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelNode_IfWithDefaultToTrue, 656462926);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelNode_IfWithDefaultToTrue>()
	{
		return UVoxelNode_IfWithDefaultToTrue::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelNode_IfWithDefaultToTrue(Z_Construct_UClass_UVoxelNode_IfWithDefaultToTrue, &UVoxelNode_IfWithDefaultToTrue::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelNode_IfWithDefaultToTrue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_IfWithDefaultToTrue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
