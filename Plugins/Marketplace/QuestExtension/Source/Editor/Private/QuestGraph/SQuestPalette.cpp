// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "SQuestPalette.h"
#include "QuestGraph/QuestGroupGraphSchema.h"


void SQuestPalette::Construct(const FArguments& InArgs)
{
	// Auto expand the palette as there's so few nodes
	SGraphPalette::Construct(SGraphPalette::FArguments().AutoExpandActionMenu(true));
}

void SQuestPalette::CollectAllActions(FGraphActionListBuilderBase& OutAllActions)
{
	const UQuestGroupGraphSchema* Schema = GetDefault<UQuestGroupGraphSchema>();

	FGraphActionMenuBuilder ActionMenuBuilder;

	// Determine all possible actions
	Schema->GetPaletteActions(ActionMenuBuilder);

	//@TODO: Avoid this copy
	OutAllActions.Append(ActionMenuBuilder);
}
