// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurfaceFootstepSystem/Public/FoostepPoolingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoostepPoolingManager() {}
// Cross Module References
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFoostepPoolingManager_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFoostepPoolingManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SurfaceFootstepSystem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_AFootstepActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFoostepPoolingManager::execDestroyFootstepPool)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFoostepPoolingManager::DestroyFootstepPool(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UFoostepPoolingManager::StaticRegisterNativesUFoostepPoolingManager()
	{
		UClass* Class = UFoostepPoolingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyFootstepPool", &UFoostepPoolingManager::execDestroyFootstepPool },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics
	{
		struct FoostepPoolingManager_eventDestroyFootstepPool_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoostepPoolingManager_eventDestroyFootstepPool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Surface Footstep System" },
		{ "Comment", "/** Destroys all Footstep Actors. This won't work if you use World Settings class which doesn't implement a Footstep Interface and doesn't override the \"GetPoolingManagerComponent\" function.\n\x09In a multiplayer game, this should be called everywhere the Surface Footstep Anim Notify is executed (it won't be executed on the Dedicated Server). */" },
		{ "ModuleRelativePath", "Public/FoostepPoolingManager.h" },
		{ "ToolTip", "Destroys all Footstep Actors. This won't work if you use World Settings class which doesn't implement a Footstep Interface and doesn't override the \"GetPoolingManagerComponent\" function.\n      In a multiplayer game, this should be called everywhere the Surface Footstep Anim Notify is executed (it won't be executed on the Dedicated Server)." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFoostepPoolingManager, nullptr, "DestroyFootstepPool", nullptr, nullptr, sizeof(FoostepPoolingManager_eventDestroyFootstepPool_Parms), Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFoostepPoolingManager_NoRegister()
	{
		return UFoostepPoolingManager::StaticClass();
	}
	struct Z_Construct_UClass_UFoostepPoolingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PooledActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PooledActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PooledActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoostepPoolingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SurfaceFootstepSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFoostepPoolingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFoostepPoolingManager_DestroyFootstepPool, "DestroyFootstepPool" }, // 1715182854
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoostepPoolingManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An object from the Surface Footstep System plugin which manages Footstep Actors pooling. Must be added to the World Settings.\n */" },
		{ "IncludePath", "FoostepPoolingManager.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/FoostepPoolingManager.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "An object from the Surface Footstep System plugin which manages Footstep Actors pooling. Must be added to the World Settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoostepPoolingManager_Statics::NewProp_PooledActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoostepPoolingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoostepPoolingManager_Statics::NewProp_PooledActors = { "PooledActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoostepPoolingManager, PooledActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFoostepPoolingManager_Statics::NewProp_PooledActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoostepPoolingManager_Statics::NewProp_PooledActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoostepPoolingManager_Statics::NewProp_PooledActors_Inner = { "PooledActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFootstepActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoostepPoolingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoostepPoolingManager_Statics::NewProp_PooledActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoostepPoolingManager_Statics::NewProp_PooledActors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoostepPoolingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoostepPoolingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoostepPoolingManager_Statics::ClassParams = {
		&UFoostepPoolingManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFoostepPoolingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoostepPoolingManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoostepPoolingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoostepPoolingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoostepPoolingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoostepPoolingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoostepPoolingManager, 3695511146);
	template<> SURFACEFOOTSTEPSYSTEM_API UClass* StaticClass<UFoostepPoolingManager>()
	{
		return UFoostepPoolingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoostepPoolingManager(Z_Construct_UClass_UFoostepPoolingManager, &UFoostepPoolingManager::StaticClass, TEXT("/Script/SurfaceFootstepSystem"), TEXT("UFoostepPoolingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoostepPoolingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
