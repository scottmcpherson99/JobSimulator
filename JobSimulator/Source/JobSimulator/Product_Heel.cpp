// Fill out your copyright notice in the Description page of Project Settings.


#include "Product_Heel.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AProduct_Heel::AProduct_Heel()
{
	SetProductID(FString("Heel"));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <SettersandGetters>
void AProduct_Heel::SetProductID(FString productID_)
{
	productID = productID_;
}

FString AProduct_Heel::GetProductID() const
{
	return productID;
}
// </SettersandGetters>
///////////////////////////////////////////////////////////////////////////////////////////////////////////