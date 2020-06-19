// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelRender/VoxelProceduralMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelProceduralMeshComponent() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelProceduralMeshComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelProceduralMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelIntBox();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelProceduralMeshComponent::execSetVoxelCollisionsFrozen)
	{
		P_GET_UBOOL(Z_Param_bFrozen);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelProceduralMeshComponent::SetVoxelCollisionsFrozen(Z_Param_bFrozen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelProceduralMeshComponent::execAreVoxelCollisionsFrozen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelProceduralMeshComponent::AreVoxelCollisionsFrozen();
		P_NATIVE_END;
	}
	static FName NAME_UVoxelProceduralMeshComponent_InitChunk = FName(TEXT("InitChunk"));
	void UVoxelProceduralMeshComponent::InitChunk(uint8 ChunkLOD, FVoxelIntBox ChunkBounds)
	{
		VoxelProceduralMeshComponent_eventInitChunk_Parms Parms;
		Parms.ChunkLOD=ChunkLOD;
		Parms.ChunkBounds=ChunkBounds;
		ProcessEvent(FindFunctionChecked(NAME_UVoxelProceduralMeshComponent_InitChunk),&Parms);
	}
	void UVoxelProceduralMeshComponent::StaticRegisterNativesUVoxelProceduralMeshComponent()
	{
		UClass* Class = UVoxelProceduralMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreVoxelCollisionsFrozen", &UVoxelProceduralMeshComponent::execAreVoxelCollisionsFrozen },
			{ "SetVoxelCollisionsFrozen", &UVoxelProceduralMeshComponent::execSetVoxelCollisionsFrozen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics
	{
		struct VoxelProceduralMeshComponent_eventAreVoxelCollisionsFrozen_Parms
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
	void Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelProceduralMeshComponent_eventAreVoxelCollisionsFrozen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelProceduralMeshComponent_eventAreVoxelCollisionsFrozen_Parms), &Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Collisions" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProceduralMeshComponent, nullptr, "AreVoxelCollisionsFrozen", nullptr, nullptr, sizeof(VoxelProceduralMeshComponent_eventAreVoxelCollisionsFrozen_Parms), Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChunkBounds;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChunkLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::NewProp_ChunkBounds = { "ChunkBounds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProceduralMeshComponent_eventInitChunk_Parms, ChunkBounds), Z_Construct_UScriptStruct_FVoxelIntBox, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::NewProp_ChunkLOD = { "ChunkLOD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelProceduralMeshComponent_eventInitChunk_Parms, ChunkLOD), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::NewProp_ChunkBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::NewProp_ChunkLOD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProceduralMeshComponent, nullptr, "InitChunk", nullptr, nullptr, sizeof(VoxelProceduralMeshComponent_eventInitChunk_Parms), Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics
	{
		struct VoxelProceduralMeshComponent_eventSetVoxelCollisionsFrozen_Parms
		{
			bool bFrozen;
		};
		static void NewProp_bFrozen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFrozen;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::NewProp_bFrozen_SetBit(void* Obj)
	{
		((VoxelProceduralMeshComponent_eventSetVoxelCollisionsFrozen_Parms*)Obj)->bFrozen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::NewProp_bFrozen = { "bFrozen", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelProceduralMeshComponent_eventSetVoxelCollisionsFrozen_Parms), &Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::NewProp_bFrozen_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::NewProp_bFrozen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Collisions" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelProceduralMeshComponent, nullptr, "SetVoxelCollisionsFrozen", nullptr, nullptr, sizeof(VoxelProceduralMeshComponent_eventSetVoxelCollisionsFrozen_Parms), Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelProceduralMeshComponent_NoRegister()
	{
		return UVoxelProceduralMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetupBeingCooked_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetupBeingCooked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelProceduralMeshComponent_AreVoxelCollisionsFrozen, "AreVoxelCollisionsFrozen" }, // 3195300337
		{ &Z_Construct_UFunction_UVoxelProceduralMeshComponent_InitChunk, "InitChunk" }, // 4130067795
		{ &Z_Construct_UFunction_UVoxelProceduralMeshComponent_SetVoxelCollisionsFrozen, "SetVoxelCollisionsFrozen" }, // 1214937279
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Voxel" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VoxelRender/VoxelProceduralMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetupBeingCooked_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetupBeingCooked = { "BodySetupBeingCooked", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelProceduralMeshComponent, BodySetupBeingCooked), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetupBeingCooked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetupBeingCooked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/VoxelRender/VoxelProceduralMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelProceduralMeshComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetupBeingCooked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::NewProp_BodySetup,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelProceduralMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::ClassParams = {
		&UVoxelProceduralMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelProceduralMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelProceduralMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelProceduralMeshComponent, 1406262073);
	template<> VOXEL_API UClass* StaticClass<UVoxelProceduralMeshComponent>()
	{
		return UVoxelProceduralMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelProceduralMeshComponent(Z_Construct_UClass_UVoxelProceduralMeshComponent, &UVoxelProceduralMeshComponent::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelProceduralMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelProceduralMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
