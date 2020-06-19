// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/QGNodes/Content/QGNode_Sequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQGNode_Sequence() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Sequence_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode_Sequence();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQGNode();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQGNode_Sequence::execOnSequenceStopped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSequenceStopped();
		P_NATIVE_END;
	}
	void UQGNode_Sequence::StaticRegisterNativesUQGNode_Sequence()
	{
		UClass* Class = UQGNode_Sequence::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSequenceStopped", &UQGNode_Sequence::execOnSequenceStopped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQGNode_Sequence_OnSequenceStopped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQGNode_Sequence_OnSequenceStopped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Content/QGNode_Sequence.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQGNode_Sequence_OnSequenceStopped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQGNode_Sequence, nullptr, "OnSequenceStopped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQGNode_Sequence_OnSequenceStopped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQGNode_Sequence_OnSequenceStopped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQGNode_Sequence_OnSequenceStopped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQGNode_Sequence_OnSequenceStopped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQGNode_Sequence_NoRegister()
	{
		return UQGNode_Sequence::StaticClass();
	}
	struct Z_Construct_UClass_UQGNode_Sequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SequenceAsset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequenceActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SequenceActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQGNode_Sequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQGNode,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQGNode_Sequence_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQGNode_Sequence_OnSequenceStopped, "OnSequenceStopped" }, // 3703603882
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Sequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Content" },
		{ "DisplayName", "Play Sequence" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Quests/QGNodes/Content/QGNode_Sequence.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Content/QGNode_Sequence.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Sequence_Statics::NewProp_SequenceAsset_MetaData[] = {
		{ "Comment", "// Only for editor purposes\n" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Content/QGNode_Sequence.h" },
		{ "ToolTip", "Only for editor purposes" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQGNode_Sequence_Statics::NewProp_SequenceAsset = { "SequenceAsset", nullptr, (EPropertyFlags)0x0044000800000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode_Sequence, SequenceAsset), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Sequence_Statics::NewProp_SequenceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Sequence_Statics::NewProp_SequenceAsset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQGNode_Sequence_Statics::NewProp_SequenceActor_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Sequence actor to play.\n\x09 * NOTE: Will only play if actor's level is loaded at the moment of playing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Quests/QGNodes/Content/QGNode_Sequence.h" },
		{ "ToolTip", "Sequence actor to play.\nNOTE: Will only play if actor's level is loaded at the moment of playing." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UQGNode_Sequence_Statics::NewProp_SequenceActor = { "SequenceActor", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQGNode_Sequence, SequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQGNode_Sequence_Statics::NewProp_SequenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Sequence_Statics::NewProp_SequenceActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQGNode_Sequence_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Sequence_Statics::NewProp_SequenceAsset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQGNode_Sequence_Statics::NewProp_SequenceActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQGNode_Sequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQGNode_Sequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQGNode_Sequence_Statics::ClassParams = {
		&UQGNode_Sequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQGNode_Sequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Sequence_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQGNode_Sequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQGNode_Sequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQGNode_Sequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQGNode_Sequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQGNode_Sequence, 64893531);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQGNode_Sequence>()
	{
		return UQGNode_Sequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQGNode_Sequence(Z_Construct_UClass_UQGNode_Sequence, &UQGNode_Sequence::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQGNode_Sequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQGNode_Sequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
