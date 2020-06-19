// Copyright Dmitrii Labadin 2019

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "LogViewerOutputDevice.h"

class FOutputLogTextLayoutMarshaller;
class SMultiLineEditableTextBox;
class SLogViewerWidgetCategoriesView;
class SLogViewerWidgetTopBar;
class FTabManager;
class SDockTab;

class SLogViewerWidgetMain 
	: public SCompoundWidget
{

public:

	SLATE_BEGIN_ARGS( SLogViewerWidgetMain )
		: _Messages()
		{}
		SLATE_ARGUMENT(TArray< TSharedPtr<FLogMessage> >, Messages)
	SLATE_END_ARGS()

	~SLogViewerWidgetMain();

	void Construct( const FArguments& InArgs );

	void BeginListenEngine();

	/** Converts the array of messages into something the text box understands */
	TSharedPtr< FOutputLogTextLayoutMarshaller > MessagesTextMarshaller;
	TSharedPtr< FLogViewerOutputDevice > LogDevice;

	void HandleNewLogMessageReceived(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category);

	//void HandleNewLogMessageReceived();

	/** The editable text showing all log messages */
	TSharedPtr< SMultiLineEditableTextBox > MessagesTextBox;
	TSharedPtr< SLogViewerWidgetCategoriesView > CategoryMenu;
	TSharedPtr< SLogViewerWidgetTopBar > TopBar;
	/** The editable text showing all log messages */
	TSharedPtr< SSearchBox > FilterTextBox;

	/** Forces re-population of the messages list */
	void Refresh();
	void Cleanup();

	void BeginFollowLog();
	void EndFollowLog();
	bool IsFollowLog() const;
	void OnUserScrolled(float ScrollOffset);

	void SetParentTab(TWeakPtr<SDockTab> InParentTab) { ParentTab = InParentTab; };
	TWeakPtr<SDockTab> GetParentTab() const { return ParentTab; };

private:

	TWeakPtr<SDockTab> ParentTab;

	bool bIsFollowLog;
};
