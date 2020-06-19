// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestGroupPanelNodeFactory.h"

#include "QuestGroupNode.h"
#include "SQuestGroupNode.h"
#include "QuestGroupGraph.h"

TSharedPtr<SGraphNode> FQuestGroupPanelNodeFactory::CreateNode(UEdGraphNode* Node) const
{
	if (UQuestGroupNode_Base* QGNode = Cast<UQuestGroupNode_Base>(Node))
	{
		return SNew(SQuestGroupNode, QGNode);
	}

	return FGraphPanelNodeFactory::CreateNode(Node);
}
