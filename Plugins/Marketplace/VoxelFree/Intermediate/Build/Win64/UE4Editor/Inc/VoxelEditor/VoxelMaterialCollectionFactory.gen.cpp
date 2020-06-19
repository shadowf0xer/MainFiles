// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelMaterialCollectionFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelMaterialCollectionFactory() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory();
// End Cross Module References
	void UVoxelBasicMaterialCollectionFactory::StaticRegisterNativesUVoxelBasicMaterialCollectionFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_NoRegister()
	{
		return UVoxelBasicMaterialCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelMaterialCollectionFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelMaterialCollectionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelBasicMaterialCollectionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::ClassParams = {
		&UVoxelBasicMaterialCollectionFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelBasicMaterialCollectionFactory, 755450113);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelBasicMaterialCollectionFactory>()
	{
		return UVoxelBasicMaterialCollectionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelBasicMaterialCollectionFactory(Z_Construct_UClass_UVoxelBasicMaterialCollectionFactory, &UVoxelBasicMaterialCollectionFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelBasicMaterialCollectionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelBasicMaterialCollectionFactory);
	void UVoxelInstancedMaterialCollectionTemplatesFactory::StaticRegisterNativesUVoxelInstancedMaterialCollectionTemplatesFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_NoRegister()
	{
		return UVoxelInstancedMaterialCollectionTemplatesFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelMaterialCollectionFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelMaterialCollectionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionTemplatesFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::ClassParams = {
		&UVoxelInstancedMaterialCollectionTemplatesFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInstancedMaterialCollectionTemplatesFactory, 4229146829);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelInstancedMaterialCollectionTemplatesFactory>()
	{
		return UVoxelInstancedMaterialCollectionTemplatesFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory(Z_Construct_UClass_UVoxelInstancedMaterialCollectionTemplatesFactory, &UVoxelInstancedMaterialCollectionTemplatesFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelInstancedMaterialCollectionTemplatesFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionTemplatesFactory);
	void UVoxelInstancedMaterialCollectionFactory::StaticRegisterNativesUVoxelInstancedMaterialCollectionFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_NoRegister()
	{
		return UVoxelInstancedMaterialCollectionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelMaterialCollectionFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelMaterialCollectionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::ClassParams = {
		&UVoxelInstancedMaterialCollectionFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInstancedMaterialCollectionFactory, 1716872942);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelInstancedMaterialCollectionFactory>()
	{
		return UVoxelInstancedMaterialCollectionFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInstancedMaterialCollectionFactory(Z_Construct_UClass_UVoxelInstancedMaterialCollectionFactory, &UVoxelInstancedMaterialCollectionFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelInstancedMaterialCollectionFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionFactory);
	void UVoxelInstancedMaterialCollectionInstanceFactory::StaticRegisterNativesUVoxelInstancedMaterialCollectionInstanceFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_NoRegister()
	{
		return UVoxelInstancedMaterialCollectionInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelMaterialCollectionFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelMaterialCollectionFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInstancedMaterialCollectionInstanceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::ClassParams = {
		&UVoxelInstancedMaterialCollectionInstanceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInstancedMaterialCollectionInstanceFactory, 2352574206);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelInstancedMaterialCollectionInstanceFactory>()
	{
		return UVoxelInstancedMaterialCollectionInstanceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInstancedMaterialCollectionInstanceFactory(Z_Construct_UClass_UVoxelInstancedMaterialCollectionInstanceFactory, &UVoxelInstancedMaterialCollectionInstanceFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelInstancedMaterialCollectionInstanceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInstancedMaterialCollectionInstanceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
