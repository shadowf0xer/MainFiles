// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DxyzLiveLinkPlugin/Private/DxyzLiveLinkSourceSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDxyzLiveLinkSourceSettings() {}
// Cross Module References
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzLiveLinkSourceSettings_NoRegister();
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzLiveLinkSourceSettings();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	UPackage* Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
// End Cross Module References
	void UDxyzLiveLinkSourceSettings::StaticRegisterNativesUDxyzLiveLinkSourceSettings()
	{
	}
	UClass* Z_Construct_UClass_UDxyzLiveLinkSourceSettings_NoRegister()
	{
		return UDxyzLiveLinkSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowLogs_MetaData[];
#endif
		static void NewProp_ShowLogs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowLogs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomSubjectName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CustomSubjectName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomName_MetaData[];
#endif
		static void NewProp_UseCustomName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WarningText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DxyzLiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkSourceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_ShowLogs_MetaData[] = {
		{ "Category", "Dxyz Live Link" },
		{ "Comment", "/** Show all the connection attempts in the logs */" },
		{ "DisplayName", "Log connection attempts" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkSourceSettings.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Show all the connection attempts in the logs" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_ShowLogs_SetBit(void* Obj)
	{
		((UDxyzLiveLinkSourceSettings*)Obj)->ShowLogs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_ShowLogs = { "ShowLogs", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkSourceSettings), &Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_ShowLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_ShowLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_ShowLogs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_CustomSubjectName_MetaData[] = {
		{ "Category", "Dxyz Live Link" },
		{ "Comment", "/** Use this name as the subject name for this source */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkSourceSettings.h" },
		{ "ToolTip", "Use this name as the subject name for this source" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_CustomSubjectName = { "CustomSubjectName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkSourceSettings, CustomSubjectName), METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_CustomSubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_CustomSubjectName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_UseCustomName_MetaData[] = {
		{ "Category", "Dxyz Live Link" },
		{ "Comment", "/** Use this name as the subject name for this source */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkSourceSettings.h" },
		{ "ToolTip", "Use this name as the subject name for this source" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_UseCustomName_SetBit(void* Obj)
	{
		((UDxyzLiveLinkSourceSettings*)Obj)->UseCustomName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_UseCustomName = { "UseCustomName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkSourceSettings), &Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_UseCustomName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_UseCustomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_UseCustomName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_WarningText_MetaData[] = {
		{ "Category", "Dxyz Live Link" },
		{ "Comment", "// Used to write the yellow warning, this field will be hidden by customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkSourceSettings.h" },
		{ "ToolTip", "Used to write the yellow warning, this field will be hidden by customization" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_WarningText = { "WarningText", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkSourceSettings, WarningText), METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_WarningText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_WarningText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_ShowLogs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_CustomSubjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_UseCustomName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::NewProp_WarningText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDxyzLiveLinkSourceSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::ClassParams = {
		&UDxyzLiveLinkSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDxyzLiveLinkSourceSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDxyzLiveLinkSourceSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDxyzLiveLinkSourceSettings, 1264493437);
	template<> DXYZLIVELINKPLUGIN_API UClass* StaticClass<UDxyzLiveLinkSourceSettings>()
	{
		return UDxyzLiveLinkSourceSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDxyzLiveLinkSourceSettings(Z_Construct_UClass_UDxyzLiveLinkSourceSettings, &UDxyzLiveLinkSourceSettings::StaticClass, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("UDxyzLiveLinkSourceSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDxyzLiveLinkSourceSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
