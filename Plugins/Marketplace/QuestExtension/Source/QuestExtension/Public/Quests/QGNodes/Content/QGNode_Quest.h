// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "../QGNode.h"
#include "QuestBase.h"
#include "QGNode_Quest.generated.h"

class UQuestGroup;


UCLASS(meta = (DisplayName = "Quest"), Category = "Content")
class QUESTEXTENSION_API UQGNode_Quest : public UQGNode
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, Category = Quest)
	UQuestBase* Quest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Quest)
	bool bIsOptional;


	UQGNode_Quest();

	virtual FText GetTitle() const override;

protected:

	virtual void OnStart() override;
	virtual void OnFinish(const EQGNodeFinishReason Result) override;

public:

	UFUNCTION()
	void OnQuestFinished(const EQuestCompletionState Result);

#if WITH_EDITOR
	virtual FLinearColor GetTitleColor() const override;
#endif //WITH_EDITOR
};
