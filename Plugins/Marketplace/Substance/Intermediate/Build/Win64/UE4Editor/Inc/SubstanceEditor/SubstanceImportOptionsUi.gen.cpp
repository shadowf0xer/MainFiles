// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceEditor/Public/SubstanceImportOptionsUi.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceImportOptionsUi() {}
// Cross Module References
	SUBSTANCEEDITOR_API UEnum* Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType();
	UPackage* Z_Construct_UPackage__Script_SubstanceEditor();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister();
	SUBSTANCEEDITOR_API UClass* Z_Construct_UClass_USubstanceImportOptionsUi();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
// End Cross Module References
	static UEnum* ESubstanceMaterialParentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType, Z_Construct_UPackage__Script_SubstanceEditor(), TEXT("ESubstanceMaterialParentType"));
		}
		return Singleton;
	}
	template<> SUBSTANCEEDITOR_API UEnum* StaticEnum<ESubstanceMaterialParentType>()
	{
		return ESubstanceMaterialParentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubstanceMaterialParentType(ESubstanceMaterialParentType_StaticEnum, TEXT("/Script/SubstanceEditor"), TEXT("ESubstanceMaterialParentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Hash() { return 3865649228U; }
	UEnum* Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceEditor();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubstanceMaterialParentType"), 0, Get_Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESubstanceMaterialParentType::Default", (int64)ESubstanceMaterialParentType::Default },
				{ "ESubstanceMaterialParentType::Custom", (int64)ESubstanceMaterialParentType::Custom },
				{ "ESubstanceMaterialParentType::Generated", (int64)ESubstanceMaterialParentType::Generated },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Custom.Name", "ESubstanceMaterialParentType::Custom" },
				{ "Default.Name", "ESubstanceMaterialParentType::Default" },
				{ "Generated.Name", "ESubstanceMaterialParentType::Generated" },
				{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceEditor,
				nullptr,
				"ESubstanceMaterialParentType",
				"ESubstanceMaterialParentType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void USubstanceImportOptionsUi::StaticRegisterNativesUSubstanceImportOptionsUi()
	{
	}
	UClass* Z_Construct_UClass_USubstanceImportOptionsUi_NoRegister()
	{
		return USubstanceImportOptionsUi::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceImportOptionsUi_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialDestinationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialDestinationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceDestinationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceDestinationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaterialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_uMaterialParentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_uMaterialParentType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_uMaterialParentType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterial_MetaData[];
#endif
		static void NewProp_bCreateMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCreateInstance_MetaData[];
#endif
		static void NewProp_bCreateInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterialPath_MetaData[];
#endif
		static void NewProp_bOverrideMaterialPath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterialPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstancePath_MetaData[];
#endif
		static void NewProp_bOverrideInstancePath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstancePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideFullName_MetaData[];
#endif
		static void NewProp_bOverrideFullName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideFullName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceImportOptionsUi_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "General Materials" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SubstanceImportOptionsUi.h" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Force the Texture Objects objects' path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Force the Texture Objects objects' path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath = { "MaterialDestinationPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, MaterialDestinationPath), METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Force the Graph Instance objects' path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Force the Graph Instance objects' path" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath = { "InstanceDestinationPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, InstanceDestinationPath), METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Instance suggested name (based on filename) */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Instance suggested name (based on filename)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName = { "MaterialName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, MaterialName), METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Instance suggested name (based on filename) */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Instance suggested name (based on filename)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, InstanceName), METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Parent Material used to create Unreal material instances */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Parent Material used to create Unreal material instances" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, ParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Enables Material Selection button for custom templates on import*/" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Enables Material Selection button for custom templates on import" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType = { "uMaterialParentType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USubstanceImportOptionsUi, uMaterialParentType), Z_Construct_UEnum_SubstanceEditor_ESubstanceMaterialParentType, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** Whether to automatically create Unreal materials for instances */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether to automatically create Unreal materials for instances" },
	};
#endif
	void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_SetBit(void* Obj)
	{
		((USubstanceImportOptionsUi*)Obj)->bCreateMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial = { "bCreateMaterial", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to automatically create graph instances for every graph description present in package*/" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether to automatically create graph instances for every graph description present in package" },
	};
#endif
	void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_SetBit(void* Obj)
	{
		((USubstanceImportOptionsUi*)Obj)->bCreateInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance = { "bCreateInstance", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether or not to override material path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether or not to override material path" },
	};
#endif
	void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_SetBit(void* Obj)
	{
		((USubstanceImportOptionsUi*)Obj)->bOverrideMaterialPath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath = { "bOverrideMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether or not to override instance path */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Whether or not to override instance path" },
	};
#endif
	void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_SetBit(void* Obj)
	{
		((USubstanceImportOptionsUi*)Obj)->bOverrideInstancePath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath = { "bOverrideInstancePath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Use the string in \"Name\" field as base name of factory instance and textures */" },
		{ "ModuleRelativePath", "Public/SubstanceImportOptionsUi.h" },
		{ "ToolTip", "Use the string in \"Name\" field as base name of factory instance and textures" },
	};
#endif
	void Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_SetBit(void* Obj)
	{
		((USubstanceImportOptionsUi*)Obj)->bOverrideFullName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName = { "bOverrideFullName", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USubstanceImportOptionsUi), &Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_SetBit, METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubstanceImportOptionsUi_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialDestinationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceDestinationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_MaterialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_InstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_ParentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_uMaterialParentType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bCreateInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideMaterialPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideInstancePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubstanceImportOptionsUi_Statics::NewProp_bOverrideFullName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceImportOptionsUi_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceImportOptionsUi>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceImportOptionsUi_Statics::ClassParams = {
		&USubstanceImportOptionsUi::StaticClass,
		"EditorUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubstanceImportOptionsUi_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceImportOptionsUi_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceImportOptionsUi()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceImportOptionsUi_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceImportOptionsUi, 2974939028);
	template<> SUBSTANCEEDITOR_API UClass* StaticClass<USubstanceImportOptionsUi>()
	{
		return USubstanceImportOptionsUi::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceImportOptionsUi(Z_Construct_UClass_USubstanceImportOptionsUi, &USubstanceImportOptionsUi::StaticClass, TEXT("/Script/SubstanceEditor"), TEXT("USubstanceImportOptionsUi"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceImportOptionsUi);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
