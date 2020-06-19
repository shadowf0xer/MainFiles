// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VARIANTMANAGER_VariantManagerDisplayNode_generated_h
#error "VariantManagerDisplayNode.generated.h already included, missing '#pragma once' in VariantManagerDisplayNode.h"
#endif
#define VARIANTMANAGER_VariantManagerDisplayNode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_DisplayNodes_VariantManagerDisplayNode_h


#define FOREACH_ENUM_EVARIANTMANAGERNODETYPE(op) \
	op(EVariantManagerNodeType::VariantSet) \
	op(EVariantManagerNodeType::Variant) \
	op(EVariantManagerNodeType::Actor) \
	op(EVariantManagerNodeType::Property) \
	op(EVariantManagerNodeType::Function) \
	op(EVariantManagerNodeType::Spacer) 

enum class EVariantManagerNodeType : uint8;
template<> VARIANTMANAGER_API UEnum* StaticEnum<EVariantManagerNodeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
