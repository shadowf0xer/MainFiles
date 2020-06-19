// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSettings() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSettings_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Voxel();
// End Cross Module References
	void UVoxelSettings::StaticRegisterNativesUVoxelSettings()
	{
	}
	UClass* Z_Construct_UClass_UVoxelSettings_NoRegister()
	{
		return UVoxelSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoundBeforeSaving_MetaData[];
#endif
		static void NewProp_bRoundBeforeSaving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoundBeforeSaving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableAutoPreview_MetaData[];
#endif
		static void NewProp_bDisableAutoPreview_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableAutoPreview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowNotifications_MetaData[];
#endif
		static void NewProp_bShowNotifications_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNotifications;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Usage example: In DefaultEngine.ini\n * [/Script/Voxel.VoxelSettings]\n * bDisableAutoPreview=True\n */" },
		{ "DisplayName", "Voxel Plugin" },
		{ "IncludePath", "VoxelSettings.h" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
		{ "ToolTip", "Usage example: In DefaultEngine.ini\n[/Script/Voxel.VoxelSettings]\nbDisableAutoPreview=True" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Round voxels that do not affect surface nor normals to improve compression\n// Takes a while when saving\n" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
		{ "ToolTip", "Round voxels that do not affect surface nor normals to improve compression\nTakes a while when saving" },
	};
#endif
	void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_SetBit(void* Obj)
	{
		((UVoxelSettings*)Obj)->bRoundBeforeSaving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving = { "bRoundBeforeSaving", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_SetBit(void* Obj)
	{
		((UVoxelSettings*)Obj)->bDisableAutoPreview = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview = { "bDisableAutoPreview", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/VoxelSettings.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_SetBit(void* Obj)
	{
		((UVoxelSettings*)Obj)->bShowNotifications = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications = { "bShowNotifications", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSettings), &Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bRoundBeforeSaving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bDisableAutoPreview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSettings_Statics::NewProp_bShowNotifications,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSettings_Statics::ClassParams = {
		&UVoxelSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSettings, 908110668);
	template<> VOXEL_API UClass* StaticClass<UVoxelSettings>()
	{
		return UVoxelSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSettings(Z_Construct_UClass_UVoxelSettings, &UVoxelSettings::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
