// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstanceSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceSettings() {}
// Cross Module References
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* EDefaultSubstanceTextureSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("EDefaultSubstanceTextureSize"));
		}
		return Singleton;
	}
	template<> SUBSTANCECORE_API UEnum* StaticEnum<EDefaultSubstanceTextureSize>()
	{
		return EDefaultSubstanceTextureSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDefaultSubstanceTextureSize(EDefaultSubstanceTextureSize_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("EDefaultSubstanceTextureSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Hash() { return 376363674U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDefaultSubstanceTextureSize"), 0, Get_Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SIZE_0", (int64)SIZE_0 },
				{ "SIZE_16", (int64)SIZE_16 },
				{ "SIZE_32", (int64)SIZE_32 },
				{ "SIZE_64", (int64)SIZE_64 },
				{ "SIZE_128", (int64)SIZE_128 },
				{ "SIZE_256", (int64)SIZE_256 },
				{ "SIZE_512", (int64)SIZE_512 },
				{ "SIZE_1024", (int64)SIZE_1024 },
				{ "SIZE_2048", (int64)SIZE_2048 },
				{ "SIZE_4096", (int64)SIZE_4096 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
				{ "SIZE_0.Hidden", "" },
				{ "SIZE_0.Name", "SIZE_0" },
				{ "SIZE_1024.DisplayName", "1024" },
				{ "SIZE_1024.Name", "SIZE_1024" },
				{ "SIZE_128.DisplayName", "128" },
				{ "SIZE_128.Name", "SIZE_128" },
				{ "SIZE_16.DisplayName", "16" },
				{ "SIZE_16.Name", "SIZE_16" },
				{ "SIZE_2048.DisplayName", "2048" },
				{ "SIZE_2048.Name", "SIZE_2048" },
				{ "SIZE_256.DisplayName", "256" },
				{ "SIZE_256.Name", "SIZE_256" },
				{ "SIZE_32.DisplayName", "32" },
				{ "SIZE_32.Name", "SIZE_32" },
				{ "SIZE_4096.DisplayName", "4096" },
				{ "SIZE_4096.Name", "SIZE_4096" },
				{ "SIZE_512.DisplayName", "512" },
				{ "SIZE_512.Name", "SIZE_512" },
				{ "SIZE_64.DisplayName", "64" },
				{ "SIZE_64.Name", "SIZE_64" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				nullptr,
				"EDefaultSubstanceTextureSize",
				"EDefaultSubstanceTextureSize",
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
	static UEnum* ESubstanceEngineType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceEngineType"));
		}
		return Singleton;
	}
	template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceEngineType>()
	{
		return ESubstanceEngineType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubstanceEngineType(ESubstanceEngineType_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("ESubstanceEngineType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Hash() { return 1700820876U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubstanceEngineType"), 0, Get_Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SET_CPU", (int64)SET_CPU },
				{ "SET_GPU", (int64)SET_GPU },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
				{ "SET_CPU.DisplayName", "CPU Engine" },
				{ "SET_CPU.Name", "SET_CPU" },
				{ "SET_GPU.DisplayName", "GPU Engine" },
				{ "SET_GPU.Name", "SET_GPU" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				nullptr,
				"ESubstanceEngineType",
				"ESubstanceEngineType",
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
	void USubstanceSettings::StaticRegisterNativesUSubstanceSettings()
	{
	}
	UClass* Z_Construct_UClass_USubstanceSettings_NoRegister()
	{
		return USubstanceSettings::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTemplateMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultTemplateMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSubstanceOutputSizeY_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultSubstanceOutputSizeY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSubstanceOutputSizeX_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultSubstanceOutputSizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubstanceEngine_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubstanceEngine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAsyncSubstancesRenderedPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsyncLoadMipClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsyncLoadMipClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPUCores_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CPUCores;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MemoryBudgetMb_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MemoryBudgetMb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Implements the settings for the Substance plugin. */" },
		{ "IncludePath", "SubstanceSettings.h" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
		{ "ToolTip", "Implements the settings for the Substance plugin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial_MetaData[] = {
		{ "AllowedClasses", "Material,MaterialInstance,MaterialInterface" },
		{ "Category", "Substance Import Settings" },
		{ "DisplayName", "Default Substance Material Template" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial = { "DefaultTemplateMaterial", nullptr, (EPropertyFlags)0x0014000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceSettings, DefaultTemplateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY_MetaData[] = {
		{ "Category", "Substance Import Settings" },
		{ "DisplayName", "Default Substance output height" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY = { "DefaultSubstanceOutputSizeY", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceSettings, DefaultSubstanceOutputSizeY), Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX_MetaData[] = {
		{ "Category", "Substance Import Settings" },
		{ "DisplayName", "Default Substance output width" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX = { "DefaultSubstanceOutputSizeX", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceSettings, DefaultSubstanceOutputSizeX), Z_Construct_UEnum_SubstanceCore_EDefaultSubstanceTextureSize, METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine_MetaData[] = {
		{ "Category", "Cooking" },
		{ "DisplayName", "Substance Engine (requires editor restart to take effect.)" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine = { "SubstanceEngine", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceSettings, SubstanceEngine), Z_Construct_UEnum_SubstanceCore_ESubstanceEngineType, METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "4" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame = { "MaxAsyncSubstancesRenderedPerFrame", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceSettings, MaxAsyncSubstancesRenderedPerFrame), METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip_MetaData[] = {
		{ "Category", "Cooking" },
		{ "ClampMax", "5" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Mip levels count removed during cooking." },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip = { "AsyncLoadMipClip", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceSettings, AsyncLoadMipClip), METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores_MetaData[] = {
		{ "Category", "Hardware Budget" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores = { "CPUCores", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceSettings, CPUCores), METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb_MetaData[] = {
		{ "Category", "Hardware Budget" },
		{ "ClampMax", "2048" },
		{ "ClampMin", "16" },
		{ "ModuleRelativePath", "Classes/SubstanceSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb = { "MemoryBudgetMb", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceSettings, MemoryBudgetMb), METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultTemplateMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_DefaultSubstanceOutputSizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_SubstanceEngine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MaxAsyncSubstancesRenderedPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_AsyncLoadMipClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_CPUCores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceSettings_Statics::NewProp_MemoryBudgetMb,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceSettings_Statics::ClassParams = {
		&USubstanceSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubstanceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceSettings, 726824238);
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceSettings>()
	{
		return USubstanceSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceSettings(Z_Construct_UClass_USubstanceSettings, &USubstanceSettings::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
