// Copyright 2019 The Reallusion Authors. All Rights Reserved.

#include "RLLiveLinkStyle.h"
#include "RLLiveLink.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr< FSlateStyleSet > FRLLiveLinkStyle::StyleInstance = NULL;

void FRLLiveLinkStyle::Initialize()
{
    if( !StyleInstance.IsValid() )
    {
        StyleInstance = Create();
        FSlateStyleRegistry::RegisterSlateStyle( *StyleInstance );
    }
}

void FRLLiveLinkStyle::Shutdown()
{
    FSlateStyleRegistry::UnRegisterSlateStyle( *StyleInstance );
    ensure( StyleInstance.IsUnique() );
    StyleInstance.Reset();
}

FName FRLLiveLinkStyle::GetStyleSetName()
{
    static FName StyleSetName( TEXT( "RLLiveLinkStyle" ) );
    return StyleSetName;
}

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BOX_BRUSH( RelativePath, ... ) FSlateBoxBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define BORDER_BRUSH( RelativePath, ... ) FSlateBorderBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )
#define TTF_FONT( RelativePath, ... ) FSlateFontInfo( Style->RootToContentDir( RelativePath, TEXT(".ttf") ), __VA_ARGS__ )
#define OTF_FONT( RelativePath, ... ) FSlateFontInfo( Style->RootToContentDir( RelativePath, TEXT(".otf") ), __VA_ARGS__ )

const FVector2D Icon16x16( 16.0f, 16.0f );
const FVector2D Icon20x20( 20.0f, 20.0f );
const FVector2D Icon40x40( 40.0f, 40.0f );

TSharedRef< FSlateStyleSet > FRLLiveLinkStyle::Create()
{
    TSharedRef< FSlateStyleSet > Style = MakeShareable( new FSlateStyleSet( "RLLiveLinkStyle" ) );
    Style->SetContentRoot( IPluginManager::Get().FindPlugin( "RLLiveLink" )->GetBaseDir() / TEXT( "Resources" ) );

    Style->Set( "RLLiveLink.PluginAction", new IMAGE_BRUSH( TEXT( "ButtonIcon_40x" ), Icon40x40 ) );

    return Style;
}

#undef IMAGE_BRUSH
#undef BOX_BRUSH
#undef BORDER_BRUSH
#undef TTF_FONT
#undef OTF_FONT

void FRLLiveLinkStyle::ReloadTextures()
{
    if( FSlateApplication::IsInitialized() )
    {
        FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
    }
}

const ISlateStyle& FRLLiveLinkStyle::Get()
{
    return *StyleInstance;
}
