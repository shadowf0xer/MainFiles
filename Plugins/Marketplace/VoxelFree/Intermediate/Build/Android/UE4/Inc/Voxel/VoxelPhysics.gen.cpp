// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelPhysics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPhysics() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelPhysicsTools::execApplyVoxelPhysics)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_TARRAY_REF(TScriptInterface<IVoxelPhysicsPartSpawnerResult>,Z_Param_Out_Results);
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_STRUCT(FVoxelIntBox,Z_Param_Bounds);
		P_GET_TINTERFACE(IVoxelPhysicsPartSpawner,Z_Param_PartSpawner);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinParts);
		P_GET_UBOOL(Z_Param_bDebug);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelPhysicsTools::ApplyVoxelPhysics(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_Results,Z_Param_World,Z_Param_Bounds,Z_Param_PartSpawner,Z_Param_MinParts,Z_Param_bDebug,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	void UVoxelPhysicsTools::StaticRegisterNativesUVoxelPhysicsTools()
	{
		UClass* Class = UVoxelPhysicsTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyVoxelPhysics", &UVoxelPhysicsTools::execApplyVoxelPhysics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics
	{
		struct VoxelPhysicsTools_eventApplyVoxelPhysics_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			TArray<TScriptInterface<IVoxelPhysicsPartSpawnerResult> > Results;
			AVoxelWorld* World;
			FVoxelIntBox Bounds;
			TScriptInterface<IVoxelPhysicsPartSpawner> PartSpawner;
			int32 MinParts;
			bool bDebug;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebug;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinParts;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_PartSpawner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Results;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_Results_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelPhysicsTools_eventApplyVoxelPhysics_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms), &Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((VoxelPhysicsTools_eventApplyVoxelPhysics_Parms*)Obj)->bDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms), &Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_MinParts = { "MinParts", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, MinParts), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_PartSpawner = { "PartSpawner", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, PartSpawner), Z_Construct_UClass_UVoxelPhysicsPartSpawner_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, Bounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVoxelPhysicsPartSpawnerResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_bDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_MinParts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_PartSpawner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Results,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_Results_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "MinParts, bDebug, bHideLatentWarnings" },
		{ "Category", "Voxel" },
		{ "Comment", "/**\n\x09 * Apply voxel physics in a section of the voxel world by removing floating parts\n\x09 * @param Results\x09\x09\x09\x09""Each part spawner result correspond to an individual floating part. Cast them to their corresponding class to get info from them.\n\x09 * @param World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Bounds\x09\x09\x09\x09The bounds to search in (caution: keep this small!)\n\x09 * @param PartSpawner\x09\x09\x09The part spawner that will handle the spawning of new parts (construct a new object of class VoxelPhysicsPartSpawner_Smthg)\n\x09 *\x09\x09\x09\x09\x09\x09\x09\x09If null will just remove the floating parts\n\x09 * @param MinParts\x09\x09\x09\x09The minimum number of parts (inclusive) to have before removing them. This is useful to avoid considering the whole world as a floating part\n\x09 * @param bHideLatentWarnings\x09Hide latent warnings\n\x09 */" },
		{ "CPP_Default_bDebug", "false" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_MinParts", "2" },
		{ "DefaultToSelf", "World" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysics.h" },
		{ "ToolTip", "Apply voxel physics in a section of the voxel world by removing floating parts\n@param Results                               Each part spawner result correspond to an individual floating part. Cast them to their corresponding class to get info from them.\n@param World                                 The voxel world\n@param Bounds                                The bounds to search in (caution: keep this small!)\n@param PartSpawner                   The part spawner that will handle the spawning of new parts (construct a new object of class VoxelPhysicsPartSpawner_Smthg)\n                                                             If null will just remove the floating parts\n@param MinParts                              The minimum number of parts (inclusive) to have before removing them. This is useful to avoid considering the whole world as a floating part\n@param bHideLatentWarnings   Hide latent warnings" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPhysicsTools, nullptr, "ApplyVoxelPhysics", nullptr, nullptr, sizeof(VoxelPhysicsTools_eventApplyVoxelPhysics_Parms), Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelPhysicsTools_NoRegister()
	{
		return UVoxelPhysicsTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPhysicsTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPhysicsTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelPhysicsTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelPhysicsTools_ApplyVoxelPhysics, "ApplyVoxelPhysics" }, // 2840574627
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPhysicsTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelPhysics.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelPhysics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPhysicsTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPhysicsTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPhysicsTools_Statics::ClassParams = {
		&UVoxelPhysicsTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPhysicsTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPhysicsTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPhysicsTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelPhysicsTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelPhysicsTools, 3957563151);
	template<> VOXEL_API UClass* StaticClass<UVoxelPhysicsTools>()
	{
		return UVoxelPhysicsTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelPhysicsTools(Z_Construct_UClass_UVoxelPhysicsTools, &UVoxelPhysicsTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelPhysicsTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPhysicsTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
