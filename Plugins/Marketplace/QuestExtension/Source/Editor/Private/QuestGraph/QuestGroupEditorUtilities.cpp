// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGroupEditorUtilities.h"
#include <Toolkits/ToolkitManager.h>
#include <Engine/Selection.h>
#include <GraphEditor.h>

#include "QuestExtensionEditor.h"
#include "QuestGraph/IQuestGroupEditor.h"
#include "QuestGraph/QuestGroupGraph.h"
#include "QuestGraph/QuestGroupNode.h"

#include "QuestBase.h"
#include "QuestGroup.h"
#include "QGNodes/Content/QGNode_QuestFromAsset.h"


bool FQuestGroupEditorUtilities::CanPasteNodes(const class UEdGraph* Graph)
{
	bool bCanPaste = false;
	TSharedPtr<class IQuestGroupEditor> QuestGroupEditor = GetIQuestGroupEditorForObject(Graph);
	if(QuestGroupEditor.IsValid())
	{
		bCanPaste = QuestGroupEditor->CanPasteNodes();
	}
	return bCanPaste;
}

void FQuestGroupEditorUtilities::PasteNodesHere(class UEdGraph* Graph, const FVector2D& Location)
{
	TSharedPtr<class IQuestGroupEditor> QuestGroupEditor = GetIQuestGroupEditorForObject(Graph);
	if(QuestGroupEditor.IsValid())
	{
		QuestGroupEditor->PasteNodesHere(Location);
	}
}

void FQuestGroupEditorUtilities::CreateQuestContainers(TArray<class UQuestBase*>& SelectedQuests, UQuestGroup* QuestGroup, TArray<class UQGNode*>& OutQGNodes, FVector2D Location)
{
	const int32 NodeSpacing = 100;

	Location.Y -= static_cast<float>((SelectedQuests.Num() - 1) * NodeSpacing) / 2.f;

	for (int32 Index = 0; Index < SelectedQuests.Num(); Index++)
	{
		UQuestBase* NewQuest = SelectedQuests[Index];
		if (NewQuest)
		{
			UQGNode_QuestFromAsset* QGNode = CastChecked<UQGNode_QuestFromAsset>(QuestGroup->ConstructQuestNode(UQGNode_QuestFromAsset::StaticClass()));

			QGNode->QuestAsset = NewQuest;

			QGNode->GraphNode->NodePosX = Location.X/* - CastChecked<UQuestGroupNode>(QGNode->GetGraphNode())->EstimateNodeWidth()*/;
			QGNode->GraphNode->NodePosY = Location.Y + (NodeSpacing * Index);

			OutQGNodes.Add(QGNode);
		}
	}
}

bool FQuestGroupEditorUtilities::GetBoundsForSelectedNodes(const UEdGraph* Graph, class FSlateRect& Rect, float Padding)
{
	TSharedPtr<class IQuestGroupEditor> QuestGroupEditor = GetIQuestGroupEditorForObject(Graph);
	if(QuestGroupEditor.IsValid())
	{
		return QuestGroupEditor->GetBoundsForSelectedNodes(Rect, Padding);
	}
	return false;
}

int32 FQuestGroupEditorUtilities::GetNumberOfSelectedNodes(const UEdGraph* Graph)
{
	TSharedPtr<class IQuestGroupEditor> QuestGroupEditor = GetIQuestGroupEditorForObject(Graph);
	if(QuestGroupEditor.IsValid())
	{
		return QuestGroupEditor->GetNumberOfSelectedNodes();
	}
	return 0;
}

TSet<UObject*> FQuestGroupEditorUtilities::GetSelectedNodes(const UEdGraph* Graph)
{
	TSharedPtr<class IQuestGroupEditor> QuestGroupEditor = GetIQuestGroupEditorForObject(Graph);
	if(QuestGroupEditor.IsValid())
	{
		return QuestGroupEditor->GetSelectedNodes();
	}
	return TSet<UObject*>();
}

bool FQuestGroupEditorUtilities::GetSelectedAssets(TArray<UQuestBase*>& SelectedQuests)
{
	TArray<TWeakObjectPtr<UObject>> SelectedAssets;
	GEditor->GetSelectedObjects()->GetSelectedObjects(SelectedAssets);

	for (const TWeakObjectPtr<UObject> Asset : SelectedAssets)
	{
		if (UQuestBase* Quest = Cast<UQuestBase>(Asset.Get()))
		{
			SelectedQuests.Add(Quest);
		}
	}

	return SelectedQuests.Num() > 0;
}

TSharedPtr<class IQuestGroupEditor> FQuestGroupEditorUtilities::GetIQuestGroupEditorForObject(const UObject* ObjectToFocusOn)
{
	check(ObjectToFocusOn);

	// Find the associated SoundCue
	UQuestGroup* QuestGroup = Cast<const UQuestGroupGraph>(ObjectToFocusOn)->GetQuest();

	TSharedPtr<IQuestGroupEditor> QuestGroupEditor;
	if (QuestGroup != nullptr)
	{
		TSharedPtr< IToolkit > FoundAssetEditor = FToolkitManager::Get().FindEditorForAsset(QuestGroup);
		if (FoundAssetEditor.IsValid())
		{
			QuestGroupEditor = StaticCastSharedPtr<IQuestGroupEditor>(FoundAssetEditor);
		}
	}
	return QuestGroupEditor;
}
