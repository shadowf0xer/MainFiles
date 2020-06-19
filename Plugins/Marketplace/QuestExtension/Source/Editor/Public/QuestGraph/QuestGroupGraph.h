// Copyright 2015-2019 Piperift. All Rights Reserved.
#pragma once

#include "GraphEditor.h"

#include "EdGraph/EdGraph.h"
#include "Quests/Questgroup.h"

#include "QuestGroupGraph.generated.h"


UCLASS()
class UQuestGroupGraph : public UEdGraph
{
	GENERATED_UCLASS_BODY()

public:

	void RefreshGraph();

	/** Returns the SoundCue that contains this graph */
	QUESTEXTENSIONEDITOR_API class UQuestGroup* GetQuest() const;

private:

	void RemoveAllNodes();
};
