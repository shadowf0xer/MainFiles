// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelHelpers/Public/VoxelHelpersLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelHelpersLibrary() {}
// Cross Module References
	VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelHelpersLibrary_NoRegister();
	VOXELHELPERS_API UClass* Z_Construct_UClass_UVoxelHelpersLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VoxelHelpers();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelHelpersLibrary::execCreateProcMeshPlane)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_Mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelHelpersLibrary::CreateProcMeshPlane(Z_Param_Mesh,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Step);
		P_NATIVE_END;
	}
	void UVoxelHelpersLibrary::StaticRegisterNativesUVoxelHelpersLibrary()
	{
		UClass* Class = UVoxelHelpersLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProcMeshPlane", &UVoxelHelpersLibrary::execCreateProcMeshPlane },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics
	{
		struct VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms
		{
			UProceduralMeshComponent* Mesh;
			int32 SizeX;
			int32 SizeY;
			float Step;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, Step), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel Helpers" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_Step", "100.000000" },
		{ "ModuleRelativePath", "Public/VoxelHelpersLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelHelpersLibrary, nullptr, "CreateProcMeshPlane", nullptr, nullptr, sizeof(VoxelHelpersLibrary_eventCreateProcMeshPlane_Parms), Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelHelpersLibrary_NoRegister()
	{
		return UVoxelHelpersLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelHelpersLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelHelpersLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelHelpers,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelHelpersLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelHelpersLibrary_CreateProcMeshPlane, "CreateProcMeshPlane" }, // 1360398153
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelHelpersLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelHelpersLibrary.h" },
		{ "ModuleRelativePath", "Public/VoxelHelpersLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelHelpersLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelHelpersLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelHelpersLibrary_Statics::ClassParams = {
		&UVoxelHelpersLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelHelpersLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelHelpersLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelHelpersLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelHelpersLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelHelpersLibrary, 2230917099);
	template<> VOXELHELPERS_API UClass* StaticClass<UVoxelHelpersLibrary>()
	{
		return UVoxelHelpersLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelHelpersLibrary(Z_Construct_UClass_UVoxelHelpersLibrary, &UVoxelHelpersLibrary::StaticClass, TEXT("/Script/VoxelHelpers"), TEXT("UVoxelHelpersLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelHelpersLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
