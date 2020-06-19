// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "../QGNode_Logic.h"

#include "QGNode_Random.generated.h"


UCLASS(NotBlueprintable, meta = (DisplayName = "Random"), Category = "Flow")
class QUESTEXTENSION_API UQGNode_Random : public UQGNode_Logic
{
	GENERATED_BODY()

	// Used to quickly search for an output based on an int
	static const TArray<FName, TInlineAllocator<64>> FastIntToName;


	UPROPERTY(VisibleAnywhere, Category = "Random", meta = (ClampMin = 1, ClampMax = 64, UIMin = 1, UIMax = 16))
	int32 Outputs;


public:

	UQGNode_Random();

protected:

	virtual void OnStart() override;

#if WITH_EDITORONLY_DATA
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif //WITH_EDITORONLY_DATA

private:

	void UpdateEvents();
};
