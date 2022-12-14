// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProductBase.h"
#include "Product_Heel.generated.h"

/**
 * 
 */
UCLASS()
class JOBSIMULATOR_API AProduct_Heel : public AProductBase
{
	GENERATED_BODY()
		// sets the default values
		AProduct_Heel();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <SettersandGetters>
	void SetProductID(FString productID);

	FString GetProductID() const;
	// </SettersandGetters>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
