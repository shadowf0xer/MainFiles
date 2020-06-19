/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////

#include "LE_EditorStyle.h"
#include "LightExplorer_Shared.h"

#include "Styling/SlateStyle.h"
#include "Interfaces/IPluginManager.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define PLUGIN_BRUSH(RelativePath,...) FSlateImageBrush(FLE_EditorStyle::InContent(RelativePath,".png"),__VA_ARGS__)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

TSharedPtr<FSlateStyleSet> FLE_EditorStyle::StyleSet = nullptr;
TSharedPtr<ISlateStyle> FLE_EditorStyle::Get() {return StyleSet;}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FString FLE_EditorStyle::InContent(const FString &RelativePath, const ANSICHAR* Extension) {
	static FString Content = IPluginManager::Get().FindPlugin(PLUGIN_NAME)->GetContentDir();
	return (Content/RelativePath)+Extension;
}

FName FLE_EditorStyle::GetStyleSetName() {
	static FName StyleName(TEXT("LightExplorerStyle"));
	return StyleName;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FLE_EditorStyle::Initialize() {
	if (StyleSet.IsValid()) {return;}
	//
	const FVector2D Icon16x16(16.0f,16.0f);
	const FVector2D Icon20x20(20.0f,20.0f);
	const FVector2D Icon40x40(40.0f,40.0f);
	const FVector2D Icon128x128(128.0f,128.0f);
	//
	StyleSet = MakeShareable(new FSlateStyleSet(GetStyleSetName()));
	StyleSet->Set("LightExplorer.Icon",new PLUGIN_BRUSH(TEXT("Icons/LightExplorerTab_16x"),Icon16x16));
	StyleSet->Set("LightExplorer.LightExplorerTab",new PLUGIN_BRUSH(TEXT("Icons/LightExplorerTab_128x"),Icon40x40));
	StyleSet->Set("LightExplorer.LightExplorerTab.Small",new PLUGIN_BRUSH(TEXT("Icons/LightExplorerTab_128x"),Icon20x20));
	//
	StyleSet->Set("LE.Sky",new PLUGIN_BRUSH(TEXT("Icons/Sky"),Icon40x40));
	StyleSet->Set("LE.Spot",new PLUGIN_BRUSH(TEXT("Icons/Spot"),Icon40x40));
	StyleSet->Set("LE.Point",new PLUGIN_BRUSH(TEXT("Icons/Point"),Icon40x40));
	StyleSet->Set("LE.SpotMove",new PLUGIN_BRUSH(TEXT("Icons/SpotMove"),Icon40x40));
	StyleSet->Set("LE.PointMove",new PLUGIN_BRUSH(TEXT("Icons/PointMove"),Icon40x40));
	StyleSet->Set("LE.PointStatic",new PLUGIN_BRUSH(TEXT("Icons/PointStatic"),Icon40x40));
	StyleSet->Set("LE.Directional",new PLUGIN_BRUSH(TEXT("Icons/Directional"),Icon40x40));
	StyleSet->Set("LE.DirectionalMove",new PLUGIN_BRUSH(TEXT("Icons/DirectionalMove"),Icon40x40));
	//
	StyleSet->Set("LE.Rect",new PLUGIN_BRUSH(TEXT("Icons/Point"),Icon40x40));
	StyleSet->Set("LE.RectMove",new PLUGIN_BRUSH(TEXT("Icons/PointMove"),Icon40x40));
	//
	//
	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
};

void FLE_EditorStyle::Shutdown() {
	if (StyleSet.IsValid()) {
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
		ensure(StyleSet.IsUnique());
		StyleSet.Reset();
	}///
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef PLUGIN_BRUSH

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////