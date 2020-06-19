// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/SlotDataTask_LevelLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataTask_LevelLoader() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_LevelLoader_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_LevelLoader();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Loader();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
// End Cross Module References
	void USlotDataTask_LevelLoader::StaticRegisterNativesUSlotDataTask_LevelLoader()
	{
	}
	UClass* Z_Construct_UClass_USlotDataTask_LevelLoader_NoRegister()
	{
		return USlotDataTask_LevelLoader::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataTask_LevelLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StreamingLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlotDataTask_Loader,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Manages the serializing process of a single level\n*/" },
		{ "IncludePath", "Serialization/SlotDataTask_LevelLoader.h" },
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_LevelLoader.h" },
		{ "ToolTip", "Manages the serializing process of a single level" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::NewProp_StreamingLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_LevelLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::NewProp_StreamingLevel = { "StreamingLevel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotDataTask_LevelLoader, StreamingLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::NewProp_StreamingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::NewProp_StreamingLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::NewProp_StreamingLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataTask_LevelLoader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::ClassParams = {
		&USlotDataTask_LevelLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataTask_LevelLoader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotDataTask_LevelLoader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotDataTask_LevelLoader, 3745115211);
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotDataTask_LevelLoader>()
	{
		return USlotDataTask_LevelLoader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotDataTask_LevelLoader(Z_Construct_UClass_USlotDataTask_LevelLoader, &USlotDataTask_LevelLoader::StaticClass, TEXT("/Script/SaveExtension"), TEXT("USlotDataTask_LevelLoader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataTask_LevelLoader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
