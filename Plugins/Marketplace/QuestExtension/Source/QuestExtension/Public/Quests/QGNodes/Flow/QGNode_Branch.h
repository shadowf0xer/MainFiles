// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "../QGNode_Logic.h"
#include "QGNode_Branch.generated.h"



UCLASS(Blueprintable, meta = (DisplayName = "Branch", HiddenInQuestGroup), Category = "Flow")
class QUESTEXTENSION_API UQGNode_Branch : public UQGNode_Logic
{
	GENERATED_BODY()

public:

	static const FName YesName;
	static const FName NoName;


	UQGNode_Branch();

protected:

	virtual void OnStart() override {
		ReceiveStart();
	}

	virtual void OnFinish(const EQGNodeFinishReason Reason) override;

	// Call to succeed this node and call "Yes" output
	UFUNCTION(BlueprintCallable, Category = Branch)
	void Yes() {
		Finish(EQGNodeFinishReason::Succeed);
	}

	// Call to fail this node and call "No" output
	UFUNCTION(BLueprintCallable, Category = Branch)
	void No() {
		Finish(EQGNodeFinishReason::Fail);
	}

public:
};
