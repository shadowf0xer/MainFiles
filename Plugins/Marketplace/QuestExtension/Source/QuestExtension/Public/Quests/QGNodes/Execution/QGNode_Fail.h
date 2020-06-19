// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QGNode_Finish.h"
#include "QGNode_Fail.generated.h"


UCLASS(meta = (DisplayName = "Fail"), Category = "Execution")
class QUESTEXTENSION_API UQGNode_Fail : public UQGNode_Finish
{
	GENERATED_BODY()

protected:

	virtual void OnStart() override {
		CompleteQuestGroup(false);
	}
};
