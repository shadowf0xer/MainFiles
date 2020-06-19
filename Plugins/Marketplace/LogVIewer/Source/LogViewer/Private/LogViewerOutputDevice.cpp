// Copyright Dmitrii Labadin 2019

#include "LogViewerOutputDevice.h"
#include "Misc/OutputDeviceHelper.h"
#include "Misc/CoreDelegates.h"
#include "CoreGlobals.h"

#define LOCTEXT_NAMESPACE "SOutputLog"

FLogViewerOutputDevice::FLogViewerOutputDevice(const TArray<TSharedPtr<FLogMessage>>& Messages)
	: FOutputDevice()
{
	FCoreDelegates::OnHandleSystemError.AddRaw(this, &FLogViewerOutputDevice::OnCrash);
	GLog->AddOutputDevice(this);
}

FLogViewerOutputDevice::~FLogViewerOutputDevice()
{
	if (GLog != nullptr)
	{
		GLog->RemoveOutputDevice(this);
	}
	FCoreDelegates::OnHandleSystemError.RemoveAll(this);
}

void FLogViewerOutputDevice::OnCrash()
{
	if (GLog != nullptr)
	{
		GLog->RemoveOutputDevice(this);
	}
}

//TSharedPtr<FLogMessage> FLogViewerOutputDevice::CreateLogFromString(const FString& LogMessage)
//{
//	return MakeShared(FLogMessage());
//}

bool FLogViewerOutputDevice::CreateLogMessages( const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category, TArray< TSharedPtr<FLogMessage> >& OutMessages )
{
	if (Verbosity == ELogVerbosity::SetColor)
	{
		// Skip Color Events
		return false;
	}

	// Get the style for this message. When piping output from child processes (eg. when cooking through the editor), we want to highlight messages
	// according to their original verbosity, so also check for "Error:" and "Warning:" substrings. This is consistent with how the build system processes logs.
	FName Style;
	if (Category == NAME_Cmd)
	{
		Style = FName(TEXT("Log.Command"));
	}
	else if (Verbosity == ELogVerbosity::Error || FCString::Stristr(V, TEXT("Error:")) != nullptr)
	{
		Style = FName(TEXT("Log.Error"));
	}
	else if (Verbosity == ELogVerbosity::Warning || FCString::Stristr(V, TEXT("Warning:")) != nullptr)
	{
		Style = FName(TEXT("Log.Warning"));
	}
	else
	{
		Style = FName(TEXT("Log.Normal"));
	}

	// Determine how to format timestamps
	static ELogTimes::Type LogTimestampMode = ELogTimes::None;
	if (UObjectInitialized() && !GExitPurge)
	{
		// Logging can happen very late during shutdown, even after the UObject system has been torn down, hence the init check above
		//LogTimestampMode = GetDefault<UEditorStyleSettings>()->LogTimestampMode;
	}

	const int32 OldNumMessages = OutMessages.Num();

	// handle multiline strings by breaking them apart by line
	TArray<FTextRange> LineRanges;
	FString CurrentLogDump = V;
	FTextRange::CalculateLineRangesFromString(CurrentLogDump, LineRanges);

	bool bIsFirstLineInMessage = true;
	for (const FTextRange& LineRange : LineRanges)
	{
		if (!LineRange.IsEmpty())
		{
			FString Line = CurrentLogDump.Mid(LineRange.BeginIndex, LineRange.Len());
			Line = Line.ConvertTabsToSpaces(4);

			// Hard-wrap lines to avoid them being too long
			static const int32 HardWrapLen = 360;
			for (int32 CurrentStartIndex = 0; CurrentStartIndex < Line.Len();)
			{
				int32 HardWrapLineLen = 0;
				if (bIsFirstLineInMessage)
				{
					FString MessagePrefix = FOutputDeviceHelper::FormatLogLine(Verbosity, Category, nullptr, LogTimestampMode);

					HardWrapLineLen = FMath::Min(HardWrapLen - MessagePrefix.Len(), Line.Len() - CurrentStartIndex);
					FString HardWrapLine = Line.Mid(CurrentStartIndex, HardWrapLineLen);

					OutMessages.Add(MakeShared<FLogMessage>(MakeShared<FString>(MessagePrefix + HardWrapLine), Verbosity, Category, Style));
				}
				else
				{
					HardWrapLineLen = FMath::Min(HardWrapLen, Line.Len() - CurrentStartIndex);
					FString HardWrapLine = Line.Mid(CurrentStartIndex, HardWrapLineLen);

					OutMessages.Add(MakeShared<FLogMessage>(MakeShared<FString>(MoveTemp(HardWrapLine)), Verbosity, Category, Style));
				}

				bIsFirstLineInMessage = false;
				CurrentStartIndex += HardWrapLineLen;
			}
		}
	}

	//HandleNewMessageCreated();

	return OldNumMessages != OutMessages.Num();
}

void FLogViewerOutputDevice::Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category)
{
	OnLogMessageReceivedDelegate.ExecuteIfBound(V, Verbosity, Category );
	//OnLogMessageAppeared.Broadcast();// V, Verbosity, Category);
	//if ( MessagesTextMarshaller->AppendMessage(V, Verbosity, Category) )
	//{
	//	//// Don't scroll to the bottom automatically when the user is scrolling the view or has scrolled it away from the bottom.
	//	//if( !bIsUserScrolled )
	//	//{ 
	//	//	RequestForceScroll();
	//	//}
	//}
}


#undef LOCTEXT_NAMESPACE

