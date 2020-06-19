// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelEditorDelegatesInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEditorDelegatesInterface() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelEditorDelegatesInterface::StaticRegisterNativesUVoxelEditorDelegatesInterface()
	{
	}
	UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface_NoRegister()
	{
		return UVoxelEditorDelegatesInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelEditorDelegatesInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVoxelEditorDelegatesInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::ClassParams = {
		&UVoxelEditorDelegatesInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelEditorDelegatesInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelEditorDelegatesInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelEditorDelegatesInterface, 1703081283);
	template<> VOXEL_API UClass* StaticClass<UVoxelEditorDelegatesInterface>()
	{
		return UVoxelEditorDelegatesInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelEditorDelegatesInterface(Z_Construct_UClass_UVoxelEditorDelegatesInterface, &UVoxelEditorDelegatesInterface::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelEditorDelegatesInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelEditorDelegatesInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
