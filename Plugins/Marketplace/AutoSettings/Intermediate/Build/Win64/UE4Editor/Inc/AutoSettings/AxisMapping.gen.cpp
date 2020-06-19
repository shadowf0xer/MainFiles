// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/InputMapping/UI/AxisMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisMapping() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAxisMapping_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAxisMapping();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UInputMapping();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UAxisLabel_NoRegister();
// End Cross Module References
	void UAxisMapping::StaticRegisterNativesUAxisMapping()
	{
	}
	UClass* Z_Construct_UClass_UAxisMapping_NoRegister()
	{
		return UAxisMapping::StaticClass();
	}
	struct Z_Construct_UClass_UAxisMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AxisLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAxisMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputMapping,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisMapping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shows a label for an input axis on a particular scale and allows the user to rebind it\n */" },
		{ "IncludePath", "InputMapping/UI/AxisMapping.h" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/AxisMapping.h" },
		{ "ToolTip", "Shows a label for an input axis on a particular scale and allows the user to rebind it" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Axis Mapping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/AxisMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisLabel = { "AxisLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisMapping, AxisLabel), Z_Construct_UClass_UAxisLabel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisMapping_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Axis Mapping" },
		{ "Comment", "// Scale of the axis mapping to display and rebind\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/AxisMapping.h" },
		{ "ToolTip", "Scale of the axis mapping to display and rebind" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAxisMapping_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisMapping, Scale), METADATA_PARAMS(Z_Construct_UClass_UAxisMapping_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisMapping_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisName_MetaData[] = {
		{ "Category", "Axis Mapping" },
		{ "Comment", "// Name of the axis mapping to display and rebind\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/AxisMapping.h" },
		{ "ToolTip", "Name of the axis mapping to display and rebind" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAxisMapping, AxisName), METADATA_PARAMS(Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAxisMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisMapping_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAxisMapping_Statics::NewProp_AxisName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAxisMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAxisMapping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAxisMapping_Statics::ClassParams = {
		&UAxisMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAxisMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAxisMapping_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAxisMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAxisMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAxisMapping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAxisMapping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAxisMapping, 2071044952);
	template<> AUTOSETTINGS_API UClass* StaticClass<UAxisMapping>()
	{
		return UAxisMapping::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAxisMapping(Z_Construct_UClass_UAxisMapping, &UAxisMapping::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UAxisMapping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAxisMapping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
