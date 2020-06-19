// Copyright 2015-2019 Piperift. All Rights Reserved.

#include "QuestTextArgumentCustomization.h"
#include "PropertyCustomizationHelpers.h"
#include "Widgets/Layout/SBox.h"

#include "Text/QuestTextArgument.h"

#define LOCTEXT_NAMESPACE "QuestTextArgumentCustomization"


void FQuestTextArgumentCustomization::CustomizeHeader(TSharedRef<class IPropertyHandle> StructPropertyHandle, class FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
	TypePropertyHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FQuestTextArgument, Type));

	FSimpleDelegate OnTypeChanged = FSimpleDelegate::CreateSP(this, &FQuestTextArgumentCustomization::RefreshPropertyType);
	TypePropertyHandle->SetOnPropertyValueChanged(OnTypeChanged);

	TSharedPtr<IPropertyHandle> IntPropertyHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FQuestTextArgument, IntValue));
	TSharedPtr<IPropertyHandle> FloatPropertyHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FQuestTextArgument, FloatValue));
	TSharedPtr<IPropertyHandle> TextPropertyHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FQuestTextArgument, TextValue));
	TSharedPtr<IPropertyHandle> GenderPropertyHandle = StructPropertyHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FQuestTextArgument, GenderValue));


	HeaderRow.NameContent()
	[
		StructPropertyHandle->CreatePropertyNameWidget()
	]
	.ValueContent()
	.HAlign(HAlign_Fill)
	[
		SNew(SBox)
		.HAlign(HAlign_Fill)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.Padding(4.0f, 0.0f)
			.HAlign(HAlign_Fill)
			.MaxWidth(70)
			[
				SNew(SProperty, TypePropertyHandle)
				.ShouldDisplayName(false)
			]
			+ SHorizontalBox::Slot()
			.HAlign(HAlign_Fill)
			[
				SAssignNew(ValueSwitch, SWidgetSwitcher)
				+ SWidgetSwitcher::Slot()
				[
					SNew(SProperty, IntPropertyHandle)
					.ShouldDisplayName(false)
				]
				+ SWidgetSwitcher::Slot()
				[
					SNew(SProperty, FloatPropertyHandle)
					.ShouldDisplayName(false)
				]
				+ SWidgetSwitcher::Slot()
				[
					SNew(SProperty, TextPropertyHandle)
					.ShouldDisplayName(false)
				]
				+ SWidgetSwitcher::Slot()
				[
					SNew(SProperty, GenderPropertyHandle)
					.ShouldDisplayName(false)
				]
			]
		]
	];

	RefreshPropertyType();
}

void FQuestTextArgumentCustomization::CustomizeChildren(TSharedRef<class IPropertyHandle> StructPropertyHandle, class IDetailChildrenBuilder& StructBuilder, IPropertyTypeCustomizationUtils& StructCustomizationUtils)
{
}

void FQuestTextArgumentCustomization::RefreshPropertyType()
{
	uint8 Type;
	if (TypePropertyHandle->GetValue(Type) == FPropertyAccess::Result::Success)
	{
		ValueSwitch->SetActiveWidgetIndex(Type);
	}
}

#undef LOCTEXT_NAMESPACE