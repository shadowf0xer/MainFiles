/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "LightExplorer.h"
#include "LE_EditorStyle.h"

#include "Runtime/Slate/Public/Widgets/Layout/SBox.h"
#include "Runtime/Slate/Public/Widgets/Layout/SBorder.h"
#include "Runtime/SlateCore/Public/Widgets/Images/SImage.h"

#include "Editor/EditorEngine.h"
#include "Editor/EditorStyle/Public/EditorStyle.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class SLE_ItemLight : public SCompoundWidget {
private:
	TWeakObjectPtr<ALight>Item;
public:
	SLE_ItemLight();
	virtual ~SLE_ItemLight() override;
	//
	SLATE_BEGIN_ARGS(SLE_ItemLight){}
	SLATE_END_ARGS()
	//
	//
	void Construct(const FArguments &InArgs, ALight* Target);
	//
	virtual bool IsInteractable() const override;
	//
	FReply OnClickedItem();
	//
	FText GetTypeTooltip() const;
	const FSlateBrush* GetTypeBrush() const;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////