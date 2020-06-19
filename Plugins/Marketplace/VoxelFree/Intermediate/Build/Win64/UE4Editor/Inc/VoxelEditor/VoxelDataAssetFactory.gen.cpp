// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelEditor/Private/Factories/VoxelDataAssetFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelDataAssetFactory() {}
// Cross Module References
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VoxelEditor();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshImporter_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_NoRegister();
	VOXELEDITOR_API UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory();
// End Cross Module References
	void UVoxelDataAssetFactory::StaticRegisterNativesUVoxelDataAssetFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDataAssetFactory_NoRegister()
	{
		return UVoxelDataAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFactory_Statics::ClassParams = {
		&UVoxelDataAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDataAssetFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDataAssetFactory, 2905887730);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetFactory>()
	{
		return UVoxelDataAssetFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDataAssetFactory(Z_Construct_UClass_UVoxelDataAssetFactory, &UVoxelDataAssetFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelDataAssetFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFactory);
	void UVoxelDataAssetFromMeshImporterFactory::StaticRegisterNativesUVoxelDataAssetFromMeshImporterFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_NoRegister()
	{
		return UVoxelDataAssetFromMeshImporterFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshImporter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshImporter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter = { "MeshImporter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAssetFromMeshImporterFactory, MeshImporter), Z_Construct_UClass_AVoxelMeshImporter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::NewProp_MeshImporter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromMeshImporterFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::ClassParams = {
		&UVoxelDataAssetFromMeshImporterFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDataAssetFromMeshImporterFactory, 760376632);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetFromMeshImporterFactory>()
	{
		return UVoxelDataAssetFromMeshImporterFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDataAssetFromMeshImporterFactory(Z_Construct_UClass_UVoxelDataAssetFromMeshImporterFactory, &UVoxelDataAssetFromMeshImporterFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelDataAssetFromMeshImporterFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromMeshImporterFactory);
	void UVoxelDataAssetFromMagicaVoxFactory::StaticRegisterNativesUVoxelDataAssetFromMagicaVoxFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_NoRegister()
	{
		return UVoxelDataAssetFromMagicaVoxFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Palette_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Palette;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePalette_MetaData[];
#endif
		static void NewProp_bUsePalette_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePalette;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_Palette_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "EditCondition", "bUsePalette" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_Palette = { "Palette", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelDataAssetFromMagicaVoxFactory, Palette), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_Palette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_Palette_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "Comment", "// If false, the material index will be set to the palette index (Single Index material config)\n// If true, the palette will be read and the color will be imported instead (RGB material config)\n" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
		{ "ToolTip", "If false, the material index will be set to the palette index (Single Index material config)\nIf true, the palette will be read and the color will be imported instead (RGB material config)" },
	};
#endif
	void Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_SetBit(void* Obj)
	{
		((UVoxelDataAssetFromMagicaVoxFactory*)Obj)->bUsePalette = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette = { "bUsePalette", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelDataAssetFromMagicaVoxFactory), &Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_Palette,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::NewProp_bUsePalette,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromMagicaVoxFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::ClassParams = {
		&UVoxelDataAssetFromMagicaVoxFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDataAssetFromMagicaVoxFactory, 1397001260);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetFromMagicaVoxFactory>()
	{
		return UVoxelDataAssetFromMagicaVoxFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDataAssetFromMagicaVoxFactory(Z_Construct_UClass_UVoxelDataAssetFromMagicaVoxFactory, &UVoxelDataAssetFromMagicaVoxFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelDataAssetFromMagicaVoxFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromMagicaVoxFactory);
	void UVoxelDataAssetFromRawVoxFactory::StaticRegisterNativesUVoxelDataAssetFromRawVoxFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_NoRegister()
	{
		return UVoxelDataAssetFromRawVoxFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/VoxelDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VoxelDataAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelDataAssetFromRawVoxFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::ClassParams = {
		&UVoxelDataAssetFromRawVoxFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelDataAssetFromRawVoxFactory, 1333403392);
	template<> VOXELEDITOR_API UClass* StaticClass<UVoxelDataAssetFromRawVoxFactory>()
	{
		return UVoxelDataAssetFromRawVoxFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelDataAssetFromRawVoxFactory(Z_Construct_UClass_UVoxelDataAssetFromRawVoxFactory, &UVoxelDataAssetFromRawVoxFactory::StaticClass, TEXT("/Script/VoxelEditor"), TEXT("UVoxelDataAssetFromRawVoxFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelDataAssetFromRawVoxFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
