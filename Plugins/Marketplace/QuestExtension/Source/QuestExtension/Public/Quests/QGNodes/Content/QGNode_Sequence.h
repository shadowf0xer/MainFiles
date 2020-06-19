// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "LevelSequenceActor.h"

#include "../QGNode.h"
#include "QGNode_Sequence.generated.h"



UCLASS(Blueprintable, meta = (DisplayName = "Play Sequence"), Category = "Content")
class QUESTEXTENSION_API UQGNode_Sequence : public UQGNode
{
	GENERATED_BODY()


public:

	UQGNode_Sequence();


	/** Sequence actor to play.
	 * NOTE: Will only play if actor's level is loaded at the moment of playing.
	 */
	UPROPERTY(EditAnywhere, Category = Sequence)
	TSoftObjectPtr<ALevelSequenceActor> SequenceActor;

private:

#if WITH_EDITORONLY_DATA
	UPROPERTY() // Only for editor purposes
	TSoftObjectPtr<ULevelSequence> SequenceAsset;
#endif //WITH_EDITORONLY_DATA


protected:

	virtual void OnStart() override;

	virtual void OnFinish(const EQGNodeFinishReason Reason) override;

	virtual FText GetTitle() const override;

#if WITH_EDITOR
	virtual FLinearColor GetTitleColor() const override {
		// Alternative: 244, 65, 65
		return FColor{ 200, 80, 80 };
	}
#endif //WITH_EDITOR

#if WITH_EDITORONLY_DATA
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif //WITH_EDITORONLY_DATA

private:

	UFUNCTION()
	void OnSequenceStopped();
};
