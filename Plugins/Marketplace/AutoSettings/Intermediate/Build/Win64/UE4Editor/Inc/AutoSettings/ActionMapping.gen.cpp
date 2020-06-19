// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoSettings/Public/InputMapping/UI/ActionMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionMapping() {}
// Cross Module References
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UActionMapping_NoRegister();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UActionMapping();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UInputMapping();
	UPackage* Z_Construct_UPackage__Script_AutoSettings();
	AUTOSETTINGS_API UClass* Z_Construct_UClass_UActionLabel_NoRegister();
// End Cross Module References
	void UActionMapping::StaticRegisterNativesUActionMapping()
	{
	}
	UClass* Z_Construct_UClass_UActionMapping_NoRegister()
	{
		return UActionMapping::StaticClass();
	}
	struct Z_Construct_UClass_UActionMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActionLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActionMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputMapping,
		(UObject* (*)())Z_Construct_UPackage__Script_AutoSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMapping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shows a label for an input action and allows the user to rebind it\n */" },
		{ "IncludePath", "InputMapping/UI/ActionMapping.h" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/ActionMapping.h" },
		{ "ToolTip", "Shows a label for an input action and allows the user to rebind it" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionLabel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Action Mapping" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/ActionMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionLabel = { "ActionLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionMapping, ActionLabel), Z_Construct_UClass_UActionLabel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Action Mapping" },
		{ "Comment", "// Name of the action mapping to display and rebind\n" },
		{ "ModuleRelativePath", "Public/InputMapping/UI/ActionMapping.h" },
		{ "ToolTip", "Name of the action mapping to display and rebind" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActionMapping, ActionName), METADATA_PARAMS(Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActionMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActionMapping_Statics::NewProp_ActionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActionMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActionMapping>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActionMapping_Statics::ClassParams = {
		&UActionMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActionMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActionMapping_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UActionMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActionMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActionMapping()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActionMapping_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionMapping, 2748000904);
	template<> AUTOSETTINGS_API UClass* StaticClass<UActionMapping>()
	{
		return UActionMapping::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionMapping(Z_Construct_UClass_UActionMapping, &UActionMapping::StaticClass, TEXT("/Script/AutoSettings"), TEXT("UActionMapping"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionMapping);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
