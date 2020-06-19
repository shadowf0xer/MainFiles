/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
///			Copyright 2020 (C) Bruno Xavier B. Leite
//////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#pragma once

#include "LightExplorer.h"
#include "LE_EditorStyle.h"

#include "Runtime/Slate/Public/Widgets/Layout/SBorder.h"
#include "Runtime/Slate/Public/Widgets/Input/SNumericEntryBox.h"

#include "Editor/EditorEngine.h"
#include "Editor/EditorStyle/Public/EditorStyle.h"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class SLE_ItemIntensitySky : public SCompoundWidget {
private:
	TWeakObjectPtr<ASkyLight>Item;
	TSharedPtr<SColorBlock>ColorBlock;
public:
	SLE_ItemIntensitySky();
	virtual ~SLE_ItemIntensitySky() override;
	//
	SLATE_BEGIN_ARGS(SLE_ItemIntensitySky){}
	SLATE_END_ARGS()
	//
	//
	void Construct(const FArguments &InArgs, ASkyLight* Target);
	//
	void OnValueChanged(float FloatValue) const;
	//
	TOptional<float> GetValue() const;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////