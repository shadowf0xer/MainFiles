/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "LE_EditorStyle.h"

#include "LE_ItemLight.h"
#include "LE_ItemColor.h"
#include "LE_ItemActive.h"
#include "LE_ItemShadows.h"
#include "LE_ItemIndirect.h"
#include "LE_ItemIntensity.h"

#include "LE_ItemSky.h"
#include "LE_ItemColorSky.h"
#include "LE_ItemActiveSky.h"
#include "LE_ItemShadowsSky.h"
#include "LE_ItemIndirectSky.h"
#include "LE_ItemIntensitySky.h"

#include "Runtime/Slate/Public/Widgets/Layout/SBox.h"
#include "Runtime/Slate/Public/Widgets/Input/SButton.h"
#include "Runtime/Slate/Public/Widgets/Layout/SBorder.h"
#include "Runtime/Slate/Public/Widgets/Text/STextBlock.h"
#include "Runtime/Slate/Public/Widgets/Input/SSearchBox.h"
#include "Runtime/Slate/Public/Widgets/Layout/SScrollBox.h"
#include "Runtime/SlateCore/Public/Widgets/Images/SImage.h"
#include "Runtime/Slate/Public/Widgets/Input/SNumericEntryBox.h"
#include "Runtime/Slate/Public/Widgets/Layout/SUniformGridPanel.h"

#include "Runtime/CoreUObject/Public/UObject/UObjectGlobals.h"

#include "Editor/EditorEngine.h"
#include "Editor/UnrealEd/Public/Editor.h"
#include "Editor/EditorStyle/Public/EditorStyle.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class SLE_MainWidget : public SCompoundWidget {
private:
	TSharedPtr<SScrollBox>ScrollBox;
	TSharedPtr<SUniformGridPanel>GridPanel;
	//
	TArray<TSharedPtr<SLE_ItemLight>>LightItems;
	TArray<TSharedPtr<SLE_ItemColor>>ColorItems;
	TArray<TSharedPtr<SLE_ItemActive>>ActiveItems;
	TArray<TSharedPtr<SLE_ItemShadows>>ShadowsItems;
	TArray<TSharedPtr<SLE_ItemIndirect>>IndirectItems;
	TArray<TSharedPtr<SLE_ItemIntensity>>IntensityItems;
	//
	TArray<TSharedPtr<SLE_ItemSky>>SkyItems;
	TArray<TSharedPtr<SLE_ItemColorSky>>SkyColors;
	TArray<TSharedPtr<SLE_ItemActiveSky>>SkyActives;
	TArray<TSharedPtr<SLE_ItemShadowsSky>>SkyShadows;
	TArray<TSharedPtr<SLE_ItemIndirectSky>>SkyIndirects;
	TArray<TSharedPtr<SLE_ItemIntensitySky>>SkyIntensities;
	//
	TSharedPtr<FString>Search;
public:
	SLE_MainWidget();
	virtual ~SLE_MainWidget() override;
	//
	SLATE_BEGIN_ARGS(SLE_MainWidget){}
	SLATE_END_ARGS()
	//
	void Construct(const FArguments &InArgs);
	virtual bool IsInteractable() const override;
	virtual bool SupportsKeyboardFocus() const override;
	//
	//
	void RebuildGridPanel();
	//
	void OnGridPanelScrolled(float Offset);
	void OnSearchChanged(const FText &Filter);
	void OnNewActorsDropped(const TArray<UObject*>&DroppedObjects, const TArray<AActor*>&DroppedActors);
	//
	void OnNewCurrentLevel();
	void OnMapChange(uint32 MapFlags);
	void OnLevelAdded(ULevel* InLevel, UWorld* InWorld);
	void OnLevelRemoved(ULevel* InLevel, UWorld* InWorld);
	void OnMapLoaded(const FString &Filename, bool AsTemplate);
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////