// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "Conditions/ConditionOutput.h"
#include "Conditions/QuestCondition.h"
#include "QuestManagerComponent.h"


void FConditionOutput::StartCheck(const FConditionCompleteDel& InOnComplete)
{
	//Execute connected Nodes
	if (IsConnected())
	{
		Connections[0]->StartCheck(InOnComplete);
	}
	else
	{
		InOnComplete.Execute(EConditionState::Failed);
	}
}

void FConditionOutput::CancelCheck()
{
	//Execute connected Nodes
	if (IsConnected())
	{
		Connections[0]->CancelCheck();
	}
}

UQuestCondition* FConditionOutput::FindSubNodeOfType(TSubclassOf<UQuestCondition> Class, const bool bFilterByCompleted /*= false*/) const
{
	for (auto* ConnectedNode : Connections)
	{
		if (ConnectedNode)
		{
			if (ConnectedNode->IsA(Class))
			{
				return ConnectedNode;
			}

			//Are we filtering by completed conditions only?
			if (!bFilterByCompleted || ConnectedNode->GetState() == EConditionState::Success)
			{
				UQuestCondition* FoundNode = ConnectedNode->FindSubNodeOfType(Class, bFilterByCompleted);
				if (FoundNode)
				{
					return FoundNode;
				}
			}
		}
	}
	return nullptr;
}

void FConditionOutput::GetConnectedNodes(TArray<UQuestCondition*>& OutConnections) const
{
	OutConnections.Append(Connections);
}

void FConditionOutput::GetAllConnectedNodes(TArray<UQuestCondition*>& OutConnections) const
{
	for (auto* Node : Connections)
	{
		if (Node)
		{
			Node->GetAllNodes(OutConnections);
		}
	}
}
