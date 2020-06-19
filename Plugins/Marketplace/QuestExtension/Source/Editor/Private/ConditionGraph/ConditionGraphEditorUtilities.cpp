// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ConditionGraphEditorUtilities.h"
#include "Toolkits/ToolkitManager.h"
#include "GraphEditor.h"

#include "QuestExtensionEditor.h"
#include "ConditionContainerCustomization.h"
#include "ConditionGraph/ConditionGraph.h"
#include "ConditionGraph/ConditionGraphNode.h"

#include "Conditions/ConditionContainer.h"


bool FConditionGraphEditorUtilities::CanPasteNodes(const class UEdGraph* Graph)
{
	bool bCanPaste = false;
	FConditionContainerCustomization* ContainerEditor = GetContainerCustomizationFromGraph(Graph);
	if (ContainerEditor)
	{
		bCanPaste = ContainerEditor->CanPasteNodes();
	}
	return bCanPaste;
}

void FConditionGraphEditorUtilities::PasteNodesHere(class UEdGraph* Graph, const FVector2D& Location)
{
	FConditionContainerCustomization* ContainerEditor = GetContainerCustomizationFromGraph(Graph);
	if (ContainerEditor)
	{
		ContainerEditor->PasteNodesHere(Location);
	}
}

bool FConditionGraphEditorUtilities::GetBoundsForSelectedNodes(const UEdGraph* Graph, class FSlateRect& Rect, float Padding)
{
	FConditionContainerCustomization* ContainerEditor = GetContainerCustomizationFromGraph(Graph);
	if(ContainerEditor)
	{
		return ContainerEditor->GetBoundsForSelectedNodes(Rect, Padding);
	}
	return false;
}

int32 FConditionGraphEditorUtilities::GetNumberOfSelectedNodes(const UEdGraph* Graph)
{
	FConditionContainerCustomization* ContainerEditor = GetContainerCustomizationFromGraph(Graph);
	if (ContainerEditor)
	{
		return ContainerEditor->GetNumberOfSelectedNodes();
	}
	return 0;
}

TSet<UObject*> FConditionGraphEditorUtilities::GetSelectedNodes(const UEdGraph* Graph)
{
	FConditionContainerCustomization* ContainerEditor = GetContainerCustomizationFromGraph(Graph);
	if (ContainerEditor)
	{
		return ContainerEditor->GetSelectedNodes();
	}
	return TSet<UObject*>();
}

FConditionContainerCustomization* FConditionGraphEditorUtilities::GetContainerCustomizationFromGraph(const UEdGraph* Graph)
{
	check(Graph);

	return Cast<const UConditionGraph>(Graph)->ContainerEditor;
}
