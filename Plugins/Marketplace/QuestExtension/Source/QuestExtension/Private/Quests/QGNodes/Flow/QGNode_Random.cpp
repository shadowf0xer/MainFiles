 // Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QGNodes/Flow/QGNode_Random.h"


#define LOCTEXT_NAMESPACE "QGNode_Random"


const TArray<FName, TInlineAllocator<64>> UQGNode_Random::FastIntToName {
	{ "0" }, { "1" }, { "2" }, { "3" }, { "4" }, { "5" }, { "6" }, { "7" }, { "8" }, { "9" }, { "10" },{ "11" },{ "12" },{ "13" },{ "14" },{ "15" },
	{ "16" },{ "17" },{ "18" },{ "19" },{ "20" },{ "21" },{ "22" },{ "23" },{ "24" },{ "25" },{ "26" },{ "27" },{ "28" },{ "29" },{ "30" },{ "31" },
	{ "32" },{ "33" },{ "34" },{ "35" },{ "36" },{ "37" },{ "38" },{ "39" },{ "40" },{ "41" },{ "42" },{ "43" },{ "44" },{ "45" },{ "46" },{ "47" },
	{ "48" },{ "49" },{ "50" },{ "51" },{ "52" },{ "53" },{ "54" },{ "55" },{ "56" },{ "57" },{ "58" },{ "59" },{ "60" },{ "61" },{ "62" },{ "63" }
};

UQGNode_Random::UQGNode_Random()
	: Super()
	, Outputs(3)
{
	Events.Empty();
	UpdateEvents();
}

void UQGNode_Random::OnStart()
{
}

#if WITH_EDITORONLY_DATA
void UQGNode_Random::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.Property)
	{
		UpdateEvents();
	}
}
#endif //WITH_EDITORONLY_DATA


void UQGNode_Random::UpdateEvents()
{
	if (Events.Num() != Outputs)
	{
		//Add missing events
		int32 I = 0;
		for (I = 0; I < Outputs; ++I)
		{
			if (Events.Num() <= I)
			{
				AddEvent(FQGNodeOutput(FastIntToName[I], {" "}));
			}
		}

		//Remove exceeding events
		if (I < Events.Num()) {
			Events.RemoveAt(I, Events.Num() - Outputs);
		}

		//Update graph node
		MarkPackageDirty();
	}
}

#undef LOCTEXT_NAMESPACE
