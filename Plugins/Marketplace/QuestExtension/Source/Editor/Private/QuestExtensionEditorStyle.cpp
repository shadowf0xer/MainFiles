// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestExtensionEditorStyle.h"

#include "Styling/SlateStyleRegistry.h"
#include "Styling/SlateTypes.h"
#include "EditorStyleSet.h"
#include "Interfaces/IPluginManager.h"
#include "SlateOptMacros.h"

TSharedPtr< FSlateStyleSet > FQuestExtensionEditorStyle::StyleSet = nullptr;

void FQuestExtensionEditorStyle::Initialize()
{
	if (!StyleSet.IsValid())
	{
		Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleSet);
	}
}

void FQuestExtensionEditorStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet);
	ensure(StyleSet.IsUnique());
	StyleSet.Reset();
}

FName FQuestExtensionEditorStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("QuestExtensionEditorStyle"));
	return StyleSetName;
}

FString FQuestExtensionEditorStyle::InContent(const FString& RelativePath, const ANSICHAR* Extension)
{
	static FString ContentDir = IPluginManager::Get().FindPlugin(TEXT("QuestExtension"))->GetContentDir();
	FString Debug = (ContentDir / TEXT("Editor") / RelativePath) + Extension;
	return ( ContentDir / TEXT("Editor") / RelativePath) + Extension;
}

#define IMAGE_PLUGIN_BRUSH( RelativePath, ... ) FSlateImageBrush( FQuestExtensionEditorStyle::InContent( TEXT(RelativePath), ".png" ), __VA_ARGS__ )
#define BOX_PLUGIN_BRUSH( RelativePath, ... ) FSlateBoxBrush( FQuestExtensionEditorStyle::InContent( TEXT(RelativePath), ".png" ), __VA_ARGS__ )
#define IMAGE_BRUSH( RelativePath, ...) FSlateImageBrush( StyleSet->RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)
#define BOX_BRUSH( RelativePath, ...) FSlateBoxBrush( StyleSet->RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)
#define TTF_PLUGIN_FONT( RelativePath, ... ) FSlateFontInfo( FQuestExtensionEditorStyle::InContent( TEXT(RelativePath), ".png" ), __VA_ARGS__ )
#define TTF_CORE_FONT( RelativePath, ... ) FSlateFontInfo( StyleSet->RootToCoreContentDir( RelativePath, TEXT(".ttf") ), __VA_ARGS__ )

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void FQuestExtensionEditorStyle::Create()
{
	// Const icon sizes
	const FVector2D Icon8x8(8.0f, 8.0f);
	const FVector2D Icon10x10(10.0f, 10.0f);
	const FVector2D Icon16x16(16.0f, 16.0f);
	const FVector2D Icon20x20(20.0f, 20.0f);
	const FVector2D Icon24x24(20.0f, 20.0f);
	const FVector2D Icon32x32(32.0f, 32.0f);
	const FVector2D Icon40x40(40.0f, 40.0f);
	const FVector2D Icon64x64(64.0f, 64.0f);
	const FVector2D Icon128x128(128.0f, 128.0f);

	StyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));

	StyleSet->SetContentRoot(FPaths::EngineContentDir() / TEXT("Editor/Slate"));
	StyleSet->SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));

	const FTextBlockStyle& NormalText = FEditorStyle::Get().GetWidgetStyle<FTextBlockStyle>("NormalText");

	// Class Icons
	{
		StyleSet->Set("ClassThumbnail.QuestBase",   new IMAGE_PLUGIN_BRUSH("Assets/Quest", Icon128x128));
		StyleSet->Set("ClassThumbnail.QuestGroup",  new IMAGE_PLUGIN_BRUSH("Assets/QuestGroup", Icon128x128));
		StyleSet->Set("ClassThumbnail.QuestMemory", new IMAGE_PLUGIN_BRUSH("Assets/QuestMemory", Icon128x128));
	}

	// Quest Group graph styles
	{
		StyleSet->Set("QuestGroupEditor.Graph.TextStyle", FTextBlockStyle(NormalText)
			.SetColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f))
			.SetFont(TTF_CORE_FONT("Fonts/Roboto-Regular", 8)));

		StyleSet->Set("QuestGroupEditor.Graph.Node.Title", FTextBlockStyle(NormalText)
			.SetColorAndOpacity(FLinearColor(0.0f, 0.0f, 0.0f, 1.0f))
			.SetFont(TTF_CORE_FONT("Fonts/Roboto-Bold", 8)));

		StyleSet->Set("QuestGroupEditor.Graph.NodeBody", new IMAGE_PLUGIN_BRUSH("QuestGroupEditor/NodeBody", Icon16x16));
		StyleSet->Set("QuestGroupEditor.Graph.NodeBody.Latent", new IMAGE_PLUGIN_BRUSH("QuestGroupEditor/NodeBodyLatent", Icon32x32, FLinearColor(1, 1, 1, 1), ESlateBrushTileType::Both));
		StyleSet->Set("QuestGroupEditor.Graph.NodeIcon", new IMAGE_PLUGIN_BRUSH("QuestGroupEditor/NodeIcon", Icon16x16));
		StyleSet->Set("QuestGroupEditor.Graph.LatentIcon", new IMAGE_PLUGIN_BRUSH("QuestGroupEditor/LatentIcon", Icon20x20));
		StyleSet->Set("QuestGroupEditor.Graph.LatentDeniedIcon", new IMAGE_PLUGIN_BRUSH("QuestGroupEditor/LatentDeniedIcon", Icon20x20));
		StyleSet->Set("QuestGroupEditor.Graph.Pin.Background", new IMAGE_PLUGIN_BRUSH("QuestGroupEditor/NodePin", Icon10x10));
		StyleSet->Set("QuestGroupEditor.Graph.Pin.BackgroundHovered", new IMAGE_PLUGIN_BRUSH("QuestGroupEditor/NodePinHoverCue", Icon10x10));
		StyleSet->Set("QuestGroupEditor.Graph.Pin.Disconnected.Background", new IMAGE_PLUGIN_BRUSH("QuestGroupEditor/NodeDisconnectedPin", Icon10x10));
		StyleSet->Set("QuestGroupEditor.Graph.Pin.Disconnected.BackgroundHovered", new IMAGE_PLUGIN_BRUSH("QuestGroupEditor/NodeDisconnectedPinHoverCue", Icon10x10));
		StyleSet->Set("QuestGroupEditor.Graph.Node.ShadowSelected", new BOX_PLUGIN_BRUSH("QuestgroupEditor/NodeShadowSelected", FMargin(18.0f / 64.0f)));
		StyleSet->Set("QuestGroupEditor.Graph.Node.Shadow", new BOX_BRUSH("Graph/RegularNode_shadow", FMargin(18.0f / 64.0f)));

		//Debugger

		StyleSet->Set("QGEditor.Debugger.BackEnd",	new IMAGE_BRUSH("Animation/backward_end",  Icon24x24));
		StyleSet->Set("QGEditor.Debugger.Back",	   new IMAGE_BRUSH("Animation/backward_step", Icon24x24));
		StyleSet->Set("QGEditor.Debugger.Forward",	new IMAGE_BRUSH("Animation/forward_step",  Icon24x24));
		StyleSet->Set("QGEditor.Debugger.ForwardEnd", new IMAGE_BRUSH("Animation/forward_end",   Icon24x24));

		StyleSet->Set("QGEditor.Debugger.PausePlaySession", new IMAGE_BRUSH("Icons/icon_pause_40x", Icon40x40));
		StyleSet->Set("QGEditor.Debugger.PausePlaySession.Small", new IMAGE_BRUSH("Icons/icon_pause_40x", Icon20x20));
		StyleSet->Set("QGEditor.Debugger.ResumePlaySession", new IMAGE_BRUSH("Icons/icon_simulate_40x", Icon40x40));
		StyleSet->Set("QGEditor.Debugger.ResumePlaySession.Small", new IMAGE_BRUSH("Icons/icon_simulate_40x", Icon20x20));
		StyleSet->Set("QGEditor.Debugger.StopPlaySession", new IMAGE_BRUSH("Icons/icon_stop_40x", Icon40x40));
		StyleSet->Set("QGEditor.Debugger.StopPlaySession.Small", new IMAGE_BRUSH("Icons/icon_stop_40x", Icon20x20));
		StyleSet->Set("QGEditor.Debugger.LateJoinSession", new IMAGE_BRUSH("Icons/icon_simulate_40x", Icon40x40));
		StyleSet->Set("QGEditor.Debugger.LateJoinSession.Small", new IMAGE_BRUSH("Icons/icon_simulate_40x", Icon20x20));
	}
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION

#undef IMAGE_PLUGIN_BRUSH
#undef BOX_PLUGIN_BRUSH
#undef IMAGE_BRUSH
#undef BOX_BRUSH
#undef TTF_PLUGIN_FONT
#undef TTF_CORE_FONT
#undef TTF_FONT

const TSharedPtr<ISlateStyle> FQuestExtensionEditorStyle::Get()
{
	return StyleSet;
}
