// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelSurfaceEdits.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSurfaceEdits() {}
// Cross Module References
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
// End Cross Module References
class UScriptStruct* FVoxelSurfaceEditsStack::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsStack"), sizeof(FVoxelSurfaceEditsStack), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsStack>()
{
	return FVoxelSurfaceEditsStack::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSurfaceEditsStack(FVoxelSurfaceEditsStack::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSurfaceEditsStack"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsStack
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsStack()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSurfaceEditsStack")),new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsStack>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsStack;
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsStack>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceEditsStack",
		sizeof(FVoxelSurfaceEditsStack),
		alignof(FVoxelSurfaceEditsStack),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSurfaceEditsStack"), sizeof(FVoxelSurfaceEditsStack), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsStack_Hash() { return 2412417160U; }
class UScriptStruct* FVoxelSurfaceEditsStackElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsStackElement"), sizeof(FVoxelSurfaceEditsStackElement), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsStackElement>()
{
	return FVoxelSurfaceEditsStackElement::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSurfaceEditsStackElement(FVoxelSurfaceEditsStackElement::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSurfaceEditsStackElement"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsStackElement
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsStackElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSurfaceEditsStackElement")),new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsStackElement>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsStackElement;
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsStackElement>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceEditsStackElement",
		sizeof(FVoxelSurfaceEditsStackElement),
		alignof(FVoxelSurfaceEditsStackElement),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSurfaceEditsStackElement"), sizeof(FVoxelSurfaceEditsStackElement), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsStackElement_Hash() { return 2201754052U; }
class UScriptStruct* FVoxelSurfaceEditsProcessedVoxels::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsProcessedVoxels"), sizeof(FVoxelSurfaceEditsProcessedVoxels), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsProcessedVoxels>()
{
	return FVoxelSurfaceEditsProcessedVoxels::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels(FVoxelSurfaceEditsProcessedVoxels::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSurfaceEditsProcessedVoxels"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsProcessedVoxels
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsProcessedVoxels()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSurfaceEditsProcessedVoxels")),new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsProcessedVoxels>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsProcessedVoxels;
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsProcessedVoxels>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceEditsProcessedVoxels",
		sizeof(FVoxelSurfaceEditsProcessedVoxels),
		alignof(FVoxelSurfaceEditsProcessedVoxels),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSurfaceEditsProcessedVoxels"), sizeof(FVoxelSurfaceEditsProcessedVoxels), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsProcessedVoxels_Hash() { return 3132067855U; }
class UScriptStruct* FVoxelSurfaceEditsVoxels::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsVoxels"), sizeof(FVoxelSurfaceEditsVoxels), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsVoxels>()
{
	return FVoxelSurfaceEditsVoxels::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSurfaceEditsVoxels(FVoxelSurfaceEditsVoxels::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSurfaceEditsVoxels"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsVoxels
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsVoxels()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSurfaceEditsVoxels")),new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxels>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsVoxels;
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxels>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceEditsVoxels",
		sizeof(FVoxelSurfaceEditsVoxels),
		alignof(FVoxelSurfaceEditsVoxels),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSurfaceEditsVoxels"), sizeof(FVoxelSurfaceEditsVoxels), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxels_Hash() { return 1775649206U; }
class UScriptStruct* FVoxelSurfaceEditsVoxel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsVoxel"), sizeof(FVoxelSurfaceEditsVoxel), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsVoxel>()
{
	return FVoxelSurfaceEditsVoxel::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSurfaceEditsVoxel(FVoxelSurfaceEditsVoxel::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSurfaceEditsVoxel"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsVoxel
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsVoxel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSurfaceEditsVoxel")),new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxel>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsVoxel;
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxel>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxel, Strength), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::NewProp_Strength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase,
		&NewStructOps,
		"VoxelSurfaceEditsVoxel",
		sizeof(FVoxelSurfaceEditsVoxel),
		alignof(FVoxelSurfaceEditsVoxel),
		Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSurfaceEditsVoxel"), sizeof(FVoxelSurfaceEditsVoxel), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxel_Hash() { return 1113831374U; }
class UScriptStruct* FVoxelSurfaceEditsVoxelBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VOXEL_API uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase, Z_Construct_UPackage__Script_Voxel(), TEXT("VoxelSurfaceEditsVoxelBase"), sizeof(FVoxelSurfaceEditsVoxelBase), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Hash());
	}
	return Singleton;
}
template<> VOXEL_API UScriptStruct* StaticStruct<FVoxelSurfaceEditsVoxelBase>()
{
	return FVoxelSurfaceEditsVoxelBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVoxelSurfaceEditsVoxelBase(FVoxelSurfaceEditsVoxelBase::StaticStruct, TEXT("/Script/Voxel"), TEXT("VoxelSurfaceEditsVoxelBase"), false, nullptr, nullptr);
static struct FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsVoxelBase
{
	FScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsVoxelBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VoxelSurfaceEditsVoxelBase")),new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxelBase>);
	}
} ScriptStruct_Voxel_StaticRegisterNativesFVoxelSurfaceEditsVoxelBase;
	struct Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVoxelSurfaceEditsVoxelBase>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelSurfaceEdits.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVoxelSurfaceEditsVoxelBase, Position), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::NewProp_Position,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
		nullptr,
		&NewStructOps,
		"VoxelSurfaceEditsVoxelBase",
		sizeof(FVoxelSurfaceEditsVoxelBase),
		alignof(FVoxelSurfaceEditsVoxelBase),
		Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VoxelSurfaceEditsVoxelBase"), sizeof(FVoxelSurfaceEditsVoxelBase), Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVoxelSurfaceEditsVoxelBase_Hash() { return 2159398805U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
