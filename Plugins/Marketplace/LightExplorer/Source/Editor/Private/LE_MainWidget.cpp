/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///		Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "LE_MainWidget.h"

#include "LightExplorer.h"
#include "LightExplorer_Shared.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SLE_MainWidget::SLE_MainWidget(){}
SLE_MainWidget::~SLE_MainWidget() {
	FEditorDelegates::OnDeleteActorsEnd.RemoveAll(this);
	FEditorDelegates::OnNewActorsDropped.RemoveAll(this);
	FEditorDelegates::OnEditCutActorsEnd.RemoveAll(this);
	FEditorDelegates::OnEditCutActorsEnd.RemoveAll(this);
	FEditorDelegates::OnEditCopyActorsEnd.RemoveAll(this);
	FEditorDelegates::OnEditPasteActorsEnd.RemoveAll(this);
	FEditorDelegates::OnDuplicateActorsEnd.RemoveAll(this);
	FEditorDelegates::OnLightingBuildSucceeded.RemoveAll(this);
	//
	FEditorDelegates::MapChange.RemoveAll(this);
	FEditorDelegates::OnMapOpened.RemoveAll(this);
	FEditorDelegates::NewCurrentLevel.RemoveAll(this);
	FWorldDelegates::LevelAddedToWorld.RemoveAll(this);
	FWorldDelegates::LevelRemovedFromWorld.RemoveAll(this);
	//
	Search->Empty();
	Search.Reset();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SLE_MainWidget::Construct(const FArguments &InArgs) {
	SAssignNew(GridPanel,SUniformGridPanel).MinDesiredSlotHeight(10).MinDesiredSlotWidth(80);
	SAssignNew(ScrollBox,SScrollBox).OnUserScrolled(this,&SLE_MainWidget::OnGridPanelScrolled);
	//
	ScrollBox->SetScrollBarRightClickDragAllowed(true);
	Search = MakeShared<FString>(TEXT(""));
	RebuildGridPanel();
	//
	//
	ScrollBox->AddSlot()
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Fill)
	[
		SNew(SVerticalBox)
		+SVerticalBox::Slot()
		.AutoHeight().Padding(0,2,0,2)
		.VAlign(VAlign_Top).HAlign(HAlign_Fill)
		[
			SNew(SSearchBox)
			.SelectAllTextWhenFocused(true)
			.OnTextChanged(this,&SLE_MainWidget::OnSearchChanged)
		]
		+SVerticalBox::Slot()
		.VAlign(VAlign_Fill).HAlign(HAlign_Fill)
		[
			GridPanel.ToSharedRef()
		]
	];
	//
	ChildSlot.HAlign(HAlign_Fill).VAlign(VAlign_Fill)[ScrollBox.ToSharedRef()];
	//
	//
	FEditorDelegates::OnDeleteActorsEnd.AddRaw(this,&SLE_MainWidget::RebuildGridPanel);
	FEditorDelegates::OnEditCutActorsEnd.AddRaw(this,&SLE_MainWidget::RebuildGridPanel);
	FEditorDelegates::OnEditCutActorsEnd.AddRaw(this,&SLE_MainWidget::RebuildGridPanel);
	FEditorDelegates::OnEditCopyActorsEnd.AddRaw(this,&SLE_MainWidget::RebuildGridPanel);
	FEditorDelegates::OnEditPasteActorsEnd.AddRaw(this,&SLE_MainWidget::RebuildGridPanel);
	FEditorDelegates::OnDuplicateActorsEnd.AddRaw(this,&SLE_MainWidget::RebuildGridPanel);
	FEditorDelegates::OnNewActorsDropped.AddRaw(this,&SLE_MainWidget::OnNewActorsDropped);
	FEditorDelegates::OnLightingBuildSucceeded.AddRaw(this,&SLE_MainWidget::RebuildGridPanel);
	//
	FEditorDelegates::MapChange.AddRaw(this,&SLE_MainWidget::OnMapChange);
	FEditorDelegates::OnMapOpened.AddRaw(this,&SLE_MainWidget::OnMapLoaded);
	FWorldDelegates::LevelAddedToWorld.AddRaw(this,&SLE_MainWidget::OnLevelAdded);
	FEditorDelegates::NewCurrentLevel.AddRaw(this,&SLE_MainWidget::OnNewCurrentLevel);
	FWorldDelegates::LevelRemovedFromWorld.AddRaw(this,&SLE_MainWidget::OnLevelRemoved);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool SLE_MainWidget::IsInteractable() const {
	return IsEnabled();
}

bool SLE_MainWidget::SupportsKeyboardFocus() const {
	return true;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SLE_MainWidget::OnGridPanelScrolled(float Offset){}

void SLE_MainWidget::OnSearchChanged(const FText &Filter) {
	Search = MakeShared<FString>(Filter.ToString());
	//
	RebuildGridPanel();
}

void SLE_MainWidget::OnNewActorsDropped(const TArray<UObject*>&DroppedObjects, const TArray<AActor*>&DroppedActors) {
	RebuildGridPanel();
}

void SLE_MainWidget::OnMapLoaded(const FString &Filename, bool AsTemplate) {
	RebuildGridPanel();
}

void SLE_MainWidget::OnMapChange(uint32 MapFlags) {
	RebuildGridPanel();
}

void SLE_MainWidget::OnNewCurrentLevel() {
	RebuildGridPanel();
}

void SLE_MainWidget::OnLevelAdded(ULevel* InLevel, UWorld* InWorld) {
	RebuildGridPanel();
}

void SLE_MainWidget::OnLevelRemoved(ULevel* InLevel, UWorld* InWorld) {
	RebuildGridPanel();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SLE_MainWidget::RebuildGridPanel() {
	if (!GridPanel.IsValid()) {return;}
	//
	GridPanel->ClearChildren();
	{
		GridPanel->AddSlot(0,0).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SNew(SBorder)
			.VAlign(VAlign_Center).HAlign(HAlign_Fill)
			.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
			[
				SNew(STextBlock)
				.Font(FEditorStyle::GetFontStyle(TEXT("BoldFont")))
				.Text(FText::FromString(TEXT("Light")))
				.Justification(ETextJustify::Center)
			]
		];
		//
		GridPanel->AddSlot(1,0).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SNew(SBorder)
			.VAlign(VAlign_Center).HAlign(HAlign_Fill)
			.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
			[
				SNew(STextBlock)
				.Font(FEditorStyle::GetFontStyle(TEXT("BoldFont")))
				.Text(FText::FromString(TEXT("Color")))
				.Justification(ETextJustify::Center)
			]
		];
		//
		GridPanel->AddSlot(2,0).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SNew(SBorder)
			.VAlign(VAlign_Center).HAlign(HAlign_Fill)
			.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
			[
				SNew(STextBlock)
				.Font(FEditorStyle::GetFontStyle(TEXT("BoldFont")))
				.Text(FText::FromString(TEXT("Intensity")))
				.Justification(ETextJustify::Center)
			]
		];//
		//
		GridPanel->AddSlot(3,0).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SNew(SBorder)
			.VAlign(VAlign_Center).HAlign(HAlign_Fill)
			.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
			[
				SNew(STextBlock)
				.Font(FEditorStyle::GetFontStyle(TEXT("BoldFont")))
				.Text(FText::FromString(TEXT("Indirect")))
				.Justification(ETextJustify::Center)
			]
		];
		//
		GridPanel->AddSlot(4,0).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SNew(SBorder)
			.VAlign(VAlign_Center).HAlign(HAlign_Fill)
			.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
			[
				SNew(STextBlock)
				.Font(FEditorStyle::GetFontStyle(TEXT("BoldFont")))
				.Text(FText::FromString(TEXT("Shadows")))
				.Justification(ETextJustify::Center)
			]
		];
		//
		GridPanel->AddSlot(5,0).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SNew(SBorder)
			.VAlign(VAlign_Center).HAlign(HAlign_Fill)
			.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
			[
				SNew(STextBlock)
				.Font(FEditorStyle::GetFontStyle(TEXT("BoldFont")))
				.Text(FText::FromString(TEXT("Active")))
				.Justification(ETextJustify::Center)
			]
		];
	}///
	//
	//
	TArray<ASkyLight*>Skies;
	TArray<ALight*>Lights;
	// 
	if (GEditor) {
		const FWorldContext &Context = GEditor->GetEditorWorldContext();
		UWorld* World = Context.World();
		//
		if (World) {
			for (TActorIterator<ALight>Actor(World); Actor; ++Actor) {
				if ((*Actor)->HasAnyFlags(RF_BeginDestroyed)) {continue;}
				//
				if (Search->Len()<2) {Lights.Add(*Actor);} else
				if (Actor->GetActorLabel().Contains(**Search.Get())) {Lights.Add(*Actor);}
			}///
			//
			for (TActorIterator<ASkyLight>Actor(World); Actor; ++Actor) {
				if ((*Actor)->HasAnyFlags(RF_BeginDestroyed)) {continue;}
				//
				if (Search->Len()<2) {Skies.Add(*Actor);} else
				if (Actor->GetActorLabel().Contains(**Search.Get())) {Skies.Add(*Actor);}
			}///
		}///
	}///
	//
	//
	for (int32 I=0; I<Skies.Num(); ++I) {SkyItems.Add(TSharedPtr<SLE_ItemSky>(nullptr));}
	for (int32 I=0; I<Skies.Num(); ++I) {SkyColors.Add(TSharedPtr<SLE_ItemColorSky>(nullptr));}
	for (int32 I=0; I<Skies.Num(); ++I) {SkyIntensities.Add(TSharedPtr<SLE_ItemIntensitySky>(nullptr));}
	for (int32 I=0; I<Skies.Num(); ++I) {SkyIndirects.Add(TSharedPtr<SLE_ItemIndirectSky>(nullptr));}
	for (int32 I=0; I<Skies.Num(); ++I) {SkyShadows.Add(TSharedPtr<SLE_ItemShadowsSky>(nullptr));}
	for (int32 I=0; I<Skies.Num(); ++I) {SkyActives.Add(TSharedPtr<SLE_ItemActiveSky>(nullptr));}
	//
	for (int32 I=0; I<Lights.Num(); ++I) {LightItems.Add(TSharedPtr<SLE_ItemLight>(nullptr));}
	for (int32 I=0; I<Lights.Num(); ++I) {ColorItems.Add(TSharedPtr<SLE_ItemColor>(nullptr));}
	for (int32 I=0; I<Lights.Num(); ++I) {IntensityItems.Add(TSharedPtr<SLE_ItemIntensity>(nullptr));}
	for (int32 I=0; I<Lights.Num(); ++I) {IndirectItems.Add(TSharedPtr<SLE_ItemIndirect>(nullptr));}
	for (int32 I=0; I<Lights.Num(); ++I) {ShadowsItems.Add(TSharedPtr<SLE_ItemShadows>(nullptr));}
	for (int32 I=0; I<Lights.Num(); ++I) {ActiveItems.Add(TSharedPtr<SLE_ItemActive>(nullptr));}
	//
	//
	for (int32 I=0; I<Skies.Num(); ++I) {
		GridPanel->AddSlot(0,I+1).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(SkyItems[I],SLE_ItemSky,Skies[I])
		];
	}///
	//
	for (int32 I=0; I<Skies.Num(); ++I) {
		GridPanel->AddSlot(1,I+1).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(SkyColors[I],SLE_ItemColorSky,Skies[I])
		];
	}///
	//
	for (int32 I=0; I<Skies.Num(); ++I) {
		GridPanel->AddSlot(2,I+1).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(SkyIntensities[I],SLE_ItemIntensitySky,Skies[I])
		];
	}///
	//
	for (int32 I=0; I<Skies.Num(); ++I) {
		GridPanel->AddSlot(3,I+1).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(SkyIndirects[I],SLE_ItemIndirectSky,Skies[I])
		];
	}///
	//
	for (int32 I=0; I<Skies.Num(); ++I) {
		GridPanel->AddSlot(4,I+1).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(SkyShadows[I],SLE_ItemShadowsSky,Skies[I])
		];
	}///
	//
	for (int32 I=0; I<Skies.Num(); ++I) {
		GridPanel->AddSlot(5,I+1).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(SkyActives[I],SLE_ItemActiveSky,Skies[I])
		];
	}///
	//
	//
	for (int32 I=0; I<Lights.Num(); ++I) {
		GridPanel->AddSlot(0,I+(Skies.Num()+1)).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(LightItems[I],SLE_ItemLight,Lights[I])
		];
	}///
	//
	for (int32 I=0; I<Lights.Num(); ++I) {
		GridPanel->AddSlot(1,I+(Skies.Num()+1)).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(ColorItems[I],SLE_ItemColor,Lights[I])
		];
	}///
	//
	for (int32 I=0; I<Lights.Num(); ++I) {
		GridPanel->AddSlot(2,I+(Skies.Num()+1)).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(IntensityItems[I],SLE_ItemIntensity,Lights[I])
		];
	}///
	//
	for (int32 I=0; I<Lights.Num(); ++I) {
		GridPanel->AddSlot(3,I+(Skies.Num()+1)).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(IndirectItems[I],SLE_ItemIndirect,Lights[I])
		];
	}///
	//
	for (int32 I=0; I<Lights.Num(); ++I) {
		GridPanel->AddSlot(4,I+(Skies.Num()+1)).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(ShadowsItems[I],SLE_ItemShadows,Lights[I])
		];
	}///
	//
	for (int32 I=0; I<Lights.Num(); ++I) {
		GridPanel->AddSlot(5,I+(Skies.Num()+1)).HAlign(HAlign_Fill).VAlign(VAlign_Fill)
		[
			SAssignNew(ActiveItems[I],SLE_ItemActive,Lights[I])
		];
	}///
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////