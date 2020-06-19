// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstanceOutputData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceOutputData() {}
// Cross Module References
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceOutputData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void USubstanceOutputData::StaticRegisterNativesUSubstanceOutputData()
	{
	}
	UClass* Z_Construct_UClass_USubstanceOutputData_NoRegister()
	{
		return USubstanceOutputData::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceOutputData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CacheGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParamInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConnectedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceOutputData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceOutputData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Output structure for substance data to connect with material expressions*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceOutputData.h" },
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
		{ "ToolTip", "Output structure for substance data to connect with material expressions" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid = { "CacheGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceOutputData, CacheGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance = { "ParentInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceOutputData, ParentInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo = { "ParamInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceOutputData, ParamInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/SubstanceOutputData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject = { "ConnectedObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceOutputData, ConnectedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_CacheGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParentInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ParamInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceOutputData_Statics::NewProp_ConnectedObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceOutputData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceOutputData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceOutputData_Statics::ClassParams = {
		&USubstanceOutputData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceOutputData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceOutputData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceOutputData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceOutputData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceOutputData, 1658917297);
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceOutputData>()
	{
		return USubstanceOutputData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceOutputData(Z_Construct_UClass_USubstanceOutputData, &USubstanceOutputData::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceOutputData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceOutputData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
