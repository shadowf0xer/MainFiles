// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Attributes/Public/AttributesSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributesSettings() {}
// Cross Module References
	ATTRIBUTES_API UClass* Z_Construct_UClass_UAttributesSettings_NoRegister();
	ATTRIBUTES_API UClass* Z_Construct_UClass_UAttributesSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Attributes();
// End Cross Module References
	void UAttributesSettings::StaticRegisterNativesUAttributesSettings()
	{
	}
	UClass* Z_Construct_UClass_UAttributesSettings_NoRegister()
	{
		return UAttributesSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAttributesSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateAttributeModifiers_MetaData[];
#endif
		static void NewProp_bReplicateAttributeModifiers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateAttributeModifiers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicateBaseValue_MetaData[];
#endif
		static void NewProp_bReplicateBaseValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicateBaseValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_Categories;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Categories_ElementProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributesSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Attributes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AttributesSettings.h" },
		{ "ModuleRelativePath", "Public/AttributesSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateAttributeModifiers_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/AttributesSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateAttributeModifiers_SetBit(void* Obj)
	{
		((UAttributesSettings*)Obj)->bReplicateAttributeModifiers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateAttributeModifiers = { "bReplicateAttributeModifiers", nullptr, (EPropertyFlags)0x0040000001024001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAttributesSettings), &Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateAttributeModifiers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateAttributeModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateAttributeModifiers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateBaseValue_MetaData[] = {
		{ "Category", "Replication" },
		{ "ModuleRelativePath", "Public/AttributesSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateBaseValue_SetBit(void* Obj)
	{
		((UAttributesSettings*)Obj)->bReplicateBaseValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateBaseValue = { "bReplicateBaseValue", nullptr, (EPropertyFlags)0x0040000001004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAttributesSettings), &Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateBaseValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateBaseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateBaseValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributesSettings_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "ModuleRelativePath", "Public/AttributesSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAttributesSettings_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0040000001004001, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttributesSettings, Categories), METADATA_PARAMS(Z_Construct_UClass_UAttributesSettings_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesSettings_Statics::NewProp_Categories_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAttributesSettings_Statics::NewProp_Categories_ElementProp = { "Categories", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributesSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateAttributeModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesSettings_Statics::NewProp_bReplicateBaseValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesSettings_Statics::NewProp_Categories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributesSettings_Statics::NewProp_Categories_ElementProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributesSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributesSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttributesSettings_Statics::ClassParams = {
		&UAttributesSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributesSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributesSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributesSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributesSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttributesSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttributesSettings, 1159840886);
	template<> ATTRIBUTES_API UClass* StaticClass<UAttributesSettings>()
	{
		return UAttributesSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttributesSettings(Z_Construct_UClass_UAttributesSettings, &UAttributesSettings::StaticClass, TEXT("/Script/Attributes"), TEXT("UAttributesSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributesSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
