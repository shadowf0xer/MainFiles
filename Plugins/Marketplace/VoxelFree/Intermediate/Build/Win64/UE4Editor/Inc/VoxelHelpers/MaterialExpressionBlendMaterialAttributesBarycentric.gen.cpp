// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelHelpers/Public/MaterialExpressionBlendMaterialAttributesBarycentric.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBlendMaterialAttributesBarycentric() {}
// Cross Module References
	VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_NoRegister();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
// End Cross Module References
	void UMaterialExpressionBlendMaterialAttributesBarycentric::StaticRegisterNativesUMaterialExpressionBlendMaterialAttributesBarycentric()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_NoRegister()
	{
		return UMaterialExpressionBlendMaterialAttributesBarycentric::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AlphaA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Returns A * AlphaA + B * AlphaB + C * (1 - AlphaA - AlphaB)\n" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialExpressionBlendMaterialAttributesBarycentric.h" },
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
		{ "ToolTip", "Returns A * AlphaA + B * AlphaB + C * (1 - AlphaA - AlphaB)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaB_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaB = { "AlphaB", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributesBarycentric, AlphaB), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaA_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaA = { "AlphaA", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributesBarycentric, AlphaA), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_C_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributesBarycentric, C), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributesBarycentric, B), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialExpressionBlendMaterialAttributesBarycentric.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialExpressionBlendMaterialAttributesBarycentric, A), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_A_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_AlphaA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::NewProp_A,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBlendMaterialAttributesBarycentric>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::ClassParams = {
		&UMaterialExpressionBlendMaterialAttributesBarycentric::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialExpressionBlendMaterialAttributesBarycentric, 3846629971);
	template<> VOXELHELPERS_API UClass* StaticClass<UMaterialExpressionBlendMaterialAttributesBarycentric>()
	{
		return UMaterialExpressionBlendMaterialAttributesBarycentric::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric(Z_Construct_UClass_UMaterialExpressionBlendMaterialAttributesBarycentric, &UMaterialExpressionBlendMaterialAttributesBarycentric::StaticClass, TEXT("/Script/VoxelHelpers"), TEXT("UMaterialExpressionBlendMaterialAttributesBarycentric"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBlendMaterialAttributesBarycentric);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
