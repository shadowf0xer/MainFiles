// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SaveExtension/Public/Serialization/SlotDataTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlotDataTask() {}
// Cross Module References
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotDataTask();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SaveExtension();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USavePreset_NoRegister();
	SAVEEXTENSION_API UClass* Z_Construct_UClass_USlotData_NoRegister();
// End Cross Module References
	void USlotDataTask::StaticRegisterNativesUSlotDataTask()
	{
	}
	UClass* Z_Construct_UClass_USlotDataTask_NoRegister()
	{
		return USlotDataTask::StaticClass();
	}
	struct Z_Construct_UClass_USlotDataTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Preset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SlotData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlotDataTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SaveExtension,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Base class for managing a SaveData file\n*/" },
		{ "IncludePath", "Serialization/SlotDataTask.h" },
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask.h" },
		{ "ToolTip", "Base class for managing a SaveData file" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Statics::NewProp_Preset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask.h" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotDataTask_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotDataTask, Preset), Z_Construct_UClass_USavePreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Statics::NewProp_Preset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlotDataTask_Statics::NewProp_SlotData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Serialization/SlotDataTask.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlotDataTask_Statics::NewProp_SlotData = { "SlotData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlotDataTask, SlotData), Z_Construct_UClass_USlotData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Statics::NewProp_SlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Statics::NewProp_SlotData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlotDataTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_Statics::NewProp_Preset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlotDataTask_Statics::NewProp_SlotData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlotDataTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlotDataTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USlotDataTask_Statics::ClassParams = {
		&USlotDataTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlotDataTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlotDataTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlotDataTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlotDataTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USlotDataTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USlotDataTask, 1113888560);
	template<> SAVEEXTENSION_API UClass* StaticClass<USlotDataTask>()
	{
		return USlotDataTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USlotDataTask(Z_Construct_UClass_USlotDataTask, &USlotDataTask::StaticClass, TEXT("/Script/SaveExtension"), TEXT("USlotDataTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlotDataTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
