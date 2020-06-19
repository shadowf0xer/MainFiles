// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelWorldGenerators/VoxelWorldGeneratorPicker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldGeneratorPicker() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelWorldGeneratorPickerType();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldGenerator_NoRegister();
// End Cross Module References
	static UEnum* EVoxelWorldGeneratorPickerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelWorldGeneratorPickerType, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelWorldGeneratorPickerType"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelWorldGeneratorPickerType>()
	{
		return EVoxelWorldGeneratorPickerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelWorldGeneratorPickerType(EVoxelWorldGeneratorPickerType_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelWorldGeneratorPickerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelWorldGeneratorPickerType_Hash() { return 2007174915U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelWorldGeneratorPickerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelWorldGeneratorPickerType"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelWorldGeneratorPickerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelWorldGeneratorPickerType::Class", (int64)EVoxelWorldGeneratorPickerType::Class },
				{ "EVoxelWorldGeneratorPickerType::Object", (int64)EVoxelWorldGeneratorPickerType::Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Class.Name", "EVoxelWorldGeneratorPickerType::Class" },
				{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGeneratorPicker.h" },
				{ "Object.Name", "EVoxelWorldGeneratorPickerType::Object" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelWorldGeneratorPickerType",
				"EVoxelWorldGeneratorPickerType",
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
class UScriptStruct* FVoxelTransformableWorldGeneratorPicker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelTransformableWorldGeneratorPicker"), sizeof(FVoxelTransformableWorldGeneratorPicker), Get_Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelTransformableWorldGeneratorPicker>()
{
	return FVoxelTransformableWorldGeneratorPicker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker(FVoxelTransformableWorldGeneratorPicker::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelTransformableWorldGeneratorPicker"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelTransformableWorldGeneratorPicker
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelTransformableWorldGeneratorPicker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelTransformableWorldGeneratorPicker")),new UScriptStruct::TCppStructOps<FVoxelTransformableWorldGeneratorPicker>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelTransformableWorldGeneratorPicker;
	struct Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGeneratorPicker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelTransformableWorldGeneratorPicker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGeneratorPicker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelTransformableWorldGeneratorPicker, Object), Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGeneratorPicker.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelTransformableWorldGeneratorPicker, Class), Z_Construct_UClass_UVoxelTransformableWorldGenerator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGeneratorPicker.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelTransformableWorldGeneratorPicker, Type), Z_Construct_UEnum_Voxel_EVoxelWorldGeneratorPickerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelTransformableWorldGeneratorPicker",
		sizeof(FVoxelTransformableWorldGeneratorPicker),
		alignof(FVoxelTransformableWorldGeneratorPicker),
		Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelTransformableWorldGeneratorPicker"), sizeof(FVoxelTransformableWorldGeneratorPicker), Get_Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelTransformableWorldGeneratorPicker_Hash() { return 3519139659U; }
class UScriptStruct* FVoxelWorldGeneratorPicker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelWorldGeneratorPicker"), sizeof(FVoxelWorldGeneratorPicker), Get_Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelWorldGeneratorPicker>()
{
	return FVoxelWorldGeneratorPicker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelWorldGeneratorPicker(FVoxelWorldGeneratorPicker::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelWorldGeneratorPicker"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelWorldGeneratorPicker
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelWorldGeneratorPicker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelWorldGeneratorPicker")),new UScriptStruct::TCppStructOps<FVoxelWorldGeneratorPicker>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelWorldGeneratorPicker;
	struct Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGeneratorPicker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelWorldGeneratorPicker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGeneratorPicker.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelWorldGeneratorPicker, Object), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGeneratorPicker.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelWorldGeneratorPicker, Class), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelWorldGenerators/VoxelWorldGeneratorPicker.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelWorldGeneratorPicker, Type), Z_Construct_UEnum_Voxel_EVoxelWorldGeneratorPickerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Class,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelWorldGeneratorPicker",
		sizeof(FVoxelWorldGeneratorPicker),
		alignof(FVoxelWorldGeneratorPicker),
		Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelWorldGeneratorPicker"), sizeof(FVoxelWorldGeneratorPicker), Get_Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelWorldGeneratorPicker_Hash() { return 328371205U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
