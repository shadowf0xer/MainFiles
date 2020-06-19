// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNiagara/Public/NiagaraDataInterfaceVoxelDataAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVoxelDataAsset() {}
// Cross Module References
	VOXELNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_NoRegister();
	VOXELNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_VoxelNiagara();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelDataAsset_NoRegister();
// End Cross Module References
	void UNiagaraDataInterfaceVoxelDataAsset::StaticRegisterNativesUNiagaraDataInterfaceVoxelDataAsset()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_NoRegister()
	{
		return UNiagaraDataInterfaceVoxelDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelNiagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::Class_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "Comment", "/** Data Interface allowing sampling of a voxel data asset */" },
		{ "DisplayName", "Voxel Data Asset Sample" },
		{ "IncludePath", "NiagaraDataInterfaceVoxelDataAsset.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceVoxelDataAsset.h" },
		{ "ToolTip", "Data Interface allowing sampling of a voxel data asset" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceVoxelDataAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceVoxelDataAsset, Asset), Z_Construct_UClass_UVoxelDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::NewProp_Asset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceVoxelDataAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::ClassParams = {
		&UNiagaraDataInterfaceVoxelDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceVoxelDataAsset, 1130631751);
	template<> VOXELNIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceVoxelDataAsset>()
	{
		return UNiagaraDataInterfaceVoxelDataAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceVoxelDataAsset(Z_Construct_UClass_UNiagaraDataInterfaceVoxelDataAsset, &UNiagaraDataInterfaceVoxelDataAsset::StaticClass, TEXT("/Script/VoxelNiagara"), TEXT("UNiagaraDataInterfaceVoxelDataAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceVoxelDataAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
