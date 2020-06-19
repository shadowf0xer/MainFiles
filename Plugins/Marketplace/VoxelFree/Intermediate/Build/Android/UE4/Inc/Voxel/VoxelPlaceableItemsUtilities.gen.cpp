// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelPlaceableItemsUtilities() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelPlaceableItemsUtilities::execAddWorms)
	{
		P_GET_OBJECT(AVoxelWorld,Z_Param_World);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_Seed);
		P_GET_STRUCT(FVector,Z_Param_RotationAmplitude);
		P_GET_STRUCT(FVector,Z_Param_NoiseDir);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NoiseSegmentLength);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_InitialDir);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VoxelSegmentLength);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumSegments);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SplitProbability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SplitProbabilityGain);
		P_GET_PROPERTY(FIntProperty,Z_Param_BranchMeanSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_BranchSizeVariation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelPlaceableItemsUtilities::AddWorms(Z_Param_World,Z_Param_Radius,Z_Param_Seed,Z_Param_RotationAmplitude,Z_Param_NoiseDir,Z_Param_NoiseSegmentLength,Z_Param_Start,Z_Param_InitialDir,Z_Param_VoxelSegmentLength,Z_Param_NumSegments,Z_Param_SplitProbability,Z_Param_SplitProbabilityGain,Z_Param_BranchMeanSize,Z_Param_BranchSizeVariation);
		P_NATIVE_END;
	}
	void UVoxelPlaceableItemsUtilities::StaticRegisterNativesUVoxelPlaceableItemsUtilities()
	{
		UClass* Class = UVoxelPlaceableItemsUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWorms", &UVoxelPlaceableItemsUtilities::execAddWorms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics
	{
		struct VoxelPlaceableItemsUtilities_eventAddWorms_Parms
		{
			AVoxelWorld* World;
			float Radius;
			int32 Seed;
			FVector RotationAmplitude;
			FVector NoiseDir;
			float NoiseSegmentLength;
			FVector Start;
			FVector InitialDir;
			float VoxelSegmentLength;
			int32 NumSegments;
			float SplitProbability;
			float SplitProbabilityGain;
			int32 BranchMeanSize;
			int32 BranchSizeVariation;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BranchSizeVariation;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BranchMeanSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplitProbabilityGain;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplitProbability;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSegments;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSegmentLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialDir;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseSegmentLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NoiseDir;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationAmplitude;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_BranchSizeVariation = { "BranchSizeVariation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, BranchSizeVariation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_BranchMeanSize = { "BranchMeanSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, BranchMeanSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_SplitProbabilityGain = { "SplitProbabilityGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, SplitProbabilityGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_SplitProbability = { "SplitProbability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, SplitProbability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_NumSegments = { "NumSegments", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, NumSegments), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_VoxelSegmentLength = { "VoxelSegmentLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, VoxelSegmentLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_InitialDir = { "InitialDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, InitialDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_NoiseSegmentLength = { "NoiseSegmentLength", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, NoiseSegmentLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_NoiseDir = { "NoiseDir", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, NoiseDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_RotationAmplitude = { "RotationAmplitude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, RotationAmplitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Seed = { "Seed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, Seed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelPlaceableItemsUtilities_eventAddWorms_Parms, World), Z_Construct_UClass_AVoxelWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_BranchSizeVariation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_BranchMeanSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_SplitProbabilityGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_SplitProbability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_NumSegments,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_VoxelSegmentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_InitialDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Start,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_NoiseSegmentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_NoiseDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_RotationAmplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Seed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_Radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "NoiseDir, NoiseSegmentLength" },
		{ "Category", "Voxel|Placeable Items" },
		{ "Comment", "/**\n\x09 * Add perlin worms items to the voxel world. You can use them using the Perlin Worms Distance node\n\x09 * @param World\x09\x09\x09\x09\x09The voxel world\n\x09 * @param Radius\x09\x09\x09\x09The radius of the worms in voxel\n\x09 * @param Seed\x09\x09\x09\x09\x09The random seed to use\n\x09 * @param RotationAmplitude\x09\x09The amplitude of the random rotation on each worm\n\x09 * @param NoiseDir\x09\x09\x09\x09Perlin noise traversal direction\n\x09 * @param NoiseSegmentLength\x09Segment lengths to use for perlin noise\n\x09 * @param Start\x09\x09\x09\x09\x09Start of the worms, in voxel space\n\x09 * @param InitialDir\x09\x09\x09Initial direction of the worms\n\x09 * @param VoxelSegmentLength\x09Length of the worms in voxel\n\x09 * @param NumSegments\x09\x09\x09Max depth of the worms tree\n\x09 * @param SplitProbability\x09\x09Probability of a worm to create 2 worms\n\x09 * @param SplitProbabilityGain\x09How much SplitProbability is reduced when worms go deeper in the tree\n\x09 * @param BranchMeanSize\x09\x09""Controls the size of the branches after a split\n\x09 * @param BranchSizeVariation\x09""Controls the size of the branches after a split\n\x09 */" },
		{ "CPP_Default_BranchMeanSize", "25" },
		{ "CPP_Default_BranchSizeVariation", "10" },
		{ "CPP_Default_InitialDir", "1.000000,1.000000,-1.000000" },
		{ "CPP_Default_NoiseDir", "1.000000,1.000000,1.000000" },
		{ "CPP_Default_NoiseSegmentLength", "10.000000" },
		{ "CPP_Default_NumSegments", "100" },
		{ "CPP_Default_Radius", "25.000000" },
		{ "CPP_Default_RotationAmplitude", "10.000000,10.000000,90.000000" },
		{ "CPP_Default_Seed", "2727" },
		{ "CPP_Default_SplitProbability", "0.100000" },
		{ "CPP_Default_SplitProbabilityGain", "0.100000" },
		{ "CPP_Default_Start", "0.000000,0.000000,0.000000" },
		{ "CPP_Default_VoxelSegmentLength", "50.000000" },
		{ "DefaultToSelf", "World" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ToolTip", "Add perlin worms items to the voxel world. You can use them using the Perlin Worms Distance node\n@param World                                 The voxel world\n@param Radius                                The radius of the worms in voxel\n@param Seed                                  The random seed to use\n@param RotationAmplitude             The amplitude of the random rotation on each worm\n@param NoiseDir                              Perlin noise traversal direction\n@param NoiseSegmentLength    Segment lengths to use for perlin noise\n@param Start                                 Start of the worms, in voxel space\n@param InitialDir                    Initial direction of the worms\n@param VoxelSegmentLength    Length of the worms in voxel\n@param NumSegments                   Max depth of the worms tree\n@param SplitProbability              Probability of a worm to create 2 worms\n@param SplitProbabilityGain  How much SplitProbability is reduced when worms go deeper in the tree\n@param BranchMeanSize                Controls the size of the branches after a split\n@param BranchSizeVariation   Controls the size of the branches after a split" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelPlaceableItemsUtilities, nullptr, "AddWorms", nullptr, nullptr, sizeof(VoxelPlaceableItemsUtilities_eventAddWorms_Parms), Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities_NoRegister()
	{
		return UVoxelPlaceableItemsUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelPlaceableItemsUtilities_AddWorms, "AddWorms" }, // 3083665885
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
		{ "ModuleRelativePath", "Public/VoxelPlaceableItems/VoxelPlaceableItemsUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelPlaceableItemsUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::ClassParams = {
		&UVoxelPlaceableItemsUtilities::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelPlaceableItemsUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelPlaceableItemsUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelPlaceableItemsUtilities, 1028191983);
	template<> VOXEL_API UClass* StaticClass<UVoxelPlaceableItemsUtilities>()
	{
		return UVoxelPlaceableItemsUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelPlaceableItemsUtilities(Z_Construct_UClass_UVoxelPlaceableItemsUtilities, &UVoxelPlaceableItemsUtilities::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelPlaceableItemsUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelPlaceableItemsUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
