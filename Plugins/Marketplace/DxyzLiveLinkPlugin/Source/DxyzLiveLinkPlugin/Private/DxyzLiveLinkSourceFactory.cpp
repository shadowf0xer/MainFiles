/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzLiveLinkSourceFactory.h"

FText UDxyzLiveLinkSourceFactory::GetSourceDisplayName() const
{
    return LOCTEXT("SourceDisplayName", "Dynamixyz Source");
}

FText UDxyzLiveLinkSourceFactory::GetSourceTooltip() const
{
    return LOCTEXT("SourceTooltip", "Creates a connection to a Dynamixyz Grabber");
}

TSharedPtr<SWidget> UDxyzLiveLinkSourceFactory::BuildCreationPanel(FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
	return SNew(SDxyzLiveLinkSourceEditor)
		.OnSourceCreationRequested(FOnDxyzSourceCreationRequested::CreateUObject(this,
			&UDxyzLiveLinkSourceFactory::OnSourceCreationRequested, InOnLiveLinkSourceCreated));
}

void UDxyzLiveLinkSourceFactory::OnSourceCreationRequested(FString iIPAdress, int iPort, FOnLiveLinkSourceCreated InOnLiveLinkSourceCreated) const
{
	TSharedPtr<FDxyzLiveLinkSource> NewSource = MakeShareable(new FDxyzLiveLinkSource(iIPAdress, iPort));
	
	FString ConnectionString = FString::Format(TEXT("IP=\"{0}\" Port=\"{1}\""), { iIPAdress, iPort });
	InOnLiveLinkSourceCreated.ExecuteIfBound(NewSource, MoveTemp(ConnectionString));
}

TSharedPtr<ILiveLinkSource> UDxyzLiveLinkSourceFactory::CreateSource(const FString& ConnectionString) const
{
	FString vIP;
	FString vPort;
	if (!FParse::Value(*ConnectionString, TEXT("IP="), vIP) || !FParse::Value(*ConnectionString, TEXT("Port="), vPort))
	{
		return TSharedPtr<ILiveLinkSource>();
	}

	// Settings options
	FString vSubjectName, vShowLogs;
	if (FParse::Value(*ConnectionString, TEXT("SubjectName="), vSubjectName) && FParse::Value(*ConnectionString, TEXT("ShowLogs="), vShowLogs))
	{
		return MakeShared<FDxyzLiveLinkSource>(vIP, FCString::Atoi(*vPort), -1, vSubjectName, vShowLogs == "1" ? true : false);
	}
		
	return MakeShared<FDxyzLiveLinkSource>(vIP, FCString::Atoi(*vPort));;
}