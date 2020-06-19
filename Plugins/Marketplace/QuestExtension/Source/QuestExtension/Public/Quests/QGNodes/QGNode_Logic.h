// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "QGNode.h"
#include "QGNode_Logic.generated.h"



UCLASS(Blueprintable, meta = (DisplayName = "Logic", HiddenInQuestGroup))
class QUESTEXTENSION_API UQGNode_Logic : public UQGNode
{
	GENERATED_BODY()

protected:

	virtual void OnStart() override {
		ReceiveStart();
	}

	virtual void OnFinish(const EQGNodeFinishReason Reason) override {
		ReceiveFinish(Reason);
	}

public:

	UFUNCTION(BlueprintNativeEvent)
	void ReceiveStart();

	UFUNCTION(BlueprintImplementableEvent)
	void ReceiveFinish(const EQGNodeFinishReason Reason);

	UFUNCTION(BlueprintNativeEvent)
	FText GetNodeName() const;


	virtual FText GetTitle() const override;

	virtual const bool CanBeRejected() const override { return false; }
};
