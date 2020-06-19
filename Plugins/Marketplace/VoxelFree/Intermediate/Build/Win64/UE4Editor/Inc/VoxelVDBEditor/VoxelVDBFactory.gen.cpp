// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelVDBEditor/Private/VoxelVDBFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelVDBFactory() {}
// Cross Module References
	VOXELVDBEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping();
	UPackage* Z_Construct_UPackage__Script_VoxelVDBEditor();
	VOXELVDB_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig();
	VOXELVDBEDITOR_API UClass* Z_Construct_UClass_UVoxelVDBFactory_NoRegister();
	VOXELVDBEDITOR_API UClass* Z_Construct_UClass_UVoxelVDBFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
// End Cross Module References
class UScriptStruct* FVoxelVDBFactoryChannelMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXELVDBEDITOR_API uint32 Get_Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping, Z_Construct_UPackage__Script_VoxelVDBEditor(), TEXT("VoxelVDBFactoryChannelMapping"), sizeof(FVoxelVDBFactoryChannelMapping), Get_Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Hash());
	}
	return Singleton;
}
template<> VOXELVDBEDITOR_API UScriptStruct* StaticStruct<FVoxelVDBFactoryChannelMapping>()
{
	return FVoxelVDBFactoryChannelMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelVDBFactoryChannelMapping(FVoxelVDBFactoryChannelMapping::StaticStruct, TEXT("/Script/VoxelVDBEditor"), TEXT("VoxelVDBFactoryChannelMapping"), false, nullptr, nullptr);
static struct FScriptStruct_VoxelVDBEditor_StaticRegisterNativesFVoxelVDBFactoryChannelMapping
{
	FScriptStruct_VoxelVDBEditor_StaticRegisterNativesFVoxelVDBFactoryChannelMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelVDBFactoryChannelMapping")),new UScriptStruct::TCppStructOps<FVoxelVDBFactoryChannelMapping>);
	}
} ScriptStruct_VoxelVDBEditor_StaticRegisterNativesFVoxelVDBFactoryChannelMapping;
	struct Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ChannelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VoxelVDBFactory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelVDBFactoryChannelMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewProp_ChannelConfig_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelVDBFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewProp_ChannelConfig = { "ChannelConfig", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelVDBFactoryChannelMapping, ChannelConfig), Z_Construct_UScriptStruct_FVoxelVDBImportChannelConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewProp_ChannelConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewProp_ChannelConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewProp_ChannelName_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Private/VoxelVDBFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelVDBFactoryChannelMapping, ChannelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewProp_ChannelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewProp_ChannelConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::NewProp_ChannelName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelVDBEditor,
		nullptr,
		&NewStructOps,
		"VoxelVDBFactoryChannelMapping",
		sizeof(FVoxelVDBFactoryChannelMapping),
		alignof(FVoxelVDBFactoryChannelMapping),
		Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VoxelVDBEditor();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelVDBFactoryChannelMapping"), sizeof(FVoxelVDBFactoryChannelMapping), Get_Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping_Hash() { return 1206702573U; }
	void UVoxelVDBFactory::StaticRegisterNativesUVoxelVDBFactory()
	{
	}
	UClass* Z_Construct_UClass_UVoxelVDBFactory_NoRegister()
	{
		return UVoxelVDBFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelVDBFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mappings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelVDBFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelVDBEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelVDBFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelVDBFactory.h" },
		{ "ModuleRelativePath", "Private/VoxelVDBFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelVDBFactory_Statics::NewProp_Mappings_MetaData[] = {
		{ "Category", "Import configuration" },
		{ "ModuleRelativePath", "Private/VoxelVDBFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVoxelVDBFactory_Statics::NewProp_Mappings = { "Mappings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelVDBFactory, Mappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVoxelVDBFactory_Statics::NewProp_Mappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelVDBFactory_Statics::NewProp_Mappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelVDBFactory_Statics::NewProp_Mappings_Inner = { "Mappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVoxelVDBFactoryChannelMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelVDBFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelVDBFactory_Statics::NewProp_Mappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelVDBFactory_Statics::NewProp_Mappings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelVDBFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelVDBFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelVDBFactory_Statics::ClassParams = {
		&UVoxelVDBFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelVDBFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelVDBFactory_Statics::PropPointers),
		0,
		0x000020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelVDBFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelVDBFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelVDBFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelVDBFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelVDBFactory, 4164584570);
	template<> VOXELVDBEDITOR_API UClass* StaticClass<UVoxelVDBFactory>()
	{
		return UVoxelVDBFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelVDBFactory(Z_Construct_UClass_UVoxelVDBFactory, &UVoxelVDBFactory::StaticClass, TEXT("/Script/VoxelVDBEditor"), TEXT("UVoxelVDBFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelVDBFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
