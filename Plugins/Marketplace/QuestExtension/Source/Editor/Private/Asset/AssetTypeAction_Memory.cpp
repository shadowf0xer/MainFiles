// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "AssetTypeAction_Memory.h"
#include "Quest.h"
#include "QuestExtensionModule.h"

#include "AssetToolsModule.h"
#include "ContentBrowserModule.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"


//////////////////////////////////////////////////////////////////////////
// FAssetTypeAction_Memory

FText FAssetTypeAction_Memory::GetName() const
{
	return LOCTEXT("FAssetTypeAction_MemoryName", "Memory");
}

FColor FAssetTypeAction_Memory::GetTypeColor() const
{
	return FColor(166, 65, 244);
}

UClass* FAssetTypeAction_Memory::GetSupportedClass() const
{
	return UQuestMemory::StaticClass();
}

uint32 FAssetTypeAction_Memory::GetCategories()
{
	if (FQuestExtensionModule* Module = FQuestExtensionModule::GetInstance()) {
		return Module->GetAssetCategoryBit();
	}
	// If Narrative Extension module is not found use Miscellaneous 
	return EAssetTypeCategories::Misc;
}

void FAssetTypeAction_Memory::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
}

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
