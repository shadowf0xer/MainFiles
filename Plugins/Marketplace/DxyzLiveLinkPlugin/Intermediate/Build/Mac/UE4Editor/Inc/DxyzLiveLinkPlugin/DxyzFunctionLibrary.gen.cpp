// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DxyzLiveLinkPlugin/Private/DxyzFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDxyzFunctionLibrary() {}
// Cross Module References
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectData();
	UPackage* Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectCalib();
	DXYZLIVELINKPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAxisClamp();
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzFunctionLibrary_NoRegister();
	DXYZLIVELINKPLUGIN_API UClass* Z_Construct_UClass_UDxyzFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FSubjectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSubjectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubjectData, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("SubjectData"), sizeof(FSubjectData), Get_Z_Construct_UScriptStruct_FSubjectData_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FSubjectData>()
{
	return FSubjectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubjectData(FSubjectData::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("SubjectData"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFSubjectData
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFSubjectData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubjectData")),new UScriptStruct::TCppStructOps<FSubjectData>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFSubjectData;
	struct Z_Construct_UScriptStruct_FSubjectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetingOn_MetaData[];
#endif
		static void NewProp_RetargetingOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RetargetingOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyesOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyesOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EyesCalib_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyesCalib;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadCalib_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadCalib;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubjectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubjectData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_RetargetingOn_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Enable or disable the retargeting */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Enable or disable the retargeting" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_RetargetingOn_SetBit(void* Obj)
	{
		((FSubjectData*)Obj)->RetargetingOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_RetargetingOn = { "RetargetingOn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubjectData), &Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_RetargetingOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_RetargetingOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_RetargetingOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_EyesOffset_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** The pupils rotation offset */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "The pupils rotation offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_EyesOffset = { "EyesOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectData, EyesOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_EyesOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_EyesOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_EyesCalib_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** The calibration structure for the eyes calibration */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "The calibration structure for the eyes calibration" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_EyesCalib = { "EyesCalib", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectData, EyesCalib), Z_Construct_UScriptStruct_FSubjectCalib, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_EyesCalib_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_EyesCalib_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_HeadOffset_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** The head rotation offset */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "The head rotation offset" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_HeadOffset = { "HeadOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectData, HeadOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_HeadOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_HeadOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_HeadCalib_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** The calibration structure for the head calibration */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "The calibration structure for the head calibration" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_HeadCalib = { "HeadCalib", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectData, HeadCalib), Z_Construct_UScriptStruct_FSubjectCalib, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_HeadCalib_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_HeadCalib_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_RetargetingOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_EyesOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_EyesCalib,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_HeadOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectData_Statics::NewProp_HeadCalib,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubjectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"SubjectData",
		sizeof(FSubjectData),
		alignof(FSubjectData),
		Z_Construct_UScriptStruct_FSubjectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubjectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubjectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubjectData"), sizeof(FSubjectData), Get_Z_Construct_UScriptStruct_FSubjectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubjectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubjectData_Hash() { return 2731769460U; }
class UScriptStruct* FSubjectCalib::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSubjectCalib_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubjectCalib, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("SubjectCalib"), sizeof(FSubjectCalib), Get_Z_Construct_UScriptStruct_FSubjectCalib_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FSubjectCalib>()
{
	return FSubjectCalib::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubjectCalib(FSubjectCalib::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("SubjectCalib"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFSubjectCalib
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFSubjectCalib()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubjectCalib")),new UScriptStruct::TCppStructOps<FSubjectCalib>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFSubjectCalib;
	struct Z_Construct_UScriptStruct_FSubjectCalib_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_YawPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PitchPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RollPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_YawClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollClamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RollClamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawLock_MetaData[];
#endif
		static void NewProp_YawLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_YawLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchLock_MetaData[];
#endif
		static void NewProp_PitchLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PitchLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollLock_MetaData[];
#endif
		static void NewProp_RollLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RollLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawOffset_MetaData[];
#endif
		static void NewProp_YawOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_YawOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchOffset_MetaData[];
#endif
		static void NewProp_PitchOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PitchOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollOffset_MetaData[];
#endif
		static void NewProp_RollOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RollOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubjectCalib>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawPercent_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Ease or boost the rotation around the Yaw axis */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Ease or boost the rotation around the Yaw axis" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawPercent = { "YawPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectCalib, YawPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchPercent_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Ease or boost the rotation around the Pitch axis */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Ease or boost the rotation around the Pitch axis" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchPercent = { "PitchPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectCalib, PitchPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollPercent_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "ClampMax", "200" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Ease or boost the rotation around the Roll axis */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Ease or boost the rotation around the Roll axis" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollPercent = { "RollPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectCalib, RollPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawClamp_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Clamp structure for the Yaw axis */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Clamp structure for the Yaw axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawClamp = { "YawClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectCalib, YawClamp), Z_Construct_UScriptStruct_FAxisClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchClamp_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Clamp structure for the Pitch axis */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Clamp structure for the Pitch axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchClamp = { "PitchClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectCalib, PitchClamp), Z_Construct_UScriptStruct_FAxisClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollClamp_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Clamp structure for the Roll axis */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Clamp structure for the Roll axis" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollClamp = { "RollClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubjectCalib, RollClamp), Z_Construct_UScriptStruct_FAxisClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawLock_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Lock the rotation around the Yaw axis */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Lock the rotation around the Yaw axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawLock_SetBit(void* Obj)
	{
		((FSubjectCalib*)Obj)->YawLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawLock = { "YawLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubjectCalib), &Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawLock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchLock_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Lock the rotation around the Pitch axis */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Lock the rotation around the Pitch axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchLock_SetBit(void* Obj)
	{
		((FSubjectCalib*)Obj)->PitchLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchLock = { "PitchLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubjectCalib), &Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchLock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollLock_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Lock the rotation around the Roll axis */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Lock the rotation around the Roll axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollLock_SetBit(void* Obj)
	{
		((FSubjectCalib*)Obj)->RollLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollLock = { "RollLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubjectCalib), &Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollLock_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawOffset_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Take the Yaw axis into account in the offset computation */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Take the Yaw axis into account in the offset computation" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawOffset_SetBit(void* Obj)
	{
		((FSubjectCalib*)Obj)->YawOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawOffset = { "YawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubjectCalib), &Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchOffset_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Take the Pitch axis into account in the offset computation */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Take the Pitch axis into account in the offset computation" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchOffset_SetBit(void* Obj)
	{
		((FSubjectCalib*)Obj)->PitchOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchOffset = { "PitchOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubjectCalib), &Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollOffset_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Take the Roll axis into account in the offset computation */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Take the Roll axis into account in the offset computation" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollOffset_SetBit(void* Obj)
	{
		((FSubjectCalib*)Obj)->RollOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollOffset = { "RollOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSubjectCalib), &Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollOffset_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubjectCalib_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_YawOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_PitchOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubjectCalib_Statics::NewProp_RollOffset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubjectCalib_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"SubjectCalib",
		sizeof(FSubjectCalib),
		alignof(FSubjectCalib),
		Z_Construct_UScriptStruct_FSubjectCalib_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubjectCalib_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubjectCalib_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubjectCalib()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubjectCalib_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubjectCalib"), sizeof(FSubjectCalib), Get_Z_Construct_UScriptStruct_FSubjectCalib_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubjectCalib_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubjectCalib_Hash() { return 732162365U; }
class UScriptStruct* FAxisClamp::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DXYZLIVELINKPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FAxisClamp_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxisClamp, Z_Construct_UPackage__Script_DxyzLiveLinkPlugin(), TEXT("AxisClamp"), sizeof(FAxisClamp), Get_Z_Construct_UScriptStruct_FAxisClamp_Hash());
	}
	return Singleton;
}
template<> DXYZLIVELINKPLUGIN_API UScriptStruct* StaticStruct<FAxisClamp>()
{
	return FAxisClamp::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAxisClamp(FAxisClamp::StaticStruct, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("AxisClamp"), false, nullptr, nullptr);
static struct FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFAxisClamp
{
	FScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFAxisClamp()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AxisClamp")),new UScriptStruct::TCppStructOps<FAxisClamp>);
	}
} ScriptStruct_DxyzLiveLinkPlugin_StaticRegisterNativesFAxisClamp;
	struct Z_Construct_UScriptStruct_FAxisClamp_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisClamp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxisClamp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxisClamp>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_MaxClamp_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Maximum value */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Maximum value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_MaxClamp = { "MaxClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAxisClamp, MaxClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_MaxClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_MaxClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_MinClamp_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Minimum value */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Minimum value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_MinClamp = { "MinClamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAxisClamp, MinClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_MinClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_MinClamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_Clamp_MetaData[] = {
		{ "Category", "Subject Calibration" },
		{ "Comment", "/** Enable clamping */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Enable clamping" },
	};
#endif
	void Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_Clamp_SetBit(void* Obj)
	{
		((FAxisClamp*)Obj)->Clamp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_Clamp = { "Clamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAxisClamp), &Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_Clamp_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_Clamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_Clamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAxisClamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_MaxClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_MinClamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAxisClamp_Statics::NewProp_Clamp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxisClamp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
		nullptr,
		&NewStructOps,
		"AxisClamp",
		sizeof(FAxisClamp),
		alignof(FAxisClamp),
		Z_Construct_UScriptStruct_FAxisClamp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisClamp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAxisClamp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxisClamp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAxisClamp()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAxisClamp_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DxyzLiveLinkPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AxisClamp"), sizeof(FAxisClamp), Get_Z_Construct_UScriptStruct_FAxisClamp_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAxisClamp_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAxisClamp_Hash() { return 2646368120U; }
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execSendSubjectDataToLiveLink)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::SendSubjectDataToLiveLink(Z_Param_SubjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execApplySubjectCalibrations)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_STRUCT(FSubjectCalib,Z_Param_HeadCalib);
		P_GET_STRUCT(FSubjectCalib,Z_Param_EyesCalib);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::ApplySubjectCalibrations(Z_Param_SubjectName,Z_Param_HeadCalib,Z_Param_EyesCalib);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execApplySubjectOffsets)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_HeadOffset);
		P_GET_PROPERTY(FStrProperty,Z_Param_EyesOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::ApplySubjectOffsets(Z_Param_SubjectName,Z_Param_HeadOffset,Z_Param_EyesOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execApplySubjectEyesOffset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_EyesOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::ApplySubjectEyesOffset(Z_Param_SubjectName,Z_Param_EyesOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execApplySubjectHeadOffset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_PROPERTY(FStrProperty,Z_Param_HeadOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::ApplySubjectHeadOffset(Z_Param_SubjectName,Z_Param_HeadOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execGetSubjectRetargetingStatus)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_UBOOL_REF(Z_Param_Out_RetargetingOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::GetSubjectRetargetingStatus(Z_Param_SubjectName,Z_Param_Out_RetargetingOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execSetRetargetingStatusForSubject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_UBOOL(Z_Param_RetargetingOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::SetRetargetingStatusForSubject(Z_Param_SubjectName,Z_Param_RetargetingOn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execGetSubjectCalibrations)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_STRUCT_REF(FSubjectCalib,Z_Param_Out_HeadCalibration);
		P_GET_STRUCT_REF(FSubjectCalib,Z_Param_Out_EyesCalibration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::GetSubjectCalibrations(Z_Param_SubjectName,Z_Param_Out_HeadCalibration,Z_Param_Out_EyesCalibration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execGetSubjectOffsets)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_HeadOffset);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_EyesOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::GetSubjectOffsets(Z_Param_SubjectName,Z_Param_Out_HeadOffset,Z_Param_Out_EyesOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execSetEyesCalibrationForSubject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_STRUCT(FSubjectCalib,Z_Param_EyesCalibration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::SetEyesCalibrationForSubject(Z_Param_SubjectName,Z_Param_EyesCalibration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execSetHeadCalibrationForSubject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_STRUCT(FSubjectCalib,Z_Param_HeadCalibration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::SetHeadCalibrationForSubject(Z_Param_SubjectName,Z_Param_HeadCalibration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execComputeEyesOffset)
	{
		P_GET_STRUCT(FRotator,Z_Param_Offset);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_STRUCT(FSubjectCalib,Z_Param_EyesCalibration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDxyzFunctionLibrary::ComputeEyesOffset(Z_Param_Offset,Z_Param_SubjectName,Z_Param_EyesCalibration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execComputeHeadOffset)
	{
		P_GET_STRUCT(FRotator,Z_Param_Offset);
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_GET_STRUCT(FSubjectCalib,Z_Param_HeadCalibration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDxyzFunctionLibrary::ComputeHeadOffset(Z_Param_Offset,Z_Param_SubjectName,Z_Param_HeadCalibration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execCreateSubjectEntry)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::CreateSubjectEntry(Z_Param_SubjectName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execSaveConfigFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::SaveConfigFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execSaveWidgetState)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_UBOOL(Z_Param_Maximized);
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_GET_TMAP(FString,FString,Z_Param_OtherParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::SaveWidgetState(Z_Param_Class,Z_Param_Maximized,Z_Param_Position,Z_Param_OtherParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execLoadWidgetState)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_UBOOL_REF(Z_Param_Out_Maximized);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Position);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OtherParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::LoadWidgetState(Z_Param_Class,Z_Param_Out_Maximized,Z_Param_Out_Position,Z_Param_Out_OtherParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execLoadConfigFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::LoadConfigFile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDxyzFunctionLibrary::execIsDxyzSubject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SubjectName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDxyzFunctionLibrary::IsDxyzSubject(Z_Param_SubjectName);
		P_NATIVE_END;
	}
	void UDxyzFunctionLibrary::StaticRegisterNativesUDxyzFunctionLibrary()
	{
		UClass* Class = UDxyzFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySubjectCalibrations", &UDxyzFunctionLibrary::execApplySubjectCalibrations },
			{ "ApplySubjectEyesOffset", &UDxyzFunctionLibrary::execApplySubjectEyesOffset },
			{ "ApplySubjectHeadOffset", &UDxyzFunctionLibrary::execApplySubjectHeadOffset },
			{ "ApplySubjectOffsets", &UDxyzFunctionLibrary::execApplySubjectOffsets },
			{ "ComputeEyesOffset", &UDxyzFunctionLibrary::execComputeEyesOffset },
			{ "ComputeHeadOffset", &UDxyzFunctionLibrary::execComputeHeadOffset },
			{ "CreateSubjectEntry", &UDxyzFunctionLibrary::execCreateSubjectEntry },
			{ "GetSubjectCalibrations", &UDxyzFunctionLibrary::execGetSubjectCalibrations },
			{ "GetSubjectOffsets", &UDxyzFunctionLibrary::execGetSubjectOffsets },
			{ "GetSubjectRetargetingStatus", &UDxyzFunctionLibrary::execGetSubjectRetargetingStatus },
			{ "IsDxyzSubject", &UDxyzFunctionLibrary::execIsDxyzSubject },
			{ "LoadConfigFile", &UDxyzFunctionLibrary::execLoadConfigFile },
			{ "LoadWidgetState", &UDxyzFunctionLibrary::execLoadWidgetState },
			{ "SaveConfigFile", &UDxyzFunctionLibrary::execSaveConfigFile },
			{ "SaveWidgetState", &UDxyzFunctionLibrary::execSaveWidgetState },
			{ "SendSubjectDataToLiveLink", &UDxyzFunctionLibrary::execSendSubjectDataToLiveLink },
			{ "SetEyesCalibrationForSubject", &UDxyzFunctionLibrary::execSetEyesCalibrationForSubject },
			{ "SetHeadCalibrationForSubject", &UDxyzFunctionLibrary::execSetHeadCalibrationForSubject },
			{ "SetRetargetingStatusForSubject", &UDxyzFunctionLibrary::execSetRetargetingStatusForSubject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics
	{
		struct DxyzFunctionLibrary_eventApplySubjectCalibrations_Parms
		{
			FString SubjectName;
			FSubjectCalib HeadCalib;
			FSubjectCalib EyesCalib;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyesCalib;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadCalib;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventApplySubjectCalibrations_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventApplySubjectCalibrations_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::NewProp_EyesCalib = { "EyesCalib", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventApplySubjectCalibrations_Parms, EyesCalib), Z_Construct_UScriptStruct_FSubjectCalib, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::NewProp_HeadCalib = { "HeadCalib", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventApplySubjectCalibrations_Parms, HeadCalib), Z_Construct_UScriptStruct_FSubjectCalib, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventApplySubjectCalibrations_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::NewProp_EyesCalib,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::NewProp_HeadCalib,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Apply axis customizations for the subject */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Apply axis customizations for the subject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "ApplySubjectCalibrations", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventApplySubjectCalibrations_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics
	{
		struct DxyzFunctionLibrary_eventApplySubjectEyesOffset_Parms
		{
			FString SubjectName;
			FString EyesOffset;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EyesOffset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventApplySubjectEyesOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventApplySubjectEyesOffset_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::NewProp_EyesOffset = { "EyesOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventApplySubjectEyesOffset_Parms, EyesOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventApplySubjectEyesOffset_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::NewProp_EyesOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Apply a pupils rotation offset for the subject */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Apply a pupils rotation offset for the subject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "ApplySubjectEyesOffset", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventApplySubjectEyesOffset_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics
	{
		struct DxyzFunctionLibrary_eventApplySubjectHeadOffset_Parms
		{
			FString SubjectName;
			FString HeadOffset;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeadOffset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventApplySubjectHeadOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventApplySubjectHeadOffset_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::NewProp_HeadOffset = { "HeadOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventApplySubjectHeadOffset_Parms, HeadOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventApplySubjectHeadOffset_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::NewProp_HeadOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Apply a head rotation offset for the subject */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Apply a head rotation offset for the subject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "ApplySubjectHeadOffset", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventApplySubjectHeadOffset_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics
	{
		struct DxyzFunctionLibrary_eventApplySubjectOffsets_Parms
		{
			FString SubjectName;
			FString HeadOffset;
			FString EyesOffset;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EyesOffset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeadOffset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventApplySubjectOffsets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventApplySubjectOffsets_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::NewProp_EyesOffset = { "EyesOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventApplySubjectOffsets_Parms, EyesOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::NewProp_HeadOffset = { "HeadOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventApplySubjectOffsets_Parms, HeadOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventApplySubjectOffsets_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::NewProp_EyesOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::NewProp_HeadOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Apply head and eyes rotation offsets for the subject */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Apply head and eyes rotation offsets for the subject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "ApplySubjectOffsets", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventApplySubjectOffsets_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics
	{
		struct DxyzFunctionLibrary_eventComputeEyesOffset_Parms
		{
			FRotator Offset;
			FString SubjectName;
			FSubjectCalib EyesCalibration;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyesCalibration;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventComputeEyesOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::NewProp_EyesCalibration = { "EyesCalibration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventComputeEyesOffset_Parms, EyesCalibration), Z_Construct_UScriptStruct_FSubjectCalib, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventComputeEyesOffset_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventComputeEyesOffset_Parms, Offset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::NewProp_EyesCalibration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::NewProp_SubjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Compute the eyes rotation offset regarding the calibration settings */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Compute the eyes rotation offset regarding the calibration settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "ComputeEyesOffset", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventComputeEyesOffset_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics
	{
		struct DxyzFunctionLibrary_eventComputeHeadOffset_Parms
		{
			FRotator Offset;
			FString SubjectName;
			FSubjectCalib HeadCalibration;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadCalibration;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventComputeHeadOffset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::NewProp_HeadCalibration = { "HeadCalibration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventComputeHeadOffset_Parms, HeadCalibration), Z_Construct_UScriptStruct_FSubjectCalib, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventComputeHeadOffset_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventComputeHeadOffset_Parms, Offset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::NewProp_HeadCalibration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::NewProp_SubjectName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::NewProp_Offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Compute the head rotation offset regarding the calibration settings */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Compute the head rotation offset regarding the calibration settings" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "ComputeHeadOffset", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventComputeHeadOffset_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics
	{
		struct DxyzFunctionLibrary_eventCreateSubjectEntry_Parms
		{
			FString SubjectName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventCreateSubjectEntry_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventCreateSubjectEntry_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventCreateSubjectEntry_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Add a new subject to the map */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Add a new subject to the map" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "CreateSubjectEntry", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventCreateSubjectEntry_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics
	{
		struct DxyzFunctionLibrary_eventGetSubjectCalibrations_Parms
		{
			FString SubjectName;
			FSubjectCalib HeadCalibration;
			FSubjectCalib EyesCalibration;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyesCalibration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadCalibration;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventGetSubjectCalibrations_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventGetSubjectCalibrations_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::NewProp_EyesCalibration = { "EyesCalibration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventGetSubjectCalibrations_Parms, EyesCalibration), Z_Construct_UScriptStruct_FSubjectCalib, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::NewProp_HeadCalibration = { "HeadCalibration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventGetSubjectCalibrations_Parms, HeadCalibration), Z_Construct_UScriptStruct_FSubjectCalib, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventGetSubjectCalibrations_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::NewProp_EyesCalibration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::NewProp_HeadCalibration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Read the calibration settings for the subject from the file Calib.dxyz */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Read the calibration settings for the subject from the file Calib.dxyz" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "GetSubjectCalibrations", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventGetSubjectCalibrations_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics
	{
		struct DxyzFunctionLibrary_eventGetSubjectOffsets_Parms
		{
			FString SubjectName;
			FString HeadOffset;
			FString EyesOffset;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EyesOffset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeadOffset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventGetSubjectOffsets_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventGetSubjectOffsets_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::NewProp_EyesOffset = { "EyesOffset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventGetSubjectOffsets_Parms, EyesOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::NewProp_HeadOffset = { "HeadOffset", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventGetSubjectOffsets_Parms, HeadOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventGetSubjectOffsets_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::NewProp_EyesOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::NewProp_HeadOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Read the head rotation offset and the eyes rotation offset for the subject from the file Calib.dxyz */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Read the head rotation offset and the eyes rotation offset for the subject from the file Calib.dxyz" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "GetSubjectOffsets", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventGetSubjectOffsets_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics
	{
		struct DxyzFunctionLibrary_eventGetSubjectRetargetingStatus_Parms
		{
			FString SubjectName;
			bool RetargetingOn;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_RetargetingOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RetargetingOn;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventGetSubjectRetargetingStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventGetSubjectRetargetingStatus_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::NewProp_RetargetingOn_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventGetSubjectRetargetingStatus_Parms*)Obj)->RetargetingOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::NewProp_RetargetingOn = { "RetargetingOn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventGetSubjectRetargetingStatus_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::NewProp_RetargetingOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventGetSubjectRetargetingStatus_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::NewProp_RetargetingOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Read the retargeting status for the subject from the file Calib.dxyz */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Read the retargeting status for the subject from the file Calib.dxyz" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "GetSubjectRetargetingStatus", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventGetSubjectRetargetingStatus_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics
	{
		struct DxyzFunctionLibrary_eventIsDxyzSubject_Parms
		{
			FString SubjectName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventIsDxyzSubject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventIsDxyzSubject_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventIsDxyzSubject_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Is this Live Link subject associated to a Dynamixyz source ? */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Is this Live Link subject associated to a Dynamixyz source ?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "IsDxyzSubject", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventIsDxyzSubject_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics
	{
		struct DxyzFunctionLibrary_eventLoadConfigFile_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventLoadConfigFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventLoadConfigFile_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Load the calibrations from the config file (Calib.dxyz) */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Load the calibrations from the config file (Calib.dxyz)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "LoadConfigFile", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventLoadConfigFile_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics
	{
		struct DxyzFunctionLibrary_eventLoadWidgetState_Parms
		{
			UClass* Class;
			bool Maximized;
			FVector2D Position;
			TMap<FString,FString> OtherParams;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OtherParams;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OtherParams_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OtherParams_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Maximized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Maximized;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventLoadWidgetState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventLoadWidgetState_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_OtherParams = { "OtherParams", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventLoadWidgetState_Parms, OtherParams), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_OtherParams_Key_KeyProp = { "OtherParams_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_OtherParams_ValueProp = { "OtherParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventLoadWidgetState_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_Maximized_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventLoadWidgetState_Parms*)Obj)->Maximized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_Maximized = { "Maximized", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventLoadWidgetState_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_Maximized_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventLoadWidgetState_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_OtherParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_OtherParams_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_OtherParams_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_Maximized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Load the previous widget state from the config file Widgets.dxyz */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Load the previous widget state from the config file Widgets.dxyz" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "LoadWidgetState", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventLoadWidgetState_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics
	{
		struct DxyzFunctionLibrary_eventSaveConfigFile_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventSaveConfigFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventSaveConfigFile_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Save the current calibration in the config file (Calib.dxyz) */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Save the current calibration in the config file (Calib.dxyz)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "SaveConfigFile", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventSaveConfigFile_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics
	{
		struct DxyzFunctionLibrary_eventSaveWidgetState_Parms
		{
			UClass* Class;
			bool Maximized;
			FVector2D Position;
			TMap<FString,FString> OtherParams;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_OtherParams;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OtherParams_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OtherParams_ValueProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_Maximized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Maximized;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventSaveWidgetState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventSaveWidgetState_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_OtherParams = { "OtherParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventSaveWidgetState_Parms, OtherParams), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_OtherParams_Key_KeyProp = { "OtherParams_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_OtherParams_ValueProp = { "OtherParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventSaveWidgetState_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_Maximized_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventSaveWidgetState_Parms*)Obj)->Maximized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_Maximized = { "Maximized", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventSaveWidgetState_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_Maximized_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventSaveWidgetState_Parms, Class), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_OtherParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_OtherParams_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_OtherParams_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_Maximized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::NewProp_Class,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Save the current widget state in the config file Widgets.dxyz */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Save the current widget state in the config file Widgets.dxyz" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "SaveWidgetState", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventSaveWidgetState_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics
	{
		struct DxyzFunctionLibrary_eventSendSubjectDataToLiveLink_Parms
		{
			FString SubjectName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventSendSubjectDataToLiveLink_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventSendSubjectDataToLiveLink_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventSendSubjectDataToLiveLink_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Send all subject runtime information to live link */" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Send all subject runtime information to live link" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "SendSubjectDataToLiveLink", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventSendSubjectDataToLiveLink_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics
	{
		struct DxyzFunctionLibrary_eventSetEyesCalibrationForSubject_Parms
		{
			FString SubjectName;
			FSubjectCalib EyesCalibration;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EyesCalibration;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventSetEyesCalibrationForSubject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventSetEyesCalibrationForSubject_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::NewProp_EyesCalibration = { "EyesCalibration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventSetEyesCalibrationForSubject_Parms, EyesCalibration), Z_Construct_UScriptStruct_FSubjectCalib, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventSetEyesCalibrationForSubject_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::NewProp_EyesCalibration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Set the eyes calibration for the subject SubjectName*/" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Set the eyes calibration for the subject SubjectName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "SetEyesCalibrationForSubject", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventSetEyesCalibrationForSubject_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics
	{
		struct DxyzFunctionLibrary_eventSetHeadCalibrationForSubject_Parms
		{
			FString SubjectName;
			FSubjectCalib HeadCalibration;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadCalibration;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventSetHeadCalibrationForSubject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventSetHeadCalibrationForSubject_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::NewProp_HeadCalibration = { "HeadCalibration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventSetHeadCalibrationForSubject_Parms, HeadCalibration), Z_Construct_UScriptStruct_FSubjectCalib, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventSetHeadCalibrationForSubject_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::NewProp_HeadCalibration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Set the head calibration for the subject SubjectName*/" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Set the head calibration for the subject SubjectName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "SetHeadCalibrationForSubject", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventSetHeadCalibrationForSubject_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics
	{
		struct DxyzFunctionLibrary_eventSetRetargetingStatusForSubject_Parms
		{
			FString SubjectName;
			bool RetargetingOn;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_RetargetingOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RetargetingOn;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SubjectName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventSetRetargetingStatusForSubject_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventSetRetargetingStatusForSubject_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::NewProp_RetargetingOn_SetBit(void* Obj)
	{
		((DxyzFunctionLibrary_eventSetRetargetingStatusForSubject_Parms*)Obj)->RetargetingOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::NewProp_RetargetingOn = { "RetargetingOn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DxyzFunctionLibrary_eventSetRetargetingStatusForSubject_Parms), &Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::NewProp_RetargetingOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DxyzFunctionLibrary_eventSetRetargetingStatusForSubject_Parms, SubjectName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::NewProp_RetargetingOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::NewProp_SubjectName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dxyz functions" },
		{ "Comment", "/** Apply the neutral values for the subject SubjectName*/" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
		{ "ToolTip", "Apply the neutral values for the subject SubjectName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDxyzFunctionLibrary, nullptr, "SetRetargetingStatusForSubject", nullptr, nullptr, sizeof(DxyzFunctionLibrary_eventSetRetargetingStatusForSubject_Parms), Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDxyzFunctionLibrary_NoRegister()
	{
		return UDxyzFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDxyzFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDxyzFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DxyzLiveLinkPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDxyzFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectCalibrations, "ApplySubjectCalibrations" }, // 495636458
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectEyesOffset, "ApplySubjectEyesOffset" }, // 848236149
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectHeadOffset, "ApplySubjectHeadOffset" }, // 146270053
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_ApplySubjectOffsets, "ApplySubjectOffsets" }, // 3404318700
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeEyesOffset, "ComputeEyesOffset" }, // 956817861
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_ComputeHeadOffset, "ComputeHeadOffset" }, // 1309239610
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_CreateSubjectEntry, "CreateSubjectEntry" }, // 2742133483
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectCalibrations, "GetSubjectCalibrations" }, // 1431489486
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectOffsets, "GetSubjectOffsets" }, // 3014371056
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_GetSubjectRetargetingStatus, "GetSubjectRetargetingStatus" }, // 2765514029
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_IsDxyzSubject, "IsDxyzSubject" }, // 2923402425
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_LoadConfigFile, "LoadConfigFile" }, // 660791138
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_LoadWidgetState, "LoadWidgetState" }, // 960616656
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_SaveConfigFile, "SaveConfigFile" }, // 4009900570
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_SaveWidgetState, "SaveWidgetState" }, // 480555372
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_SendSubjectDataToLiveLink, "SendSubjectDataToLiveLink" }, // 3373307373
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_SetEyesCalibrationForSubject, "SetEyesCalibrationForSubject" }, // 2341517200
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_SetHeadCalibrationForSubject, "SetHeadCalibrationForSubject" }, // 2223279752
		{ &Z_Construct_UFunction_UDxyzFunctionLibrary_SetRetargetingStatusForSubject, "SetRetargetingStatusForSubject" }, // 2645705252
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDxyzFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DxyzFunctionLibrary.h" },
		{ "ModuleRelativePath", "Private/DxyzFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDxyzFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDxyzFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDxyzFunctionLibrary_Statics::ClassParams = {
		&UDxyzFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDxyzFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDxyzFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDxyzFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDxyzFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDxyzFunctionLibrary, 3087840243);
	template<> DXYZLIVELINKPLUGIN_API UClass* StaticClass<UDxyzFunctionLibrary>()
	{
		return UDxyzFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDxyzFunctionLibrary(Z_Construct_UClass_UDxyzFunctionLibrary, &UDxyzFunctionLibrary::StaticClass, TEXT("/Script/DxyzLiveLinkPlugin"), TEXT("UDxyzFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDxyzFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
