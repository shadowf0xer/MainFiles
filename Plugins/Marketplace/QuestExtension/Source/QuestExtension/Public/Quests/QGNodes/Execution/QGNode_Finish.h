// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "../QGNode.h"
#include "QGNode_Finish.generated.h"


UCLASS(Abstract, Category = "Execution")
class QUESTEXTENSION_API UQGNode_Finish : public UQGNode
{
	GENERATED_BODY()

	virtual const bool CanExecuteNodes() const override { return false; }
	virtual const bool CanRejectNodes()  const override { return false; }
	virtual const bool CanBeRejected()   const override { return false; }

protected:

	void CompleteQuestGroup(bool bSuccess) const;
};
