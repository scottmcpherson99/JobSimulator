// Fill out your copyright notice in the Description page of Project Settings.


#include "Product_TV.h"


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// Sets default values
AProduct_TV::AProduct_TV()
{
	SetProductID(FString("TV"));
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////////////////////////////////
// <SettersandGetters>
void AProduct_TV::SetProductID(FString productID_)
{
	productID = productID_;
}

FString AProduct_TV::GetProductID() const
{
	return productID;
}
// </SettersandGetters>
///////////////////////////////////////////////////////////////////////////////////////////////////////////