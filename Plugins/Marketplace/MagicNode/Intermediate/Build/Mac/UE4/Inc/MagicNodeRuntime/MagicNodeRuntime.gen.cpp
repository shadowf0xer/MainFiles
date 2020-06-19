// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MagicNodeRuntime/Public/MagicNodeRuntime.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMagicNodeRuntime() {}
// Cross Module References
	MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMagicNode_NoRegister();
	MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMagicNode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MagicNodeRuntime();
	MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMagicNodeScript_NoRegister();
	MAGICNODERUNTIME_API UClass* Z_Construct_UClass_UMagicNodeScript();
	MAGICNODERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMGC_SourceCode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	DEFINE_FUNCTION(UMagicNode::execFinish)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finish();
		P_NATIVE_END;
	}
	void UMagicNode::StaticRegisterNativesUMagicNode()
	{
		UClass* Class = UMagicNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Finish", &UMagicNode::execFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMagicNode_Finish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMagicNode_Finish_Statics::Function_MetaDataParams[] = {
		{ "Category", "Magic Node" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMagicNode_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMagicNode, nullptr, "Finish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMagicNode_Finish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMagicNode_Finish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMagicNode_Finish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMagicNode_Finish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMagicNode_NoRegister()
	{
		return UMagicNode::StaticClass();
	}
	struct Z_Construct_UClass_UMagicNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMagicNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMagicNode_Finish, "Finish" }, // 2734793230
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Magic Node" },
		{ "ClassGroupNames", "Synaptech" },
		{ "Comment", "/// Magic-Node's Runtime Object.\n" },
		{ "HideCategories", "Activation Variable" },
		{ "IncludePath", "MagicNodeRuntime.h" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
		{ "ToolTip", "Magic-Node's Runtime Object." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicNode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicNode_Statics::ClassParams = {
		&UMagicNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMagicNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicNode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicNode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicNode, 3501684405);
	template<> MAGICNODERUNTIME_API UClass* StaticClass<UMagicNode>()
	{
		return UMagicNode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicNode(Z_Construct_UClass_UMagicNode, &UMagicNode::StaticClass, TEXT("/Script/MagicNodeRuntime"), TEXT("UMagicNode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicNode);
	void UMagicNodeScript::StaticRegisterNativesUMagicNodeScript()
	{
	}
	UClass* Z_Construct_UClass_UMagicNodeScript_NoRegister()
	{
		return UMagicNodeScript::StaticClass();
	}
	struct Z_Construct_UClass_UMagicNodeScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockSourceCode_MetaData[];
#endif
		static void NewProp_LockSourceCode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockSourceCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeColor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeScriptClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RuntimeScriptClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMagicNodeScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MagicNodeRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicNodeScript_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Magic Node" },
		{ "ClassGroupNames", "Synaptech" },
		{ "Comment", "/* C++ Scriptable Node for Blueprint Graphs */" },
		{ "DisplayName", "Magic Node Script" },
		{ "HideCategories", "Activation Variable" },
		{ "IncludePath", "MagicNodeRuntime.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
		{ "ToolTip", "C++ Scriptable Node for Blueprint Graphs" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Source Code" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicNodeScript, Source), Z_Construct_UScriptStruct_FMGC_SourceCode, METADATA_PARAMS(Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode_MetaData[] = {
		{ "Category", "Magic Node" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
#endif
	void Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode_SetBit(void* Obj)
	{
		((UMagicNodeScript*)Obj)->LockSourceCode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode = { "LockSourceCode", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMagicNodeScript), &Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Category", "Magic Node" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000800010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicNodeScript, ParentClass), Z_Construct_UClass_UMagicNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_NodeColor_MetaData[] = {
		{ "Category", "Magic Node" },
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000800010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicNodeScript, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_NodeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_NodeColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_RuntimeScriptClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/MagicNodeRuntime.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_RuntimeScriptClass = { "RuntimeScriptClass", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMagicNodeScript, RuntimeScriptClass), Z_Construct_UClass_UMagicNode_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_RuntimeScriptClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_RuntimeScriptClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMagicNodeScript_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_LockSourceCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_ParentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_NodeColor,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMagicNodeScript_Statics::NewProp_RuntimeScriptClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMagicNodeScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMagicNodeScript>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMagicNodeScript_Statics::ClassParams = {
		&UMagicNodeScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMagicNodeScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMagicNodeScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMagicNodeScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMagicNodeScript()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMagicNodeScript_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMagicNodeScript, 3145862114);
	template<> MAGICNODERUNTIME_API UClass* StaticClass<UMagicNodeScript>()
	{
		return UMagicNodeScript::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMagicNodeScript(Z_Construct_UClass_UMagicNodeScript, &UMagicNodeScript::StaticClass, TEXT("/Script/MagicNodeRuntime"), TEXT("UMagicNodeScript"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMagicNodeScript);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
