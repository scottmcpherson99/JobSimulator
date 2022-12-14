// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HeadsUpDisplay.generated.h"

/**
 * 
 */
UCLASS()
class JOBSIMULATOR_API UHeadsUpDisplay : public UUserWidget
{
	GENERATED_BODY()
public:

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <SetterandGetters>
	//update the text displaying the product the player is holding
	void UpdateProductHolding();

	// set the desired product
	void SetDesiredProduct(FString desiredProduct_);

	// set the time left in the game
	void SetTimeLeft(FString timeLeft_);

	// set the number of parcelks left
	void SetParcelsLeft(FString parcelsLeft_);

	// set the interaction message
	void SetInteractMessage(FString interactMessage_);
	// </SetterandGetters>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	virtual void Construct();


protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//text to show the product the player is holding
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* ProductHolding;

	//text to show the desired product
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* DesiredProduct;

	//text to show the number of parcels left
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* ParcelsLeft;

	//text to show the time left in the game
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* TimeLeft;

	//text to show if the player can interact with an object
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* InteractMessage;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
