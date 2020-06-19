// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurfaceFootstepSystem/Public/FootstepComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepComponent() {}
// Cross Module References
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFootstepComponent_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFootstepComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_SurfaceFootstepSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_USurfaceFootstepSystemSettings_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UFootstepDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UFootstepComponent::execSetActorsToIgnoreForTrace)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_NewActorsToIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorsToIgnoreForTrace(Z_Param_Out_NewActorsToIgnore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepComponent::execGetPlaySound2D)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPlaySound2D();
		P_NATIVE_END;
	}
	void UFootstepComponent::StaticRegisterNativesUFootstepComponent()
	{
		UClass* Class = UFootstepComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlaySound2D", &UFootstepComponent::execGetPlaySound2D },
			{ "SetActorsToIgnoreForTrace", &UFootstepComponent::execSetActorsToIgnoreForTrace },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics
	{
		struct FootstepComponent_eventGetPlaySound2D_Parms
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
	void Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FootstepComponent_eventGetPlaySound2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepComponent_eventGetPlaySound2D_Parms), &Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Surface Footstep System" },
		{ "Comment", "/** What type of a footstep SFX should be spawned. */" },
		{ "Keywords", "is locally controlled" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
		{ "ToolTip", "What type of a footstep SFX should be spawned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "GetPlaySound2D", nullptr, nullptr, sizeof(FootstepComponent_eventGetPlaySound2D_Parms), Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics
	{
		struct FootstepComponent_eventSetActorsToIgnoreForTrace_Parms
		{
			TArray<AActor*> NewActorsToIgnore;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewActorsToIgnore_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::NewProp_NewActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::NewProp_NewActorsToIgnore = { "NewActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepComponent_eventSetActorsToIgnoreForTrace_Parms, NewActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::NewProp_NewActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::NewProp_NewActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::NewProp_NewActorsToIgnore_Inner = { "NewActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::NewProp_NewActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::NewProp_NewActorsToIgnore_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Surface Footstep System" },
		{ "Comment", "/** Sets the new array of Actors ignored during tracing and cleares the previous array. */" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
		{ "ToolTip", "Sets the new array of Actors ignored during tracing and cleares the previous array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepComponent, nullptr, "SetActorsToIgnoreForTrace", nullptr, nullptr, sizeof(FootstepComponent_eventSetActorsToIgnoreForTrace_Parms), Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFootstepComponent_NoRegister()
	{
		return UFootstepComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFootstepComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowDebug_MetaData[];
#endif
		static void NewProp_bShowDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepFXes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FootstepFXes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootstepFXes_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepFXes_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootstepComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SurfaceFootstepSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFootstepComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFootstepComponent_GetPlaySound2D, "GetPlaySound2D" }, // 2044987356
		{ &Z_Construct_UFunction_UFootstepComponent_SetActorsToIgnoreForTrace, "SetActorsToIgnoreForTrace" }, // 4134591564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/**\n * A component from the Surface Footstep System plugin which specifies which footstep should be spawn, depending on the Surface Type.\n */" },
		{ "IncludePath", "FootstepComponent.h" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
		{ "ToolTip", "A component from the Surface Footstep System plugin which specifies which footstep should be spawn, depending on the Surface Type." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepComponent, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepSettings = { "FootstepSettings", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepComponent, FootstepSettings), Z_Construct_UClass_USurfaceFootstepSystemSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::NewProp_bShowDebug_MetaData[] = {
		{ "Category", "Surface Footstep System" },
		{ "Comment", "/** Draws a trace which searches for the object at which footstep should be spawned (won't work in Shipping and Testing builds) and prints the debug message both in a log and on the screen. */" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
		{ "ToolTip", "Draws a trace which searches for the object at which footstep should be spawned (won't work in Shipping and Testing builds) and prints the debug message both in a log and on the screen." },
	};
#endif
	void Z_Construct_UClass_UFootstepComponent_Statics::NewProp_bShowDebug_SetBit(void* Obj)
	{
		((UFootstepComponent*)Obj)->bShowDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_bShowDebug = { "bShowDebug", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepComponent), &Z_Construct_UClass_UFootstepComponent_Statics::NewProp_bShowDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_bShowDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_bShowDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "Surface Footstep System" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Length of the trace which searches for the object at which footstep should be spawned. */" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
		{ "ToolTip", "Length of the trace which searches for the object at which footstep should be spawned." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepComponent, TraceLength), METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_TraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_TraceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepFXes_MetaData[] = {
		{ "Category", "Surface Footstep System" },
		{ "Comment", "/** Which footstep FXes should be spawned, depending on the Surface Type. */" },
		{ "ModuleRelativePath", "Public/FootstepComponent.h" },
		{ "ToolTip", "Which footstep FXes should be spawned, depending on the Surface Type." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepFXes = { "FootstepFXes", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepComponent, FootstepFXes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepFXes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepFXes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepFXes_Key_KeyProp = { "FootstepFXes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepFXes_ValueProp = { "FootstepFXes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UFootstepDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootstepComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_bShowDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_TraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepFXes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepFXes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepComponent_Statics::NewProp_FootstepFXes_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootstepComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstepComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootstepComponent_Statics::ClassParams = {
		&UFootstepComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFootstepComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFootstepComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootstepComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootstepComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootstepComponent, 920087521);
	template<> SURFACEFOOTSTEPSYSTEM_API UClass* StaticClass<UFootstepComponent>()
	{
		return UFootstepComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootstepComponent(Z_Construct_UClass_UFootstepComponent, &UFootstepComponent::StaticClass, TEXT("/Script/SurfaceFootstepSystem"), TEXT("UFootstepComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
