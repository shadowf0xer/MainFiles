// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelSpawners/VoxelSpawnerActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelSpawnerActor() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelSpawnerActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVoxelSpawnerActor::execSetInstanceRandom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInstanceRandom_Implementation(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVoxelSpawnerActor::execSetStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_Mesh);
		P_GET_TMAP_REF(int32,UMaterialInterface*,Z_Param_Out_SectionsMaterials);
		P_GET_STRUCT_REF(FBodyInstance,Z_Param_Out_CollisionPresets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStaticMesh_Implementation(Z_Param_Mesh,Z_Param_Out_SectionsMaterials,Z_Param_Out_CollisionPresets);
		P_NATIVE_END;
	}
	static FName NAME_AVoxelSpawnerActor_SetInstanceRandom = FName(TEXT("SetInstanceRandom"));
	void AVoxelSpawnerActor::SetInstanceRandom(float Value)
	{
		VoxelSpawnerActor_eventSetInstanceRandom_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AVoxelSpawnerActor_SetInstanceRandom),&Parms);
	}
	static FName NAME_AVoxelSpawnerActor_SetStaticMesh = FName(TEXT("SetStaticMesh"));
	void AVoxelSpawnerActor::SetStaticMesh(UStaticMesh* Mesh, TMap<int32,UMaterialInterface*> const& SectionsMaterials, FBodyInstance const& CollisionPresets)
	{
		VoxelSpawnerActor_eventSetStaticMesh_Parms Parms;
		Parms.Mesh=Mesh;
		Parms.SectionsMaterials=SectionsMaterials;
		Parms.CollisionPresets=CollisionPresets;
		ProcessEvent(FindFunctionChecked(NAME_AVoxelSpawnerActor_SetStaticMesh),&Parms);
	}
	void AVoxelSpawnerActor::StaticRegisterNativesAVoxelSpawnerActor()
	{
		UClass* Class = AVoxelSpawnerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInstanceRandom", &AVoxelSpawnerActor::execSetInstanceRandom },
			{ "SetStaticMesh", &AVoxelSpawnerActor::execSetStaticMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetInstanceRandom_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelSpawnerActor, nullptr, "SetInstanceRandom", nullptr, nullptr, sizeof(VoxelSpawnerActor_eventSetInstanceRandom_Parms), Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionPresets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionPresets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionsMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SectionsMaterials;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionsMaterials_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SectionsMaterials_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets = { "CollisionPresets", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetStaticMesh_Parms, CollisionPresets), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials = { "SectionsMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetStaticMesh_Parms, SectionsMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_Key_KeyProp = { "SectionsMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_ValueProp = { "SectionsMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSpawnerActor_eventSetStaticMesh_Parms, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_CollisionPresets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_SectionsMaterials_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelSpawnerActor, nullptr, "SetStaticMesh", nullptr, nullptr, sizeof(VoxelSpawnerActor_eventSetStaticMesh_Parms), Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVoxelSpawnerActor_NoRegister()
	{
		return AVoxelSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxelSpawnerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelSpawnerActor_SetInstanceRandom, "SetInstanceRandom" }, // 3105905253
		{ &Z_Construct_UFunction_AVoxelSpawnerActor_SetStaticMesh, "SetStaticMesh" }, // 3535683827
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelSpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Actor that can be spawned by voxel spawners\n// Base class: does nothing\n" },
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ToolTip", "Actor that can be spawned by voxel spawners\nBase class: does nothing" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelSpawnerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelSpawnerActor_Statics::ClassParams = {
		&AVoxelSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelSpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelSpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelSpawnerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelSpawnerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelSpawnerActor, 1852243340);
	template<> VOXEL_API UClass* StaticClass<AVoxelSpawnerActor>()
	{
		return AVoxelSpawnerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelSpawnerActor(Z_Construct_UClass_AVoxelSpawnerActor, &AVoxelSpawnerActor::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelSpawnerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelSpawnerActor);
	void AVoxelMeshSpawnerActor::StaticRegisterNativesAVoxelMeshSpawnerActor()
	{
	}
	UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor_NoRegister()
	{
		return AVoxelMeshSpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVoxelSpawnerActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Basic voxel actor with a static mesh component\n" },
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ToolTip", "Basic voxel actor with a static mesh component" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshSpawnerActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::NewProp_StaticMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelMeshSpawnerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::ClassParams = {
		&AVoxelMeshSpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelMeshSpawnerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelMeshSpawnerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelMeshSpawnerActor, 3024410356);
	template<> VOXEL_API UClass* StaticClass<AVoxelMeshSpawnerActor>()
	{
		return AVoxelMeshSpawnerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelMeshSpawnerActor(Z_Construct_UClass_AVoxelMeshSpawnerActor, &AVoxelMeshSpawnerActor::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelMeshSpawnerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelMeshSpawnerActor);
	void AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticRegisterNativesAVoxelMeshWithPhysicsRelevancySpawnerActor()
	{
	}
	UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_NoRegister()
	{
		return AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsRelevancyComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsRelevancyComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVoxelMeshSpawnerActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Basic voxel actor with a static mesh component and a voxel physics relevancy component: physics will be frozen when outside the voxel world collision range\n" },
		{ "IncludePath", "VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
		{ "ToolTip", "Basic voxel actor with a static mesh component and a voxel physics relevancy component: physics will be frozen when outside the voxel world collision range" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelSpawners/VoxelSpawnerActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent = { "PhysicsRelevancyComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelMeshWithPhysicsRelevancySpawnerActor, PhysicsRelevancyComponent), Z_Construct_UClass_UVoxelPhysicsRelevancyComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::NewProp_PhysicsRelevancyComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelMeshWithPhysicsRelevancySpawnerActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::ClassParams = {
		&AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelMeshWithPhysicsRelevancySpawnerActor, 2504520585);
	template<> VOXEL_API UClass* StaticClass<AVoxelMeshWithPhysicsRelevancySpawnerActor>()
	{
		return AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor(Z_Construct_UClass_AVoxelMeshWithPhysicsRelevancySpawnerActor, &AVoxelMeshWithPhysicsRelevancySpawnerActor::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelMeshWithPhysicsRelevancySpawnerActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelMeshWithPhysicsRelevancySpawnerActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
