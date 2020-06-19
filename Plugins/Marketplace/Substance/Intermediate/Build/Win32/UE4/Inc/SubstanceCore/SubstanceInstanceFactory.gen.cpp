// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstanceInstanceFactory.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceInstanceFactory() {}
// Cross Module References
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
// End Cross Module References
	static UEnum* ESubstanceGenerationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceGenerationMode"));
		}
		return Singleton;
	}
	template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceGenerationMode>()
	{
		return ESubstanceGenerationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubstanceGenerationMode(ESubstanceGenerationMode_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("ESubstanceGenerationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Hash() { return 623508896U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubstanceGenerationMode"), 0, Get_Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SGM_PlatformDefault", (int64)SGM_PlatformDefault },
				{ "SGM_Baked", (int64)SGM_Baked },
				{ "SGM_OnLoadSync", (int64)SGM_OnLoadSync },
				{ "SGM_OnLoadSyncAndCache", (int64)SGM_OnLoadSyncAndCache },
				{ "SGM_OnLoadAsync", (int64)SGM_OnLoadAsync },
				{ "SGM_OnLoadAsyncAndCache", (int64)SGM_OnLoadAsyncAndCache },
				{ "SGM_MAX", (int64)SGM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
				{ "SGM_Baked.Name", "SGM_Baked" },
				{ "SGM_MAX.Name", "SGM_MAX" },
				{ "SGM_OnLoadAsync.Name", "SGM_OnLoadAsync" },
				{ "SGM_OnLoadAsyncAndCache.Name", "SGM_OnLoadAsyncAndCache" },
				{ "SGM_OnLoadSync.Name", "SGM_OnLoadSync" },
				{ "SGM_OnLoadSyncAndCache.Name", "SGM_OnLoadSyncAndCache" },
				{ "SGM_PlatformDefault.Name", "SGM_PlatformDefault" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				nullptr,
				"ESubstanceGenerationMode",
				"ESubstanceGenerationMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USubstanceInstanceFactory::StaticRegisterNativesUSubstanceInstanceFactory()
	{
	}
	UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister()
	{
		return USubstanceInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenerationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GenerationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsoluteSourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbsoluteSourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeSourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RelativeSourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mGraphInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_mGraphInstances;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mGraphInstances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceInstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode_MetaData[] = {
		{ "Comment", "/** Flag for the format used to save asset data */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Flag for the format used to save asset data" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode = { "GenerationMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceInstanceFactory, GenerationMode), Z_Construct_UEnum_SubstanceCore_ESubstanceGenerationMode, METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Used to store when the file was created */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Used to store when the file was created" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceInstanceFactory, SourceFileTimestamp), METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath_MetaData[] = {
		{ "Comment", "/** Used for reimporting sbs files within editor */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Used for reimporting sbs files within editor" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath = { "AbsoluteSourceFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceInstanceFactory, AbsoluteSourceFilePath), METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath_MetaData[] = {
		{ "Comment", "/** Used for reimporting sbs files within editor */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Used for reimporting sbs files within editor" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath = { "RelativeSourceFilePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceInstanceFactory, RelativeSourceFilePath), METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_MetaData[] = {
		{ "Comment", "/** Stores references to the instances that are created with this factory */" },
		{ "ModuleRelativePath", "Classes/SubstanceInstanceFactory.h" },
		{ "ToolTip", "Stores references to the instances that are created with this factory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances = { "mGraphInstances", nullptr, (EPropertyFlags)0x0040000000200000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceInstanceFactory, mGraphInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_Inner = { "mGraphInstances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceInstanceFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_GenerationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_SourceFileTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_AbsoluteSourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_RelativeSourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceInstanceFactory_Statics::NewProp_mGraphInstances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceInstanceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceInstanceFactory_Statics::ClassParams = {
		&USubstanceInstanceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubstanceInstanceFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceInstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceInstanceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceInstanceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceInstanceFactory, 398610122);
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceInstanceFactory>()
	{
		return USubstanceInstanceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceInstanceFactory(Z_Construct_UClass_USubstanceInstanceFactory, &USubstanceInstanceFactory::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceInstanceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceInstanceFactory);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USubstanceInstanceFactory)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
