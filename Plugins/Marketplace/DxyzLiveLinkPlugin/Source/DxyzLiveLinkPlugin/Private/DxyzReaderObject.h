/*************************************************************************
* Copyright [2010] - [2020] Dynamixyz
* All Rights Reserved.
*
* Authors:
* Flora Jullien (flora.jullien@dynamixyz.com)
**************************************************************************/

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"

#include "Engine/UserDefinedEnum.h"
#include "DxyzReader.h"
#include "DxyzReaderObject.generated.h"

UCLASS(Transient, BlueprintType, NotPlaceable)
class UDxyzReaderObject : public UObject
{
	GENERATED_BODY()

public:

	/** Log Debug Info */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dynamixyz")
		bool PrintDebug;

	/** List all the network interfaces of the rendering machine */
	UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
		bool GetNetworkInterfaces(TArray<FString>& Interfaces);

	/** Start listening to a RTP url.
	@param Url the RTP URL Grabber is streaming to (ex : rtp://239.1.1.0:5555)
	@param Interface the network interface to use (/!\ Interface specification does not seems to be taken into account by ffmpeg /!\)
	@param OutAddr the resulting Url string for debug purposes
	*/
	UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
		bool ListenToUrl(FString Url, FString Interface, FString& OutAddr);

	/** Start listening to a RTP url.
	@param RtpAddress the RTP adress Grabber is streaming to (ex : 239.1.1.0)
	@param Port the port Grabber is using to stream RTP (ex : 5555)
	@param Interface the network interface to use (/!\ Interface specification does not seems to be taken into account by ffmpeg /!\)
	@param OutAddr the resulting Url string for debug purposes 
	*/
	UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
		bool ListenToAdress(FString RtpAddress, int Port, FString Interface, FString& OutAddr);

	/** Stop listening to the RTP url */
	UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
		bool StopListening();

	/** Check if we are listening (only true if ListenToUrl worked) */
	UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
		bool IsListening();

	/** Start the display */
	UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
		bool StartDisplaying();

	/** Stop the display */
	UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
		bool StopDisplaying();

	/** Declare the Reader as Global : 
	this must be set to true if you are using the Reader in a global class (such as GameInstance)
	for instance if you need to share the feedback between several levels without having to re-initialize it */
	UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
		bool SetGlobal(bool Global);

	/** Check if the Reader is global */
	UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
		bool IsGlobal();

	/** Get the video texture */
	UFUNCTION(BlueprintCallable, Category = "Dynamixyz")
		UTexture2D* GetVideoTexture(bool& Ok);

	/** Get the video size */
	UFUNCTION(BlueprintPure, Category = "Dynamixyz")
		FVector2D GetVideoSize();

public:
	UDxyzReaderObject();
	~UDxyzReaderObject();

private:
	DxyzReader* mDxyzReader;
	bool mIsListening;
	bool mIsGlobal;
};
