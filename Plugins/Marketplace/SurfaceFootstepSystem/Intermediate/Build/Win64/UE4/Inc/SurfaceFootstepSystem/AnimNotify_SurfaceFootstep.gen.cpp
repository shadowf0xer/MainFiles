// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurfaceFootstepSystem/Public/AnimNotify_SurfaceFootstep.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_SurfaceFootstep() {}
// Cross Module References
	SURFACEFOOTSTEPSYSTEM_API UEnum* Z_Construct_UEnum_SurfaceFootstepSystem_EFootstepTraceDirection();
	UPackage* Z_Construct_UPackage__Script_SurfaceFootstepSystem();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UAnimNotify_SurfaceFootstep_NoRegister();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_UAnimNotify_SurfaceFootstep();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	SURFACEFOOTSTEPSYSTEM_API UClass* Z_Construct_UClass_USurfaceFootstepSystemSettings_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	static UEnum* EFootstepTraceDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SurfaceFootstepSystem_EFootstepTraceDirection, Z_Construct_UPackage__Script_SurfaceFootstepSystem(), TEXT("EFootstepTraceDirection"));
		}
		return Singleton;
	}
	template<> SURFACEFOOTSTEPSYSTEM_API UEnum* StaticEnum<EFootstepTraceDirection>()
	{
		return EFootstepTraceDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFootstepTraceDirection(EFootstepTraceDirection_StaticEnum, TEXT("/Script/SurfaceFootstepSystem"), TEXT("EFootstepTraceDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SurfaceFootstepSystem_EFootstepTraceDirection_Hash() { return 891930938U; }
	UEnum* Z_Construct_UEnum_SurfaceFootstepSystem_EFootstepTraceDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SurfaceFootstepSystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFootstepTraceDirection"), 0, Get_Z_Construct_UEnum_SurfaceFootstepSystem_EFootstepTraceDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFootstepTraceDirection::Down", (int64)EFootstepTraceDirection::Down },
				{ "EFootstepTraceDirection::Up", (int64)EFootstepTraceDirection::Up },
				{ "EFootstepTraceDirection::Forward", (int64)EFootstepTraceDirection::Forward },
				{ "EFootstepTraceDirection::Backward", (int64)EFootstepTraceDirection::Backward },
				{ "EFootstepTraceDirection::Right", (int64)EFootstepTraceDirection::Right },
				{ "EFootstepTraceDirection::Left", (int64)EFootstepTraceDirection::Left },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Backward.Name", "EFootstepTraceDirection::Backward" },
				{ "Down.Name", "EFootstepTraceDirection::Down" },
				{ "Forward.Name", "EFootstepTraceDirection::Forward" },
				{ "Left.Name", "EFootstepTraceDirection::Left" },
				{ "ModuleRelativePath", "Public/AnimNotify_SurfaceFootstep.h" },
				{ "Right.Name", "EFootstepTraceDirection::Right" },
				{ "Up.Name", "EFootstepTraceDirection::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SurfaceFootstepSystem,
				nullptr,
				"EFootstepTraceDirection",
				"EFootstepTraceDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAnimNotify_SurfaceFootstep::StaticRegisterNativesUAnimNotify_SurfaceFootstep()
	{
	}
	UClass* Z_Construct_UClass_UAnimNotify_SurfaceFootstep_NoRegister()
	{
		return UAnimNotify_SurfaceFootstep::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FootSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTraceFromFootSocket_MetaData[];
#endif
		static void NewProp_bTraceFromFootSocket_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceFromFootSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepTraceDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FootstepTraceDirection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FootstepTraceDirection_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootstepCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_SurfaceFootstepSystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An anim notify from the Surface Footstep System plugin which describes footstep properties.\n */" },
		{ "DisplayName", "Surface Footstep" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify_SurfaceFootstep.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/AnimNotify_SurfaceFootstep.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "An anim notify from the Surface Footstep System plugin which describes footstep properties." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotify_SurfaceFootstep.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepSettings = { "FootstepSettings", nullptr, (EPropertyFlags)0x0040000000000010, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_SurfaceFootstep, FootstepSettings), Z_Construct_UClass_USurfaceFootstepSystemSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootSocket_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** A socket name from which a trace will be created. If it doesn't exist in the skeletal mesh, Root socket will be used. */" },
		{ "EditCondition", "bTraceFromFootSocket" },
		{ "ModuleRelativePath", "Public/AnimNotify_SurfaceFootstep.h" },
		{ "ToolTip", "A socket name from which a trace will be created. If it doesn't exist in the skeletal mesh, Root socket will be used." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootSocket = { "FootSocket", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_SurfaceFootstep, FootSocket), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_bTraceFromFootSocket_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** If false, trace will start at Root socket location. */" },
		{ "ModuleRelativePath", "Public/AnimNotify_SurfaceFootstep.h" },
		{ "ToolTip", "If false, trace will start at Root socket location." },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_bTraceFromFootSocket_SetBit(void* Obj)
	{
		((UAnimNotify_SurfaceFootstep*)Obj)->bTraceFromFootSocket = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_bTraceFromFootSocket = { "bTraceFromFootSocket", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimNotify_SurfaceFootstep), &Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_bTraceFromFootSocket_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_bTraceFromFootSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_bTraceFromFootSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepTraceDirection_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** If the socket is not rotated, \"Down\" direction should be used most of the time, but in some cases (for instance, wall climbing or falling on the floor) you might want to change a trace direction. */" },
		{ "ModuleRelativePath", "Public/AnimNotify_SurfaceFootstep.h" },
		{ "ToolTip", "If the socket is not rotated, \"Down\" direction should be used most of the time, but in some cases (for instance, wall climbing or falling on the floor) you might want to change a trace direction." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepTraceDirection = { "FootstepTraceDirection", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_SurfaceFootstep, FootstepTraceDirection), Z_Construct_UEnum_SurfaceFootstepSystem_EFootstepTraceDirection, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepTraceDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepTraceDirection_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepTraceDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepCategory_MetaData[] = {
		{ "Categories", "Footstep" },
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Has to be one of the names from the Surface Footstep System Settings in the Project Settings. */" },
		{ "ModuleRelativePath", "Public/AnimNotify_SurfaceFootstep.h" },
		{ "ToolTip", "Has to be one of the names from the Surface Footstep System Settings in the Project Settings." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepCategory = { "FootstepCategory", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_SurfaceFootstep, FootstepCategory), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_bTraceFromFootSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepTraceDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepTraceDirection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::NewProp_FootstepCategory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_SurfaceFootstep>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::ClassParams = {
		&UAnimNotify_SurfaceFootstep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_SurfaceFootstep()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_SurfaceFootstep_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_SurfaceFootstep, 3780102804);
	template<> SURFACEFOOTSTEPSYSTEM_API UClass* StaticClass<UAnimNotify_SurfaceFootstep>()
	{
		return UAnimNotify_SurfaceFootstep::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_SurfaceFootstep(Z_Construct_UClass_UAnimNotify_SurfaceFootstep, &UAnimNotify_SurfaceFootstep::StaticClass, TEXT("/Script/SurfaceFootstepSystem"), TEXT("UAnimNotify_SurfaceFootstep"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_SurfaceFootstep);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
