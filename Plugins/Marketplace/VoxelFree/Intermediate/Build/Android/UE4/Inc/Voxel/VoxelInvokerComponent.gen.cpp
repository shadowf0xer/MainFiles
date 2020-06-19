// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelComponents/VoxelInvokerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelInvokerComponent() {}
// Cross Module References
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerComponentBase_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerComponentBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UScriptStruct* Z_Construct_UScriptStruct_FVoxelInvokerSettings();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerWithPredictionComponent();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelInvokerAutoCameraComponent();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_UVoxelLODVolumeInvokerComponent();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelLODVolume_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelLODVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
// End Cross Module References
	DEFINE_FUNCTION(UVoxelInvokerComponentBase::execRefreshAllVoxelInvokers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UVoxelInvokerComponentBase::RefreshAllVoxelInvokers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelInvokerComponentBase::execIsInvokerEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInvokerEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelInvokerComponentBase::execDisableInvoker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableInvoker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelInvokerComponentBase::execEnableInvoker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableInvoker();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelInvokerComponentBase::execGetInvokerSettings)
	{
		P_GET_OBJECT(AVoxelWorldInterface,Z_Param_VoxelWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVoxelInvokerSettings*)Z_Param__Result=P_THIS->GetInvokerSettings_Implementation(Z_Param_VoxelWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelInvokerComponentBase::execGetInvokerVoxelPosition)
	{
		P_GET_OBJECT(AVoxelWorldInterface,Z_Param_VoxelWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntVector*)Z_Param__Result=P_THIS->GetInvokerVoxelPosition_Implementation(Z_Param_VoxelWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVoxelInvokerComponentBase::execIsLocalInvoker)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocalInvoker_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UVoxelInvokerComponentBase_GetInvokerSettings = FName(TEXT("GetInvokerSettings"));
	FVoxelInvokerSettings UVoxelInvokerComponentBase::GetInvokerSettings(AVoxelWorldInterface* VoxelWorld) const
	{
		VoxelInvokerComponentBase_eventGetInvokerSettings_Parms Parms;
		Parms.VoxelWorld=VoxelWorld;
		const_cast<UVoxelInvokerComponentBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UVoxelInvokerComponentBase_GetInvokerSettings),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVoxelInvokerComponentBase_GetInvokerVoxelPosition = FName(TEXT("GetInvokerVoxelPosition"));
	FIntVector UVoxelInvokerComponentBase::GetInvokerVoxelPosition(AVoxelWorldInterface* VoxelWorld) const
	{
		VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms Parms;
		Parms.VoxelWorld=VoxelWorld;
		const_cast<UVoxelInvokerComponentBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UVoxelInvokerComponentBase_GetInvokerVoxelPosition),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UVoxelInvokerComponentBase_IsLocalInvoker = FName(TEXT("IsLocalInvoker"));
	bool UVoxelInvokerComponentBase::IsLocalInvoker() const
	{
		VoxelInvokerComponentBase_eventIsLocalInvoker_Parms Parms;
		const_cast<UVoxelInvokerComponentBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UVoxelInvokerComponentBase_IsLocalInvoker),&Parms);
		return !!Parms.ReturnValue;
	}
	void UVoxelInvokerComponentBase::StaticRegisterNativesUVoxelInvokerComponentBase()
	{
		UClass* Class = UVoxelInvokerComponentBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableInvoker", &UVoxelInvokerComponentBase::execDisableInvoker },
			{ "EnableInvoker", &UVoxelInvokerComponentBase::execEnableInvoker },
			{ "GetInvokerSettings", &UVoxelInvokerComponentBase::execGetInvokerSettings },
			{ "GetInvokerVoxelPosition", &UVoxelInvokerComponentBase::execGetInvokerVoxelPosition },
			{ "IsInvokerEnabled", &UVoxelInvokerComponentBase::execIsInvokerEnabled },
			{ "IsLocalInvoker", &UVoxelInvokerComponentBase::execIsLocalInvoker },
			{ "RefreshAllVoxelInvokers", &UVoxelInvokerComponentBase::execRefreshAllVoxelInvokers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "DisableInvoker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "EnableInvoker", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelInvokerComponentBase_eventGetInvokerSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FVoxelInvokerSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelInvokerComponentBase_eventGetInvokerSettings_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorldInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::NewProp_VoxelWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "Comment", "// Get the invoker settings\n// All the bounds are in voxel space\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Get the invoker settings\nAll the bounds are in voxel space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "GetInvokerSettings", nullptr, nullptr, sizeof(VoxelInvokerComponentBase_eventGetInvokerSettings_Parms), Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoxelWorld;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::NewProp_VoxelWorld = { "VoxelWorld", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms, VoxelWorld), Z_Construct_UClass_AVoxelWorldInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::NewProp_VoxelWorld,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "Comment", "// Used to detect if the invoker has moved\n// Also used for events\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Used to detect if the invoker has moved\nAlso used for events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "GetInvokerVoxelPosition", nullptr, nullptr, sizeof(VoxelInvokerComponentBase_eventGetInvokerVoxelPosition_Parms), Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics
	{
		struct VoxelInvokerComponentBase_eventIsInvokerEnabled_Parms
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
	void Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelInvokerComponentBase_eventIsInvokerEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelInvokerComponentBase_eventIsInvokerEnabled_Parms), &Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "IsInvokerEnabled", nullptr, nullptr, sizeof(VoxelInvokerComponentBase_eventIsInvokerEnabled_Parms), Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VoxelInvokerComponentBase_eventIsLocalInvoker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VoxelInvokerComponentBase_eventIsLocalInvoker_Parms), &Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "Comment", "// Is this invoker local? If false, bUseForLOD will always be considered as false\n// Useful for multiplayer, to only compute the LOD for the local player\n// Defaults to Cast<APawn>(GetOwner())->IsLocallyControlled()\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Is this invoker local? If false, bUseForLOD will always be considered as false\nUseful for multiplayer, to only compute the LOD for the local player\nDefaults to Cast<APawn>(GetOwner())->IsLocallyControlled()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "IsLocalInvoker", nullptr, nullptr, sizeof(VoxelInvokerComponentBase_eventIsLocalInvoker_Parms), Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelInvokerComponentBase, nullptr, "RefreshAllVoxelInvokers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelInvokerComponentBase_NoRegister()
	{
		return UVoxelInvokerComponentBase::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInvokerComponentBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStartsEnabled_MetaData[];
#endif
		static void NewProp_bStartsEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStartsEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForPriorities_MetaData[];
#endif
		static void NewProp_bUseForPriorities_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForPriorities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForEvents_MetaData[];
#endif
		static void NewProp_bUseForEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForEvents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_DisableInvoker, "DisableInvoker" }, // 3369136756
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_EnableInvoker, "EnableInvoker" }, // 1155013233
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerSettings, "GetInvokerSettings" }, // 195884635
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_GetInvokerVoxelPosition, "GetInvokerVoxelPosition" }, // 2500709844
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_IsInvokerEnabled, "IsInvokerEnabled" }, // 85083736
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_IsLocalInvoker, "IsLocalInvoker" }, // 1266525779
		{ &Z_Construct_UFunction_UVoxelInvokerComponentBase_RefreshAllVoxelInvokers, "RefreshAllVoxelInvokers" }, // 2029682235
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Voxel" },
		{ "Comment", "// Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled_MetaData[] = {
		{ "Category", "Voxel Invoker" },
		{ "Comment", "// Whether to enable the invoker when spawned\n// If not, you'll need to call EnableInvoker\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Whether to enable the invoker when spawned\nIf not, you'll need to call EnableInvoker" },
	};
#endif
	void Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled_SetBit(void* Obj)
	{
		((UVoxelInvokerComponentBase*)Obj)->bStartsEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled = { "bStartsEnabled", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelInvokerComponentBase), &Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities_MetaData[] = {
		{ "Category", "Voxel Invoker|Priority" },
		{ "Comment", "// Whether to use to compute the tasks priorities\n// If true, the task priorities will be higher if they are closer to this\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Whether to use to compute the tasks priorities\nIf true, the task priorities will be higher if they are closer to this" },
	};
#endif
	void Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities_SetBit(void* Obj)
	{
		((UVoxelInvokerComponentBase*)Obj)->bUseForPriorities = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities = { "bUseForPriorities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelInvokerComponentBase), &Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents_MetaData[] = {
		{ "Category", "Voxel Invoker|Events" },
		{ "Comment", "// Whether or not this invoker will be used to trigger voxel events\n// Example of voxel events include:\n// - foliage spawning\n// - foliage collisions\n// - manually bound events\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Whether or not this invoker will be used to trigger voxel events\nExample of voxel events include:\n- foliage spawning\n- foliage collisions\n- manually bound events" },
	};
#endif
	void Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents_SetBit(void* Obj)
	{
		((UVoxelInvokerComponentBase*)Obj)->bUseForEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents = { "bUseForEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelInvokerComponentBase), &Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bStartsEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForPriorities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::NewProp_bUseForEvents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInvokerComponentBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::ClassParams = {
		&UVoxelInvokerComponentBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInvokerComponentBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInvokerComponentBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInvokerComponentBase, 3679667455);
	template<> VOXEL_API UClass* StaticClass<UVoxelInvokerComponentBase>()
	{
		return UVoxelInvokerComponentBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInvokerComponentBase(Z_Construct_UClass_UVoxelInvokerComponentBase, &UVoxelInvokerComponentBase::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelInvokerComponentBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInvokerComponentBase);
	DEFINE_FUNCTION(UVoxelSimpleInvokerComponent::execGetInvokerGlobalPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInvokerGlobalPosition_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition = FName(TEXT("GetInvokerGlobalPosition"));
	FVector UVoxelSimpleInvokerComponent::GetInvokerGlobalPosition() const
	{
		VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms Parms;
		const_cast<UVoxelSimpleInvokerComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition),&Parms);
		return Parms.ReturnValue;
	}
	void UVoxelSimpleInvokerComponent::StaticRegisterNativesUVoxelSimpleInvokerComponent()
	{
		UClass* Class = UVoxelSimpleInvokerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInvokerGlobalPosition", &UVoxelSimpleInvokerComponent::execGetInvokerGlobalPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Voxel|Invoker" },
		{ "Comment", "// VoxelSimpleInvokerComponent's GetInvokerVoxelPosition and GetInvokerSettings functions are calling GetInvokerGlobalPosition to find the global position of the invoker\n// Defaults to GetComponentPosition\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "VoxelSimpleInvokerComponent's GetInvokerVoxelPosition and GetInvokerSettings functions are calling GetInvokerGlobalPosition to find the global position of the invoker\nDefaults to GetComponentPosition" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVoxelSimpleInvokerComponent, nullptr, "GetInvokerGlobalPosition", nullptr, nullptr, sizeof(VoxelSimpleInvokerComponent_eventGetInvokerGlobalPosition_Parms), Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent_NoRegister()
	{
		return UVoxelSimpleInvokerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavmeshRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NavmeshRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForNavmesh_MetaData[];
#endif
		static void NewProp_bUseForNavmesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForNavmesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionsRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionsRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForCollisions_MetaData[];
#endif
		static void NewProp_bUseForCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODToSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForLOD_MetaData[];
#endif
		static void NewProp_bUseForLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelInvokerComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVoxelSimpleInvokerComponent_GetInvokerGlobalPosition, "GetInvokerGlobalPosition" }, // 1738569855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Voxel" },
		{ "Comment", "// Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\n// Simple position based invoker\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\nSimple position based invoker" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_NavmeshRange_MetaData[] = {
		{ "Category", "Voxel Invoker|Navmesh" },
		{ "ClampMin", "0" },
		{ "Comment", "// In cm. Will enable high res navmesh on chunks under this distance from this invoker\n" },
		{ "EditCondition", "bUseForNavmesh" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "In cm. Will enable high res navmesh on chunks under this distance from this invoker" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_NavmeshRange = { "NavmeshRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSimpleInvokerComponent, NavmeshRange), METADATA_PARAMS(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_NavmeshRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_NavmeshRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh_MetaData[] = {
		{ "Category", "Voxel Invoker|Navmesh" },
		{ "Comment", "// Will enable high res navmesh around the invoker\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Will enable high res navmesh around the invoker" },
	};
#endif
	void Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh_SetBit(void* Obj)
	{
		((UVoxelSimpleInvokerComponent*)Obj)->bUseForNavmesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh = { "bUseForNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSimpleInvokerComponent), &Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_CollisionsRange_MetaData[] = {
		{ "Category", "Voxel Invoker|Collisions" },
		{ "ClampMin", "0" },
		{ "Comment", "// In cm. Will enable high res collisions on chunks under this distance from this invoker\n" },
		{ "EditCondition", "bUseForCollisions" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "In cm. Will enable high res collisions on chunks under this distance from this invoker" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_CollisionsRange = { "CollisionsRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSimpleInvokerComponent, CollisionsRange), METADATA_PARAMS(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_CollisionsRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_CollisionsRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions_MetaData[] = {
		{ "Category", "Voxel Invoker|Collisions" },
		{ "Comment", "// Will enable high res collisions around the invoker\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Will enable high res collisions around the invoker" },
	};
#endif
	void Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions_SetBit(void* Obj)
	{
		((UVoxelSimpleInvokerComponent*)Obj)->bUseForCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions = { "bUseForCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSimpleInvokerComponent), &Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODRange_MetaData[] = {
		{ "Category", "Voxel Invoker|LOD" },
		{ "ClampMin", "0" },
		{ "Comment", "// In cm. Will set LODToSet around the invoker on this distance\n" },
		{ "DisplayName", "LOD Range" },
		{ "EditCondition", "bUseForLOD" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "In cm. Will set LODToSet around the invoker on this distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODRange = { "LODRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSimpleInvokerComponent, LODRange), METADATA_PARAMS(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODToSet_MetaData[] = {
		{ "Category", "Voxel Invoker|LOD" },
		{ "ClampMax", "26" },
		{ "ClampMin", "0" },
		{ "Comment", "// You should leave this to 0\n" },
		{ "DisplayName", "LOD to Set" },
		{ "EditCondition", "bUseForLOD" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "You should leave this to 0" },
		{ "UIMax", "26" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODToSet = { "LODToSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelSimpleInvokerComponent, LODToSet), METADATA_PARAMS(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODToSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD_MetaData[] = {
		{ "Category", "Voxel Invoker|LOD" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD_SetBit(void* Obj)
	{
		((UVoxelSimpleInvokerComponent*)Obj)->bUseForLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD = { "bUseForLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelSimpleInvokerComponent), &Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_NavmeshRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForNavmesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_CollisionsRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_LODToSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::NewProp_bUseForLOD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelSimpleInvokerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::ClassParams = {
		&UVoxelSimpleInvokerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelSimpleInvokerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelSimpleInvokerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelSimpleInvokerComponent, 3193707470);
	template<> VOXEL_API UClass* StaticClass<UVoxelSimpleInvokerComponent>()
	{
		return UVoxelSimpleInvokerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelSimpleInvokerComponent(Z_Construct_UClass_UVoxelSimpleInvokerComponent, &UVoxelSimpleInvokerComponent::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelSimpleInvokerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelSimpleInvokerComponent);
	void UVoxelInvokerWithPredictionComponent::StaticRegisterNativesUVoxelInvokerWithPredictionComponent()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_NoRegister()
	{
		return UVoxelInvokerWithPredictionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredictionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PredictionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePrediction_MetaData[];
#endif
		static void NewProp_bEnablePrediction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePrediction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSimpleInvokerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Voxel" },
		{ "Comment", "// Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\n// Same as simple invoker, but optionally use the velocity to predict the position\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\nSame as simple invoker, but optionally use the velocity to predict the position" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_PredictionTime_MetaData[] = {
		{ "Category", "Voxel Invoker|Prediction" },
		{ "ClampMin", "0" },
		{ "Comment", "// Will multiply the velocity by this to get the new position\n" },
		{ "EditCondition", "bEnablePrediction" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Will multiply the velocity by this to get the new position" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_PredictionTime = { "PredictionTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelInvokerWithPredictionComponent, PredictionTime), METADATA_PARAMS(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_PredictionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_PredictionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction_MetaData[] = {
		{ "Category", "Voxel Invoker|Prediction" },
		{ "Comment", "// Will use the speed of the owner to determine the position to use\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Will use the speed of the owner to determine the position to use" },
	};
#endif
	void Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction_SetBit(void* Obj)
	{
		((UVoxelInvokerWithPredictionComponent*)Obj)->bEnablePrediction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction = { "bEnablePrediction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelInvokerWithPredictionComponent), &Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_PredictionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::NewProp_bEnablePrediction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInvokerWithPredictionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::ClassParams = {
		&UVoxelInvokerWithPredictionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInvokerWithPredictionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInvokerWithPredictionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInvokerWithPredictionComponent, 2110194738);
	template<> VOXEL_API UClass* StaticClass<UVoxelInvokerWithPredictionComponent>()
	{
		return UVoxelInvokerWithPredictionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInvokerWithPredictionComponent(Z_Construct_UClass_UVoxelInvokerWithPredictionComponent, &UVoxelInvokerWithPredictionComponent::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelInvokerWithPredictionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInvokerWithPredictionComponent);
	void UVoxelInvokerAutoCameraComponent::StaticRegisterNativesUVoxelInvokerAutoCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_NoRegister()
	{
		return UVoxelInvokerAutoCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelSimpleInvokerComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Voxel" },
		{ "Comment", "// Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\n// Will find the camera and use it to set its position\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Voxel Invokers are used to configure the voxel world LOD, collisions and navmesh\nWill find the camera and use it to set its position" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelInvokerAutoCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::ClassParams = {
		&UVoxelInvokerAutoCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelInvokerAutoCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelInvokerAutoCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelInvokerAutoCameraComponent, 1738117270);
	template<> VOXEL_API UClass* StaticClass<UVoxelInvokerAutoCameraComponent>()
	{
		return UVoxelInvokerAutoCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelInvokerAutoCameraComponent(Z_Construct_UClass_UVoxelInvokerAutoCameraComponent, &UVoxelInvokerAutoCameraComponent::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelInvokerAutoCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelInvokerAutoCameraComponent);
	void UVoxelLODVolumeInvokerComponent::StaticRegisterNativesUVoxelLODVolumeInvokerComponent()
	{
	}
	UClass* Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_NoRegister()
	{
		return UVoxelLODVolumeInvokerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForNavmesh_MetaData[];
#endif
		static void NewProp_bUseForNavmesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForNavmesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForCollisions_MetaData[];
#endif
		static void NewProp_bUseForCollisions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForCollisions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODToSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODToSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseForLOD_MetaData[];
#endif
		static void NewProp_bUseForLOD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseForLOD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVoxelInvokerComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh_MetaData[] = {
		{ "Category", "Voxel Invoker|Volume" },
		{ "Comment", "// Will compute high res navmesh in the volume\n// Note that navmesh might still be computed by the voxel world even if this is false\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Will compute high res navmesh in the volume\nNote that navmesh might still be computed by the voxel world even if this is false" },
	};
#endif
	void Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh_SetBit(void* Obj)
	{
		((UVoxelLODVolumeInvokerComponent*)Obj)->bUseForNavmesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh = { "bUseForNavmesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelLODVolumeInvokerComponent), &Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions_MetaData[] = {
		{ "Category", "Voxel Invoker|Volume" },
		{ "Comment", "// Will compute high res collision in the volume\n// Note that collisions might still be computed by the voxel world even if this is false\n" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Will compute high res collision in the volume\nNote that collisions might still be computed by the voxel world even if this is false" },
	};
#endif
	void Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions_SetBit(void* Obj)
	{
		((UVoxelLODVolumeInvokerComponent*)Obj)->bUseForCollisions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions = { "bUseForCollisions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelLODVolumeInvokerComponent), &Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_LODToSet_MetaData[] = {
		{ "Category", "Voxel Invoker|Volume" },
		{ "Comment", "// Will set the LOD in the volume to a fixed value\n// Note that the displayed LOD might have a higher resolution than this if another invoker is close\n" },
		{ "DisplayName", "LOD to Set" },
		{ "EditCondition", "bUseForLOD" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Will set the LOD in the volume to a fixed value\nNote that the displayed LOD might have a higher resolution than this if another invoker is close" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_LODToSet = { "LODToSet", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVoxelLODVolumeInvokerComponent, LODToSet), METADATA_PARAMS(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_LODToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_LODToSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD_MetaData[] = {
		{ "Category", "Voxel Invoker|Volume" },
		{ "Comment", "// Will set the LOD in the volume to a fixed value\n// Note that the displayed LOD might have a higher resolution than this if another invoker is close\n" },
		{ "DisplayName", "Use for LOD" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ToolTip", "Will set the LOD in the volume to a fixed value\nNote that the displayed LOD might have a higher resolution than this if another invoker is close" },
	};
#endif
	void Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD_SetBit(void* Obj)
	{
		((UVoxelLODVolumeInvokerComponent*)Obj)->bUseForLOD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD = { "bUseForLOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UVoxelLODVolumeInvokerComponent), &Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForNavmesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForCollisions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_LODToSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::NewProp_bUseForLOD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelLODVolumeInvokerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::ClassParams = {
		&UVoxelLODVolumeInvokerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVoxelLODVolumeInvokerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVoxelLODVolumeInvokerComponent, 135266540);
	template<> VOXEL_API UClass* StaticClass<UVoxelLODVolumeInvokerComponent>()
	{
		return UVoxelLODVolumeInvokerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVoxelLODVolumeInvokerComponent(Z_Construct_UClass_UVoxelLODVolumeInvokerComponent, &UVoxelLODVolumeInvokerComponent::StaticClass, TEXT("/Script/Voxel"), TEXT("UVoxelLODVolumeInvokerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelLODVolumeInvokerComponent);
	void AVoxelLODVolume::StaticRegisterNativesAVoxelLODVolume()
	{
	}
	UClass* Z_Construct_UClass_AVoxelLODVolume_NoRegister()
	{
		return AVoxelLODVolume::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelLODVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvokerComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvokerComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelLODVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelLODVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Volume with a voxel invoker\n// Sets the LOD of the voxels in a volume, or always enable collision/navmesh in a volume\n" },
		{ "DisplayName", "Voxel LOD Volume" },
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "VoxelComponents/VoxelInvokerComponent.h" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Volume with a voxel invoker\nSets the LOD of the voxels in a volume, or always enable collision/navmesh in a volume" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelLODVolume_Statics::NewProp_InvokerComponent_MetaData[] = {
		{ "Category", "Voxel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VoxelComponents/VoxelInvokerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelLODVolume_Statics::NewProp_InvokerComponent = { "InvokerComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVoxelLODVolume, InvokerComponent), Z_Construct_UClass_UVoxelLODVolumeInvokerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelLODVolume_Statics::NewProp_InvokerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLODVolume_Statics::NewProp_InvokerComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelLODVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelLODVolume_Statics::NewProp_InvokerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelLODVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelLODVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelLODVolume_Statics::ClassParams = {
		&AVoxelLODVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVoxelLODVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLODVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelLODVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelLODVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelLODVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelLODVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelLODVolume, 695982342);
	template<> VOXEL_API UClass* StaticClass<AVoxelLODVolume>()
	{
		return AVoxelLODVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelLODVolume(Z_Construct_UClass_AVoxelLODVolume, &AVoxelLODVolume::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelLODVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelLODVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
