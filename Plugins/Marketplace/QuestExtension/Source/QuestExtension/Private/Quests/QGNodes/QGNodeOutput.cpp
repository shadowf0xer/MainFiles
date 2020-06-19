// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/QGNodeOutput.h"
#include "QGNodes/QGNode.h"


void FQGNodeOutput::Execute(UQGNode* Parent)
{
	//Reject Nodes
	for (auto* RejecNode : RejectNodes)
	{
		if (RejecNode)
		{
			RejecNode->Reject(Parent);
		}
	}

	//Execute Nodes
	for (auto* ExecNode  : ExecNodes)
	{
		if (ExecNode)
		{
			ExecNode->Execute(Parent);
		}
	}
}

UQGNode* FQGNodeOutput::FindSubNodeOfType(TSubclassOf<UQGNode> Class, const bool bFilterByCompleted /*= false*/) const
{
	for (auto* ExecNode : ExecNodes)
	{
		if (ExecNode)
		{
			if (ExecNode->IsA(Class))
			{
				return ExecNode;
			}

			//Are we filtering by completed nodes only?
			if (!bFilterByCompleted || ExecNode->IsCompleted())
			{
				UQGNode* FoundNode = ExecNode->FindSubNodeOfType(Class, bFilterByCompleted);
				if (FoundNode)
				{
					return FoundNode;
				}
			}
		}
	}
	return nullptr;
}

UQGNode* FQGNodeOutput::FindSubNodeById(FGuid Id) const
{
	for (auto* ExecNode : ExecNodes)
	{
		if (ExecNode)
		{
			if (ExecNode->GetNodeId() == Id)
			{
				return ExecNode;
			}

			UQGNode* FoundNode = ExecNode->FindSubNodeById(Id);
			if (FoundNode)
			{
				return FoundNode;
			}
		}
	}
	return nullptr;
}

void FQGNodeOutput::GetAllConnectedNodes(TArray<UQGNode*>& QGNodes) const
{
	for (auto* Node : ExecNodes)
	{
		if (Node)
		{
			Node->GetAllNodes(QGNodes);
		}
	}
}
