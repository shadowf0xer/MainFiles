// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "ConditionGraphPanelNodeFactory.h"

#include "ConditionGraphNode.h"
#include "SConditionGraphNode.h"
#include "ConditionGraph.h"

TSharedPtr<SGraphNode> FConditionGraphPanelNodeFactory::CreateNode(UEdGraphNode* Node) const
{
	if (UConditionGraphNode_Base* QuestCondition = Cast<UConditionGraphNode_Base>(Node))
	{
		return SNew(SConditionGraphNode, QuestCondition);
	}

	return FGraphPanelNodeFactory::CreateNode(Node);
}
