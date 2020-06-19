// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelTools/VoxelWorldGeneratorTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldGeneratorTools() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldGeneratorTools_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldGeneratorTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldGenerator_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelColorTexture();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelWorldGeneratorTools::execCreateColorTextureFromWorldGeneratorAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelColorTexture,Z_Param_Out_OutTexture);
		P_GET_OBJECT(UVoxelWorldGenerator,Z_Param_WorldGenerator);
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_Seeds);
		P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VoxelSize);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelWorldGeneratorTools::CreateColorTextureFromWorldGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutTexture,Z_Param_WorldGenerator,Z_Param_Out_Seeds,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY,Z_Param_VoxelSize,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelWorldGeneratorTools::execCreateColorTextureFromWorldGenerator)
	{
		P_GET_STRUCT_REF(FVoxelColorTexture,Z_Param_Out_OutTexture);
		P_GET_OBJECT(UVoxelWorldGenerator,Z_Param_WorldGenerator);
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_Seeds);
		P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VoxelSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelWorldGeneratorTools::CreateColorTextureFromWorldGenerator(Z_Param_Out_OutTexture,Z_Param_WorldGenerator,Z_Param_Out_Seeds,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY,Z_Param_VoxelSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelWorldGeneratorTools::execCreateFloatTextureFromWorldGeneratorAsync)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_STRUCT_REF(FVoxelFloatTexture,Z_Param_Out_OutTexture);
		P_GET_OBJECT(UVoxelWorldGenerator,Z_Param_WorldGenerator);
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_Seeds);
		P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VoxelSize);
		P_GET_UBOOL(Z_Param_bHideLatentWarnings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelWorldGeneratorTools::CreateFloatTextureFromWorldGeneratorAsync(Z_Param_WorldContextObject,Z_Param_LatentInfo,Z_Param_Out_OutTexture,Z_Param_WorldGenerator,Z_Param_Out_Seeds,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY,Z_Param_VoxelSize,Z_Param_bHideLatentWarnings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelWorldGeneratorTools::execCreateFloatTextureFromWorldGenerator)
	{
		P_GET_STRUCT_REF(FVoxelFloatTexture,Z_Param_Out_OutTexture);
		P_GET_OBJECT(UVoxelWorldGenerator,Z_Param_WorldGenerator);
		P_GET_TMAP_REF(FName,int32,Z_Param_Out_Seeds);
		P_GET_PROPERTY(FNameProperty,Z_Param_OutputName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_SizeY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartX);
		P_GET_PROPERTY(FIntProperty,Z_Param_StartY);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VoxelSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelWorldGeneratorTools::CreateFloatTextureFromWorldGenerator(Z_Param_Out_OutTexture,Z_Param_WorldGenerator,Z_Param_Out_Seeds,Z_Param_OutputName,Z_Param_SizeX,Z_Param_SizeY,Z_Param_Scale,Z_Param_StartX,Z_Param_StartY,Z_Param_VoxelSize);
		P_NATIVE_END;
	}
	void UVoxelWorldGeneratorTools::StaticRegisterNativesUVoxelWorldGeneratorTools()
	{
		UClass* Class = UVoxelWorldGeneratorTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateColorTextureFromWorldGenerator", &UVoxelWorldGeneratorTools::execCreateColorTextureFromWorldGenerator },
			{ "CreateColorTextureFromWorldGeneratorAsync", &UVoxelWorldGeneratorTools::execCreateColorTextureFromWorldGeneratorAsync },
			{ "CreateFloatTextureFromWorldGenerator", &UVoxelWorldGeneratorTools::execCreateFloatTextureFromWorldGenerator },
			{ "CreateFloatTextureFromWorldGeneratorAsync", &UVoxelWorldGeneratorTools::execCreateFloatTextureFromWorldGeneratorAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics
	{
		struct VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms
		{
			FVoxelColorTexture OutTexture;
			UVoxelWorldGenerator* WorldGenerator;
			TMap<FName,int32> Seeds;
			FName OutputName;
			int32 SizeX;
			int32 SizeY;
			float Scale;
			int32 StartX;
			int32 StartY;
			float VoxelSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms, VoxelSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms, StartY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms, StartX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms, OutputName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Seeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms, WorldGenerator), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_VoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_StartX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_OutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_WorldGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::NewProp_OutTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize" },
		{ "AutoCreateRefTerm", "Seeds" },
		{ "Category", "Voxel|World Generators" },
		{ "Comment", "/**\n\x09 * Creates a color texture by reading a color output from a generator\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09WorldGenerator\x09\x09The world generator to use\n\x09 * @param\x09Seeds\x09\x09\x09\x09The seeds to pass to the world generator, optional\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a color output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09VoxelSize\x09\x09\x09The value returned by the Voxel Size node in the world generator graph\n\x09 */" },
		{ "CPP_Default_OutputName", "MyColor" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "CPP_Default_VoxelSize", "100.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelWorldGeneratorTools.h" },
		{ "ToolTip", "Creates a color texture by reading a color output from a generator\n\n@param       OutTexture                      The result\n@param       WorldGenerator          The world generator to use\n@param       Seeds                           The seeds to pass to the world generator, optional\n@param       OutputName                      The output name to query. Must be a color output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts\n@param       VoxelSize                       The value returned by the Voxel Size node in the world generator graph" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelWorldGeneratorTools, nullptr, "CreateColorTextureFromWorldGenerator", nullptr, nullptr, sizeof(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGenerator_Parms), Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics
	{
		struct VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelColorTexture OutTexture;
			UVoxelWorldGenerator* WorldGenerator;
			TMap<FName,int32> Seeds;
			FName OutputName;
			int32 SizeX;
			int32 SizeY;
			float Scale;
			int32 StartX;
			int32 StartY;
			float VoxelSize;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, VoxelSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, StartY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, StartX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, OutputName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, WorldGenerator), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelColorTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_VoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_StartX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_OutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_WorldGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_OutTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize, bHideLatentWarnings" },
		{ "AutoCreateRefTerm", "Seeds" },
		{ "Category", "Voxel|World Generators" },
		{ "Comment", "/**\n\x09 * Creates a color texture by reading a color output from a generator, asynchronously\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09WorldGenerator\x09\x09The world generator to use\n\x09 * @param\x09Seeds\x09\x09\x09\x09The seeds to pass to the world generator, optional\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a color output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09VoxelSize\x09\x09\x09The value returned by the Voxel Size node in the world generator graph\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_OutputName", "MyColor" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "CPP_Default_VoxelSize", "100.000000" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelWorldGeneratorTools.h" },
		{ "ToolTip", "Creates a color texture by reading a color output from a generator, asynchronously\n\n@param       OutTexture                      The result\n@param       WorldGenerator          The world generator to use\n@param       Seeds                           The seeds to pass to the world generator, optional\n@param       OutputName                      The output name to query. Must be a color output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts\n@param       VoxelSize                       The value returned by the Voxel Size node in the world generator graph" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelWorldGeneratorTools, nullptr, "CreateColorTextureFromWorldGeneratorAsync", nullptr, nullptr, sizeof(VoxelWorldGeneratorTools_eventCreateColorTextureFromWorldGeneratorAsync_Parms), Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics
	{
		struct VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms
		{
			FVoxelFloatTexture OutTexture;
			UVoxelWorldGenerator* WorldGenerator;
			TMap<FName,int32> Seeds;
			FName OutputName;
			int32 SizeX;
			int32 SizeY;
			float Scale;
			int32 StartX;
			int32 StartY;
			float VoxelSize;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms, VoxelSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms, StartY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms, StartX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms, OutputName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Seeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms, WorldGenerator), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_VoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_StartX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_OutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_WorldGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::NewProp_OutTexture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize" },
		{ "AutoCreateRefTerm", "Seeds" },
		{ "Category", "Voxel|World Generators" },
		{ "Comment", "/**\n\x09 * Creates a float texture by reading a float output from a generator\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09WorldGenerator\x09\x09The world generator to use\n\x09 * @param\x09Seeds\x09\x09\x09\x09The seeds to pass to the world generator, optional\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a float output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09VoxelSize\x09\x09\x09The value returned by the Voxel Size node in the world generator graph\n\x09 */" },
		{ "CPP_Default_OutputName", "Value" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "CPP_Default_VoxelSize", "100.000000" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelWorldGeneratorTools.h" },
		{ "ToolTip", "Creates a float texture by reading a float output from a generator\n\n@param       OutTexture                      The result\n@param       WorldGenerator          The world generator to use\n@param       Seeds                           The seeds to pass to the world generator, optional\n@param       OutputName                      The output name to query. Must be a float output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts\n@param       VoxelSize                       The value returned by the Voxel Size node in the world generator graph" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelWorldGeneratorTools, nullptr, "CreateFloatTextureFromWorldGenerator", nullptr, nullptr, sizeof(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGenerator_Parms), Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics
	{
		struct VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
			FVoxelFloatTexture OutTexture;
			UVoxelWorldGenerator* WorldGenerator;
			TMap<FName,int32> Seeds;
			FName OutputName;
			int32 SizeX;
			int32 SizeY;
			float Scale;
			int32 StartX;
			int32 StartY;
			float VoxelSize;
			bool bHideLatentWarnings;
		};
		static void NewProp_bHideLatentWarnings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideLatentWarnings;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VoxelSize;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Seeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Seeds;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Seeds_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Seeds_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTexture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit(void* Obj)
	{
		((VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms*)Obj)->bHideLatentWarnings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_bHideLatentWarnings = { "bHideLatentWarnings", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms), &Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_bHideLatentWarnings_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_VoxelSize = { "VoxelSize", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, VoxelSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_StartY = { "StartY", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, StartY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_StartX = { "StartX", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, StartX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, OutputName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds = { "Seeds", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, Seeds), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_Key_KeyProp = { "Seeds_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_ValueProp = { "Seeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, WorldGenerator), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_OutTexture = { "OutTexture", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, OutTexture), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_bHideLatentWarnings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_VoxelSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_StartY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_StartX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_SizeX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_OutputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_Seeds_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_WorldGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_OutTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "StartX, StartY, VoxelSize, bHideLatentWarnings" },
		{ "AutoCreateRefTerm", "Seeds" },
		{ "Category", "Voxel|World Generators" },
		{ "Comment", "/**\n\x09 * Creates a float texture by reading a float output from a generator, asynchronously\n\x09 * \n\x09 * @param\x09OutTexture\x09\x09\x09The result\n\x09 * @param\x09WorldGenerator\x09\x09The world generator to use\n\x09 * @param\x09Seeds\x09\x09\x09\x09The seeds to pass to the world generator, optional\n\x09 * @param\x09OutputName\x09\x09\x09The output name to query. Must be a float output.\n\x09 * @param\x09SizeX\x09\x09\x09\x09The Size of the resulting texture on the X axis\n\x09 * @param\x09SizeY\x09\x09\x09\x09The Size of the resulting texture on the Y axis\n\x09 * @param\x09Scale\x09\x09\x09\x09Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n\x09 * @param\x09StartX\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09StartY\x09\x09\x09\x09Where the texture starts\n\x09 * @param\x09VoxelSize\x09\x09\x09The value returned by the Voxel Size node in the world generator graph\n\x09 */" },
		{ "CPP_Default_bHideLatentWarnings", "false" },
		{ "CPP_Default_OutputName", "Value" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_SizeX", "512" },
		{ "CPP_Default_SizeY", "512" },
		{ "CPP_Default_StartX", "0" },
		{ "CPP_Default_StartY", "0" },
		{ "CPP_Default_VoxelSize", "100.000000" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelWorldGeneratorTools.h" },
		{ "ToolTip", "Creates a float texture by reading a float output from a generator, asynchronously\n\n@param       OutTexture                      The result\n@param       WorldGenerator          The world generator to use\n@param       Seeds                           The seeds to pass to the world generator, optional\n@param       OutputName                      The output name to query. Must be a float output.\n@param       SizeX                           The Size of the resulting texture on the X axis\n@param       SizeY                           The Size of the resulting texture on the Y axis\n@param       Scale                           Scale that can be used to scale the inputs: the generator will be queried as (Start + Position) * Scale\n@param       StartX                          Where the texture starts\n@param       StartY                          Where the texture starts\n@param       VoxelSize                       The value returned by the Voxel Size node in the world generator graph" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelWorldGeneratorTools, nullptr, "CreateFloatTextureFromWorldGeneratorAsync", nullptr, nullptr, sizeof(VoxelWorldGeneratorTools_eventCreateFloatTextureFromWorldGeneratorAsync_Parms), Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelWorldGeneratorTools_NoRegister()
	{
		return UVoxelWorldGeneratorTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelWorldGeneratorTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelWorldGeneratorTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelWorldGeneratorTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGenerator, "CreateColorTextureFromWorldGenerator" }, // 2026531020
		{ &Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateColorTextureFromWorldGeneratorAsync, "CreateColorTextureFromWorldGeneratorAsync" }, // 2440437938
		{ &Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGenerator, "CreateFloatTextureFromWorldGenerator" }, // 4224916942
		{ &Z_Construct_UFunction_UVoxelWorldGeneratorTools_CreateFloatTextureFromWorldGeneratorAsync, "CreateFloatTextureFromWorldGeneratorAsync" }, // 3953396781
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelWorldGeneratorTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTools/VoxelWorldGeneratorTools.h" },
		{ "ModuleRelativePath", "Public/VoxelTools/VoxelWorldGeneratorTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelWorldGeneratorTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelWorldGeneratorTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelWorldGeneratorTools_Statics::ClassParams = {
		&UVoxelWorldGeneratorTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelWorldGeneratorTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelWorldGeneratorTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelWorldGeneratorTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelWorldGeneratorTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelWorldGeneratorTools, 166908426);
	template<> VOXEL_API UClass* StaticClass<UVoxelWorldGeneratorTools>()
	{
		return UVoxelWorldGeneratorTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelWorldGeneratorTools(Z_Construct_UClass_UVoxelWorldGeneratorTools, &UVoxelWorldGeneratorTools::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelWorldGeneratorTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelWorldGeneratorTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
