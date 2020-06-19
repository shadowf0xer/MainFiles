/*
 * ****************************************************************************************************************
 * Copyright (c) 2016-2020 edddison technologies, inbox@edddison.com. All rights reserved.
 * Unauthorized copying of this file, via any medium is strictly prohibited.
 * edddison technologies and edddison is protected by copyright and trademarks and is proprietary and confidential.
 * ****************************************************************************************************************
 */


#include "EdddisonPluginStyle.h"
#include "EdddisonPluginPrivatePCH.h"






FEdddisonEditorStyle::FEdddisonEditorStyle() : FSlateStyleSet("EdddisonEditorStyle")
{
	const FVector2D IconMainBig(40.0f, 40.0f);
	const FVector2D IconMainSmall(16.0f, 16.0f);

#ifdef USE_SMALL_ICONS
	const FVector2D IconTools(16.0f, 16.0f);
#else
	const FVector2D IconTools(32.0f, 32.0f);
#endif

	// Get the base directory of this plugin
	FString BaseDir = IPluginManager::Get().FindPlugin("EdddisonPlugin")->GetBaseDir();
	SetContentRoot(BaseDir / TEXT("Resources"));

	// Main plugin button
	Set("EdddisonEditor.MainBig", new FSlateImageBrush(RootToContentDir("Editor40", TEXT(".png")), IconMainBig));
	Set("EdddisonEditor.MainSmall", new FSlateImageBrush(RootToContentDir("Editor16", TEXT(".png")), IconMainSmall));

	// Tool buttons
#ifdef USE_SMALL_ICONS
	Set("EdddisonEditor.Add", new FSlateImageBrush(RootToContentDir("16px/267-plus", TEXT(".png")), IconTools));
	Set("EdddisonEditor.Remove", new FSlateImageBrush(RootToContentDir("16px/268-minus", TEXT(".png")), IconTools));
	Set("EdddisonEditor.Clear", new FSlateImageBrush(RootToContentDir("16px/173-bin", TEXT(".png")), IconTools));
	Set("EdddisonEditor.BBox", new FSlateImageBrush(RootToContentDir("16px/140-enlarge2", TEXT(".png")), IconTools));
	Set("EdddisonEditor.Open", new FSlateImageBrush(RootToContentDir("16px/285-play3", TEXT(".png")), IconTools));
	Set("EdddisonEditor.Close", new FSlateImageBrush(RootToContentDir("16px/287-stop2", TEXT(".png")), IconTools));
	Set("EdddisonEditor.Update", new FSlateImageBrush(RootToContentDir("16px/302-loop", TEXT(".png")), IconTools));
	
#else
	Set("EdddisonEditor.Add", new FSlateImageBrush(RootToContentDir("32px/267-plus", TEXT(".png")), IconTools));
	Set("EdddisonEditor.Remove", new FSlateImageBrush(RootToContentDir("32px/268-minus", TEXT(".png")), IconTools));
	Set("EdddisonEditor.Clear", new FSlateImageBrush(RootToContentDir("32px/173-bin", TEXT(".png")), IconTools));
	Set("EdddisonEditor.BBox", new FSlateImageBrush(RootToContentDir("32px/140-enlarge2", TEXT(".png")), IconTools));
	Set("EdddisonEditor.Open", new FSlateImageBrush(RootToContentDir("32px/285-play3", TEXT(".png")), IconTools));
	Set("EdddisonEditor.Close", new FSlateImageBrush(RootToContentDir("32px/287-stop2", TEXT(".png")), IconTools));
	Set("EdddisonEditor.Update", new FSlateImageBrush(RootToContentDir("32px/302-loop", TEXT(".png")), IconTools));
#endif

	FSlateStyleRegistry::RegisterSlateStyle(*this);
}

FEdddisonEditorStyle::~FEdddisonEditorStyle()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*this);
}
