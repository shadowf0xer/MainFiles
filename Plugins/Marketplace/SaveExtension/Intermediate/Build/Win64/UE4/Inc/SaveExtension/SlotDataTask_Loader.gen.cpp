// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/SlotDataTask_Loader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataTask_Loader() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Loader_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_Loader();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotInfo_NoRegister();
// End Cross Module References
	void USlotDataTask_Loader::StaticRegisterNativesUSlotDataTask_Loader()
	{
	}
	UClass* Z_Construct_UClass_USlotDataTask_Loader_NoRegister()
	{
		return USlotDataTask_Loader::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataTask_Loader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewSlotInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewSlotInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDataTask_Loader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlotDataTask,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Loader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Manages the loading process of a SaveData file\n*/" },
		{ "IncludePath", "Serialization/SlotDataTask_Loader.h" },
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_Loader.h" },
		{ "ToolTip", "Manages the loading process of a SaveData file" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Loader_Statics::NewProp_NewSlotInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask_Loader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotDataTask_Loader_Statics::NewProp_NewSlotInfo = { "NewSlotInfo", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotDataTask_Loader, NewSlotInfo), Z_Construct_UClass_USlotInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Loader_Statics::NewProp_NewSlotInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Loader_Statics::NewProp_NewSlotInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotDataTask_Loader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_Loader_Statics::NewProp_NewSlotInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataTask_Loader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataTask_Loader>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotDataTask_Loader_Statics::ClassParams = {
		&USlotDataTask_Loader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotDataTask_Loader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Loader_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Loader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Loader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataTask_Loader()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotDataTask_Loader_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotDataTask_Loader, 1786741702);
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotDataTask_Loader>()
	{
		return USlotDataTask_Loader::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotDataTask_Loader(Z_Construct_UClass_USlotDataTask_Loader, &USlotDataTask_Loader::StaticClass, TEXT("/Script/SaveExtension"), TEXT("USlotDataTask_Loader"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataTask_Loader);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
