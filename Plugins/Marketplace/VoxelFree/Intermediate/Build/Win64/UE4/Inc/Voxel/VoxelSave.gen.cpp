// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelData/VoxelSave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSave() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldSaveObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FVoxelCompressedWorldSave::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelCompressedWorldSave"), sizeof(FVoxelCompressedWorldSave), Get_Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelCompressedWorldSave>()
{
	return FVoxelCompressedWorldSave::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelCompressedWorldSave(FVoxelCompressedWorldSave::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelCompressedWorldSave"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelCompressedWorldSave
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelCompressedWorldSave()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelCompressedWorldSave")),new UScriptStruct::TCppStructOps<FVoxelCompressedWorldSave>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelCompressedWorldSave;
	struct Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "Comment", "// Blueprint wrapper that's cheap to copy around\n" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
		{ "ToolTip", "Blueprint wrapper that's cheap to copy around" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelCompressedWorldSave>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelCompressedWorldSave",
		sizeof(FVoxelCompressedWorldSave),
		alignof(FVoxelCompressedWorldSave),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelCompressedWorldSave()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelCompressedWorldSave"), sizeof(FVoxelCompressedWorldSave), Get_Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelCompressedWorldSave_Hash() { return 3458587230U; }
class UScriptStruct* FVoxelUncompressedWorldSave::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelUncompressedWorldSave"), sizeof(FVoxelUncompressedWorldSave), Get_Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelUncompressedWorldSave>()
{
	return FVoxelUncompressedWorldSave::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelUncompressedWorldSave(FVoxelUncompressedWorldSave::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelUncompressedWorldSave"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelUncompressedWorldSave
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelUncompressedWorldSave()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelUncompressedWorldSave")),new UScriptStruct::TCppStructOps<FVoxelUncompressedWorldSave>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelUncompressedWorldSave;
	struct Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "Comment", "// Blueprint wrapper that's cheap to copy around\n" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
		{ "ToolTip", "Blueprint wrapper that's cheap to copy around" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelUncompressedWorldSave>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelUncompressedWorldSave",
		sizeof(FVoxelUncompressedWorldSave),
		alignof(FVoxelUncompressedWorldSave),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelUncompressedWorldSave"), sizeof(FVoxelUncompressedWorldSave), Get_Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelUncompressedWorldSave_Hash() { return 504902617U; }
	void UVoxelWorldSaveObject::StaticRegisterNativesUVoxelWorldSaveObject()
	{
	}
	UClass* Z_Construct_UClass_UVoxelWorldSaveObject_NoRegister()
	{
		return UVoxelWorldSaveObject::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelWorldSaveObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Depth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Save_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Save;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelWorldSaveObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldSaveObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Voxel" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n///////////////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "VoxelData/VoxelSave.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth_MetaData[] = {
		{ "Category", "Voxel" },
		{ "Comment", "// Depth of the world\n" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
		{ "ToolTip", "Depth of the world" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelWorldSaveObject, Depth), METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelData/VoxelSave.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save = { "Save", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelWorldSaveObject, Save), Z_Construct_UScriptStruct_FVoxelCompressedWorldSave, METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelWorldSaveObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Depth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelWorldSaveObject_Statics::NewProp_Save,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelWorldSaveObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelWorldSaveObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelWorldSaveObject_Statics::ClassParams = {
		&UVoxelWorldSaveObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelWorldSaveObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldSaveObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelWorldSaveObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelWorldSaveObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelWorldSaveObject, 881308326);
	template<> VOXEL_API UClass* StaticClass<UVoxelWorldSaveObject>()
	{
		return UVoxelWorldSaveObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelWorldSaveObject(Z_Construct_UClass_UVoxelWorldSaveObject, &UVoxelWorldSaveObject::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelWorldSaveObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelWorldSaveObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
