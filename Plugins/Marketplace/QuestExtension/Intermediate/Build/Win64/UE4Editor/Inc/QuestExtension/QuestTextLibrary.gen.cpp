// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestExtension/Public/Quests/Text/QuestTextLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTextLibrary() {}
// Cross Module References
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestTextLibrary_NoRegister();
	QUESTEXTENSION_API UClass* Z_Construct_UClass_UQuestTextLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_QuestExtension();
	QUESTEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTextArgument();
	QUESTEXTENSION_API UEnum* Z_Construct_UEnum_QuestExtension_EQuestArgGender();
// End Cross Module References
	DEFINE_FUNCTION(UQuestTextLibrary::execConv_GenderToArgument)
	{
		P_GET_ENUM(EQuestArgGender,Z_Param_InGender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTextArgument*)Z_Param__Result=UQuestTextLibrary::Conv_GenderToArgument(EQuestArgGender(Z_Param_InGender));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestTextLibrary::execConv_TextToArgument)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTextArgument*)Z_Param__Result=UQuestTextLibrary::Conv_TextToArgument(Z_Param_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestTextLibrary::execConv_IntToArgument)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTextArgument*)Z_Param__Result=UQuestTextLibrary::Conv_IntToArgument(Z_Param_InInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestTextLibrary::execConv_FloatToArgument)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuestTextArgument*)Z_Param__Result=UQuestTextLibrary::Conv_FloatToArgument(Z_Param_InFloat);
		P_NATIVE_END;
	}
	void UQuestTextLibrary::StaticRegisterNativesUQuestTextLibrary()
	{
		UClass* Class = UQuestTextLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_FloatToArgument", &UQuestTextLibrary::execConv_FloatToArgument },
			{ "Conv_GenderToArgument", &UQuestTextLibrary::execConv_GenderToArgument },
			{ "Conv_IntToArgument", &UQuestTextLibrary::execConv_IntToArgument },
			{ "Conv_TextToArgument", &UQuestTextLibrary::execConv_TextToArgument },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics
	{
		struct QuestTextLibrary_eventConv_FloatToArgument_Parms
		{
			float InFloat;
			FQuestTextArgument ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestTextLibrary_eventConv_FloatToArgument_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTextArgument, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::NewProp_InFloat = { "InFloat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestTextLibrary_eventConv_FloatToArgument_Parms, InFloat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::NewProp_InFloat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Quests|Argument" },
		{ "Comment", "/** Converts a float value to an argument */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Argument (float)" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextLibrary.h" },
		{ "ToolTip", "Converts a float value to an argument" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTextLibrary, nullptr, "Conv_FloatToArgument", nullptr, nullptr, sizeof(QuestTextLibrary_eventConv_FloatToArgument_Parms), Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics
	{
		struct QuestTextLibrary_eventConv_GenderToArgument_Parms
		{
			EQuestArgGender InGender;
			FQuestTextArgument ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InGender;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InGender_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestTextLibrary_eventConv_GenderToArgument_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTextArgument, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::NewProp_InGender = { "InGender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestTextLibrary_eventConv_GenderToArgument_Parms, InGender), Z_Construct_UEnum_QuestExtension_EQuestArgGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::NewProp_InGender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::NewProp_InGender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::NewProp_InGender_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Quests|Argument" },
		{ "Comment", "/** Converts a gender value to an argument */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Argument (gender)" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextLibrary.h" },
		{ "ToolTip", "Converts a gender value to an argument" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTextLibrary, nullptr, "Conv_GenderToArgument", nullptr, nullptr, sizeof(QuestTextLibrary_eventConv_GenderToArgument_Parms), Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics
	{
		struct QuestTextLibrary_eventConv_IntToArgument_Parms
		{
			int32 InInt;
			FQuestTextArgument ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InInt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestTextLibrary_eventConv_IntToArgument_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTextArgument, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::NewProp_InInt = { "InInt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestTextLibrary_eventConv_IntToArgument_Parms, InInt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::NewProp_InInt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Quests|Argument" },
		{ "Comment", "/** Converts an integer value to an argument */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Argument (int)" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextLibrary.h" },
		{ "ToolTip", "Converts an integer value to an argument" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTextLibrary, nullptr, "Conv_IntToArgument", nullptr, nullptr, sizeof(QuestTextLibrary_eventConv_IntToArgument_Parms), Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics
	{
		struct QuestTextLibrary_eventConv_TextToArgument_Parms
		{
			FText InText;
			FQuestTextArgument ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestTextLibrary_eventConv_TextToArgument_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestTextArgument, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestTextLibrary_eventConv_TextToArgument_Parms, InText), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Quests|Argument" },
		{ "Comment", "/** Converts a text value to an argument */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Argument (text)" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextLibrary.h" },
		{ "ToolTip", "Converts a text value to an argument" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestTextLibrary, nullptr, "Conv_TextToArgument", nullptr, nullptr, sizeof(QuestTextLibrary_eventConv_TextToArgument_Parms), Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestTextLibrary_NoRegister()
	{
		return UQuestTextLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UQuestTextLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestTextLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestExtension,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestTextLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestTextLibrary_Conv_FloatToArgument, "Conv_FloatToArgument" }, // 2466450659
		{ &Z_Construct_UFunction_UQuestTextLibrary_Conv_GenderToArgument, "Conv_GenderToArgument" }, // 432985924
		{ &Z_Construct_UFunction_UQuestTextLibrary_Conv_IntToArgument, "Conv_IntToArgument" }, // 464209929
		{ &Z_Construct_UFunction_UQuestTextLibrary_Conv_TextToArgument, "Conv_TextToArgument" }, // 2707229494
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestTextLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Quests/Text/QuestTextLibrary.h" },
		{ "ModuleRelativePath", "Public/Quests/Text/QuestTextLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestTextLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestTextLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestTextLibrary_Statics::ClassParams = {
		&UQuestTextLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestTextLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestTextLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestTextLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestTextLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestTextLibrary, 391205469);
	template<> QUESTEXTENSION_API UClass* StaticClass<UQuestTextLibrary>()
	{
		return UQuestTextLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestTextLibrary(Z_Construct_UClass_UQuestTextLibrary, &UQuestTextLibrary::StaticClass, TEXT("/Script/QuestExtension"), TEXT("UQuestTextLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestTextLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
