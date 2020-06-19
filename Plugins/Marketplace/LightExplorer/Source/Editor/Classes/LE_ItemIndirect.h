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

class SLE_ItemIndirect : public SCompoundWidget {
private:
	TWeakObjectPtr<ALight>Item;
	TSharedPtr<SColorBlock>ColorBlock;
public:
	SLE_ItemIndirect();
	virtual ~SLE_ItemIndirect() override;
	//
	SLATE_BEGIN_ARGS(SLE_ItemIndirect){}
	SLATE_END_ARGS()
	//
	//
	void Construct(const FArguments &InArgs, ALight* Target);
	//
	void OnValueChanged(float FloatValue) const;
	//
	TOptional<float> GetValue() const;
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////