// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DxyzLiveLinkPlugin/Private/DxyzLiveLinkRetargetAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDxyzLiveLinkRetargetAsset() {}
// Cross Module References
	DXYZLIVELINKPLUGIN_API UEnum* Z_Construct_UEnum_DxyzLiveLinkPlugin_DxyzAxis();
	UPackage* Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDxyzCurveModify();
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDxyzCurveSettings();
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FRotationSettings();
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTranslationSettings();
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDxyzBoneModify();
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDxyzBoneSettings();
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBoneRotaSettings();
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBoneTransSettings();
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_NoRegister();
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzLiveLinkRetargetAsset();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	static UEnum* DxyzAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DxyzLiveLinkPlugin_DxyzAxis, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("DxyzAxis"));
		}
		return Singleton;
	}
	template<> DXYZLIVELINKPLUGIN_API UEnum* StaticEnum<DxyzAxis>()
	{
		return DxyzAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_DxyzAxis(DxyzAxis_StaticEnum, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("DxyzAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DxyzLiveLinkPlugin_DxyzAxis_Hash() { return 1501472784U; }
	UEnum* Z_Construct_UEnum_DxyzLiveLinkPlugin_DxyzAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("DxyzAxis"), 0, Get_Z_Construct_UEnum_DxyzLiveLinkPlugin_DxyzAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DxyzAxis::XYZ", (int64)DxyzAxis::XYZ },
				{ "DxyzAxis::XZY", (int64)DxyzAxis::XZY },
				{ "DxyzAxis::YZX", (int64)DxyzAxis::YZX },
				{ "DxyzAxis::YXZ", (int64)DxyzAxis::YXZ },
				{ "DxyzAxis::ZYX", (int64)DxyzAxis::ZYX },
				{ "DxyzAxis::ZXY", (int64)DxyzAxis::ZXY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
				{ "XYZ.DisplayName", "X.Y.Z" },
				{ "XYZ.Name", "DxyzAxis::XYZ" },
				{ "XZY.DisplayName", "X.Z.Y" },
				{ "XZY.Name", "DxyzAxis::XZY" },
				{ "YXZ.DisplayName", "Y.X.Z" },
				{ "YXZ.Name", "DxyzAxis::YXZ" },
				{ "YZX.DisplayName", "Y.Z.X" },
				{ "YZX.Name", "DxyzAxis::YZX" },
				{ "ZXY.DisplayName", "Z.X.Y" },
				{ "ZXY.Name", "DxyzAxis::ZXY" },
				{ "ZYX.DisplayName", "Z.Y.X" },
				{ "ZYX.Name", "DxyzAxis::ZYX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
				nullptr,
				"DxyzAxis",
				"DxyzAxis",
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
class UScriptStruct* FDxyzCurveModify::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDxyzCurveModify_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDxyzCurveModify, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("DxyzCurveModify"), sizeof(FDxyzCurveModify), Get_Z_Construct_UScriptStruct_FDxyzCurveModify_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FDxyzCurveModify>()
{
	return FDxyzCurveModify::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDxyzCurveModify(FDxyzCurveModify::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("DxyzCurveModify"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzCurveModify
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzCurveModify()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DxyzCurveModify")),new UScriptStruct::TCppStructOps<FDxyzCurveModify>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzCurveModify;
	struct Z_Construct_UScriptStruct_FDxyzCurveModify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ESCCurveIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ESCCurveIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappedCurves_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MappedCurves;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappedCurves_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_EnableCurve_MetaData[];
#endif
		static void NewProp_bOverride_EnableCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_EnableCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasError_MetaData[];
#endif
		static void NewProp_HasError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDxyzCurveModify>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_ESCCurveIdx_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "/** Field to find the id of the bone inside the ESC after sorting */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Field to find the id of the bone inside the ESC after sorting" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_ESCCurveIdx = { "ESCCurveIdx", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzCurveModify, ESCCurveIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_ESCCurveIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_ESCCurveIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_MappedCurves_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "/** Additionnal curves to map to the ESC curve */" },
		{ "editcondition", "bOverride_EnableCurve" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Additionnal curves to map to the ESC curve" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_MappedCurves = { "MappedCurves", nullptr, (EPropertyFlags)0x0010000002000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzCurveModify, MappedCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_MappedCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_MappedCurves_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_MappedCurves_Inner = { "MappedCurves", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDxyzCurveSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_bOverride_EnableCurve_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "/** Enable animation for this morph target in the final pose */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Enable animation for this morph target in the final pose" },
	};
#endif
	void Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_bOverride_EnableCurve_SetBit(void* Obj)
	{
		((FDxyzCurveModify*)Obj)->bOverride_EnableCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_bOverride_EnableCurve = { "bOverride_EnableCurve", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDxyzCurveModify), &Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_bOverride_EnableCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_bOverride_EnableCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_bOverride_EnableCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_CurveName_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "// Source Curve name, will become the name of the property in customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Source Curve name, will become the name of the property in customization" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzCurveModify, CurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_CurveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_HasError_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "// This field will be hidden by customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "This field will be hidden by customization" },
	};
#endif
	void Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_HasError_SetBit(void* Obj)
	{
		((FDxyzCurveModify*)Obj)->HasError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_HasError = { "HasError", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDxyzCurveModify), &Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_HasError_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_HasError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_HasError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_ESCCurveIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_MappedCurves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_MappedCurves_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_bOverride_EnableCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_CurveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::NewProp_HasError,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"DxyzCurveModify",
		sizeof(FDxyzCurveModify),
		alignof(FDxyzCurveModify),
		Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDxyzCurveModify()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDxyzCurveModify_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DxyzCurveModify"), sizeof(FDxyzCurveModify), Get_Z_Construct_UScriptStruct_FDxyzCurveModify_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDxyzCurveModify_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDxyzCurveModify_Hash() { return 2107375499U; }
class UScriptStruct* FDxyzCurveSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDxyzCurveSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDxyzCurveSettings, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("DxyzCurveSettings"), sizeof(FDxyzCurveSettings), Get_Z_Construct_UScriptStruct_FDxyzCurveSettings_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FDxyzCurveSettings>()
{
	return FDxyzCurveSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDxyzCurveSettings(FDxyzCurveSettings::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("DxyzCurveSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzCurveSettings
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzCurveSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DxyzCurveSettings")),new UScriptStruct::TCppStructOps<FDxyzCurveSettings>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzCurveSettings;
	struct Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Clamp_MetaData[];
#endif
		static void NewProp_Clamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Clamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValueMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValueMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDefault_MetaData[];
#endif
		static void NewProp_IsDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDxyzCurveSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_MaxClamp_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Maximal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_MaxClamp = { "MaxClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzCurveSettings, MaxClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_MaxClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_MaxClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_MinClamp_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Minimal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Minimal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_MinClamp = { "MinClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzCurveSettings, MinClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_MinClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_MinClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_Clamp_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "/** Enable clamping */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable clamping" },
	};
#endif
	void Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_Clamp_SetBit(void* Obj)
	{
		((FDxyzCurveSettings*)Obj)->Clamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_Clamp = { "Clamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDxyzCurveSettings), &Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_Clamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_Clamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_Clamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_ValueMultiplier_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "/** Blendshape multiplier */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Blendshape multiplier" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_ValueMultiplier = { "ValueMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzCurveSettings, ValueMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_ValueMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_ValueMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_RemapName_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "// Contains the remap name, this field will be hidden by customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Contains the remap name, this field will be hidden by customization" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_RemapName = { "RemapName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzCurveSettings, RemapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_RemapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_RemapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_IsDefault_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "// Used to know if this is the first curve mapped, this field will be hidden by customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Used to know if this is the first curve mapped, this field will be hidden by customization" },
	};
#endif
	void Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_IsDefault_SetBit(void* Obj)
	{
		((FDxyzCurveSettings*)Obj)->IsDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_IsDefault = { "IsDefault", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDxyzCurveSettings), &Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_IsDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_IsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_IsDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_MaxClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_MinClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_Clamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_ValueMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_RemapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::NewProp_IsDefault,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"DxyzCurveSettings",
		sizeof(FDxyzCurveSettings),
		alignof(FDxyzCurveSettings),
		Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDxyzCurveSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDxyzCurveSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DxyzCurveSettings"), sizeof(FDxyzCurveSettings), Get_Z_Construct_UScriptStruct_FDxyzCurveSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDxyzCurveSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDxyzCurveSettings_Hash() { return 4059895082U; }
class UScriptStruct* FRotationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FRotationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationSettings, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("RotationSettings"), sizeof(FRotationSettings), Get_Z_Construct_UScriptStruct_FRotationSettings_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FRotationSettings>()
{
	return FRotationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRotationSettings(FRotationSettings::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("RotationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFRotationSettings
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFRotationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RotationSettings")),new UScriptStruct::TCppStructOps<FRotationSettings>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFRotationSettings;
	struct Z_Construct_UScriptStruct_FRotationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertZAxis_MetaData[];
#endif
		static void NewProp_InvertZAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertZAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertYAxis_MetaData[];
#endif
		static void NewProp_InvertYAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertYAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertXAxis_MetaData[];
#endif
		static void NewProp_InvertXAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertXAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadInvertZAxis_MetaData[];
#endif
		static void NewProp_HeadInvertZAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeadInvertZAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadInvertYAxis_MetaData[];
#endif
		static void NewProp_HeadInvertYAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeadInvertYAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadInvertXAxis_MetaData[];
#endif
		static void NewProp_HeadInvertXAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeadInvertXAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertZAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert Z axis for bones rotation. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert Z axis for bones rotation." },
	};
#endif
	void Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertZAxis_SetBit(void* Obj)
	{
		((FRotationSettings*)Obj)->InvertZAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertZAxis = { "InvertZAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotationSettings), &Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertZAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertZAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertYAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert Y axis for bones rotation. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert Y axis for bones rotation." },
	};
#endif
	void Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertYAxis_SetBit(void* Obj)
	{
		((FRotationSettings*)Obj)->InvertYAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertYAxis = { "InvertYAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotationSettings), &Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertYAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertYAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertXAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert X axis for bones rotation. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert X axis for bones rotation." },
	};
#endif
	void Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertXAxis_SetBit(void* Obj)
	{
		((FRotationSettings*)Obj)->InvertXAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertXAxis = { "InvertXAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotationSettings), &Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertXAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertXAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertZAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert Z axis for head rotation. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert Z axis for head rotation." },
	};
#endif
	void Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertZAxis_SetBit(void* Obj)
	{
		((FRotationSettings*)Obj)->HeadInvertZAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertZAxis = { "HeadInvertZAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotationSettings), &Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertZAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertZAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertYAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert Y axis for head rotation. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert Y axis for head rotation." },
	};
#endif
	void Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertYAxis_SetBit(void* Obj)
	{
		((FRotationSettings*)Obj)->HeadInvertYAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertYAxis = { "HeadInvertYAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotationSettings), &Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertYAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertYAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertXAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert X axis for head rotation. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert X axis for head rotation." },
	};
#endif
	void Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertXAxis_SetBit(void* Obj)
	{
		((FRotationSettings*)Obj)->HeadInvertXAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertXAxis = { "HeadInvertXAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRotationSettings), &Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertXAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertXAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertYAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_InvertXAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertYAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationSettings_Statics::NewProp_HeadInvertXAxis,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"RotationSettings",
		sizeof(FRotationSettings),
		alignof(FRotationSettings),
		Z_Construct_UScriptStruct_FRotationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRotationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RotationSettings"), sizeof(FRotationSettings), Get_Z_Construct_UScriptStruct_FRotationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRotationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRotationSettings_Hash() { return 1136762398U; }
class UScriptStruct* FTranslationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FTranslationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTranslationSettings, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("TranslationSettings"), sizeof(FTranslationSettings), Get_Z_Construct_UScriptStruct_FTranslationSettings_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FTranslationSettings>()
{
	return FTranslationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTranslationSettings(FTranslationSettings::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("TranslationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFTranslationSettings
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFTranslationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TranslationSettings")),new UScriptStruct::TCppStructOps<FTranslationSettings>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFTranslationSettings;
	struct Z_Construct_UScriptStruct_FTranslationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PositionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertZAxis_MetaData[];
#endif
		static void NewProp_InvertZAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertZAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertYAxis_MetaData[];
#endif
		static void NewProp_InvertYAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertYAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertXAxis_MetaData[];
#endif
		static void NewProp_InvertXAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertXAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadPositionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadPositionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadInvertZAxis_MetaData[];
#endif
		static void NewProp_HeadInvertZAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeadInvertZAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadInvertYAxis_MetaData[];
#endif
		static void NewProp_HeadInvertYAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeadInvertYAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadInvertXAxis_MetaData[];
#endif
		static void NewProp_HeadInvertXAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HeadInvertXAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTranslationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_PositionScale_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Change the translation scale. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Change the translation scale." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_PositionScale = { "PositionScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationSettings, PositionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_PositionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_PositionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertZAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert Z axis for bones position. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert Z axis for bones position." },
	};
#endif
	void Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertZAxis_SetBit(void* Obj)
	{
		((FTranslationSettings*)Obj)->InvertZAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertZAxis = { "InvertZAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTranslationSettings), &Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertZAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertZAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertYAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert Y axis for bones position. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert Y axis for bones position." },
	};
#endif
	void Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertYAxis_SetBit(void* Obj)
	{
		((FTranslationSettings*)Obj)->InvertYAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertYAxis = { "InvertYAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTranslationSettings), &Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertYAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertYAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertXAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert X axis for bones position. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert X axis for bones position." },
	};
#endif
	void Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertXAxis_SetBit(void* Obj)
	{
		((FTranslationSettings*)Obj)->InvertXAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertXAxis = { "InvertXAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTranslationSettings), &Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertXAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertXAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadPositionScale_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Change the translation scale. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Change the translation scale." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadPositionScale = { "HeadPositionScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTranslationSettings, HeadPositionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadPositionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadPositionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertZAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert Z axis for head position. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert Z axis for head position." },
	};
#endif
	void Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertZAxis_SetBit(void* Obj)
	{
		((FTranslationSettings*)Obj)->HeadInvertZAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertZAxis = { "HeadInvertZAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTranslationSettings), &Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertZAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertZAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertYAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert Y axis for head position. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert Y axis for head position." },
	};
#endif
	void Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertYAxis_SetBit(void* Obj)
	{
		((FTranslationSettings*)Obj)->HeadInvertYAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertYAxis = { "HeadInvertYAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTranslationSettings), &Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertYAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertYAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertXAxis_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Invert X axis for head position. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Invert X axis for head position." },
	};
#endif
	void Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertXAxis_SetBit(void* Obj)
	{
		((FTranslationSettings*)Obj)->HeadInvertXAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertXAxis = { "HeadInvertXAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTranslationSettings), &Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertXAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertXAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTranslationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_PositionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertYAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_InvertXAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadPositionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertZAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertYAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTranslationSettings_Statics::NewProp_HeadInvertXAxis,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTranslationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"TranslationSettings",
		sizeof(FTranslationSettings),
		alignof(FTranslationSettings),
		Z_Construct_UScriptStruct_FTranslationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTranslationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTranslationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTranslationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTranslationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TranslationSettings"), sizeof(FTranslationSettings), Get_Z_Construct_UScriptStruct_FTranslationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTranslationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTranslationSettings_Hash() { return 297379873U; }
class UScriptStruct* FDxyzBoneModify::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDxyzBoneModify_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDxyzBoneModify, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("DxyzBoneModify"), sizeof(FDxyzBoneModify), Get_Z_Construct_UScriptStruct_FDxyzBoneModify_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FDxyzBoneModify>()
{
	return FDxyzBoneModify::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDxyzBoneModify(FDxyzBoneModify::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("DxyzBoneModify"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzBoneModify
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzBoneModify()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DxyzBoneModify")),new UScriptStruct::TCppStructOps<FDxyzBoneModify>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzBoneModify;
	struct Z_Construct_UScriptStruct_FDxyzBoneModify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ESCBoneIdx_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ESCBoneIdx;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MappedBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MappedBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverride_EnableBone_MetaData[];
#endif
		static void NewProp_bOverride_EnableBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverride_EnableBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasError_MetaData[];
#endif
		static void NewProp_HasError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasError;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDxyzBoneModify>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_ESCBoneIdx_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "/** Field to find the id of the bone inside the ESC after sorting */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Field to find the id of the bone inside the ESC after sorting" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_ESCBoneIdx = { "ESCBoneIdx", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzBoneModify, ESCBoneIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_ESCBoneIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_ESCBoneIdx_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_MappedBones_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "/** Additionnal bones to map to the ESC bone */" },
		{ "editcondition", "bOverride_EnableBone" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Additionnal bones to map to the ESC bone" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_MappedBones = { "MappedBones", nullptr, (EPropertyFlags)0x0010000002000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzBoneModify, MappedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_MappedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_MappedBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_MappedBones_Inner = { "MappedBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDxyzBoneSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_bOverride_EnableBone_MetaData[] = {
		{ "Category", "Overrides" },
		{ "Comment", "/** Enable animation for this bone in the final pose */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Enable animation for this bone in the final pose" },
	};
#endif
	void Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_bOverride_EnableBone_SetBit(void* Obj)
	{
		((FDxyzBoneModify*)Obj)->bOverride_EnableBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_bOverride_EnableBone = { "bOverride_EnableBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDxyzBoneModify), &Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_bOverride_EnableBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_bOverride_EnableBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_bOverride_EnableBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "// Source Bone name, will become the name of the property in customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Source Bone name, will become the name of the property in customization" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzBoneModify, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_HasError_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "// This field will be hidden by customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "This field will be hidden by customization" },
	};
#endif
	void Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_HasError_SetBit(void* Obj)
	{
		((FDxyzBoneModify*)Obj)->HasError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_HasError = { "HasError", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDxyzBoneModify), &Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_HasError_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_HasError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_HasError_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_ESCBoneIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_MappedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_MappedBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_bOverride_EnableBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::NewProp_HasError,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"DxyzBoneModify",
		sizeof(FDxyzBoneModify),
		alignof(FDxyzBoneModify),
		Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDxyzBoneModify()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDxyzBoneModify_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DxyzBoneModify"), sizeof(FDxyzBoneModify), Get_Z_Construct_UScriptStruct_FDxyzBoneModify_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDxyzBoneModify_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDxyzBoneModify_Hash() { return 2958767554U; }
class UScriptStruct* FDxyzBoneSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FDxyzBoneSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDxyzBoneSettings, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("DxyzBoneSettings"), sizeof(FDxyzBoneSettings), Get_Z_Construct_UScriptStruct_FDxyzBoneSettings_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FDxyzBoneSettings>()
{
	return FDxyzBoneSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDxyzBoneSettings(FDxyzBoneSettings::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("DxyzBoneSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzBoneSettings
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzBoneSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DxyzBoneSettings")),new UScriptStruct::TCppStructOps<FDxyzBoneSettings>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFDxyzBoneSettings;
	struct Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApplyRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplyTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ApplyTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDefault_MetaData[];
#endif
		static void NewProp_IsDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDefault;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDxyzBoneSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_ApplyRotation_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "/** Enable rotation for this bone in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable rotation for this bone in the final pose" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_ApplyRotation = { "ApplyRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzBoneSettings, ApplyRotation), Z_Construct_UScriptStruct_FBoneRotaSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_ApplyRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_ApplyRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_ApplyTranslation_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "/** Enable translation for this bone in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable translation for this bone in the final pose" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_ApplyTranslation = { "ApplyTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzBoneSettings, ApplyTranslation), Z_Construct_UScriptStruct_FBoneTransSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_ApplyTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_ApplyTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_RemapName_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "// Contains the remap name, this field will be hidden by customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Contains the remap name, this field will be hidden by customization" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_RemapName = { "RemapName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDxyzBoneSettings, RemapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_RemapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_RemapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_IsDefault_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "// Used to know if this is the first bone mapped, this field will be hidden by customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Used to know if this is the first bone mapped, this field will be hidden by customization" },
	};
#endif
	void Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_IsDefault_SetBit(void* Obj)
	{
		((FDxyzBoneSettings*)Obj)->IsDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_IsDefault = { "IsDefault", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDxyzBoneSettings), &Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_IsDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_IsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_IsDefault_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_ApplyRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_ApplyTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_RemapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::NewProp_IsDefault,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"DxyzBoneSettings",
		sizeof(FDxyzBoneSettings),
		alignof(FDxyzBoneSettings),
		Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDxyzBoneSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDxyzBoneSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DxyzBoneSettings"), sizeof(FDxyzBoneSettings), Get_Z_Construct_UScriptStruct_FDxyzBoneSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDxyzBoneSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDxyzBoneSettings_Hash() { return 641271073U; }
class UScriptStruct* FBoneRotaSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBoneRotaSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneRotaSettings, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("BoneRotaSettings"), sizeof(FBoneRotaSettings), Get_Z_Construct_UScriptStruct_FBoneRotaSettings_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FBoneRotaSettings>()
{
	return FBoneRotaSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneRotaSettings(FBoneRotaSettings::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("BoneRotaSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFBoneRotaSettings
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFBoneRotaSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneRotaSettings")),new UScriptStruct::TCppStructOps<FBoneRotaSettings>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFBoneRotaSettings;
	struct Z_Construct_UScriptStruct_FBoneRotaSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZMaxClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZMaxClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZMinClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZMinClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZClamp_MetaData[];
#endif
		static void NewProp_ZClamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ZClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ZPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YMaxClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YMaxClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YMinClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YMinClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YClamp_MetaData[];
#endif
		static void NewProp_YClamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_YClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_YPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XMaxClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XMaxClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XMinClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XMinClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XClamp_MetaData[];
#endif
		static void NewProp_XClamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_XClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_XPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneRotaSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZMaxClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Z maximal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Z maximal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZMaxClamp = { "ZMaxClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneRotaSettings, ZMaxClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZMaxClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZMaxClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZMinClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Z minimal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Z minimal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZMinClamp = { "ZMinClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneRotaSettings, ZMinClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZMinClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZMinClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Enable Z clamping */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable Z clamping" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZClamp_SetBit(void* Obj)
	{
		((FBoneRotaSettings*)Obj)->ZClamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZClamp = { "ZClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoneRotaSettings), &Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZClamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZPercent_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Z percentage of rotation value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Z percentage of rotation value" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZPercent = { "ZPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneRotaSettings, ZPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YMaxClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Y maximal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Y maximal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YMaxClamp = { "YMaxClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneRotaSettings, YMaxClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YMaxClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YMaxClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YMinClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Y minimal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Y minimal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YMinClamp = { "YMinClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneRotaSettings, YMinClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YMinClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YMinClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Enable Y clamping */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable Y clamping" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YClamp_SetBit(void* Obj)
	{
		((FBoneRotaSettings*)Obj)->YClamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YClamp = { "YClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoneRotaSettings), &Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YClamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YPercent_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Y percentage of rotation value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Y percentage of rotation value" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YPercent = { "YPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneRotaSettings, YPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XMaxClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** X maximal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "X maximal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XMaxClamp = { "XMaxClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneRotaSettings, XMaxClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XMaxClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XMaxClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XMinClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** X minimal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "X minimal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XMinClamp = { "XMinClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneRotaSettings, XMinClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XMinClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XMinClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Enable X clamping */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable X clamping" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XClamp_SetBit(void* Obj)
	{
		((FBoneRotaSettings*)Obj)->XClamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XClamp = { "XClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoneRotaSettings), &Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XClamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XPercent_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** X percentage of rotation value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "X percentage of rotation value" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XPercent = { "XPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneRotaSettings, XPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Enable rotation */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Enable rotation" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FBoneRotaSettings*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoneRotaSettings), &Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_Enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZMaxClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZMinClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_ZPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YMaxClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YMinClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_YPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XMaxClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XMinClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_XPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::NewProp_Enabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"BoneRotaSettings",
		sizeof(FBoneRotaSettings),
		alignof(FBoneRotaSettings),
		Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneRotaSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneRotaSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneRotaSettings"), sizeof(FBoneRotaSettings), Get_Z_Construct_UScriptStruct_FBoneRotaSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneRotaSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneRotaSettings_Hash() { return 632673728U; }
class UScriptStruct* FBoneTransSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FBoneTransSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneTransSettings, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("BoneTransSettings"), sizeof(FBoneTransSettings), Get_Z_Construct_UScriptStruct_FBoneTransSettings_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FBoneTransSettings>()
{
	return FBoneTransSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneTransSettings(FBoneTransSettings::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("BoneTransSettings"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFBoneTransSettings
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFBoneTransSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneTransSettings")),new UScriptStruct::TCppStructOps<FBoneTransSettings>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFBoneTransSettings;
	struct Z_Construct_UScriptStruct_FBoneTransSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZMaxClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZMaxClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZMinClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZMinClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZClamp_MetaData[];
#endif
		static void NewProp_ZClamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ZClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ZPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YMaxClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YMaxClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YMinClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YMinClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YClamp_MetaData[];
#endif
		static void NewProp_YClamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_YClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_YPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XMaxClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XMaxClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XMinClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XMinClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XClamp_MetaData[];
#endif
		static void NewProp_XClamp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_XClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_XPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[];
#endif
		static void NewProp_Enabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneTransSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZMaxClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Z maximal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Z maximal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZMaxClamp = { "ZMaxClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransSettings, ZMaxClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZMaxClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZMaxClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZMinClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Z minimal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Z minimal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZMinClamp = { "ZMinClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransSettings, ZMinClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZMinClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZMinClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Enable Z clamping */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable Z clamping" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZClamp_SetBit(void* Obj)
	{
		((FBoneTransSettings*)Obj)->ZClamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZClamp = { "ZClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoneTransSettings), &Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZClamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZPercent_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Z percentage of translation value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Z percentage of translation value" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZPercent = { "ZPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransSettings, ZPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YMaxClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Y maximal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Y maximal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YMaxClamp = { "YMaxClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransSettings, YMaxClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YMaxClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YMaxClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YMinClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Y minimal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Y minimal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YMinClamp = { "YMinClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransSettings, YMinClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YMinClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YMinClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Enable Y clamping */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable Y clamping" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YClamp_SetBit(void* Obj)
	{
		((FBoneTransSettings*)Obj)->YClamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YClamp = { "YClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoneTransSettings), &Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YClamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YPercent_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Y percentage of translation value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Y percentage of translation value" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YPercent = { "YPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransSettings, YPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XMaxClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** X maximal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "X maximal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XMaxClamp = { "XMaxClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransSettings, XMaxClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XMaxClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XMaxClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XMinClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** X minimal value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "X minimal value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XMinClamp = { "XMinClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransSettings, XMinClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XMinClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XMinClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XClamp_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Enable X clamping */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable X clamping" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XClamp_SetBit(void* Obj)
	{
		((FBoneTransSettings*)Obj)->XClamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XClamp = { "XClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoneTransSettings), &Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XClamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XPercent_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** X percentage of translation value */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "X percentage of translation value" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XPercent = { "XPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneTransSettings, XPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_Enabled_MetaData[] = {
		{ "Category", "Dxyz bones" },
		{ "Comment", "/** Enable translation */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Enable translation" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_Enabled_SetBit(void* Obj)
	{
		((FBoneTransSettings*)Obj)->Enabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_Enabled = { "Enabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBoneTransSettings), &Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_Enabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_Enabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_Enabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneTransSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZMaxClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZMinClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_ZPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YMaxClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YMinClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_YPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XMaxClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XMinClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_XPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneTransSettings_Statics::NewProp_Enabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneTransSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"BoneTransSettings",
		sizeof(FBoneTransSettings),
		alignof(FBoneTransSettings),
		Z_Construct_UScriptStruct_FBoneTransSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneTransSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneTransSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneTransSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneTransSettings"), sizeof(FBoneTransSettings), Get_Z_Construct_UScriptStruct_FBoneTransSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneTransSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneTransSettings_Hash() { return 2445041131U; }
	void UDxyzLiveLinkRetargetAsset::StaticRegisterNativesUDxyzLiveLinkRetargetAsset()
	{
	}
	UClass* Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_NoRegister()
	{
		return UDxyzLiveLinkRetargetAsset::StaticClass();
	}
	struct Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogFPS_MetaData[];
#endif
		static void NewProp_LogFPS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LogFPS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesAxisSwapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BonesAxisSwapping;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BonesAxisSwapping_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadAxisSwapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_HeadAxisSwapping;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_HeadAxisSwapping_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAverageEyeRotation_MetaData[];
#endif
		static void NewProp_UseAverageEyeRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAverageEyeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListOfMorphTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListOfMorphTargets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ListOfMorphTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetAllMorphTargets_MetaData[];
#endif
		static void NewProp_ResetAllMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResetAllMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EaseAllMorphTargets_MetaData[];
#endif
		static void NewProp_EaseAllMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EaseAllMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoostAllMorphTargets_MetaData[];
#endif
		static void NewProp_BoostAllMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BoostAllMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableAllMorphTargets_MetaData[];
#endif
		static void NewProp_DisableAllMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableAllMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAllMorphTargets_MetaData[];
#endif
		static void NewProp_EnableAllMorphTargets_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAllMorphTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshCurveNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshCurveNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListOfBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ListOfBones;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ListOfBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableAllRotations_MetaData[];
#endif
		static void NewProp_DisableAllRotations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableAllRotations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAllRotations_MetaData[];
#endif
		static void NewProp_EnableAllRotations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAllRotations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableAllTranslations_MetaData[];
#endif
		static void NewProp_DisableAllTranslations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableAllTranslations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAllTranslations_MetaData[];
#endif
		static void NewProp_EnableAllTranslations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAllTranslations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableAllBones_MetaData[];
#endif
		static void NewProp_DisableAllBones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableAllBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAllBones_MetaData[];
#endif
		static void NewProp_EnableAllBones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAllBones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MeshBoneNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ESCPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ESCPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningCurvesText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WarningCurvesText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningBonesText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WarningBonesText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DxyzLiveLinkRetargetAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_LogFPS_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Display the face animation FPS in the logs */" },
		{ "DisplayName", "Log Face Animation FPS" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Display the face animation FPS in the logs" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_LogFPS_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->LogFPS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_LogFPS = { "LogFPS", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_LogFPS_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_LogFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_LogFPS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_RotationSettings_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Axis properties for rotation */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Axis properties for rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_RotationSettings = { "RotationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, RotationSettings), Z_Construct_UScriptStruct_FRotationSettings, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_RotationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_RotationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_TranslationSettings_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Axis properties for translation */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Axis properties for translation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_TranslationSettings = { "TranslationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, TranslationSettings), Z_Construct_UScriptStruct_FTranslationSettings, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_TranslationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_TranslationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BonesAxisSwapping_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Swap the other bones axis. By default,\n    Dynamixyz Grabber sends X.Y.Z coordinates in parent bone space. This setting allows you to\n    map each axis to another axis. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Swap the other bones axis. By default,\n   Dynamixyz Grabber sends X.Y.Z coordinates in parent bone space. This setting allows you to\n   map each axis to another axis." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BonesAxisSwapping = { "BonesAxisSwapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, BonesAxisSwapping), Z_Construct_UEnum_DxyzLiveLinkPlugin_DxyzAxis, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BonesAxisSwapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BonesAxisSwapping_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BonesAxisSwapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_HeadAxisSwapping_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Swap head axis according to your rig export. By default,\n    Dynamixyz Grabber sends X.Y.Z coordinates in world space. This setting allows you to\n    map each axis to another axis. */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Swap head axis according to your rig export. By default,\n   Dynamixyz Grabber sends X.Y.Z coordinates in world space. This setting allows you to\n   map each axis to another axis." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_HeadAxisSwapping = { "HeadAxisSwapping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, HeadAxisSwapping), Z_Construct_UEnum_DxyzLiveLinkPlugin_DxyzAxis, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_HeadAxisSwapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_HeadAxisSwapping_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_HeadAxisSwapping_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_UseAverageEyeRotation_MetaData[] = {
		{ "Category", "Dxyz stream configuration" },
		{ "Comment", "/** Apply same rotation value for both eyes */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Apply same rotation value for both eyes" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_UseAverageEyeRotation_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->UseAverageEyeRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_UseAverageEyeRotation = { "UseAverageEyeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_UseAverageEyeRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_UseAverageEyeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_UseAverageEyeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfMorphTargets_MetaData[] = {
		{ "Category", "MorphTargets" },
		{ "Comment", "/** Morph targets contained in the ESC file */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Morph targets contained in the ESC file" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfMorphTargets = { "ListOfMorphTargets", nullptr, (EPropertyFlags)0x0010000002000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, ListOfMorphTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfMorphTargets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfMorphTargets_Inner = { "ListOfMorphTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDxyzCurveModify, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ResetAllMorphTargets_MetaData[] = {
		{ "Category", "MorphTargets" },
		{ "Comment", "/** Reset all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Reset all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ResetAllMorphTargets_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->ResetAllMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ResetAllMorphTargets = { "ResetAllMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ResetAllMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ResetAllMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ResetAllMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EaseAllMorphTargets_MetaData[] = {
		{ "Category", "MorphTargets" },
		{ "Comment", "/** Ease all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Ease all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EaseAllMorphTargets_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->EaseAllMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EaseAllMorphTargets = { "EaseAllMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EaseAllMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EaseAllMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EaseAllMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BoostAllMorphTargets_MetaData[] = {
		{ "Category", "MorphTargets" },
		{ "Comment", "/** Boost all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Boost all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BoostAllMorphTargets_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->BoostAllMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BoostAllMorphTargets = { "BoostAllMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BoostAllMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BoostAllMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BoostAllMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllMorphTargets_MetaData[] = {
		{ "Category", "MorphTargets" },
		{ "Comment", "/** Disable all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Disable all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllMorphTargets_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->DisableAllMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllMorphTargets = { "DisableAllMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllMorphTargets_MetaData[] = {
		{ "Category", "MorphTargets" },
		{ "Comment", "/** Enable all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllMorphTargets_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->EnableAllMorphTargets = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllMorphTargets = { "EnableAllMorphTargets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllMorphTargets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllMorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllMorphTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_MeshCurveNames_MetaData[] = {
		{ "Category", "MorphTargets" },
		{ "Comment", "// Only used to send the list of curves contained in the skeletal mesh to the customization class to populate a combo box\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Only used to send the list of curves contained in the skeletal mesh to the customization class to populate a combo box" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_MeshCurveNames = { "MeshCurveNames", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, MeshCurveNames), METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_MeshCurveNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_MeshCurveNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfBones_MetaData[] = {
		{ "Category", "BoneMapping" },
		{ "Comment", "/** Bones mapping between the SkeletalMesh and the ESC file */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Bones mapping between the SkeletalMesh and the ESC file" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfBones = { "ListOfBones", nullptr, (EPropertyFlags)0x0010000002000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, ListOfBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfBones_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfBones_Inner = { "ListOfBones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDxyzBoneModify, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllRotations_MetaData[] = {
		{ "Category", "BoneMapping" },
		{ "Comment", "/** Disable all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Disable all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllRotations_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->DisableAllRotations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllRotations = { "DisableAllRotations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllRotations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllRotations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllRotations_MetaData[] = {
		{ "Category", "BoneMapping" },
		{ "Comment", "/** Enable all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllRotations_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->EnableAllRotations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllRotations = { "EnableAllRotations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllRotations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllRotations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllTranslations_MetaData[] = {
		{ "Category", "BoneMapping" },
		{ "Comment", "/** Disable all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Disable all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllTranslations_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->DisableAllTranslations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllTranslations = { "DisableAllTranslations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllTranslations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllTranslations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllTranslations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllTranslations_MetaData[] = {
		{ "Category", "BoneMapping" },
		{ "Comment", "/** Enable all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllTranslations_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->EnableAllTranslations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllTranslations = { "EnableAllTranslations", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllTranslations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllTranslations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllTranslations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllBones_MetaData[] = {
		{ "Category", "BoneMapping" },
		{ "Comment", "/** Disable all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Disable all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllBones_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->DisableAllBones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllBones = { "DisableAllBones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllBones_MetaData[] = {
		{ "Category", "BoneMapping" },
		{ "Comment", "/** Enable all the morph targets in the final pose */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Enable all the morph targets in the final pose" },
	};
#endif
	void Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllBones_SetBit(void* Obj)
	{
		((UDxyzLiveLinkRetargetAsset*)Obj)->EnableAllBones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllBones = { "EnableAllBones", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDxyzLiveLinkRetargetAsset), &Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllBones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_MeshBoneNames_MetaData[] = {
		{ "Category", "BoneMapping" },
		{ "Comment", "// Only used to send the list of bones contained in the skeletal mesh to the customization class to populate a combo box\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Only used to send the list of bones contained in the skeletal mesh to the customization class to populate a combo box" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_MeshBoneNames = { "MeshBoneNames", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, MeshBoneNames), METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_MeshBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_MeshBoneNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ESCPath_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "/** The ESC file that will be streamed by Dynamixyz Grabber software */" },
		{ "DisplayName", "ESC file path" },
		{ "FilePathFilter", "esc" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "The ESC file that will be streamed by Dynamixyz Grabber software" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ESCPath = { "ESCPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, ESCPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ESCPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ESCPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowedClasses", "SkeletalMesh" },
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "/** The SkeletalMesh associated with this mapping */" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "The SkeletalMesh associated with this mapping" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_WarningCurvesText_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "// Used to write the yellow warning, this field will be hidden by customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Used to write the yellow warning, this field will be hidden by customization" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_WarningCurvesText = { "WarningCurvesText", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, WarningCurvesText), METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_WarningCurvesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_WarningCurvesText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_WarningBonesText_MetaData[] = {
		{ "Category", "Dxyz mapping settings" },
		{ "Comment", "// Used to write the yellow warning, this field will be hidden by customization\n" },
		{ "ModuleRelativePath", "Private/DxyzLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Used to write the yellow warning, this field will be hidden by customization" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_WarningBonesText = { "WarningBonesText", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDxyzLiveLinkRetargetAsset, WarningBonesText), METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_WarningBonesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_WarningBonesText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_LogFPS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_RotationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_TranslationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BonesAxisSwapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BonesAxisSwapping_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_HeadAxisSwapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_HeadAxisSwapping_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_UseAverageEyeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfMorphTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ResetAllMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EaseAllMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_BoostAllMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllMorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_MeshCurveNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ListOfBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllTranslations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllTranslations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_DisableAllBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_EnableAllBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_MeshBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_ESCPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_WarningCurvesText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::NewProp_WarningBonesText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDxyzLiveLinkRetargetAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::ClassParams = {
		&UDxyzLiveLinkRetargetAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDxyzLiveLinkRetargetAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDxyzLiveLinkRetargetAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDxyzLiveLinkRetargetAsset, 1724622997);
	template<> DXYZLIVELINKPLUGIN_API UClass* StaticClass<UDxyzLiveLinkRetargetAsset>()
	{
		return UDxyzLiveLinkRetargetAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDxyzLiveLinkRetargetAsset(Z_Construct_UClass_UDxyzLiveLinkRetargetAsset, &UDxyzLiveLinkRetargetAsset::StaticClass, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("UDxyzLiveLinkRetargetAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDxyzLiveLinkRetargetAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
