// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "EdGraphUtilities.h"

class FQuestGroupPanelNodeFactory : public FGraphPanelNodeFactory
{
	virtual TSharedPtr<class SGraphNode> CreateNode(UEdGraphNode* Node) const override;
};
