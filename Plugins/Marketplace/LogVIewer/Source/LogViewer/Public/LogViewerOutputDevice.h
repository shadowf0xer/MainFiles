// Copyright Dmitrii Labadin 2019

#pragma once

#include "CoreMinimal.h"
#include "LogViewerStructs.h"

class FLogViewerOutputDevice 
	: public FOutputDevice
{

public:
	FLogViewerOutputDevice(const TArray<TSharedPtr<FLogMessage>>& Messages);

	void SubscribeOnMessageReceived(FOnLogMessageReceivedDelegate& InOnLogMessageReceivedDelegate) {
		OnLogMessageReceivedDelegate = InOnLogMessageReceivedDelegate;
	}

	void UnsibscribeOnMessageReceived() {
		OnLogMessageReceivedDelegate.Unbind();
	}

	bool IsListening() {
		return OnLogMessageReceivedDelegate.IsBound();
	}
	
	//FOnLogMessageAppeared OnLogMessageAppeared;

	~FLogViewerOutputDevice();

	TArray<TSharedPtr<FLogMessage>> Messages;

	//static TSharedPtr<FLogMessage> CreateLogFromString(const FString& LogMessage);
	static bool CreateLogMessages(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category, TArray< TSharedPtr<FLogMessage> >& OutMessages);

protected:
	FOnLogMessageReceivedDelegate OnLogMessageReceivedDelegate;

	virtual void Serialize( const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category ) override;

	/* Remove itself on crash to prevent adding log lines here */
	void OnCrash();

};

/** This class is to capture all log output even if the log window is closed */
class FOutputLogHistory : public FOutputDevice
{
public:

	FOutputLogHistory()
	{
		GLog->AddOutputDevice(this);
		GLog->SerializeBacklog(this);
	}

	~FOutputLogHistory()
	{
		// At shutdown, GLog may already be null
		if (GLog != NULL)
		{
			GLog->RemoveOutputDevice(this);
		}
	}

	/** Gets all captured messages */
	const TArray< TSharedPtr<FLogMessage> >& GetMessages() const
	{
		return Messages;
	}

protected:

	virtual void Serialize(const TCHAR* V, ELogVerbosity::Type Verbosity, const class FName& Category) override
	{
		// Capture all incoming messages and store them in history
		FLogViewerOutputDevice::CreateLogMessages(V, Verbosity, Category, Messages);
	}

private:

	/** All log messsges since this module has been started */
	TArray< TSharedPtr<FLogMessage> > Messages;
};

/** Our global output log app spawner */
static TSharedPtr<FOutputLogHistory> OutputLogHistory;