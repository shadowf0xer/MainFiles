/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#include "DxyzReaderObject.h"

UDxyzReaderObject::UDxyzReaderObject()
	: mDxyzReader(nullptr)
	, mIsListening(false)
{
	mDxyzReader = new DxyzReader();
}

UDxyzReaderObject::~UDxyzReaderObject()
{
	if (nullptr != mDxyzReader)
	{
		delete mDxyzReader;
		mDxyzReader = nullptr;
	}
}

bool UDxyzReaderObject::GetNetworkInterfaces(TArray<FString>& Interfaces)
{
	return mDxyzReader->GetNetworkInterfaces(Interfaces);
}

bool UDxyzReaderObject::ListenToUrl(FString Url, FString Interface, FString& OutAddr)
{
	if (!mIsListening)
	{
		mIsListening = mDxyzReader->ReadUrl(Url, Interface, OutAddr);
	}
	return mIsListening;
}

bool UDxyzReaderObject::ListenToAdress(FString RtpAddress, int Port, FString Interface, FString& OutAddr)
{
	if (!mIsListening)
	{
		FString vUrl = FString::Format(TEXT("rtp://{0}:{1}"), { *RtpAddress, Port });
		mIsListening = mDxyzReader->ReadUrl(vUrl, Interface, OutAddr);
	}
	return mIsListening;
}

bool UDxyzReaderObject::StopListening()
{
	if (mIsListening)
	{
		mIsListening = false;
		mDxyzReader->StopReading();
	}
	return true;
}

bool UDxyzReaderObject::IsListening()
{
	return mIsListening;
}

bool UDxyzReaderObject::StartDisplaying()
{
	if (mIsListening)
	{
		mDxyzReader->StartDisplay();
	}
	return true;
}

bool UDxyzReaderObject::StopDisplaying()
{
	if (mIsListening)
	{
		mDxyzReader->StopDisplay();
	}
	return true;
}

bool UDxyzReaderObject::SetGlobal(bool Global)
{
	mIsGlobal = true;
	return true;
}

bool UDxyzReaderObject::IsGlobal()
{
	return mIsGlobal;
}

UTexture2D* UDxyzReaderObject::GetVideoTexture(bool& Ok)
{
	if (mIsListening)
	{
		UTexture2D* vTexture = mDxyzReader->GetVideoTexture();
		if (nullptr != vTexture)
		{
			Ok = true;
			return vTexture;
		}
	}
	Ok = false;
	return nullptr;
}

FVector2D UDxyzReaderObject::GetVideoSize()
{
	return mDxyzReader->GetVideoSize();
}