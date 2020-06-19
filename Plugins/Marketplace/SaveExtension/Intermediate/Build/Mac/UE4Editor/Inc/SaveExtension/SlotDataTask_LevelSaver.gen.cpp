// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/SlotDataTask_LevelSaver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataTask_LevelSaver() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_LevelSaver_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_LevelSaver();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Saver();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
// End Cross Module References
	void USlotDataTask_LevelSaver::StaticRegisterNativesUSlotDataTask_LevelSaver()
	{
	}
	UClass* Z_Construct_UClass_USlotDataTask_LevelSaver_NoRegister()
	{
		return USlotDataTask_LevelSaver::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataTask_LevelSaver_Statics
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
	UObject* (*const Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlotDataTask_Saver,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Manages the serializing process of a single level\n*/" },
		{ "IncludePath", "Serialization/SlotDataTask_LevelSaver.h" },
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_LevelSaver.h" },
		{ "ToolTip", "Manages the serializing process of a single level" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::NewProp_StreamingLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_LevelSaver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::NewProp_StreamingLevel = { "StreamingLevel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotDataTask_LevelSaver, StreamingLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::NewProp_StreamingLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::NewProp_StreamingLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::NewProp_StreamingLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataTask_LevelSaver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::ClassParams = {
		&USlotDataTask_LevelSaver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataTask_LevelSaver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotDataTask_LevelSaver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotDataTask_LevelSaver, 3771981739);
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotDataTask_LevelSaver>()
	{
		return USlotDataTask_LevelSaver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotDataTask_LevelSaver(Z_Construct_UClass_USlotDataTask_LevelSaver, &USlotDataTask_LevelSaver::StaticClass, TEXT("/Script/SaveExtension"), TEXT("USlotDataTask_LevelSaver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataTask_LevelSaver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
