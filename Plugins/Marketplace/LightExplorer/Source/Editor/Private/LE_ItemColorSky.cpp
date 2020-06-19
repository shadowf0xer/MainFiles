/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///		Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "LE_ItemColorSky.h"

#include "Components/SkyLightComponent.h"
#include "Runtime/Core/Public/Misc/Attribute.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#define LOCTEXT_NAMESPACE "Synaptech"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SLE_ItemColorSky::SLE_ItemColorSky(){}
SLE_ItemColorSky::~SLE_ItemColorSky(){}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SLE_ItemColorSky::Construct(const FArguments &InArgs, ASkyLight* Target) {
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
				SNew(SColorBlock)
				.OnMouseButtonDown(this,&SLE_ItemColorSky::OnClickedItem)
				.Color(this,&SLE_ItemColorSky::GetColor)
				.IgnoreAlpha(false)
			]
		]
	];
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FLinearColor SLE_ItemColorSky::GetColor() const {
	if (!Item.IsValid()) {return FLinearColor::Black;}
	//
	return Item->GetLightComponent()->GetLightColor();
}

void SLE_ItemColorSky::SetColor(FLinearColor NewColor) {
	if (!Item.IsValid()) {return;}
	//
	FPropertyChangedEvent PropEditEvent(ULightComponent::StaticClass()->FindPropertyByName(GET_MEMBER_NAME_CHECKED(ULightComponent,LightColor)));
	EComponentMobility::Type Mobility = Item->GetLightComponent()->Mobility;
	//
	Item->Modify();
	Item->GetLightComponent()->Mobility = EComponentMobility::Stationary;
	Item->GetLightComponent()->InvalidateLightingCache();
	Item->GetLightComponent()->SetLightColor(NewColor);
	Item->GetLightComponent()->MarkRenderStateDirty();
	//
	Item->GetLightComponent()->PostEditChangeProperty(PropEditEvent);
	Item->GetLightComponent()->Mobility = Mobility;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void SLE_ItemColorSky::OnInteractivePickEnd(){}
void SLE_ItemColorSky::OnInteractivePickBegin(){}
void SLE_ItemColorSky::OnColorPickerClosed(const TSharedRef<SWindow> &Window){}

void SLE_ItemColorSky::OnColorPickerCancelled(FLinearColor OriginalColor) {
	if (!Item.IsValid()) {return;}
	//
	Item->GetLightComponent()->LightColor = OriginalColor.ToFColor(false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

FReply SLE_ItemColorSky::OnClickedItem(const FGeometry &Geometry, const FPointerEvent &MouseEvent) {
	if (MouseEvent.GetEffectingButton()!= EKeys::LeftMouseButton) {return FReply::Unhandled();}
	if (!Item.IsValid()) {return FReply::Unhandled();}
	//
	FColorPickerArgs PickerArgs; {
		PickerArgs.bUseAlpha = true;
		PickerArgs.bOnlyRefreshOnOk = false;
		PickerArgs.bOnlyRefreshOnMouseUp = false;
		PickerArgs.DisplayGamma = TAttribute<float>::Create(TAttribute<float>::FGetter::CreateUObject(GEngine,&UEngine::GetDisplayGamma));
		PickerArgs.OnColorPickerCancelled = FOnColorPickerCancelled::CreateSP(this,&SLE_ItemColorSky::OnColorPickerCancelled);
		PickerArgs.OnInteractivePickBegin = FSimpleDelegate::CreateSP(this,&SLE_ItemColorSky::OnInteractivePickBegin);
		PickerArgs.OnColorPickerWindowClosed = FOnWindowClosed::CreateSP(this,&SLE_ItemColorSky::OnColorPickerClosed);
		PickerArgs.OnInteractivePickEnd = FSimpleDelegate::CreateSP(this,&SLE_ItemColorSky::OnInteractivePickEnd);
		PickerArgs.OnColorCommitted = FOnLinearColorValueChanged::CreateSP(this,&SLE_ItemColorSky::SetColor);
		PickerArgs.InitialColorOverride = Item->GetLightComponent()->GetLightColor();
		PickerArgs.ParentWidget = ColorBlock;
	} OpenColorPicker(PickerArgs);
	//
	return FReply::Handled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool SLE_ItemColorSky::IsInteractable() const {
	return IsEnabled();
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#undef LOCTEXT_NAMESPACE

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////