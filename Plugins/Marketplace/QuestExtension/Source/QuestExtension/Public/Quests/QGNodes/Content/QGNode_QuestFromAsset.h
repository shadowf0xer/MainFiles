// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "../QGNode.h"
#include "QuestBase.h"
#include "QGNode_QuestFromAsset.generated.h"

class UQuestGroup;


UCLASS(meta = (DisplayName = "Quest from Asset"), Category = "Content")
class QUESTEXTENSION_API UQGNode_QuestFromAsset : public UQGNode
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Quest)
	UQuestBase* QuestAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Quest)
	bool bIsOptional;


	UQGNode_QuestFromAsset();

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
