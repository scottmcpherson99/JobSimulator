// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProductBase.h"
#include "Product_Lamp.generated.h"

/**
 * 
 */
UCLASS()
class JOBSIMULATOR_API AProduct_Lamp : public AProductBase
{
	GENERATED_BODY()
		// sets the default values
		AProduct_Lamp();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <SettersandGetters>
	void SetProductID(FString productID);

	FString GetProductID() const;
	// </SettersandGetters>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
