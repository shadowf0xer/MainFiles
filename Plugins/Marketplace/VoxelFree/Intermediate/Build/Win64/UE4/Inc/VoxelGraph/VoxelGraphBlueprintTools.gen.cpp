// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelGraph/Public/VoxelGraphBlueprintTools.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelGraphBlueprintTools() {}
// Cross Module References
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphBlueprintTools_NoRegister();
	VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelGraphBlueprintTools();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VoxelGraph();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelWorldGenerator_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelFloatTexture();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelGraphBlueprintTools::execClearVoxelGraphParametersOverrides)
	{
		P_GET_OBJECT(UVoxelWorldGenerator,Z_Param_WorldGenerator);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelGraphBlueprintTools::ClearVoxelGraphParametersOverrides(Z_Param_WorldGenerator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGraphBlueprintTools::execSetVoxelGraphVoxelTextureParameter)
	{
		P_GET_OBJECT(UVoxelWorldGenerator,Z_Param_WorldGenerator);
		P_GET_PROPERTY(FNameProperty,Z_Param_UniqueName);
		P_GET_STRUCT(FVoxelFloatTexture,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelGraphBlueprintTools::SetVoxelGraphVoxelTextureParameter(Z_Param_WorldGenerator,Z_Param_UniqueName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGraphBlueprintTools::execSetVoxelGraphColorParameter)
	{
		P_GET_OBJECT(UVoxelWorldGenerator,Z_Param_WorldGenerator);
		P_GET_PROPERTY(FNameProperty,Z_Param_UniqueName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelGraphBlueprintTools::SetVoxelGraphColorParameter(Z_Param_WorldGenerator,Z_Param_UniqueName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGraphBlueprintTools::execSetVoxelGraphBoolParameter)
	{
		P_GET_OBJECT(UVoxelWorldGenerator,Z_Param_WorldGenerator);
		P_GET_PROPERTY(FNameProperty,Z_Param_UniqueName);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelGraphBlueprintTools::SetVoxelGraphBoolParameter(Z_Param_WorldGenerator,Z_Param_UniqueName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGraphBlueprintTools::execSetVoxelGraphIntParameter)
	{
		P_GET_OBJECT(UVoxelWorldGenerator,Z_Param_WorldGenerator);
		P_GET_PROPERTY(FNameProperty,Z_Param_UniqueName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelGraphBlueprintTools::SetVoxelGraphIntParameter(Z_Param_WorldGenerator,Z_Param_UniqueName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelGraphBlueprintTools::execSetVoxelGraphFloatParameter)
	{
		P_GET_OBJECT(UVoxelWorldGenerator,Z_Param_WorldGenerator);
		P_GET_PROPERTY(FNameProperty,Z_Param_UniqueName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVoxelGraphBlueprintTools::SetVoxelGraphFloatParameter(Z_Param_WorldGenerator,Z_Param_UniqueName,Z_Param_Value);
		P_NATIVE_END;
	}
	void UVoxelGraphBlueprintTools::StaticRegisterNativesUVoxelGraphBlueprintTools()
	{
		UClass* Class = UVoxelGraphBlueprintTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearVoxelGraphParametersOverrides", &UVoxelGraphBlueprintTools::execClearVoxelGraphParametersOverrides },
			{ "SetVoxelGraphBoolParameter", &UVoxelGraphBlueprintTools::execSetVoxelGraphBoolParameter },
			{ "SetVoxelGraphColorParameter", &UVoxelGraphBlueprintTools::execSetVoxelGraphColorParameter },
			{ "SetVoxelGraphFloatParameter", &UVoxelGraphBlueprintTools::execSetVoxelGraphFloatParameter },
			{ "SetVoxelGraphIntParameter", &UVoxelGraphBlueprintTools::execSetVoxelGraphIntParameter },
			{ "SetVoxelGraphVoxelTextureParameter", &UVoxelGraphBlueprintTools::execSetVoxelGraphVoxelTextureParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics
	{
		struct VoxelGraphBlueprintTools_eventClearVoxelGraphParametersOverrides_Parms
		{
			UVoxelWorldGenerator* WorldGenerator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventClearVoxelGraphParametersOverrides_Parms, WorldGenerator), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics::NewProp_WorldGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Graph" },
		{ "Comment", "// You need to call this before any SetVoxelGraphParameter to make sure no parameter override is left from a previous session\n" },
		{ "ModuleRelativePath", "Public/VoxelGraphBlueprintTools.h" },
		{ "ToolTip", "You need to call this before any SetVoxelGraphParameter to make sure no parameter override is left from a previous session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGraphBlueprintTools, nullptr, "ClearVoxelGraphParametersOverrides", nullptr, nullptr, sizeof(VoxelGraphBlueprintTools_eventClearVoxelGraphParametersOverrides_Parms), Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics
	{
		struct VoxelGraphBlueprintTools_eventSetVoxelGraphBoolParameter_Parms
		{
			UVoxelWorldGenerator* WorldGenerator;
			FName UniqueName;
			bool Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelGraphBlueprintTools_eventSetVoxelGraphBoolParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphBoolParameter_Parms), &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((VoxelGraphBlueprintTools_eventSetVoxelGraphBoolParameter_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphBoolParameter_Parms), &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphBoolParameter_Parms, UniqueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphBoolParameter_Parms, WorldGenerator), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_UniqueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::NewProp_WorldGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Graph" },
		{ "ModuleRelativePath", "Public/VoxelGraphBlueprintTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGraphBlueprintTools, nullptr, "SetVoxelGraphBoolParameter", nullptr, nullptr, sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphBoolParameter_Parms), Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics
	{
		struct VoxelGraphBlueprintTools_eventSetVoxelGraphColorParameter_Parms
		{
			UVoxelWorldGenerator* WorldGenerator;
			FName UniqueName;
			FLinearColor Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelGraphBlueprintTools_eventSetVoxelGraphColorParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphColorParameter_Parms), &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphColorParameter_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphColorParameter_Parms, UniqueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphColorParameter_Parms, WorldGenerator), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::NewProp_UniqueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::NewProp_WorldGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Graph" },
		{ "ModuleRelativePath", "Public/VoxelGraphBlueprintTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGraphBlueprintTools, nullptr, "SetVoxelGraphColorParameter", nullptr, nullptr, sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphColorParameter_Parms), Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics
	{
		struct VoxelGraphBlueprintTools_eventSetVoxelGraphFloatParameter_Parms
		{
			UVoxelWorldGenerator* WorldGenerator;
			FName UniqueName;
			float Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelGraphBlueprintTools_eventSetVoxelGraphFloatParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphFloatParameter_Parms), &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphFloatParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphFloatParameter_Parms, UniqueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphFloatParameter_Parms, WorldGenerator), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::NewProp_UniqueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::NewProp_WorldGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Graph" },
		{ "ModuleRelativePath", "Public/VoxelGraphBlueprintTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGraphBlueprintTools, nullptr, "SetVoxelGraphFloatParameter", nullptr, nullptr, sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphFloatParameter_Parms), Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics
	{
		struct VoxelGraphBlueprintTools_eventSetVoxelGraphIntParameter_Parms
		{
			UVoxelWorldGenerator* WorldGenerator;
			FName UniqueName;
			int32 Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelGraphBlueprintTools_eventSetVoxelGraphIntParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphIntParameter_Parms), &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphIntParameter_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphIntParameter_Parms, UniqueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphIntParameter_Parms, WorldGenerator), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::NewProp_UniqueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::NewProp_WorldGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Graph" },
		{ "ModuleRelativePath", "Public/VoxelGraphBlueprintTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGraphBlueprintTools, nullptr, "SetVoxelGraphIntParameter", nullptr, nullptr, sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphIntParameter_Parms), Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics
	{
		struct VoxelGraphBlueprintTools_eventSetVoxelGraphVoxelTextureParameter_Parms
		{
			UVoxelWorldGenerator* WorldGenerator;
			FName UniqueName;
			FVoxelFloatTexture Value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniqueName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldGenerator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelGraphBlueprintTools_eventSetVoxelGraphVoxelTextureParameter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphVoxelTextureParameter_Parms), &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphVoxelTextureParameter_Parms, Value), Z_Construct_UScriptStruct_FVoxelFloatTexture, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphVoxelTextureParameter_Parms, UniqueName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::NewProp_WorldGenerator = { "WorldGenerator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelGraphBlueprintTools_eventSetVoxelGraphVoxelTextureParameter_Parms, WorldGenerator), Z_Construct_UClass_UVoxelWorldGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::NewProp_UniqueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::NewProp_WorldGenerator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Voxel Graph" },
		{ "ModuleRelativePath", "Public/VoxelGraphBlueprintTools.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelGraphBlueprintTools, nullptr, "SetVoxelGraphVoxelTextureParameter", nullptr, nullptr, sizeof(VoxelGraphBlueprintTools_eventSetVoxelGraphVoxelTextureParameter_Parms), Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelGraphBlueprintTools_NoRegister()
	{
		return UVoxelGraphBlueprintTools::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelGraphBlueprintTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelGraphBlueprintTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelGraphBlueprintTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelGraphBlueprintTools_ClearVoxelGraphParametersOverrides, "ClearVoxelGraphParametersOverrides" }, // 482117375
		{ &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphBoolParameter, "SetVoxelGraphBoolParameter" }, // 2074515495
		{ &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphColorParameter, "SetVoxelGraphColorParameter" }, // 1992483256
		{ &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphFloatParameter, "SetVoxelGraphFloatParameter" }, // 2255607264
		{ &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphIntParameter, "SetVoxelGraphIntParameter" }, // 3661081262
		{ &Z_Construct_UFunction_UVoxelGraphBlueprintTools_SetVoxelGraphVoxelTextureParameter, "SetVoxelGraphVoxelTextureParameter" }, // 2921106906
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelGraphBlueprintTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelGraphBlueprintTools.h" },
		{ "ModuleRelativePath", "Public/VoxelGraphBlueprintTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelGraphBlueprintTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelGraphBlueprintTools>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelGraphBlueprintTools_Statics::ClassParams = {
		&UVoxelGraphBlueprintTools::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVoxelGraphBlueprintTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelGraphBlueprintTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelGraphBlueprintTools()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelGraphBlueprintTools_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelGraphBlueprintTools, 3731188634);
	template<> VOXELGRAPH_API UClass* StaticClass<UVoxelGraphBlueprintTools>()
	{
		return UVoxelGraphBlueprintTools::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelGraphBlueprintTools(Z_Construct_UClass_UVoxelGraphBlueprintTools, &UVoxelGraphBlueprintTools::StaticClass, TEXT("/Script/VoxelGraph"), TEXT("UVoxelGraphBlueprintTools"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelGraphBlueprintTools);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
