// Copyright 2015-2019 Piperift. All Rights Reserved.
#pragma once

#include "GraphEditor.h"
#include "EdGraph/EdGraph.h"
#include "Conditions/QuestCondition.h"

#include "ConditionGraph.generated.h"


class UConditionContainer;
class UQuestCondition;
class FConditionContainerCustomization;


UCLASS()
class QUESTEXTENSIONEDITOR_API UConditionGraph : public UEdGraph
{
	GENERATED_UCLASS_BODY()

public:

	UPROPERTY(Transient)
	FText PropertyName;

	FConditionContainerCustomization* ContainerEditor;

	void RefreshGraph();

	/** Returns the SoundCue that contains this graph */
	class UConditionContainer* GetContainer() const;

	class UConditionGraphNode_Root* GetRootNode() const;

private:

	void RemoveAllNodes();

public:

	UQuestCondition* ConstructConditionNode(TSubclassOf<UQuestCondition> NodeClass = UQuestCondition::StaticClass(), bool bSelectNewNode = false);

	void LinkGraphNodesFromConditionNodes();

	void CompileConditionNodesFromGraphNodes();

	void RemoveNullNodes();

	static UConditionGraph* CreateNewConditionGraph(UConditionContainer* Container);
};
