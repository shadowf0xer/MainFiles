// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SCUE4/Public/SCUE4.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSCUE4() {}
// Cross Module References
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeTransform();
	UPackage* Z_Construct_UPackage__Script_SCUE4();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeRotator();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeVector3D();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeColor();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeVector4D();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeVector2D();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeText();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeString();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeName();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeFloat();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeInt();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeByte();
	SCUE4_API UScriptStruct* Z_Construct_UScriptStruct_FSafeBool();
	SCUE4_API UClass* Z_Construct_UClass_USCUE4Settings_NoRegister();
	SCUE4_API UClass* Z_Construct_UClass_USCUE4Settings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SCUE4_API UClass* Z_Construct_UClass_USafeGameInstance_NoRegister();
	SCUE4_API UClass* Z_Construct_UClass_USafeGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
// End Cross Module References
class UScriptStruct* FSafeTransform::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeTransform_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeTransform, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeTransform"), sizeof(FSafeTransform), Get_Z_Construct_UScriptStruct_FSafeTransform_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeTransform>()
{
	return FSafeTransform::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeTransform(FSafeTransform::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeTransform"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeTransform
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeTransform()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeTransform")),new UScriptStruct::TCppStructOps<FSafeTransform>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeTransform;
	struct Z_Construct_UScriptStruct_FSafeTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Transform Property;\n Use this data format to store sensible Transform values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Transform Property;\nUse this data format to store sensible Transform values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeTransform>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeTransform, Rotation), Z_Construct_UScriptStruct_FSafeRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeTransform, Position), Z_Construct_UScriptStruct_FSafeVector3D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeTransform, Scale), Z_Construct_UScriptStruct_FSafeVector3D, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeTransform_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeTransform",
		sizeof(FSafeTransform),
		alignof(FSafeTransform),
		Z_Construct_UScriptStruct_FSafeTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeTransform()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeTransform_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeTransform"), sizeof(FSafeTransform), Get_Z_Construct_UScriptStruct_FSafeTransform_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeTransform_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeTransform_Hash() { return 1085950812U; }
class UScriptStruct* FSafeRotator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeRotator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeRotator, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeRotator"), sizeof(FSafeRotator), Get_Z_Construct_UScriptStruct_FSafeRotator_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeRotator>()
{
	return FSafeRotator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeRotator(FSafeRotator::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeRotator"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeRotator
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeRotator()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeRotator")),new UScriptStruct::TCppStructOps<FSafeRotator>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeRotator;
	struct Z_Construct_UScriptStruct_FSafeRotator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeRotator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Rotator Property;\n Use this data format to store sensible Rotator values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Rotator Property;\nUse this data format to store sensible Rotator values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeRotator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeRotator>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_Flag_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeRotator, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftZ_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftZ = { "ShiftZ", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeRotator, ShiftZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftY_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftY = { "ShiftY", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeRotator, ShiftY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftX_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftX = { "ShiftX", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeRotator, ShiftX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueZ_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueZ = { "TrueZ", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeRotator, TrueZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueY_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueY = { "TrueY", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeRotator, TrueY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueX_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueX = { "TrueX", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeRotator, TrueX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeRotator, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeRotator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_ShiftX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_TrueX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeRotator_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeRotator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeRotator",
		sizeof(FSafeRotator),
		alignof(FSafeRotator),
		Z_Construct_UScriptStruct_FSafeRotator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeRotator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeRotator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeRotator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeRotator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeRotator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeRotator"), sizeof(FSafeRotator), Get_Z_Construct_UScriptStruct_FSafeRotator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeRotator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeRotator_Hash() { return 4098116143U; }
class UScriptStruct* FSafeColor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeColor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeColor, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeColor"), sizeof(FSafeColor), Get_Z_Construct_UScriptStruct_FSafeColor_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeColor>()
{
	return FSafeColor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeColor(FSafeColor::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeColor"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeColor
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeColor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeColor")),new UScriptStruct::TCppStructOps<FSafeColor>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeColor;
	struct Z_Construct_UScriptStruct_FSafeColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftG_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftR_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueG_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueG;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueR_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueR;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Color Property;\n Use this data format to store sensible Linear Color values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Color Property;\nUse this data format to store sensible Linear Color values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeColor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Flag_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftA_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftA = { "ShiftA", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, ShiftA), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftB_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftB = { "ShiftB", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, ShiftB), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftG_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftG = { "ShiftG", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, ShiftG), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftR_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftR = { "ShiftR", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, ShiftR), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueA_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueA = { "TrueA", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, TrueA), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueB_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueB = { "TrueB", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, TrueB), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueG_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueG = { "TrueG", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, TrueG), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueG_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueR_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueR = { "TrueR", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, TrueR), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueR_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeColor, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_ShiftR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueG,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_TrueR,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeColor_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeColor",
		sizeof(FSafeColor),
		alignof(FSafeColor),
		Z_Construct_UScriptStruct_FSafeColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeColor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeColor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeColor"), sizeof(FSafeColor), Get_Z_Construct_UScriptStruct_FSafeColor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeColor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeColor_Hash() { return 2937403835U; }
class UScriptStruct* FSafeVector4D::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeVector4D_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeVector4D, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeVector4D"), sizeof(FSafeVector4D), Get_Z_Construct_UScriptStruct_FSafeVector4D_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeVector4D>()
{
	return FSafeVector4D::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeVector4D(FSafeVector4D::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeVector4D"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeVector4D
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeVector4D()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeVector4D")),new UScriptStruct::TCppStructOps<FSafeVector4D>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeVector4D;
	struct Z_Construct_UScriptStruct_FSafeVector4D_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftW_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueW_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueW;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Vector4D Property;\n Use this data format to store sensible Vector4D values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Vector4D Property;\nUse this data format to store sensible Vector4D values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeVector4D>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Flag_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftW_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftW = { "ShiftW", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, ShiftW), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftZ_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftZ = { "ShiftZ", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, ShiftZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftY_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftY = { "ShiftY", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, ShiftY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftX_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftX = { "ShiftX", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, ShiftX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueW_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueW = { "TrueW", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, TrueW), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueW_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueW_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueZ_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueZ = { "TrueZ", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, TrueZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueY_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueY = { "TrueY", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, TrueY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueX_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueX = { "TrueX", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, TrueX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector4D, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeVector4D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_ShiftX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueW,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_TrueX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector4D_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeVector4D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeVector4D",
		sizeof(FSafeVector4D),
		alignof(FSafeVector4D),
		Z_Construct_UScriptStruct_FSafeVector4D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector4D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector4D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeVector4D()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeVector4D_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeVector4D"), sizeof(FSafeVector4D), Get_Z_Construct_UScriptStruct_FSafeVector4D_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeVector4D_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeVector4D_Hash() { return 141782881U; }
class UScriptStruct* FSafeVector3D::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeVector3D_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeVector3D, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeVector3D"), sizeof(FSafeVector3D), Get_Z_Construct_UScriptStruct_FSafeVector3D_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeVector3D>()
{
	return FSafeVector3D::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeVector3D(FSafeVector3D::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeVector3D"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeVector3D
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeVector3D()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeVector3D")),new UScriptStruct::TCppStructOps<FSafeVector3D>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeVector3D;
	struct Z_Construct_UScriptStruct_FSafeVector3D_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector3D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Vector3D Property;\n Use this data format to store sensible Vector3D values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Vector3D Property;\nUse this data format to store sensible Vector3D values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeVector3D>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_Flag_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector3D, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftZ_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftZ = { "ShiftZ", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector3D, ShiftZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftY_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftY = { "ShiftY", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector3D, ShiftY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftX_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftX = { "ShiftX", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector3D, ShiftX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueZ_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueZ = { "TrueZ", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector3D, TrueZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueY_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueY = { "TrueY", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector3D, TrueY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueX_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueX = { "TrueX", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector3D, TrueX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector3D, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeVector3D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_ShiftX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_TrueX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector3D_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeVector3D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeVector3D",
		sizeof(FSafeVector3D),
		alignof(FSafeVector3D),
		Z_Construct_UScriptStruct_FSafeVector3D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector3D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector3D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector3D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeVector3D()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeVector3D_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeVector3D"), sizeof(FSafeVector3D), Get_Z_Construct_UScriptStruct_FSafeVector3D_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeVector3D_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeVector3D_Hash() { return 1165742192U; }
class UScriptStruct* FSafeVector2D::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeVector2D_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeVector2D, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeVector2D"), sizeof(FSafeVector2D), Get_Z_Construct_UScriptStruct_FSafeVector2D_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeVector2D>()
{
	return FSafeVector2D::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeVector2D(FSafeVector2D::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeVector2D"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeVector2D
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeVector2D()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeVector2D")),new UScriptStruct::TCppStructOps<FSafeVector2D>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeVector2D;
	struct Z_Construct_UScriptStruct_FSafeVector2D_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShiftX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShiftX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueY_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrueX_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrueX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector2D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Vector2D Property;\n Use this data format to store sensible Vector2D values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Vector2D Property;\nUse this data format to store sensible Vector2D values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeVector2D>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_Flag_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector2D, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_ShiftY_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_ShiftY = { "ShiftY", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector2D, ShiftY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_ShiftY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_ShiftY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_ShiftX_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_ShiftX = { "ShiftX", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector2D, ShiftX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_ShiftX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_ShiftX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_TrueY_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_TrueY = { "TrueY", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector2D, TrueY), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_TrueY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_TrueY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_TrueX_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_TrueX = { "TrueX", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector2D, TrueX), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_TrueX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_TrueX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeVector2D, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeVector2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_ShiftY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_ShiftX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_TrueY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_TrueX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeVector2D_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeVector2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeVector2D",
		sizeof(FSafeVector2D),
		alignof(FSafeVector2D),
		Z_Construct_UScriptStruct_FSafeVector2D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector2D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeVector2D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeVector2D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeVector2D()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeVector2D_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeVector2D"), sizeof(FSafeVector2D), Get_Z_Construct_UScriptStruct_FSafeVector2D_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeVector2D_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeVector2D_Hash() { return 2618910377U; }
class UScriptStruct* FSafeText::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeText_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeText, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeText"), sizeof(FSafeText), Get_Z_Construct_UScriptStruct_FSafeText_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeText>()
{
	return FSafeText::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeText(FSafeText::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeText"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeText
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeText()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeText")),new UScriptStruct::TCppStructOps<FSafeText>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeText;
	struct Z_Construct_UScriptStruct_FSafeText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Shift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeText_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Text Property;\n Use this data format to store sensible Text values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Text Property;\nUse this data format to store sensible Text values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeText_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeText>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Flag_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeText, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Shift_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeText, Shift), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Shift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeText, Base), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeText, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeText_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeText_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeText",
		sizeof(FSafeText),
		alignof(FSafeText),
		Z_Construct_UScriptStruct_FSafeText_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeText_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeText_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeText_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeText()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeText_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeText"), sizeof(FSafeText), Get_Z_Construct_UScriptStruct_FSafeText_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeText_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeText_Hash() { return 3392924273U; }
class UScriptStruct* FSafeString::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeString_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeString, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeString"), sizeof(FSafeString), Get_Z_Construct_UScriptStruct_FSafeString_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeString>()
{
	return FSafeString::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeString(FSafeString::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeString"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeString
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeString()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeString")),new UScriptStruct::TCppStructOps<FSafeString>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeString;
	struct Z_Construct_UScriptStruct_FSafeString_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Shift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe String Property;\n Use this data format to store sensible String values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe String Property;\nUse this data format to store sensible String values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeString>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Flag_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeString, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Shift_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeString, Shift), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Shift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeString, Base), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeString, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeString_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeString",
		sizeof(FSafeString),
		alignof(FSafeString),
		Z_Construct_UScriptStruct_FSafeString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeString()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeString_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeString"), sizeof(FSafeString), Get_Z_Construct_UScriptStruct_FSafeString_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeString_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeString_Hash() { return 265942959U; }
class UScriptStruct* FSafeName::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeName_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeName, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeName"), sizeof(FSafeName), Get_Z_Construct_UScriptStruct_FSafeName_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeName>()
{
	return FSafeName::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeName(FSafeName::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeName"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeName
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeName()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeName")),new UScriptStruct::TCppStructOps<FSafeName>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeName;
	struct Z_Construct_UScriptStruct_FSafeName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Shift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Name Property;\n Use this data format to store sensible Name values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Name Property;\nUse this data format to store sensible Name values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeName>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Flag_MetaData[] = {
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeName, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Shift_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeName, Shift), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Shift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeName, Base), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeName, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeName_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeName",
		sizeof(FSafeName),
		alignof(FSafeName),
		Z_Construct_UScriptStruct_FSafeName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeName()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeName_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeName"), sizeof(FSafeName), Get_Z_Construct_UScriptStruct_FSafeName_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeName_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeName_Hash() { return 3058945348U; }
class UScriptStruct* FSafeFloat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeFloat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeFloat, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeFloat"), sizeof(FSafeFloat), Get_Z_Construct_UScriptStruct_FSafeFloat_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeFloat>()
{
	return FSafeFloat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeFloat(FSafeFloat::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeFloat"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeFloat
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeFloat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeFloat")),new UScriptStruct::TCppStructOps<FSafeFloat>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeFloat;
	struct Z_Construct_UScriptStruct_FSafeFloat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Shift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Float Property;\n Use this data format to store sensible Float values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Float Property;\nUse this data format to store sensible Float values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeFloat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Flag_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeFloat, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Shift_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeFloat, Shift), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Shift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeFloat, Base), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeFloat, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeFloat_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeFloat",
		sizeof(FSafeFloat),
		alignof(FSafeFloat),
		Z_Construct_UScriptStruct_FSafeFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeFloat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeFloat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeFloat"), sizeof(FSafeFloat), Get_Z_Construct_UScriptStruct_FSafeFloat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeFloat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeFloat_Hash() { return 3199237166U; }
class UScriptStruct* FSafeInt::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeInt_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeInt, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeInt"), sizeof(FSafeInt), Get_Z_Construct_UScriptStruct_FSafeInt_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeInt>()
{
	return FSafeInt::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeInt(FSafeInt::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeInt"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeInt
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeInt()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeInt")),new UScriptStruct::TCppStructOps<FSafeInt>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeInt;
	struct Z_Construct_UScriptStruct_FSafeInt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Shift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeInt_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Int32 Property;\n Use this data format to store sensible Int values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Int32 Property;\nUse this data format to store sensible Int values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeInt>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Flag_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeInt, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Shift_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeInt, Shift), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Shift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeInt, Base), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeInt, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeInt_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeInt",
		sizeof(FSafeInt),
		alignof(FSafeInt),
		Z_Construct_UScriptStruct_FSafeInt_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeInt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeInt()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeInt_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeInt"), sizeof(FSafeInt), Get_Z_Construct_UScriptStruct_FSafeInt_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeInt_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeInt_Hash() { return 1992137760U; }
class UScriptStruct* FSafeByte::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeByte_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeByte, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeByte"), sizeof(FSafeByte), Get_Z_Construct_UScriptStruct_FSafeByte_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeByte>()
{
	return FSafeByte::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeByte(FSafeByte::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeByte"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeByte
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeByte()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeByte")),new UScriptStruct::TCppStructOps<FSafeByte>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeByte;
	struct Z_Construct_UScriptStruct_FSafeByte_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Shift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeByte_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Byte Property;\n Use this data format to store sensible Byte values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Byte Property;\nUse this data format to store sensible Byte values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeByte_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeByte>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Flag_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeByte, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Shift_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeByte, Shift), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Shift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeByte, Base), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeByte, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeByte_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeByte_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeByte_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeByte",
		sizeof(FSafeByte),
		alignof(FSafeByte),
		Z_Construct_UScriptStruct_FSafeByte_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeByte_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeByte_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeByte_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeByte()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeByte_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeByte"), sizeof(FSafeByte), Get_Z_Construct_UScriptStruct_FSafeByte_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeByte_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeByte_Hash() { return 2636901693U; }
class UScriptStruct* FSafeBool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SCUE4_API uint32 Get_Z_Construct_UScriptStruct_FSafeBool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSafeBool, Z_Construct_UPackage__Script_SCUE4(), TEXT("SafeBool"), sizeof(FSafeBool), Get_Z_Construct_UScriptStruct_FSafeBool_Hash());
	}
	return Singleton;
}
template<> SCUE4_API UScriptStruct* StaticStruct<FSafeBool>()
{
	return FSafeBool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSafeBool(FSafeBool::StaticStruct, TEXT("/Script/SCUE4"), TEXT("SafeBool"), false, nullptr, nullptr);
static struct FScriptStruct_SCUE4_StaticRegisterNativesFSafeBool
{
	FScriptStruct_SCUE4_StaticRegisterNativesFSafeBool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SafeBool")),new UScriptStruct::TCppStructOps<FSafeBool>);
	}
} ScriptStruct_SCUE4_StaticRegisterNativesFSafeBool;
	struct Z_Construct_UScriptStruct_FSafeBool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Flag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Flag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Shift;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Internal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Internal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeBool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Safe Boolean Property;\n Use this data format to store sensible Bool values you need protected against memory hackers. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Safe Boolean Property;\nUse this data format to store sensible Bool values you need protected against memory hackers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSafeBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSafeBool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Flag_MetaData[] = {
		{ "Comment", "/** Flag will take the value from Address, clear it and shift them,\n\x09then copy value to previous Address and set it as default container. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Flag will take the value from Address, clear it and shift them,\n      then copy value to previous Address and set it as default container." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeBool, Flag), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Flag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Flag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Shift_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Alternative Memory Address. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Alternative Memory Address." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeBool, Shift), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Shift_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Default Memory Address. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Default Memory Address." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeBool, Base), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Internal_MetaData[] = {
		{ "Category", "Security" },
		{ "Comment", "/** Internal Key. Can be replaced each operation if wanted. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Internal Key. Can be replaced each operation if wanted." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Internal = { "Internal", nullptr, (EPropertyFlags)0x0040000001020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSafeBool, Internal), METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Internal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Internal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSafeBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Shift,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Base,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSafeBool_Statics::NewProp_Internal,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSafeBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
		nullptr,
		&NewStructOps,
		"SafeBool",
		sizeof(FSafeBool),
		alignof(FSafeBool),
		Z_Construct_UScriptStruct_FSafeBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSafeBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSafeBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSafeBool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSafeBool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SCUE4();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SafeBool"), sizeof(FSafeBool), Get_Z_Construct_UScriptStruct_FSafeBool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSafeBool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSafeBool_Hash() { return 2768973629U; }
	void USCUE4Settings::StaticRegisterNativesUSCUE4Settings()
	{
	}
	UClass* Z_Construct_UClass_USCUE4Settings_NoRegister()
	{
		return USCUE4Settings::StaticClass();
	}
	struct Z_Construct_UClass_USCUE4Settings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IllegalKeywords_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IllegalKeywords;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IllegalKeywords_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyGeneratorPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyGeneratorPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USCUE4Settings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCUE4Settings_Statics::Class_MetaDataParams[] = {
		{ "Category", "Synaptech" },
		{ "ClassGroupNames", "Synaptech" },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n/// Default SCUE4 Settings\n" },
		{ "IncludePath", "SCUE4.h" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Default SCUE4 Settings" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/** List of illegal process words that internal scanner shall look for. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "List of illegal process words that internal scanner shall look for." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords = { "IllegalKeywords", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCUE4Settings, IllegalKeywords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords_Inner = { "IllegalKeywords", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USCUE4Settings_Statics::NewProp_KeyGeneratorPath_MetaData[] = {
		{ "Category", "General Settings" },
		{ "Comment", "/** Path to the Editor's Key Generator standalone executable. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Path to the Editor's Key Generator standalone executable." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USCUE4Settings_Statics::NewProp_KeyGeneratorPath = { "KeyGeneratorPath", nullptr, (EPropertyFlags)0x0010000000004015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USCUE4Settings, KeyGeneratorPath), METADATA_PARAMS(Z_Construct_UClass_USCUE4Settings_Statics::NewProp_KeyGeneratorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USCUE4Settings_Statics::NewProp_KeyGeneratorPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USCUE4Settings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCUE4Settings_Statics::NewProp_IllegalKeywords_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USCUE4Settings_Statics::NewProp_KeyGeneratorPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USCUE4Settings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USCUE4Settings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USCUE4Settings_Statics::ClassParams = {
		&USCUE4Settings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USCUE4Settings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USCUE4Settings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USCUE4Settings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USCUE4Settings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USCUE4Settings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USCUE4Settings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USCUE4Settings, 1351953959);
	template<> SCUE4_API UClass* StaticClass<USCUE4Settings>()
	{
		return USCUE4Settings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USCUE4Settings(Z_Construct_UClass_USCUE4Settings, &USCUE4Settings::StaticClass, TEXT("/Script/SCUE4"), TEXT("USCUE4Settings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USCUE4Settings);
	DEFINE_FUNCTION(USafeGameInstance::execHideGameGuardConsole)
	{
		P_GET_UBOOL(Z_Param_Set);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideGameGuardConsole(Z_Param_Set);
		P_NATIVE_END;
	}
	void USafeGameInstance::StaticRegisterNativesUSafeGameInstance()
	{
		UClass* Class = USafeGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideGameGuardConsole", &USafeGameInstance::execHideGameGuardConsole },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics
	{
		struct SafeGameInstance_eventHideGameGuardConsole_Parms
		{
			bool Set;
		};
		static void NewProp_Set_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Set;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::NewProp_Set_SetBit(void* Obj)
	{
		((SafeGameInstance_eventHideGameGuardConsole_Parms*)Obj)->Set = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::NewProp_Set = { "Set", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SafeGameInstance_eventHideGameGuardConsole_Parms), &Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::NewProp_Set_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::NewProp_Set,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::Function_MetaDataParams[] = {
		{ "Category", "Security" },
		{ "Comment", "/* Sets visibility of Game-Guard console window.\n\x09""Console is only visible in Editor Mode, on packaged games it's always hidden. */" },
		{ "DisplayName", "{S}:: Hide Game-Guard Console" },
		{ "Keywords", "Security Guard" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Sets visibility of Game-Guard console window.\n      Console is only visible in Editor Mode, on packaged games it's always hidden." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USafeGameInstance, nullptr, "HideGameGuardConsole", nullptr, nullptr, sizeof(SafeGameInstance_eventHideGameGuardConsole_Parms), Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USafeGameInstance_NoRegister()
	{
		return USafeGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_USafeGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScannerInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ScannerInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowDebugging_MetaData[];
#endif
		static void NewProp_AllowDebugging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowDebugging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideGameGuard_MetaData[];
#endif
		static void NewProp_HideGameGuard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HideGameGuard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USafeGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SCUE4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USafeGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USafeGameInstance_HideGameGuardConsole, "HideGameGuardConsole" }, // 2629630843
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "" },
		{ "Category", "Security" },
		{ "ClassGroupNames", "Security" },
		{ "Comment", "/// Safe Game Instance; Secure-Client is a C++ Plugin designed to provide anti-cheat capability to your games.\n/// Other custom Game Instance classes, when used, should have this class as a parent for effective use.\n" },
		{ "DisplayName", "{S} Safe Game Instance" },
		{ "HideCategories", "Activation Socket Tick Thumbnail" },
		{ "IncludePath", "SCUE4.h" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ShortTooltip", "{S} Safe Game Instance Class. Check documentation for more information." },
		{ "ToolTip", "Safe Game Instance; Secure-Client is a C++ Plugin designed to provide anti-cheat capability to your games.\nOther custom Game Instance classes, when used, should have this class as a parent for effective use." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeGameInstance_Statics::NewProp_ScannerInterval_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Security" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "10" },
		{ "Comment", "/** Interval, in seconds, for Internal Process Scanner to be automatically invoked. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Interval, in seconds, for Internal Process Scanner to be automatically invoked." },
		{ "UIMax", "1000" },
		{ "UIMin", "10" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USafeGameInstance_Statics::NewProp_ScannerInterval = { "ScannerInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USafeGameInstance, ScannerInterval), METADATA_PARAMS(Z_Construct_UClass_USafeGameInstance_Statics::NewProp_ScannerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeGameInstance_Statics::NewProp_ScannerInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeGameInstance_Statics::NewProp_AllowDebugging_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Security" },
		{ "Comment", "/* To increase defenses against memory readers, uncheck this option when you're ready to\n\x09ship final standalone game build. If disabled, option won't allow Debuggers attach to the game process. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "To increase defenses against memory readers, uncheck this option when you're ready to\n      ship final standalone game build. If disabled, option won't allow Debuggers attach to the game process." },
	};
#endif
	void Z_Construct_UClass_USafeGameInstance_Statics::NewProp_AllowDebugging_SetBit(void* Obj)
	{
		((USafeGameInstance*)Obj)->AllowDebugging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeGameInstance_Statics::NewProp_AllowDebugging = { "AllowDebugging", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USafeGameInstance), &Z_Construct_UClass_USafeGameInstance_Statics::NewProp_AllowDebugging_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeGameInstance_Statics::NewProp_AllowDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeGameInstance_Statics::NewProp_AllowDebugging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeGameInstance_Statics::NewProp_HideGameGuard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Security" },
		{ "Comment", "/* Sets visibility of Game-Guard console window.\n\x09""Console is only visible in Editor Mode, on packaged games it's always hidden. */" },
		{ "ModuleRelativePath", "Public/SCUE4.h" },
		{ "ToolTip", "Sets visibility of Game-Guard console window.\n      Console is only visible in Editor Mode, on packaged games it's always hidden." },
	};
#endif
	void Z_Construct_UClass_USafeGameInstance_Statics::NewProp_HideGameGuard_SetBit(void* Obj)
	{
		((USafeGameInstance*)Obj)->HideGameGuard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeGameInstance_Statics::NewProp_HideGameGuard = { "HideGameGuard", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USafeGameInstance), &Z_Construct_UClass_USafeGameInstance_Statics::NewProp_HideGameGuard_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeGameInstance_Statics::NewProp_HideGameGuard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeGameInstance_Statics::NewProp_HideGameGuard_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USafeGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeGameInstance_Statics::NewProp_ScannerInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeGameInstance_Statics::NewProp_AllowDebugging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeGameInstance_Statics::NewProp_HideGameGuard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USafeGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USafeGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USafeGameInstance_Statics::ClassParams = {
		&USafeGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USafeGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USafeGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USafeGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USafeGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USafeGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USafeGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USafeGameInstance, 66185248);
	template<> SCUE4_API UClass* StaticClass<USafeGameInstance>()
	{
		return USafeGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USafeGameInstance(Z_Construct_UClass_USafeGameInstance, &USafeGameInstance::StaticClass, TEXT("/Script/SCUE4"), TEXT("USafeGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USafeGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
