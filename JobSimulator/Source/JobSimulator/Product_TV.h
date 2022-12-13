// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProductBase.h"
#include "Product_TV.generated.h"

/**
 * 
 */
UCLASS()
class JOBSIMULATOR_API AProduct_TV : public AProductBase
{
	GENERATED_BODY()
	
public:
	// sets the default values
	AProduct_TV();

	///////////////////////////////////////////////////////////////////////////////////////////////////////////
	// <SettersandGetters>
	void SetProductID(FString productID);

	FString GetProductID() const;
	// </SettersandGetters>
	///////////////////////////////////////////////////////////////////////////////////////////////////////////
};
