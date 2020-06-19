/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///		Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "LE_ItemLight.h"

#include "Engine/SpotLight.h"
#include "Engine/RectLight.h"
#include "Engine/PointLight.h"
#include "Engine/DirectionalLight.h"
#include "Components/LightComponent.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SLE_ItemLight::SLE_ItemLight(){}
SLE_ItemLight::~SLE_ItemLight(){}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SLE_ItemLight::Construct(const FArguments &InArgs, ALight* Target) {
	TSharedRef<SButton>Button = SNew(SButton);
	FText Caption = FText::FromString(TEXT(""));
	//
	Item = Target;
	if (Item.IsValid()) {Caption=FText::FromString(Item->GetActorLabel());}
	//
	SAssignNew(Button,SButton)
	.ButtonStyle(FEditorStyle::Get(),"FlatButton.Default")
	.ForegroundColor(FSlateColor::UseForeground())
	.OnClicked(this,&SLE_ItemLight::OnClickedItem)
	.HAlign(HAlign_Fill).VAlign(VAlign_Fill)
	[
		SNew(SHorizontalBox)
		+SHorizontalBox::Slot().AutoWidth()
		[
			SNew(SImage)
			.Image(this,&SLE_ItemLight::GetTypeBrush)
			.ToolTipText(this,&SLE_ItemLight::GetTypeTooltip)
		]
		+SHorizontalBox::Slot().Padding(2)
		.HAlign(HAlign_Fill).VAlign(VAlign_Center)
		[
			SNew(STextBlock).Margin(FMargin(2))
			.Font(FEditorStyle::GetFontStyle(TEXT("BoldFont")))
			.Justification(ETextJustify::Center)
			.Text(Caption)
		]
	];//
	//
	//
	ChildSlot
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Fill)
	[
		SNew(SBox).Padding(FMargin(4))
		[
			Button
		]
	];
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FReply SLE_ItemLight::OnClickedItem() {
	if (GEditor && Item.IsValid()) {
		GEditor->SelectNone(true,true,true);
		GEditor->SelectActor(Item.Get(),true,true,true,true);
		//
		TArray<AActor*>Actors; Actors.Add(Item.Get());
		GEditor->MoveViewportCamerasToActor(Actors,true);
	}///
	//
	return FReply::Handled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FText SLE_ItemLight::GetTypeTooltip() const {
	if (!Item.IsValid()) {return FText::FromString(TEXT("Light Source"));}
	//
	if (Item.Get()->IsA(ASpotLight::StaticClass())) {return FText::FromString(TEXT("Spot Light"));}
	if (Item.Get()->IsA(ARectLight::StaticClass())) {return FText::FromString(TEXT("Rect Light"));}
	if (Item.Get()->IsA(APointLight::StaticClass())) {return FText::FromString(TEXT("Point Light"));}
	if (Item.Get()->IsA(ADirectionalLight::StaticClass())) {return FText::FromString(TEXT("Directional Light"));}
	//
	return FText::FromString(TEXT("Light Source"));
}

const FSlateBrush* SLE_ItemLight::GetTypeBrush() const {
	const FSlateBrush* Brush = FLE_EditorStyle::Get()->GetBrush(TEXT("LE.Point"));
	if (!Item.IsValid()) {return Brush;}
	//
	EComponentMobility::Type Mobil = Item.Get()->GetLightComponent()->Mobility;
	switch(Mobil) {
		case EComponentMobility::Static:
		{
			if (Item.Get()->IsA(ASpotLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.Spot"));}
			if (Item.Get()->IsA(ARectLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.Rect"));}
			if (Item.Get()->IsA(APointLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.PointStatic"));}
			if (Item.Get()->IsA(ADirectionalLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.Directional"));}
		} break;
		//
		case EComponentMobility::Stationary:
		{
			if (Item.Get()->IsA(ASpotLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.Spot"));}
			if (Item.Get()->IsA(ARectLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.Rect"));}
			if (Item.Get()->IsA(APointLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.Point"));}
			if (Item.Get()->IsA(ADirectionalLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.Directional"));}
		} break;
		//
		case EComponentMobility::Movable:
		{
			if (Item.Get()->IsA(ASpotLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.SpotMove"));}
			if (Item.Get()->IsA(ARectLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.RectMove"));}
			if (Item.Get()->IsA(APointLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.PointMove"));}
			if (Item.Get()->IsA(ADirectionalLight::StaticClass())) {Brush=FLE_EditorStyle::Get()->GetBrush(TEXT("LE.DirectionalMove"));}
		} break;
	default: break;}
	//
	return Brush;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool SLE_ItemLight::IsInteractable() const {
	return IsEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////