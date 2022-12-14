// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EndGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class JOBSIMULATOR_API UEndGameHUD : public UUserWidget
{
	GENERATED_BODY()
public:
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <WidgetUpdates>
	void UpdateText(FString outcome_);
	// </WidgetUpdates>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


protected:

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <Components>
	//button that will restart the level
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* RetryButton;

	//button that will exit the application
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UButton* QuitButton;

	// text to let the player know the outcome of the game
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		class UTextBlock* GameOutcome;
	// </Components>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ButtonFunctions>
	//restart the level
	UFUNCTION()
		void OnRetryClicked();

	//exit the application
	UFUNCTION()
		void OnQuitClicked();
	// </ButtonFunctions>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////


	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <ULoseScreen>
	virtual void NativeConstruct() override;
	// </ULoseScreen>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
