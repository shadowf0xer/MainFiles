// Copyright 2018 The Reallusion Authors. All Rights Reserved.

#pragma once

#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"
#include "IMessageContext.h"
#include "MessageEndpoint.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Misc/Guid.h"

class SRLLiveLinkSourceEditor : public SCompoundWidget
{
	SLATE_BEGIN_ARGS(SRLLiveLinkSourceEditor)
	{
	}

	SLATE_END_ARGS()
	
	SRLLiveLinkSourceEditor()
	{
		PortNumber = 54321;
	};

	~SRLLiveLinkSourceEditor();

	void Construct(const FArguments& Args);

	TOptional<uint32> GetPort() const
	{
		return PortNumber;
	};

private:
	TOptional<uint32> PortNumber;
	
	void OnPortChanged(uint32 InPortNumber)
	{
		PortNumber = InPortNumber;
	};
};