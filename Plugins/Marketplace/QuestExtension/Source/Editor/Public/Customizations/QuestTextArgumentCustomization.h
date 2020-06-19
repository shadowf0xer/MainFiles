// Copyright 2015-2019 Piperift. All Rights Reserved.

#pragma once

#include "IPropertyTypeCustomization.h"
#include "Widgets/Layout/SWidgetSwitcher.h"


class FQuestTextArgumentCustomization : public IPropertyTypeCustomization
{
public:
	static TSharedRef<IPropertyTypeCustomization> MakeInstance()
	{
		return MakeShareable(new FQuestTextArgumentCustomization());
	}

	/** IPropertyTypeCustomization interface */
	virtual void CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils) override;

	void RefreshPropertyType();

private:
	TSharedPtr<SWidgetSwitcher> ValueSwitch;

	TSharedPtr<IPropertyHandle> TypePropertyHandle;
};