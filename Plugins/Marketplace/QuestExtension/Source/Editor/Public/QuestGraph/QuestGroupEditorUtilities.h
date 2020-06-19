// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class IQuestGroupEditor;
class UEdGraph;
class UQuestGroup;
struct Rect;


class QUESTEXTENSIONEDITOR_API FQuestGroupEditorUtilities
{
public:

	/** Can we paste to this graph? */
	static bool CanPasteNodes(const class UEdGraph* Graph);

	/** Perform paste on graph, at location */
	static void  PasteNodesHere(class UEdGraph* Graph, const FVector2D& Location);

	/** Adds UQGNodes based on selected objects
	 *
	 * @param SelectedDialogues List of selected DialogueWaves to create player nodes for
	 * @param QuestGroup The QuestGroup that the nodes will be part of
	 * @param OutPlayers Stores all created nodes
	 * @param Location Position of first created node
	 */
	static void CreateQuestContainers(TArray<class UQuestBase*>& SelectedQuests, UQuestGroup* QuestGroup, TArray<class UQGNode*>& OutQGNodes, FVector2D Location);


	/** Get the bounding area for the currently selected nodes
	 *
	 * @param Graph The Graph we are finding bounds for
	 * @param Rect Final output bounding area, including padding
	 * @param Padding An amount of padding to add to all sides of the bounds
	 *
	 * @return false if nothing is selected*/
	static bool GetBoundsForSelectedNodes(const UEdGraph* Graph, class FSlateRect& Rect, float Padding = 0.0f);

	/** Gets the number of nodes that are currently selected */
	static int32 GetNumberOfSelectedNodes(const UEdGraph* Graph);

	/** Get the currently selected set of nodes */
	static TSet<UObject*> GetSelectedNodes(const UEdGraph* Graph);

	static bool GetSelectedAssets(TArray<class UQuestBase*>& SelectedQuests);

private:
	/** Get IQuestGroupEditor for given object, if it exists */
	static TSharedPtr<class IQuestGroupEditor> GetIQuestGroupEditorForObject(const UObject* ObjectToFocusOn);

	FQuestGroupEditorUtilities() {}
};
