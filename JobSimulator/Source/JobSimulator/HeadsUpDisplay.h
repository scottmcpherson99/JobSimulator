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
	// <UpdatePlayerStats>
	//update the text displaying the product the player is holding
	void UpdateProductHolding();
	// </UpdatePlayerStats>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	virtual void Construct();


protected:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//text to show the number of keys the player has
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* ProductHolding;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
