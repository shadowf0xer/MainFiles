/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///		Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "LE_ItemActiveSky.h"
#include "Components/SkyLightComponent.h"

#include "Editor/UnrealEd/Public/EditorBuildUtils.h"
#include "Runtime/Engine/Public/LightingBuildOptions.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SLE_ItemActiveSky::SLE_ItemActiveSky() {}
SLE_ItemActiveSky::~SLE_ItemActiveSky(){}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SLE_ItemActiveSky::Construct(const FArguments &InArgs, ASkyLight* Target) {
	Item = Target;
	//
	//
	ChildSlot.HAlign(HAlign_Fill).VAlign(VAlign_Fill)
	[
		SNew(SBox)
		.Padding(FMargin(4))
		[
			SNew(SBorder).Padding(FMargin(6))
			.VAlign(VAlign_Fill).HAlign(HAlign_Fill)
			.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				.VAlign(VAlign_Center)
				[
					SNew(STextBlock)
					.Font(FEditorStyle::GetFontStyle(TEXT("BoldFont")))
					.Text(FText::FromString(TEXT("Is Enabled")))
					.Justification(ETextJustify::Center)
				]
				+SHorizontalBox::Slot().AutoWidth()
				.VAlign(VAlign_Center).HAlign(HAlign_Right)
				[
					SNew(SCheckBox)
					.IsChecked(this,&SLE_ItemActiveSky::GetState)
					.OnCheckStateChanged(this,&SLE_ItemActiveSky::OnStateChanged)
				]
			]
		]
	];
}

void SLE_ItemActiveSky::OnStateChanged(ECheckBoxState NewState) {
	if (!Item.IsValid()) {return;}
	//
	FPropertyChangedEvent PropEditEvent(ULightComponent::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(ULightComponent,bAffectsWorld)));
	EComponentMobility::Type Mobility = Item->GetLightComponent()->Mobility;
	uint32 AffectsWorld = (NewState==ECheckBoxState::Checked) ? 1 : 0;
	//
	Item->Modify();
	Item->GetLightComponent()->Mobility = EComponentMobility::Stationary;
	Item->GetLightComponent()->bAffectsWorld = AffectsWorld;
	Item->GetLightComponent()->InvalidateLightingCache();
	Item->GetLightComponent()->MarkRenderStateDirty();
	//
	Item->GetLightComponent()->PostEditChangeProperty(PropEditEvent);
	Item->GetLightComponent()->Mobility = Mobility;
	//
	//
	/*FLightingBuildOptions LightingBuildOptions;
	LightingBuildOptions.bOnlyBuildSelected = true;
	LightingBuildOptions.bOnlyBuildVisibility = true;
	LightingBuildOptions.bOnlyBuildCurrentLevel = true;
	LightingBuildOptions.bShowLightingBuildInfo = false;
	//
	if (!FEditorBuildUtils::IsBuildCurrentlyRunning()) {
		FEditorBuildUtils::EditorBuild(Item.Get()->GetWorld(),FBuildOptions::BuildLighting,false);
	}*///
}

ECheckBoxState SLE_ItemActiveSky::GetState() const {
	if (!Item.IsValid()) {return ECheckBoxState::Undetermined;}
	//
	if (Item->GetLightComponent()->bAffectsWorld) {
		return ECheckBoxState::Checked;
	}	return ECheckBoxState::Unchecked;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////