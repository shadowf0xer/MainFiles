// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubstanceCore/Classes/SubstanceUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstanceUtility() {}
// Cross Module References
	SUBSTANCECORE_API UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize();
	UPackage* Z_Construct_UPackage__Script_SubstanceCore();
	SUBSTANCECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstanceConnection();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceUtility_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceGraphInstance_NoRegister();
	SUBSTANCECORE_API UClass* Z_Construct_UClass_USubstanceInstanceFactory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* ESubstanceTextureSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("ESubstanceTextureSize"));
		}
		return Singleton;
	}
	template<> SUBSTANCECORE_API UEnum* StaticEnum<ESubstanceTextureSize>()
	{
		return ESubstanceTextureSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESubstanceTextureSize(ESubstanceTextureSize_StaticEnum, TEXT("/Script/SubstanceCore"), TEXT("ESubstanceTextureSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Hash() { return 1080768521U; }
	UEnum* Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESubstanceTextureSize"), 0, Get_Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERL_16", (int64)ERL_16 },
				{ "ERL_32", (int64)ERL_32 },
				{ "ERL_64", (int64)ERL_64 },
				{ "ERL_128", (int64)ERL_128 },
				{ "ERL_256", (int64)ERL_256 },
				{ "ERL_512", (int64)ERL_512 },
				{ "ERL_1024", (int64)ERL_1024 },
				{ "ERL_2048", (int64)ERL_2048 },
				{ "ERL_4096", (int64)ERL_4096 },
				{ "ERL_8192", (int64)ERL_8192 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ERL_1024.DisplayName", "1024" },
				{ "ERL_1024.Name", "ERL_1024" },
				{ "ERL_128.DisplayName", "128" },
				{ "ERL_128.Name", "ERL_128" },
				{ "ERL_16.DisplayName", "16" },
				{ "ERL_16.Name", "ERL_16" },
				{ "ERL_2048.DisplayName", "2048" },
				{ "ERL_2048.Name", "ERL_2048" },
				{ "ERL_256.DisplayName", "256" },
				{ "ERL_256.Name", "ERL_256" },
				{ "ERL_32.DisplayName", "32" },
				{ "ERL_32.Name", "ERL_32" },
				{ "ERL_4096.DisplayName", "4096" },
				{ "ERL_4096.Name", "ERL_4096" },
				{ "ERL_512.DisplayName", "512" },
				{ "ERL_512.Name", "ERL_512" },
				{ "ERL_64.DisplayName", "64" },
				{ "ERL_64.Name", "ERL_64" },
				{ "ERL_8192.DisplayName", "8192" },
				{ "ERL_8192.Name", "ERL_8192" },
				{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SubstanceCore,
				nullptr,
				"ESubstanceTextureSize",
				"ESubstanceTextureSize",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSubstanceConnection::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SUBSTANCECORE_API uint32 Get_Z_Construct_UScriptStruct_FSubstanceConnection_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubstanceConnection, Z_Construct_UPackage__Script_SubstanceCore(), TEXT("SubstanceConnection"), sizeof(FSubstanceConnection), Get_Z_Construct_UScriptStruct_FSubstanceConnection_Hash());
	}
	return Singleton;
}
template<> SUBSTANCECORE_API UScriptStruct* StaticStruct<FSubstanceConnection>()
{
	return FSubstanceConnection::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubstanceConnection(FSubstanceConnection::StaticStruct, TEXT("/Script/SubstanceCore"), TEXT("SubstanceConnection"), false, nullptr, nullptr);
static struct FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceConnection
{
	FScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceConnection()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubstanceConnection")),new UScriptStruct::TCppStructOps<FSubstanceConnection>);
	}
} ScriptStruct_SubstanceCore_StaticRegisterNativesFSubstanceConnection;
	struct Z_Construct_UScriptStruct_FSubstanceConnection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputImageIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputImageIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceConnection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubstanceConnection>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_InputImageIdentifier_MetaData[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_InputImageIdentifier = { "InputImageIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceConnection, InputImageIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_InputImageIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_InputImageIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_OutputIdentifier_MetaData[] = {
		{ "Category", "Substance" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_OutputIdentifier = { "OutputIdentifier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubstanceConnection, OutputIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_OutputIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_OutputIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_InputImageIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubstanceConnection_Statics::NewProp_OutputIdentifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstanceConnection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
		nullptr,
		&NewStructOps,
		"SubstanceConnection",
		sizeof(FSubstanceConnection),
		alignof(FSubstanceConnection),
		Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstanceConnection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubstanceConnection()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubstanceConnection_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SubstanceCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubstanceConnection"), sizeof(FSubstanceConnection), Get_Z_Construct_UScriptStruct_FSubstanceConnection_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubstanceConnection_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubstanceConnection_Hash() { return 3107893136U; }
	DEFINE_FUNCTION(USubstanceUtility::execSyncRendering)
	{
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_InstancesToRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubstanceUtility::SyncRendering(Z_Param_InstancesToRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execAsyncRendering)
	{
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_InstancesToRender);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubstanceUtility::AsyncRendering(Z_Param_InstancesToRender);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execCreateAggregateSubstanceFactory)
	{
		P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_OutputFactory);
		P_GET_PROPERTY(FIntProperty,Z_Param_OutputFactoryGraphIndex);
		P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_InputFactory);
		P_GET_PROPERTY(FIntProperty,Z_Param_InputFactoryGraphIndex);
		P_GET_TARRAY_REF(FSubstanceConnection,Z_Param_Out_Connections);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USubstanceInstanceFactory**)Z_Param__Result=USubstanceUtility::CreateAggregateSubstanceFactory(Z_Param_OutputFactory,Z_Param_OutputFactoryGraphIndex,Z_Param_InputFactory,Z_Param_InputFactoryGraphIndex,Z_Param_Out_Connections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execClearCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USubstanceUtility::ClearCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execSetGraphInstanceOutputSizeInt)
	{
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubstanceUtility::SetGraphInstanceOutputSizeInt(Z_Param_GraphInstance,Z_Param_Width,Z_Param_Height);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execSetGraphInstanceOutputSize)
	{
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
		P_GET_PROPERTY(FByteProperty,Z_Param_Width);
		P_GET_PROPERTY(FByteProperty,Z_Param_Height);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubstanceUtility::SetGraphInstanceOutputSize(Z_Param_GraphInstance,ESubstanceTextureSize(Z_Param_Width),ESubstanceTextureSize(Z_Param_Height));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execResetInputParameters)
	{
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubstanceUtility::ResetInputParameters(Z_Param_GraphInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execCopyInputParameters)
	{
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_SourceGraphInstance);
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_DestGraphInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubstanceUtility::CopyInputParameters(Z_Param_SourceGraphInstance,Z_Param_DestGraphInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execDisableInstanceOutputs)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
		P_GET_TARRAY(int32,Z_Param_OutputIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubstanceUtility::DisableInstanceOutputs(Z_Param_WorldContextObject,Z_Param_GraphInstance,Z_Param_OutputIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execEnableInstanceOutputs)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
		P_GET_TARRAY(int32,Z_Param_OutputIndices);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubstanceUtility::EnableInstanceOutputs(Z_Param_WorldContextObject,Z_Param_GraphInstance,Z_Param_OutputIndices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execDuplicateGraphInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USubstanceGraphInstance**)Z_Param__Result=USubstanceUtility::DuplicateGraphInstance(Z_Param_WorldContextObject,Z_Param_GraphInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execCreateGraphInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USubstanceInstanceFactory,Z_Param_Factory);
		P_GET_PROPERTY(FIntProperty,Z_Param_GraphDescIndex);
		P_GET_OBJECT(UMaterial,Z_Param_ParentMaterial);
		P_GET_PROPERTY(FStrProperty,Z_Param_InstanceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USubstanceGraphInstance**)Z_Param__Result=USubstanceUtility::CreateGraphInstance(Z_Param_WorldContextObject,Z_Param_Factory,Z_Param_GraphDescIndex,Z_Param_ParentMaterial,Z_Param_InstanceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execGetSubstanceLoadingProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USubstanceUtility::GetSubstanceLoadingProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execGetFactoryName)
	{
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USubstanceUtility::GetFactoryName(Z_Param_GraphInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execGetGraphName)
	{
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USubstanceUtility::GetGraphName(Z_Param_GraphInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execGetSubstanceTextures)
	{
		P_GET_OBJECT(USubstanceGraphInstance,Z_Param_GraphInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTexture2D*>*)Z_Param__Result=USubstanceUtility::GetSubstanceTextures(Z_Param_GraphInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubstanceUtility::execGetSubstances)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<USubstanceGraphInstance*>*)Z_Param__Result=USubstanceUtility::GetSubstances(Z_Param_Material);
		P_NATIVE_END;
	}
	void USubstanceUtility::StaticRegisterNativesUSubstanceUtility()
	{
		UClass* Class = USubstanceUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncRendering", &USubstanceUtility::execAsyncRendering },
			{ "ClearCache", &USubstanceUtility::execClearCache },
			{ "CopyInputParameters", &USubstanceUtility::execCopyInputParameters },
			{ "CreateAggregateSubstanceFactory", &USubstanceUtility::execCreateAggregateSubstanceFactory },
			{ "CreateGraphInstance", &USubstanceUtility::execCreateGraphInstance },
			{ "DisableInstanceOutputs", &USubstanceUtility::execDisableInstanceOutputs },
			{ "DuplicateGraphInstance", &USubstanceUtility::execDuplicateGraphInstance },
			{ "EnableInstanceOutputs", &USubstanceUtility::execEnableInstanceOutputs },
			{ "GetFactoryName", &USubstanceUtility::execGetFactoryName },
			{ "GetGraphName", &USubstanceUtility::execGetGraphName },
			{ "GetSubstanceLoadingProgress", &USubstanceUtility::execGetSubstanceLoadingProgress },
			{ "GetSubstances", &USubstanceUtility::execGetSubstances },
			{ "GetSubstanceTextures", &USubstanceUtility::execGetSubstanceTextures },
			{ "ResetInputParameters", &USubstanceUtility::execResetInputParameters },
			{ "SetGraphInstanceOutputSize", &USubstanceUtility::execSetGraphInstanceOutputSize },
			{ "SetGraphInstanceOutputSizeInt", &USubstanceUtility::execSetGraphInstanceOutputSizeInt },
			{ "SyncRendering", &USubstanceUtility::execSyncRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics
	{
		struct SubstanceUtility_eventAsyncRendering_Parms
		{
			USubstanceGraphInstance* InstancesToRender;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancesToRender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::NewProp_InstancesToRender = { "InstancesToRender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventAsyncRendering_Parms, InstancesToRender), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::NewProp_InstancesToRender,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance|Render" },
		{ "Comment", "/* Queue a Substance Graph Instance in the renderer */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Queue a Substance Graph Instance in the renderer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "AsyncRendering", nullptr, nullptr, sizeof(SubstanceUtility_eventAsyncRendering_Parms), Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_AsyncRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_AsyncRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance|Memory" },
		{ "Comment", "/* Clear Substance Memory Cache */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Clear Substance Memory Cache" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "ClearCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_ClearCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_ClearCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics
	{
		struct SubstanceUtility_eventCopyInputParameters_Parms
		{
			USubstanceGraphInstance* SourceGraphInstance;
			USubstanceGraphInstance* DestGraphInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestGraphInstance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceGraphInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_DestGraphInstance = { "DestGraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCopyInputParameters_Parms, DestGraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_SourceGraphInstance = { "SourceGraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCopyInputParameters_Parms, SourceGraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_DestGraphInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::NewProp_SourceGraphInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Copy the inputs values from a Substance Graph Instance to another one */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Copy the inputs values from a Substance Graph Instance to another one" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "CopyInputParameters", nullptr, nullptr, sizeof(SubstanceUtility_eventCopyInputParameters_Parms), Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_CopyInputParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_CopyInputParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics
	{
		struct SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms
		{
			USubstanceInstanceFactory* OutputFactory;
			int32 OutputFactoryGraphIndex;
			USubstanceInstanceFactory* InputFactory;
			int32 InputFactoryGraphIndex;
			TArray<FSubstanceConnection> Connections;
			USubstanceInstanceFactory* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Connections;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InputFactoryGraphIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputFactory;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputFactoryGraphIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputFactory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, ReturnValue), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSubstanceConnection, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactoryGraphIndex = { "InputFactoryGraphIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, InputFactoryGraphIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactory = { "InputFactory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, InputFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactoryGraphIndex = { "OutputFactoryGraphIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, OutputFactoryGraphIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactory = { "OutputFactory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms, OutputFactory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_Connections_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactoryGraphIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_InputFactory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactoryGraphIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::NewProp_OutputFactory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Create an aggregate substance factory by fusing output images from one substance to the input images of another substance */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Create an aggregate substance factory by fusing output images from one substance to the input images of another substance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "CreateAggregateSubstanceFactory", nullptr, nullptr, sizeof(SubstanceUtility_eventCreateAggregateSubstanceFactory_Parms), Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics
	{
		struct SubstanceUtility_eventCreateGraphInstance_Parms
		{
			UObject* WorldContextObject;
			USubstanceInstanceFactory* Factory;
			int32 GraphDescIndex;
			UMaterial* ParentMaterial;
			FString InstanceName;
			USubstanceGraphInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstanceName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentMaterial;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GraphDescIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Factory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_InstanceName = { "InstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, InstanceName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, ParentMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_GraphDescIndex = { "GraphDescIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, GraphDescIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_Factory = { "Factory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, Factory), Z_Construct_UClass_USubstanceInstanceFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventCreateGraphInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_InstanceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_ParentMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_GraphDescIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_Factory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Create a dynamic Substance Graph Instance (no outputs enabled by default) */" },
		{ "CPP_Default_InstanceName", "" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Create a dynamic Substance Graph Instance (no outputs enabled by default)" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "CreateGraphInstance", nullptr, nullptr, sizeof(SubstanceUtility_eventCreateGraphInstance_Parms), Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics
	{
		struct SubstanceUtility_eventDisableInstanceOutputs_Parms
		{
			UObject* WorldContextObject;
			USubstanceGraphInstance* GraphInstance;
			TArray<int32> OutputIndices;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputIndices_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices = { "OutputIndices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, OutputIndices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices_Inner = { "OutputIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventDisableInstanceOutputs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_OutputIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_GraphInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Disable the textures of a Substance Graph Instance (disable its outputs) using the output indices */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Disable the textures of a Substance Graph Instance (disable its outputs) using the output indices" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "DisableInstanceOutputs", nullptr, nullptr, sizeof(SubstanceUtility_eventDisableInstanceOutputs_Parms), Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics
	{
		struct SubstanceUtility_eventDuplicateGraphInstance_Parms
		{
			UObject* WorldContextObject;
			USubstanceGraphInstance* GraphInstance;
			USubstanceGraphInstance* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, ReturnValue), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventDuplicateGraphInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_GraphInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Create a copy of Substance Graph Instance */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Create a copy of Substance Graph Instance" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "DuplicateGraphInstance", nullptr, nullptr, sizeof(SubstanceUtility_eventDuplicateGraphInstance_Parms), Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics
	{
		struct SubstanceUtility_eventEnableInstanceOutputs_Parms
		{
			UObject* WorldContextObject;
			USubstanceGraphInstance* GraphInstance;
			TArray<int32> OutputIndices;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutputIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputIndices_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices = { "OutputIndices", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, OutputIndices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices_Inner = { "OutputIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventEnableInstanceOutputs_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_OutputIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_GraphInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Create the textures of a Substance Graph Instance (enable its outputs) using the output indices */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Create the textures of a Substance Graph Instance (enable its outputs) using the output indices" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "EnableInstanceOutputs", nullptr, nullptr, sizeof(SubstanceUtility_eventEnableInstanceOutputs_Parms), Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics
	{
		struct SubstanceUtility_eventGetFactoryName_Parms
		{
			USubstanceGraphInstance* GraphInstance;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventGetFactoryName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventGetFactoryName_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::NewProp_GraphInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Get the name of the factory that created this instance */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Get the name of the factory that created this instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetFactoryName", nullptr, nullptr, sizeof(SubstanceUtility_eventGetFactoryName_Parms), Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_GetFactoryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetFactoryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics
	{
		struct SubstanceUtility_eventGetGraphName_Parms
		{
			USubstanceGraphInstance* GraphInstance;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventGetGraphName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventGetGraphName_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::NewProp_GraphInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Get the original graph name */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Get the original graph name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetGraphName", nullptr, nullptr, sizeof(SubstanceUtility_eventGetGraphName_Parms), Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_GetGraphName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetGraphName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics
	{
		struct SubstanceUtility_eventGetSubstanceLoadingProgress_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceLoadingProgress_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Get the current rendering progress of the Substances currently loaded ([0, 1.0]) */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Get the current rendering progress of the Substances currently loaded ([0, 1.0])" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstanceLoadingProgress", nullptr, nullptr, sizeof(SubstanceUtility_eventGetSubstanceLoadingProgress_Parms), Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics
	{
		struct SubstanceUtility_eventGetSubstances_Parms
		{
			UMaterialInterface* Material;
			TArray<USubstanceGraphInstance*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstances_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstances_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Get the list of Substance Graph Instances used by a material */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Get the list of Substance Graph Instances used by a material" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstances", nullptr, nullptr, sizeof(SubstanceUtility_eventGetSubstances_Parms), Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics
	{
		struct SubstanceUtility_eventGetSubstanceTextures_Parms
		{
			USubstanceGraphInstance* GraphInstance;
			TArray<UTexture2D*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceTextures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventGetSubstanceTextures_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::NewProp_GraphInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Get the textures (from enabled outputs) of a Substance Graph Instance*/" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Get the textures (from enabled outputs) of a Substance Graph Instance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "GetSubstanceTextures", nullptr, nullptr, sizeof(SubstanceUtility_eventGetSubstanceTextures_Parms), Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics
	{
		struct SubstanceUtility_eventResetInputParameters_Parms
		{
			USubstanceGraphInstance* GraphInstance;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventResetInputParameters_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::NewProp_GraphInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Reset the input values of a Substance Graph Instance to their default values */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Reset the input values of a Substance Graph Instance to their default values" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "ResetInputParameters", nullptr, nullptr, sizeof(SubstanceUtility_eventResetInputParameters_Parms), Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_ResetInputParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_ResetInputParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics
	{
		struct SubstanceUtility_eventSetGraphInstanceOutputSize_Parms
		{
			USubstanceGraphInstance* GraphInstance;
			TEnumAsByte<ESubstanceTextureSize> Width;
			TEnumAsByte<ESubstanceTextureSize> Height;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, Height), Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, Width), Z_Construct_UEnum_SubstanceCore_ESubstanceTextureSize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::NewProp_GraphInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Set the output size input of the specified GraphInstance */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Set the output size input of the specified GraphInstance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "SetGraphInstanceOutputSize", nullptr, nullptr, sizeof(SubstanceUtility_eventSetGraphInstanceOutputSize_Parms), Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics
	{
		struct SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms
		{
			USubstanceGraphInstance* GraphInstance;
			int32 Width;
			int32 Height;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_GraphInstance = { "GraphInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms, GraphInstance), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::NewProp_GraphInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance" },
		{ "Comment", "/* Set the output size input of the specified GraphInstance */" },
		{ "DisplayName", "Set GraphInstance Output Size (Int)" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Set the output size input of the specified GraphInstance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "SetGraphInstanceOutputSizeInt", nullptr, nullptr, sizeof(SubstanceUtility_eventSetGraphInstanceOutputSizeInt_Parms), Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics
	{
		struct SubstanceUtility_eventSyncRendering_Parms
		{
			USubstanceGraphInstance* InstancesToRender;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancesToRender;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::NewProp_InstancesToRender = { "InstancesToRender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubstanceUtility_eventSyncRendering_Parms, InstancesToRender), Z_Construct_UClass_USubstanceGraphInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::NewProp_InstancesToRender,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Substance|Render" },
		{ "Comment", "/* Start the synchronous rendering of a Substance */" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
		{ "ToolTip", "Start the synchronous rendering of a Substance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubstanceUtility, nullptr, "SyncRendering", nullptr, nullptr, sizeof(SubstanceUtility_eventSyncRendering_Parms), Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubstanceUtility_SyncRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubstanceUtility_SyncRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubstanceUtility_NoRegister()
	{
		return USubstanceUtility::StaticClass();
	}
	struct Z_Construct_UClass_USubstanceUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubstanceUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SubstanceCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubstanceUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubstanceUtility_AsyncRendering, "AsyncRendering" }, // 2150179395
		{ &Z_Construct_UFunction_USubstanceUtility_ClearCache, "ClearCache" }, // 130058620
		{ &Z_Construct_UFunction_USubstanceUtility_CopyInputParameters, "CopyInputParameters" }, // 3397342200
		{ &Z_Construct_UFunction_USubstanceUtility_CreateAggregateSubstanceFactory, "CreateAggregateSubstanceFactory" }, // 3617851418
		{ &Z_Construct_UFunction_USubstanceUtility_CreateGraphInstance, "CreateGraphInstance" }, // 2670020703
		{ &Z_Construct_UFunction_USubstanceUtility_DisableInstanceOutputs, "DisableInstanceOutputs" }, // 3787451217
		{ &Z_Construct_UFunction_USubstanceUtility_DuplicateGraphInstance, "DuplicateGraphInstance" }, // 3613368690
		{ &Z_Construct_UFunction_USubstanceUtility_EnableInstanceOutputs, "EnableInstanceOutputs" }, // 770884216
		{ &Z_Construct_UFunction_USubstanceUtility_GetFactoryName, "GetFactoryName" }, // 574093891
		{ &Z_Construct_UFunction_USubstanceUtility_GetGraphName, "GetGraphName" }, // 2126954275
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstanceLoadingProgress, "GetSubstanceLoadingProgress" }, // 3646003209
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstances, "GetSubstances" }, // 3819855582
		{ &Z_Construct_UFunction_USubstanceUtility_GetSubstanceTextures, "GetSubstanceTextures" }, // 3972140495
		{ &Z_Construct_UFunction_USubstanceUtility_ResetInputParameters, "ResetInputParameters" }, // 3078516729
		{ &Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSize, "SetGraphInstanceOutputSize" }, // 2261188689
		{ &Z_Construct_UFunction_USubstanceUtility_SetGraphInstanceOutputSizeInt, "SetGraphInstanceOutputSizeInt" }, // 3293498116
		{ &Z_Construct_UFunction_USubstanceUtility_SyncRendering, "SyncRendering" }, // 2499249658
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubstanceUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SubstanceUtility.h" },
		{ "ModuleRelativePath", "Classes/SubstanceUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubstanceUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubstanceUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubstanceUtility_Statics::ClassParams = {
		&USubstanceUtility::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubstanceUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubstanceUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubstanceUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubstanceUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubstanceUtility, 3896329059);
	template<> SUBSTANCECORE_API UClass* StaticClass<USubstanceUtility>()
	{
		return USubstanceUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubstanceUtility(Z_Construct_UClass_USubstanceUtility, &USubstanceUtility::StaticClass, TEXT("/Script/SubstanceCore"), TEXT("USubstanceUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubstanceUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
