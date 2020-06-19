// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Voxel/Public/VoxelWorldInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelWorldInterface() {}
// Cross Module References
	VOXEL_API UEnum* Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding();
	UPackage* Z_Construct_UPackage__Script_Voxel();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface_NoRegister();
	VOXEL_API UClass* Z_Construct_UClass_AVoxelWorldInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EVoxelWorldCoordinatesRounding_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding, Z_Construct_UPackage__Script_Voxel(), TEXT("EVoxelWorldCoordinatesRounding"));
		}
		return Singleton;
	}
	template<> VOXEL_API UEnum* StaticEnum<EVoxelWorldCoordinatesRounding>()
	{
		return EVoxelWorldCoordinatesRounding_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVoxelWorldCoordinatesRounding(EVoxelWorldCoordinatesRounding_StaticEnum, TEXT("/Script/Voxel"), TEXT("EVoxelWorldCoordinatesRounding"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Hash() { return 3453108973U; }
	UEnum* Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Voxel();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVoxelWorldCoordinatesRounding"), 0, Get_Z_Construct_UEnum_Voxel_EVoxelWorldCoordinatesRounding_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVoxelWorldCoordinatesRounding::RoundToNearest", (int64)EVoxelWorldCoordinatesRounding::RoundToNearest },
				{ "EVoxelWorldCoordinatesRounding::RoundUp", (int64)EVoxelWorldCoordinatesRounding::RoundUp },
				{ "EVoxelWorldCoordinatesRounding::RoundDown", (int64)EVoxelWorldCoordinatesRounding::RoundDown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/VoxelWorldInterface.h" },
				{ "RoundDown.Name", "EVoxelWorldCoordinatesRounding::RoundDown" },
				{ "RoundToNearest.Name", "EVoxelWorldCoordinatesRounding::RoundToNearest" },
				{ "RoundUp.Name", "EVoxelWorldCoordinatesRounding::RoundUp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Voxel,
				nullptr,
				"EVoxelWorldCoordinatesRounding",
				"EVoxelWorldCoordinatesRounding",
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
	void AVoxelWorldInterface::StaticRegisterNativesAVoxelWorldInterface()
	{
	}
	UClass* Z_Construct_UClass_AVoxelWorldInterface_NoRegister()
	{
		return AVoxelWorldInterface::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelWorldInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelWorldInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Voxel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelWorldInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelWorldInterface.h" },
		{ "ModuleRelativePath", "Public/VoxelWorldInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelWorldInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelWorldInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelWorldInterface_Statics::ClassParams = {
		&AVoxelWorldInterface::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelWorldInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVoxelWorldInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelWorldInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelWorldInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelWorldInterface, 3229590424);
	template<> VOXEL_API UClass* StaticClass<AVoxelWorldInterface>()
	{
		return AVoxelWorldInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelWorldInterface(Z_Construct_UClass_AVoxelWorldInterface, &AVoxelWorldInterface::StaticClass, TEXT("/Script/Voxel"), TEXT("AVoxelWorldInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelWorldInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
