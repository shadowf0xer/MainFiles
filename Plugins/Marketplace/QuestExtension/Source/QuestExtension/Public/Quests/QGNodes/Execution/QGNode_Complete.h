// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QGNode_Finish.h"
#include "QGNode_Complete.generated.h"


UCLASS(meta = (DisplayName = "Complete"), Category = "Execution")
class QUESTEXTENSION_API UQGNode_Complete : public UQGNode_Finish
{
	GENERATED_BODY()

protected:

	virtual void OnStart() override {
		CompleteQuestGroup(true);
	}
};
