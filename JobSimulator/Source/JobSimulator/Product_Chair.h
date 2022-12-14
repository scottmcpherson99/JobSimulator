// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProductBase.h"
#include "Product_Chair.generated.h"

/**
 * 
 */
UCLASS()
class JOBSIMULATOR_API AProduct_Chair : public AProductBase
{
	GENERATED_BODY()
		// sets the default values
		AProduct_Chair();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <SettersandGetters>
	void SetProductID(FString productID);

	FString GetProductID() const;
	// </SettersandGetters>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
