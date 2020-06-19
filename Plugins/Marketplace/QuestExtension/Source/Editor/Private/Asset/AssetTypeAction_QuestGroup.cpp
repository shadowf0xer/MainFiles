// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "AssetTypeAction_QuestGroup.h"
#include "QuestExtensionEditor.h"
#include "QuestGroup.h"
#include "QuestExtensionModule.h"

#include "AssetToolsModule.h"
#include "ContentBrowserModule.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"


//////////////////////////////////////////////////////////////////////////
// FAssetTypeAction_QuestGroup

FText FAssetTypeAction_QuestGroup::GetName() const
{
	return LOCTEXT("FAssetTypeAction_QuestGroupName", "Quest Group");
}

FColor FAssetTypeAction_QuestGroup::GetTypeColor() const
{
	return FColor(244, 145, 65);
}

UClass* FAssetTypeAction_QuestGroup::GetSupportedClass() const
{
	return UQuestGroup::StaticClass();
}

void FAssetTypeAction_QuestGroup::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		auto QuestGroup = Cast<UQuestGroup>(*ObjIt);
		if (QuestGroup != nullptr)
		{
			FQuestExtensionEditorModule* NEEditorModule = &FModuleManager::LoadModuleChecked<FQuestExtensionEditorModule>("QuestExtensionEditor");
			NEEditorModule->CreateQuestGroupEditor(Mode, EditWithinLevelEditor, QuestGroup);
		}
	}
}

//////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE
