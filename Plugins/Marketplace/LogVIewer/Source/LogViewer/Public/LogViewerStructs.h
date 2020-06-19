// Copyright Dmitrii Labadin 2019

#pragma once

#include "CoreMinimal.h"

class FParsedLogLine
{
public:
	FParsedLogLine() : LogMessage(), LogCategory(), VerbosityLevel() {};
	FParsedLogLine(FString UncategorizedMessage) : LogMessage(UncategorizedMessage), LogCategory(TEXT("NoCategory")), VerbosityLevel(ELogVerbosity::Log) {};
	FString LogMessage;
	FString LogCategory;
	ELogVerbosity::Type VerbosityLevel;
};

struct FLogMessage
{

	TSharedRef<FString> Message;
	ELogVerbosity::Type Verbosity;
	FName Category;
	FName Style;

	FLogMessage(const TSharedRef<FString>& NewMessage, FName NewCategory, FName NewStyle = NAME_None)
		: Message(NewMessage)
		, Verbosity(ELogVerbosity::Log)
		, Category(NewCategory)
		, Style(NewStyle)
	{
	}

	FLogMessage(const TSharedRef<FString>& NewMessage, ELogVerbosity::Type NewVerbosity, FName NewCategory, FName NewStyle = NAME_None)
		: Message(NewMessage)
		, Verbosity(NewVerbosity)
		, Category(NewCategory)
		, Style(NewStyle)
	{
	}
};

DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnLogMessageReceived, const TCHAR*, ELogVerbosity::Type, const class FName& );
typedef FOnLogMessageReceived::FDelegate FOnLogMessageReceivedDelegate;