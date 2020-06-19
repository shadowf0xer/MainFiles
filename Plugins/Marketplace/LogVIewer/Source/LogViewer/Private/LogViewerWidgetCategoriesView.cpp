// Copyright Dmitrii Labadin 2019

#include "LogViewerWidgetCategoriesView.h"
#include "SlateOptMacros.h"
#include "Widgets/Input/SSearchBox.h"
#include "LogViewerStructs.h"
#include "LogViewerWidgetMain.h"

#define LOCTEXT_NAMESPACE "SLogViewerWidgetMain"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

namespace FLogViewerCategoriesViewFilter
{
	void GetBasicStrings(const FCategoryItem& InCategoryItem, TArray<FString>& OutBasicStrings)
	{
		OutBasicStrings.Add(InCategoryItem.CategoryName.ToString());
	}
}

void SLogViewerWidgetCategoriesView::Construct(const FArguments& InArgs)
{
	MainWidget = InArgs._MainWidget;
	Filter.OwnerWidget = MainWidget;

	SearchTextFilter = MakeShareable(new FCategoriesEntryTextFilter(
		FCategoriesEntryTextFilter::FItemToStringArray::CreateStatic(&FLogViewerCategoriesViewFilter::GetBasicStrings)
	));

	TSharedRef<SScrollBar> ScrollBar = SNew(SScrollBar)
		.Thickness(FVector2D(5, 5));

	ChildSlot
	[
		SNew(SBorder)
		.BorderImage(FEditorStyle::GetBrush("ToolPanel.DarkGroupBorder"))
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.Padding(4)
			.AutoHeight()
			[
				SAssignNew(SearchBoxPtr, SSearchBox)
				.HintText(NSLOCTEXT("LogViewer", "SearchCategories", "Search Categories"))
				.OnTextChanged(this, &SLogViewerWidgetCategoriesView::OnSearchChanged)
				.OnTextCommitted(this, &SLogViewerWidgetCategoriesView::OnSearchCommitted)
			]

			+ SVerticalBox::Slot()
			.Padding(0)
			[
				SAssignNew(DataDrivenContent, SBox)
				[
					SNew(SHorizontalBox)
				
					+ SHorizontalBox::Slot()
					[
						SAssignNew(ListView, SListView<TSharedPtr<FCategoryItem>>)
						.ListItemsSource(&Filter.FilteredItems)
						.OnGenerateRow(this, &SLogViewerWidgetCategoriesView::OnGenerateWidgetForItem)
						.ExternalScrollbar(ScrollBar)
					]
				
					+ SHorizontalBox::Slot()
					.AutoWidth()
					[
						ScrollBar
					]
				]
			]

			+ SVerticalBox::Slot()
			.Padding(4)
			.AutoHeight()
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.Padding(0)
				[
					SNew(SVerticalBox)
					+ SVerticalBox::Slot()
					.Padding(4)
					.AutoHeight()
					[
						SNew(SCheckBox)
						.Style(FCoreStyle::Get(), "ToggleButtonCheckbox")
						.IsChecked_Lambda([&]() { return ECheckBoxState::Unchecked; })
						.OnCheckStateChanged(this, &SLogViewerWidgetCategoriesView::ExecuteCategoriesEnableAll)
						[
							SNew(SBox)
							.VAlign(VAlign_Center)
							.HAlign(HAlign_Center)
							.Padding(FMargin(4.0, 2.0))
							[
								SNew(STextBlock)
								.Text(LOCTEXT("Enable All", "Enable All"))
							]
						]
					]
					+ SVerticalBox::Slot()
					.Padding(4)
					.AutoHeight()
					[
						SNew(SCheckBox)
						.Style(FCoreStyle::Get(), "ToggleButtonCheckbox")
						.IsChecked(this, &SLogViewerWidgetCategoriesView::IsCheckedVerbosityVeryVerbose)
						.OnCheckStateChanged(this, &SLogViewerWidgetCategoriesView::ExecuteVerbosityVeryVerbose)
						[
							SNew(SBox)
							.VAlign(VAlign_Center)
							.HAlign(HAlign_Center)
							.Padding(FMargin(4.0, 2.0))
							[
								SNew(STextBlock)
								.Text(LOCTEXT("VeryVerbose", "VeryVerbose"))
							]
						]
					]

					+ SVerticalBox::Slot()
					.Padding(4)
					.AutoHeight()
					[
						SNew(SCheckBox)
						.Style(FCoreStyle::Get(), "ToggleButtonCheckbox")
						.IsChecked(this, &SLogViewerWidgetCategoriesView::IsCheckedVerbosityVerbose)
						.OnCheckStateChanged(this, &SLogViewerWidgetCategoriesView::ExecuteVerbosityVerbose)
						[
							SNew(SBox)
							.VAlign(VAlign_Center)
							.HAlign(HAlign_Center)
							.Padding(FMargin(4.0, 2.0))
							[
								SNew(STextBlock)
								.Text(LOCTEXT("Verbose", "Verbose"))
							]
						]
					]

					+ SVerticalBox::Slot()
					.Padding(4)
					.AutoHeight()
					[
						SNew(SCheckBox)
						.Style(FCoreStyle::Get(), "ToggleButtonCheckbox")
						.IsChecked(this, &SLogViewerWidgetCategoriesView::IsCheckedVerbosityLog)
						.OnCheckStateChanged(this, &SLogViewerWidgetCategoriesView::ExecuteVerbosityLog)
						[
							SNew(SBox)
							.VAlign(VAlign_Center)
							.HAlign(HAlign_Center)
							.Padding(FMargin(4.0, 2.0))
							[
								SNew(STextBlock)
								.Text(LOCTEXT("Messages", "Messages"))
							]
						]
					]
				]
				
				+ SHorizontalBox::Slot()
				.Padding(0)
				[
					SNew(SVerticalBox)
					+ SVerticalBox::Slot()
					.Padding(4)
					.AutoHeight()
					[
						SNew(SCheckBox)
						.Style(FCoreStyle::Get(), "ToggleButtonCheckbox")
						.IsChecked_Lambda([&]() { return ECheckBoxState::Unchecked; })
						.OnCheckStateChanged(this, &SLogViewerWidgetCategoriesView::ExecuteCategoriesDisableAll)
						[
							SNew(SBox)
							.VAlign(VAlign_Center)
							.HAlign(HAlign_Center)
							.Padding(FMargin(4.0, 2.0))
							[
								SNew(STextBlock)
								.Text(LOCTEXT("Disable All", "Disable All"))
							]
						]
					]
					+ SVerticalBox::Slot()
					.Padding(4)
					.AutoHeight()
					[
						SNew(SCheckBox)
						.Style(FCoreStyle::Get(), "ToggleButtonCheckbox")
						.IsChecked(this, &SLogViewerWidgetCategoriesView::IsCheckedVerbosityDisplay)
						.OnCheckStateChanged(this, &SLogViewerWidgetCategoriesView::ExecuteVerbosityDisplay)
						[
							SNew(SBox)
							.VAlign(VAlign_Center)
							.HAlign(HAlign_Center)
							.Padding(FMargin(4.0, 2.0))
							[
								SNew(STextBlock)
								.Text(LOCTEXT("Display", "Display"))
							]
						]
					]
					+ SVerticalBox::Slot()
					.Padding(4)
					.AutoHeight()
					[
						SNew(SCheckBox)
						.Style(FCoreStyle::Get(), "ToggleButtonCheckbox")
						.IsChecked(this, &SLogViewerWidgetCategoriesView::IsCheckedVerbosityWarning)
						.OnCheckStateChanged(this, &SLogViewerWidgetCategoriesView::ExecuteVerbosityWarning)
						[
							SNew(SBox)
							.VAlign(VAlign_Center)
							.HAlign(HAlign_Center)
							.Padding(FMargin(4.0, 2.0))
							[
								SNew(STextBlock)
								.Text(LOCTEXT("Warning", "Warnings"))
							]
						]
					]
					+ SVerticalBox::Slot()
					.Padding(4)
					.AutoHeight()
					[
						SNew(SCheckBox)
						.Style(FCoreStyle::Get(), "ToggleButtonCheckbox")
						.IsChecked(this, &SLogViewerWidgetCategoriesView::IsCheckedVerbosityError)
						.OnCheckStateChanged(this, &SLogViewerWidgetCategoriesView::ExecuteVerbosityError)
						[
							SNew(SBox)
							.VAlign(VAlign_Center)
							.HAlign(HAlign_Center)
							.Padding(FMargin(4.0, 2.0))
							[
								SNew(STextBlock)
								.Text(LOCTEXT("Errors", "Errors"))
							]
						]

					]
				]
			]
		]
	];
}

TSharedRef<ITableRow> SLogViewerWidgetCategoriesView::OnGenerateWidgetForItem(TSharedPtr<FCategoryItem> InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(STableRow<TSharedPtr<FCategoryItem>>, OwnerTable)
		[
			SNew(SLogViewerWidgetCategoriesEntry, InItem.ToSharedRef())
				.MainWidget(MainWidget)
				.CategoryWidget(this)
		];
}

bool SLogViewerWidgetCategoriesView::IsSearchActive() const
{
	return !SearchTextFilter->GetRawFilterText().IsEmpty();
}

void SLogViewerWidgetCategoriesView::ClearCategories()
{
	Filter.AllItems.Reset();
	Filter.FilteredItems.Reset();
	Filter.AvailableLogCategories.Reset();
	Filter.SelectedLogCategories.Reset();
}

void SLogViewerWidgetCategoriesView::OnSearchChanged(const FText& InFilterText)
{
	MarkDirty();
	SearchTextFilter->SetRawFilterText(InFilterText);
	SearchBoxPtr->SetError(SearchTextFilter->GetFilterErrorText());
}

void SLogViewerWidgetCategoriesView::OnSearchCommitted(const FText& InFilterText, ETextCommit::Type InCommitType)
{
	OnSearchChanged(InFilterText);
}

void SLogViewerWidgetCategoriesView::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	if (bNeedsUpdate)
	{
		bNeedsUpdate = false;
		UpdateFilteredItems();
	}
}

void SLogViewerWidgetCategoriesView::AddCategory(const FName& InCategory)
{
	
	if (Filter.IsLogCategoryExist(InCategory))
	{
		return;
	}
	Filter.AddAvailableLogCategory(InCategory);
	TSharedPtr<FCategoryItem> Item = MakeShareable(new FCategoryItem{ InCategory, true });
	Filter.AllItems.Add(Item);
	MarkDirty();
}

void SLogViewerWidgetCategoriesView::UpdateFilteredItems()
{
	if (IsSearchActive())
	{
		Filter.FilteredItems.Reset();
		auto FilterFtunction = [&](const TSharedPtr<FCategoryItem>& Item) { return SearchTextFilter->PassesFilter(*Item); };
		for (auto& Item : Filter.AllItems)
		{
			if (FilterFtunction(Item))
			{
				Filter.FilteredItems.Add(Item);
			}
		}
		Filter.FilteredItems.Sort(&FCategoryItem::SortItemsByName);
	}
	else
	{
		Filter.FilteredItems = Filter.AllItems;
		Filter.FilteredItems.Sort(&FCategoryItem::SortItemsByName);
	}

	//DataDrivenContent->SetVisibility(EVisibility::Visible);
	ListView->RequestListRefresh();
}

SLogViewerWidgetCategoriesView::~SLogViewerWidgetCategoriesView()
{

}

void SLogViewerWidgetCategoriesEntry::Construct(const FArguments& InArgs, const TSharedPtr<const FCategoryItem>& InItem)
{
	MainWidget = InArgs._MainWidget;
	CategoryWidget = InArgs._CategoryWidget;
	bIsPressed = CategoryWidget->Filter.IsLogCategoryEnabled(InItem->CategoryName);;
	Item = InItem;

	const FButtonStyle& ButtonStyle = FEditorStyle::GetWidgetStyle<FButtonStyle>("PlacementBrowser.Asset");
	NormalImage = &ButtonStyle.Normal;
	HoverImage = &ButtonStyle.Pressed;
	PressedImage = &ButtonStyle.Hovered;

	ChildSlot
	[
		SNew(SBorder)
		.BorderImage(this, &SLogViewerWidgetCategoriesEntry::GetBorder)
		//.Cursor(EMouseCursor::GrabHand)
		//.ToolTip(AssetEntryToolTip)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			[
				SNew(STextBlock)
				.Text(FText::AsCultureInvariant(InItem->CategoryName.ToString()))
			]
			//+ SHorizontalBox::Slot()
			//.AutoWidth()
			//[
			//	SNew(SCheckBox)
			//]
		]
	];
}

FReply SLogViewerWidgetCategoriesEntry::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (MouseEvent.GetEffectingButton() != EKeys::LeftMouseButton)
	{
		return FReply::Handled();
	}

	//bIsPressed = true;
	ensure(MainWidget);
	MainWidget->CategoryMenu->Filter.ToggleLogCategory(Item->CategoryName);
	MainWidget->Refresh();

	return FReply::Handled();// .DetectDrag(SharedThis(this), MouseEvent.GetEffectingButton());
}

FReply SLogViewerWidgetCategoriesEntry::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
	if (MouseEvent.GetEffectingButton() != EKeys::LeftMouseButton)
	{
		return FReply::Handled();
	}
	//if (MouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	//{
	//	bIsPressed = false;
	//}
	//bIsPressed = false;
	return FReply::Handled();// .DetectDrag(SharedThis(this), MouseEvent.GetEffectingButton());
}

bool SLogViewerWidgetCategoriesEntry::IsPressed() const
{
	return bIsPressed;
}

const FSlateBrush* SLogViewerWidgetCategoriesEntry::GetBorder() const
{
	if (IsSelected())
	{
		return PressedImage;
	}
	else if (IsHovered())
	{
		return HoverImage;
	}
	else
	{
		return NormalImage;
	}
}


ECheckBoxState SLogViewerWidgetCategoriesView::IsCheckedVerbosityVeryVerbose() const { return Filter.bShowVeryVerbose ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; };
ECheckBoxState SLogViewerWidgetCategoriesView::IsCheckedVerbosityVerbose() const { return Filter.bShowVerbose ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; };
ECheckBoxState SLogViewerWidgetCategoriesView::IsCheckedVerbosityLog() const { return Filter.bShowLog ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; };
ECheckBoxState SLogViewerWidgetCategoriesView::IsCheckedVerbosityDisplay() const { return Filter.bShowDisplay ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; };
ECheckBoxState SLogViewerWidgetCategoriesView::IsCheckedVerbosityWarning() const { return Filter.bShowWarnings ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; };
ECheckBoxState SLogViewerWidgetCategoriesView::IsCheckedVerbosityError() const { return Filter.bShowErrors ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; };
ECheckBoxState SLogViewerWidgetCategoriesView::IsCheckedCategoriesShowAll() const { return Filter.bShowAllCategories ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; };

ECheckBoxState SLogViewerWidgetCategoriesView::CategoriesSingle_IsChecked(FName InName) const
{
	return Filter.IsLogCategoryEnabled(InName) ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}

void SLogViewerWidgetCategoriesView::ExecuteVerbosityVeryVerbose(ECheckBoxState CheckState)
{
	Filter.bShowVeryVerbose = !Filter.bShowVeryVerbose;
	MainWidget->Refresh();
}

void SLogViewerWidgetCategoriesView::ExecuteVerbosityVerbose(ECheckBoxState CheckState)
{
	Filter.bShowVerbose = !Filter.bShowVerbose;
	MainWidget->Refresh();
}

void SLogViewerWidgetCategoriesView::ExecuteVerbosityLog(ECheckBoxState CheckState)
{
	Filter.bShowLog = !Filter.bShowLog;
	MainWidget->Refresh();
}

void SLogViewerWidgetCategoriesView::ExecuteVerbosityDisplay(ECheckBoxState CheckState)
{
	Filter.bShowDisplay = !Filter.bShowDisplay;
	MainWidget->Refresh();
}

void SLogViewerWidgetCategoriesView::ExecuteVerbosityWarning(ECheckBoxState CheckState)
{
	Filter.bShowWarnings = !Filter.bShowWarnings;
	MainWidget->Refresh();
}

void SLogViewerWidgetCategoriesView::ExecuteVerbosityError(ECheckBoxState CheckState)
{
	Filter.bShowErrors = !Filter.bShowErrors;
	MainWidget->Refresh();
}

void SLogViewerWidgetCategoriesView::ExecuteCategoriesDisableAll(ECheckBoxState CheckState)
{
	Filter.ClearSelectedLogCategories();

	for (const auto& AvailableCategory : Filter.GetAvailableLogCategories())
	{
		Filter.EnableLogCategory(AvailableCategory);
	}

	for (const auto& AvailableCategory : Filter.GetAvailableLogCategories())
	{
		Filter.ToggleLogCategory(AvailableCategory);
	}


	MainWidget->Refresh();
}


void SLogViewerWidgetCategoriesView::ExecuteCategoriesEnableAll(ECheckBoxState CheckState)
{
	Filter.ClearSelectedLogCategories();

	for (const auto& AvailableCategory : Filter.GetAvailableLogCategories())
	{
		Filter.EnableLogCategory(AvailableCategory);
	}

	MainWidget->Refresh();
}


END_SLATE_FUNCTION_BUILD_OPTIMIZATION

#undef LOCTEXT_NAMESPACE