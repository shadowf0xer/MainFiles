// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetSelectionPlugin/Public/TargetSelectionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetSelectionComponent() {}
// Cross Module References
	TARGETSELECTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TargetSelectionPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TARGETSELECTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature();
	TARGETSELECTIONPLUGIN_API UClass* Z_Construct_UClass_UTargetSelectionComponent_NoRegister();
	TARGETSELECTIONPLUGIN_API UClass* Z_Construct_UClass_UTargetSelectionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics
	{
		struct _Script_TargetSelectionPlugin_eventOnSwitchActorS_Parms
		{
			AActor* ObservedActorNow;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObservedActorNow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics::NewProp_ObservedActorNow = { "ObservedActorNow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TargetSelectionPlugin_eventOnSwitchActorS_Parms, ObservedActorNow), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics::NewProp_ObservedActorNow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*A dispatcher that is called up each time you switch to a new actor.\n\x09@param ObservedActorNow The actor being watched now.\n*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "A dispatcher that is called up each time you switch to a new actor.\n       @param ObservedActorNow The actor being watched now." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TargetSelectionPlugin, nullptr, "OnSwitchActorS__DelegateSignature", nullptr, nullptr, sizeof(_Script_TargetSelectionPlugin_eventOnSwitchActorS_Parms), Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics
	{
		struct _Script_TargetSelectionPlugin_eventOnStateOfTargetSelection_Parms
		{
			bool bIsEnableTargetSelection;
		};
		static void NewProp_bIsEnableTargetSelection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnableTargetSelection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::NewProp_bIsEnableTargetSelection_SetBit(void* Obj)
	{
		((_Script_TargetSelectionPlugin_eventOnStateOfTargetSelection_Parms*)Obj)->bIsEnableTargetSelection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::NewProp_bIsEnableTargetSelection = { "bIsEnableTargetSelection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TargetSelectionPlugin_eventOnStateOfTargetSelection_Parms), &Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::NewProp_bIsEnableTargetSelection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::NewProp_bIsEnableTargetSelection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*A dispatcher called up when you enable or disable observation.\n\x09@param bIsEnableTargetSelection On or off.\n*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "A dispatcher called up when you enable or disable observation.\n       @param bIsEnableTargetSelection On or off." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TargetSelectionPlugin, nullptr, "OnStateOfTargetSelection__DelegateSignature", nullptr, nullptr, sizeof(_Script_TargetSelectionPlugin_eventOnStateOfTargetSelection_Parms), Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execSetObservedActorByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexOfNewObservedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObservedActorByIndex(Z_Param_IndexOfNewObservedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execSetObservedActorByPointer)
	{
		P_GET_OBJECT(AActor,Z_Param_NewObservedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObservedActorByPointer(Z_Param_NewObservedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execGetIsCustomArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsCustomArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execGetIsWatchingNow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsWatchingNow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execGetTargetSelectionCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USphereComponent**)Z_Param__Result=P_THIS->GetTargetSelectionCollision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execGetObservedActorsArr)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetObservedActorsArr();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execGetIndexOfCurrentObservedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIndexOfCurrentObservedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execGetObservedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetObservedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execAddActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActor(Z_Param_NewActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execRemoveAndSwitchActors)
	{
		P_GET_OBJECT(AActor,Z_Param_RemovingActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAndSwitchActors(Z_Param_RemovingActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execOffWatchingActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OffWatchingActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execWatchActors_CustomArray)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_CustomArray);
		P_GET_STRUCT(FKey,Z_Param_InputKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WatchActors_CustomArray(Z_Param_Out_CustomArray,Z_Param_InputKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execWatchActors_OneFilter_Interface)
	{
		P_GET_OBJECT(UClass,Z_Param_InterfaceFilter);
		P_GET_STRUCT(FKey,Z_Param_InputKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WatchActors_OneFilter_Interface(Z_Param_InterfaceFilter,Z_Param_InputKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetSelectionComponent::execWatchActors)
	{
		P_GET_TARRAY_REF(TSubclassOf<AActor> ,Z_Param_Out_ClassesFilter);
		P_GET_TARRAY_REF(TSubclassOf<AActor> ,Z_Param_Out_ClassesFilterException);
		P_GET_OBJECT(UClass,Z_Param_InterfaceFilter);
		P_GET_STRUCT(FKey,Z_Param_InputKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WatchActors(Z_Param_Out_ClassesFilter,Z_Param_Out_ClassesFilterException,Z_Param_InterfaceFilter,Z_Param_InputKey);
		P_NATIVE_END;
	}
	void UTargetSelectionComponent::StaticRegisterNativesUTargetSelectionComponent()
	{
		UClass* Class = UTargetSelectionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActor", &UTargetSelectionComponent::execAddActor },
			{ "GetIndexOfCurrentObservedActor", &UTargetSelectionComponent::execGetIndexOfCurrentObservedActor },
			{ "GetIsCustomArray", &UTargetSelectionComponent::execGetIsCustomArray },
			{ "GetIsWatchingNow", &UTargetSelectionComponent::execGetIsWatchingNow },
			{ "GetObservedActor", &UTargetSelectionComponent::execGetObservedActor },
			{ "GetObservedActorsArr", &UTargetSelectionComponent::execGetObservedActorsArr },
			{ "GetTargetSelectionCollision", &UTargetSelectionComponent::execGetTargetSelectionCollision },
			{ "OffWatchingActors", &UTargetSelectionComponent::execOffWatchingActors },
			{ "RemoveAndSwitchActors", &UTargetSelectionComponent::execRemoveAndSwitchActors },
			{ "SetObservedActorByIndex", &UTargetSelectionComponent::execSetObservedActorByIndex },
			{ "SetObservedActorByPointer", &UTargetSelectionComponent::execSetObservedActorByPointer },
			{ "WatchActors", &UTargetSelectionComponent::execWatchActors },
			{ "WatchActors_CustomArray", &UTargetSelectionComponent::execWatchActors_CustomArray },
			{ "WatchActors_OneFilter_Interface", &UTargetSelectionComponent::execWatchActors_OneFilter_Interface },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics
	{
		struct TargetSelectionComponent_eventAddActor_Parms
		{
			AActor* NewActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventAddActor_Parms, NewActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics::NewProp_NewActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*\n\x09\x09""Add an actor to the array. Must be triggered when an actor enters a collision.\n\x09\x09@param FindedActor The actor that came into collision.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Add an actor to the array. Must be triggered when an actor enters a collision.\n@param FindedActor The actor that came into collision." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "AddActor", nullptr, nullptr, sizeof(TargetSelectionComponent_eventAddActor_Parms), Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_AddActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_AddActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics
	{
		struct TargetSelectionComponent_eventGetIndexOfCurrentObservedActor_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventGetIndexOfCurrentObservedActor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Get index of the currently observed ObservedActor actor in the ObservedActorsArr array.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Get index of the currently observed ObservedActor actor in the ObservedActorsArr array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "GetIndexOfCurrentObservedActor", nullptr, nullptr, sizeof(TargetSelectionComponent_eventGetIndexOfCurrentObservedActor_Parms), Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics
	{
		struct TargetSelectionComponent_eventGetIsCustomArray_Parms
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
	void Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetSelectionComponent_eventGetIsCustomArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TargetSelectionComponent_eventGetIsCustomArray_Parms), &Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Get current state - uses an outside array?*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Get current state - uses an outside array?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "GetIsCustomArray", nullptr, nullptr, sizeof(TargetSelectionComponent_eventGetIsCustomArray_Parms), Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics
	{
		struct TargetSelectionComponent_eventGetIsWatchingNow_Parms
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
	void Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TargetSelectionComponent_eventGetIsWatchingNow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TargetSelectionComponent_eventGetIsWatchingNow_Parms), &Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Get the current state - is it being observed now?*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Get the current state - is it being observed now?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "GetIsWatchingNow", nullptr, nullptr, sizeof(TargetSelectionComponent_eventGetIsWatchingNow_Parms), Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics
	{
		struct TargetSelectionComponent_eventGetObservedActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventGetObservedActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Get a pointer to the observed actor.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Get a pointer to the observed actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "GetObservedActor", nullptr, nullptr, sizeof(TargetSelectionComponent_eventGetObservedActor_Parms), Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics
	{
		struct TargetSelectionComponent_eventGetObservedActorsArr_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventGetObservedActorsArr_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Get an array of actors that can be observed.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Get an array of actors that can be observed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "GetObservedActorsArr", nullptr, nullptr, sizeof(TargetSelectionComponent_eventGetObservedActorsArr_Parms), Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics
	{
		struct TargetSelectionComponent_eventGetTargetSelectionCollision_Parms
		{
			USphereComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventGetTargetSelectionCollision_Parms, ReturnValue), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Get collision for actor observation.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Get collision for actor observation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "GetTargetSelectionCollision", nullptr, nullptr, sizeof(TargetSelectionComponent_eventGetTargetSelectionCollision_Parms), Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_OffWatchingActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_OffWatchingActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Turn off the observation. Must be triggered by pressing the disable observation key.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Turn off the observation. Must be triggered by pressing the disable observation key." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_OffWatchingActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "OffWatchingActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_OffWatchingActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_OffWatchingActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_OffWatchingActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_OffWatchingActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics
	{
		struct TargetSelectionComponent_eventRemoveAndSwitchActors_Parms
		{
			AActor* RemovingActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RemovingActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics::NewProp_RemovingActor = { "RemovingActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventRemoveAndSwitchActors_Parms, RemovingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics::NewProp_RemovingActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*\n\x09\x09Remove the actor from the array and switch to the next one. Must be triggered when the actor leaves the collision.\n\x09\x09@param LosedActor The actor what left the collision.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Remove the actor from the array and switch to the next one. Must be triggered when the actor leaves the collision.\n@param LosedActor The actor what left the collision." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "RemoveAndSwitchActors", nullptr, nullptr, sizeof(TargetSelectionComponent_eventRemoveAndSwitchActors_Parms), Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics
	{
		struct TargetSelectionComponent_eventSetObservedActorByIndex_Parms
		{
			int32 IndexOfNewObservedActor;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexOfNewObservedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics::NewProp_IndexOfNewObservedActor = { "IndexOfNewObservedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventSetObservedActorByIndex_Parms, IndexOfNewObservedActor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics::NewProp_IndexOfNewObservedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Assign the observed actor by index. The index is checked for validity.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Assign the observed actor by index. The index is checked for validity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "SetObservedActorByIndex", nullptr, nullptr, sizeof(TargetSelectionComponent_eventSetObservedActorByIndex_Parms), Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics
	{
		struct TargetSelectionComponent_eventSetObservedActorByPointer_Parms
		{
			AActor* NewObservedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewObservedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics::NewProp_NewObservedActor = { "NewObservedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventSetObservedActorByPointer_Parms, NewObservedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics::NewProp_NewObservedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*\n\x09""Assign the observed actor by the pointer. The actor must be in the ObservedActorsArr array.\n\x09If it is not in the array, add it using the AddActor method first.\n\x09NewObservedActor is checked for validity and presence in the array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Assign the observed actor by the pointer. The actor must be in the ObservedActorsArr array.\nIf it is not in the array, add it using the AddActor method first.\nNewObservedActor is checked for validity and presence in the array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "SetObservedActorByPointer", nullptr, nullptr, sizeof(TargetSelectionComponent_eventSetObservedActorByPointer_Parms), Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics
	{
		struct TargetSelectionComponent_eventWatchActors_Parms
		{
			TArray<TSubclassOf<AActor> > ClassesFilter;
			TArray<TSubclassOf<AActor> > ClassesFilterException;
			TSubclassOf<UInterface>  InterfaceFilter;
			FKey InputKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InterfaceFilter;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassesFilterException;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassesFilterException_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClassesFilter;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassesFilter_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventWatchActors_Parms, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_InterfaceFilter = { "InterfaceFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventWatchActors_Parms, InterfaceFilter), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_ClassesFilterException = { "ClassesFilterException", nullptr, (EPropertyFlags)0x0014000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventWatchActors_Parms, ClassesFilterException), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_ClassesFilterException_Inner = { "ClassesFilterException", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_ClassesFilter = { "ClassesFilter", nullptr, (EPropertyFlags)0x0014000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventWatchActors_Parms, ClassesFilter), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_ClassesFilter_Inner = { "ClassesFilter", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_InterfaceFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_ClassesFilterException,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_ClassesFilterException_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_ClassesFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::NewProp_ClassesFilter_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*\n\x09\x09Watching the new actors. Must be triggered by pressing the observation key.\n\x09\x09@param ClassesFilter An array of references to the actor classes to be observed.\n\x09\x09@param ClassesFilterException An array of references to classes to be excluded from observation.\n\x09\x09@param InterfaceFilter Reference to the class of the interface that inherits the actors to be observed.\n\x09\x09@param IputKey Key pressed when observation is enabled. Allows you to set up observation of different actors by pressing different keys.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Watching the new actors. Must be triggered by pressing the observation key.\n@param ClassesFilter An array of references to the actor classes to be observed.\n@param ClassesFilterException An array of references to classes to be excluded from observation.\n@param InterfaceFilter Reference to the class of the interface that inherits the actors to be observed.\n@param IputKey Key pressed when observation is enabled. Allows you to set up observation of different actors by pressing different keys." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "WatchActors", nullptr, nullptr, sizeof(TargetSelectionComponent_eventWatchActors_Parms), Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_WatchActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics
	{
		struct TargetSelectionComponent_eventWatchActors_CustomArray_Parms
		{
			TArray<AActor*> CustomArray;
			FKey InputKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CustomArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventWatchActors_CustomArray_Parms, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::NewProp_CustomArray = { "CustomArray", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventWatchActors_CustomArray_Parms, CustomArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::NewProp_CustomArray_Inner = { "CustomArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::NewProp_CustomArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::NewProp_CustomArray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Watching the new actors. Version with outside array. The component works with a copy of the input array.\n\x09\x09@param CustomArray is an outside array. The array is checked for fullness. Array actors are checked for validity.\n\x09\x09@param IputKey Key pressed when observation is enabled. Allows you to set up observation of different actors by pressing different keys.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Watching the new actors. Version with outside array. The component works with a copy of the input array.\n               @param CustomArray is an outside array. The array is checked for fullness. Array actors are checked for validity.\n               @param IputKey Key pressed when observation is enabled. Allows you to set up observation of different actors by pressing different keys." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "WatchActors_CustomArray", nullptr, nullptr, sizeof(TargetSelectionComponent_eventWatchActors_CustomArray_Parms), Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics
	{
		struct TargetSelectionComponent_eventWatchActors_OneFilter_Interface_Parms
		{
			TSubclassOf<UInterface>  InterfaceFilter;
			FKey InputKey;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputKey;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InterfaceFilter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::NewProp_InputKey = { "InputKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventWatchActors_OneFilter_Interface_Parms, InputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::NewProp_InterfaceFilter = { "InterfaceFilter", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TargetSelectionComponent_eventWatchActors_OneFilter_Interface_Parms, InterfaceFilter), Z_Construct_UClass_UInterface, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::NewProp_InputKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::NewProp_InterfaceFilter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::Function_MetaDataParams[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*\n\x09Watching the new actors. Version with one filter by interface.\n\x09Must be triggered by pressing the observation key.\n\x09@param InterfaceFilter Reference to the class of the interface that inherits the actors to be observed.\n\x09@param IputKey Key pressed when observation is enabled. Allows you to set up observation of different actors by pressing different keys.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Watching the new actors. Version with one filter by interface.\nMust be triggered by pressing the observation key.\n@param InterfaceFilter Reference to the class of the interface that inherits the actors to be observed.\n@param IputKey Key pressed when observation is enabled. Allows you to set up observation of different actors by pressing different keys." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetSelectionComponent, nullptr, "WatchActors_OneFilter_Interface", nullptr, nullptr, sizeof(TargetSelectionComponent_eventWatchActors_OneFilter_Interface_Parms), Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTargetSelectionComponent_NoRegister()
	{
		return UTargetSelectionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTargetSelectionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCustomArray_MetaData[];
#endif
		static void NewProp_bIsCustomArray_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCustomArray;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWatchingNow_MetaData[];
#endif
		static void NewProp_bIsWatchingNow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWatchingNow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetSelectionCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetSelectionCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedActorsArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObservedActorsArr;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObservedActorsArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndexOfCurrentObservedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IndexOfCurrentObservedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObservedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObservedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSwitchActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSwitchActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnStateOfTargetSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateOfTargetSelection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCheckAddingActorsForDuplicates_MetaData[];
#endif
		static void NewProp_bIsCheckAddingActorsForDuplicates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCheckAddingActorsForDuplicates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShowCollision_MetaData[];
#endif
		static void NewProp_bIsShowCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShowCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDebugMode_MetaData[];
#endif
		static void NewProp_bIsDebugMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDebugMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSwitchToFirstActor_WhenRemoveObservedActor_MetaData[];
#endif
		static void NewProp_bIsSwitchToFirstActor_WhenRemoveObservedActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSwitchToFirstActor_WhenRemoveObservedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSortArrayOfActors_WhenAddNew_MetaData[];
#endif
		static void NewProp_bIsSortArrayOfActors_WhenAddNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSortArrayOfActors_WhenAddNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSortArrayOfActors_WhenRemove_MetaData[];
#endif
		static void NewProp_bIsSortArrayOfActors_WhenRemove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSortArrayOfActors_WhenRemove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSortArrayOfActors_WhenSwitch_MetaData[];
#endif
		static void NewProp_bIsSortArrayOfActors_WhenSwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSortArrayOfActors_WhenSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSortArrayOfActors_WhenBegin_MetaData[];
#endif
		static void NewProp_bIsSortArrayOfActors_WhenBegin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSortArrayOfActors_WhenBegin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetSelectionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetSelectionPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetSelectionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetSelectionComponent_AddActor, "AddActor" }, // 3531251032
		{ &Z_Construct_UFunction_UTargetSelectionComponent_GetIndexOfCurrentObservedActor, "GetIndexOfCurrentObservedActor" }, // 3274646504
		{ &Z_Construct_UFunction_UTargetSelectionComponent_GetIsCustomArray, "GetIsCustomArray" }, // 1379778677
		{ &Z_Construct_UFunction_UTargetSelectionComponent_GetIsWatchingNow, "GetIsWatchingNow" }, // 3255498561
		{ &Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActor, "GetObservedActor" }, // 1679317137
		{ &Z_Construct_UFunction_UTargetSelectionComponent_GetObservedActorsArr, "GetObservedActorsArr" }, // 600244532
		{ &Z_Construct_UFunction_UTargetSelectionComponent_GetTargetSelectionCollision, "GetTargetSelectionCollision" }, // 565378571
		{ &Z_Construct_UFunction_UTargetSelectionComponent_OffWatchingActors, "OffWatchingActors" }, // 2994173764
		{ &Z_Construct_UFunction_UTargetSelectionComponent_RemoveAndSwitchActors, "RemoveAndSwitchActors" }, // 2807051127
		{ &Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByIndex, "SetObservedActorByIndex" }, // 245378233
		{ &Z_Construct_UFunction_UTargetSelectionComponent_SetObservedActorByPointer, "SetObservedActorByPointer" }, // 3656659186
		{ &Z_Construct_UFunction_UTargetSelectionComponent_WatchActors, "WatchActors" }, // 2990222814
		{ &Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_CustomArray, "WatchActors_CustomArray" }, // 4239237279
		{ &Z_Construct_UFunction_UTargetSelectionComponent_WatchActors_OneFilter_Interface, "WatchActors_OneFilter_Interface" }, // 3349278660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TargetSelectionComponent.h" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCustomArray_MetaData[] = {
		{ "BlueprintGetter", "GetIsCustomArray" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Uses an outside array?*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Uses an outside array?" },
	};
#endif
	void Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCustomArray_SetBit(void* Obj)
	{
		((UTargetSelectionComponent*)Obj)->bIsCustomArray = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCustomArray = { "bIsCustomArray", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSelectionComponent), &Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCustomArray_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCustomArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCustomArray_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsWatchingNow_MetaData[] = {
		{ "BlueprintGetter", "GetIsWatchingNow" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Is the observation in process now?*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Is the observation in process now?" },
	};
#endif
	void Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsWatchingNow_SetBit(void* Obj)
	{
		((UTargetSelectionComponent*)Obj)->bIsWatchingNow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsWatchingNow = { "bIsWatchingNow", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSelectionComponent), &Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsWatchingNow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsWatchingNow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsWatchingNow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_TargetSelectionCollision_MetaData[] = {
		{ "BlueprintGetter", "GetTargetSelectionCollision" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Collision for actor observation.*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Collision for actor observation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_TargetSelectionCollision = { "TargetSelectionCollision", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSelectionComponent, TargetSelectionCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_TargetSelectionCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_TargetSelectionCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActorsArr_MetaData[] = {
		{ "BlueprintGetter", "GetObservedActorsArr" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*An array of actors that can be observed.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "An array of actors that can be observed." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActorsArr = { "ObservedActorsArr", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSelectionComponent, ObservedActorsArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActorsArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActorsArr_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActorsArr_Inner = { "ObservedActorsArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_IndexOfCurrentObservedActor_MetaData[] = {
		{ "BlueprintGetter", "GetIndexOfCurrentObservedActor" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Index of the currently observed ObservedActor actor in the ObservedActorsArr array.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Index of the currently observed ObservedActor actor in the ObservedActorsArr array." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_IndexOfCurrentObservedActor = { "IndexOfCurrentObservedActor", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSelectionComponent, IndexOfCurrentObservedActor), METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_IndexOfCurrentObservedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_IndexOfCurrentObservedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActor_MetaData[] = {
		{ "BlueprintGetter", "GetObservedActor" },
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*The actor currently being observed.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "The actor currently being observed." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActor = { "ObservedActor", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSelectionComponent, ObservedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_OnSwitchActor_MetaData[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Declare the dispatcher to be called when switching the observation to another actor.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Declare the dispatcher to be called when switching the observation to another actor." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_OnSwitchActor = { "OnSwitchActor", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSelectionComponent, OnSwitchActor), Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnSwitchActorS__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_OnSwitchActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_OnSwitchActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_OnStateOfTargetSelection_MetaData[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Declare the dispatcher to be called up when the observation is turned on or off.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Declare the dispatcher to be called up when the observation is turned on or off." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_OnStateOfTargetSelection = { "OnStateOfTargetSelection", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetSelectionComponent, OnStateOfTargetSelection), Z_Construct_UDelegateFunction_TargetSelectionPlugin_OnStateOfTargetSelection__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_OnStateOfTargetSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_OnStateOfTargetSelection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCheckAddingActorsForDuplicates_MetaData[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*\n\x09""Do you check added actors for presence in the ObservedActorsArr array?\n\x09It is recommended to enable it only if you add actors manually.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Do you check added actors for presence in the ObservedActorsArr array?\nIt is recommended to enable it only if you add actors manually." },
	};
#endif
	void Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCheckAddingActorsForDuplicates_SetBit(void* Obj)
	{
		((UTargetSelectionComponent*)Obj)->bIsCheckAddingActorsForDuplicates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCheckAddingActorsForDuplicates = { "bIsCheckAddingActorsForDuplicates", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSelectionComponent), &Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCheckAddingActorsForDuplicates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCheckAddingActorsForDuplicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCheckAddingActorsForDuplicates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsShowCollision_MetaData[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*\n\x09\x09Show collision (TargetSelectionCollision) in the game.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Show collision (TargetSelectionCollision) in the game." },
	};
#endif
	void Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsShowCollision_SetBit(void* Obj)
	{
		((UTargetSelectionComponent*)Obj)->bIsShowCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsShowCollision = { "bIsShowCollision", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSelectionComponent), &Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsShowCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsShowCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsShowCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsDebugMode_MetaData[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*\n\x09\x09Shall I activate the debug mode? (Print to message log.)\n\x09*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Shall I activate the debug mode? (Print to message log.)" },
	};
#endif
	void Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsDebugMode_SetBit(void* Obj)
	{
		((UTargetSelectionComponent*)Obj)->bIsDebugMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsDebugMode = { "bIsDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSelectionComponent), &Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsDebugMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSwitchToFirstActor_WhenRemoveObservedActor_MetaData[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Do you want to switch to the first actor in the array when the observed one remove? If false, switch to the next actor in the array.*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Do you want to switch to the first actor in the array when the observed one remove? If false, switch to the next actor in the array." },
	};
#endif
	void Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSwitchToFirstActor_WhenRemoveObservedActor_SetBit(void* Obj)
	{
		((UTargetSelectionComponent*)Obj)->bIsSwitchToFirstActor_WhenRemoveObservedActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSwitchToFirstActor_WhenRemoveObservedActor = { "bIsSwitchToFirstActor_WhenRemoveObservedActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSelectionComponent), &Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSwitchToFirstActor_WhenRemoveObservedActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSwitchToFirstActor_WhenRemoveObservedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSwitchToFirstActor_WhenRemoveObservedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenAddNew_MetaData[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Do you want to sort the array of observed actors when they add?*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Do you want to sort the array of observed actors when they add?" },
	};
#endif
	void Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenAddNew_SetBit(void* Obj)
	{
		((UTargetSelectionComponent*)Obj)->bIsSortArrayOfActors_WhenAddNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenAddNew = { "bIsSortArrayOfActors_WhenAddNew", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSelectionComponent), &Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenAddNew_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenAddNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenAddNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenRemove_MetaData[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Do you want to sort the array of observed actors when they remove?*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Do you want to sort the array of observed actors when they remove?" },
	};
#endif
	void Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenRemove_SetBit(void* Obj)
	{
		((UTargetSelectionComponent*)Obj)->bIsSortArrayOfActors_WhenRemove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenRemove = { "bIsSortArrayOfActors_WhenRemove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSelectionComponent), &Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenRemove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenRemove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenSwitch_MetaData[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Do you want to sort the array of observed actors after switching between them?*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Do you want to sort the array of observed actors after switching between them?" },
	};
#endif
	void Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenSwitch_SetBit(void* Obj)
	{
		((UTargetSelectionComponent*)Obj)->bIsSortArrayOfActors_WhenSwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenSwitch = { "bIsSortArrayOfActors_WhenSwitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSelectionComponent), &Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenSwitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenBegin_MetaData[] = {
		{ "Category", "TargetSelectionComponent" },
		{ "Comment", "/*Do you want to sort the array of observed actors when begin watching?*/" },
		{ "ModuleRelativePath", "Public/TargetSelectionComponent.h" },
		{ "ToolTip", "Do you want to sort the array of observed actors when begin watching?" },
	};
#endif
	void Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenBegin_SetBit(void* Obj)
	{
		((UTargetSelectionComponent*)Obj)->bIsSortArrayOfActors_WhenBegin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenBegin = { "bIsSortArrayOfActors_WhenBegin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetSelectionComponent), &Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenBegin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenBegin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetSelectionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCustomArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsWatchingNow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_TargetSelectionCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActorsArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActorsArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_IndexOfCurrentObservedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_ObservedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_OnSwitchActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_OnStateOfTargetSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsCheckAddingActorsForDuplicates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsShowCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsDebugMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSwitchToFirstActor_WhenRemoveObservedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenAddNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetSelectionComponent_Statics::NewProp_bIsSortArrayOfActors_WhenBegin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetSelectionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetSelectionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTargetSelectionComponent_Statics::ClassParams = {
		&UTargetSelectionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetSelectionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetSelectionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetSelectionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetSelectionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTargetSelectionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTargetSelectionComponent, 759036264);
	template<> TARGETSELECTIONPLUGIN_API UClass* StaticClass<UTargetSelectionComponent>()
	{
		return UTargetSelectionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTargetSelectionComponent(Z_Construct_UClass_UTargetSelectionComponent, &UTargetSelectionComponent::StaticClass, TEXT("/Script/TargetSelectionPlugin"), TEXT("UTargetSelectionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetSelectionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
