// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "AssetTypeAction_QuestBase.h"
#include "Quest.h"
#include "QuestExtensionModule.h"

#include "AssetToolsModule.h"
#include "ContentBrowserModule.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"


//////////////////////////////////////////////////////////////////////////
// FAssetTypeAction_Quest

FText FAssetTypeAction_QuestBase::GetName() const
{
	return LOCTEXT("FAssetTypeAction_QuestName", "Quest");
}

FColor FAssetTypeAction_QuestBase::GetTypeColor() const
{
	return FColor(244, 175, 65);
}

UClass* FAssetTypeAction_QuestBase::GetSupportedClass() const
{
	return UQuestBase::StaticClass();
}

uint32 FAssetTypeAction_QuestBase::GetCategories()
{
	if (FQuestExtensionModule* Module = FQuestExtensionModule::GetInstance()) {
		return Module->GetAssetCategoryBit();
	}
	// If Narrative Extension module is not found use Miscellaneous 
	return EAssetTypeCategories::Misc;
}

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
