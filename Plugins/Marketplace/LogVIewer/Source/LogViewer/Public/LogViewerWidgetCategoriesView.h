// Copyright Dmitrii Labadin 2019

#pragma once

#include "CoreMinimal.h"
#include "SlateFwd.h"
#include "Widgets/SCompoundWidget.h"
#include "LogFilter.h"
#include "Misc/TextFilter.h"

class SLogViewerWidgetCategoriesView;
class SLogViewerWidgetMain;

class SLogViewerWidgetCategoriesView
	: public SCompoundWidget
{

public:
	SLATE_BEGIN_ARGS(SLogViewerWidgetCategoriesView)
		: _MainWidget()
		{}

		SLATE_ARGUMENT(SLogViewerWidgetMain*, MainWidget)
	SLATE_END_ARGS()
	~SLogViewerWidgetCategoriesView();

	void Construct(const FArguments& InArgs);
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;

	void AddCategory(const FName& Category);
	bool IsSearchActive() const;
	void MarkDirty() { bNeedsUpdate = true; };
	void ClearCategories();


	FLogFilter Filter;

private:
	void UpdateFilteredItems();
	bool bNeedsUpdate; //We are using boolean flag and tick function to prevent more than one update in tick

	typedef TTextFilter<const FCategoryItem&> FCategoriesEntryTextFilter;
	TSharedPtr<FCategoriesEntryTextFilter> SearchTextFilter;

	TSharedPtr<SSearchBox> SearchBoxPtr;
	/** Called when the search text changes */
	void OnSearchChanged(const FText& InFilterText);
	void OnSearchCommitted(const FText& InFilterText, ETextCommit::Type InCommitType);

	TSharedPtr<SBox> DataDrivenContent;
	TSharedPtr<SListView<TSharedPtr<FCategoryItem>>> ListView;
	TSharedRef<ITableRow> OnGenerateWidgetForItem(TSharedPtr<FCategoryItem> InItem, const TSharedRef<STableViewBase>& OwnerTable);

	SLogViewerWidgetMain* MainWidget;

	ECheckBoxState IsCheckedVerbosityVeryVerbose() const;
	ECheckBoxState IsCheckedVerbosityVerbose() const;
	ECheckBoxState IsCheckedVerbosityLog() const;
	ECheckBoxState IsCheckedVerbosityDisplay() const;
	ECheckBoxState IsCheckedVerbosityWarning() const;
	ECheckBoxState IsCheckedVerbosityError() const;
	ECheckBoxState IsCheckedCategoriesShowAll() const;
	ECheckBoxState CategoriesSingle_IsChecked(FName InName) const;

public:
	void ExecuteVerbosityVeryVerbose(ECheckBoxState CheckState);
	void ExecuteVerbosityVerbose(ECheckBoxState CheckState);
	void ExecuteVerbosityLog(ECheckBoxState CheckState);
	void ExecuteVerbosityDisplay(ECheckBoxState CheckState);
	void ExecuteVerbosityWarning(ECheckBoxState CheckState);
	void ExecuteVerbosityError(ECheckBoxState CheckState);

	void ExecuteCategoriesDisableAll(ECheckBoxState CheckState);
	void ExecuteCategoriesEnableAll(ECheckBoxState CheckState);
};

class SLogViewerWidgetCategoriesEntry : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SLogViewerWidgetCategoriesEntry)
		: _MainWidget()
		, _CategoryWidget()
	{}
		SLATE_ARGUMENT(SLogViewerWidgetMain*, MainWidget)
		SLATE_ARGUMENT(SLogViewerWidgetCategoriesView*, CategoryWidget)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, const TSharedPtr<const FCategoryItem>& InItem);
	virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
	bool IsPressed() const;
	TSharedPtr<const FCategoryItem> Item;
private:
	bool IsSelected() const { return CategoryWidget->Filter.IsLogCategoryEnabled(Item->CategoryName); };
	const FSlateBrush* GetBorder() const;
	bool bIsPressed;
	const FSlateBrush* NormalImage;
	const FSlateBrush* HoverImage;
	const FSlateBrush* PressedImage;

	SLogViewerWidgetMain* MainWidget;
	SLogViewerWidgetCategoriesView* CategoryWidget;
};