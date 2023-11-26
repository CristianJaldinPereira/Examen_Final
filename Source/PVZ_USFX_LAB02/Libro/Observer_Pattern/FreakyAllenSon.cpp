// Fill out your copyright notice in the Description page of Project Settings.


#include "FreakyAllenSon.h"
#include "ClockTower.h"

void AFreakyAllenSon::Morph()
{
	//Log Error if its Clock Tower is NULL
	if (!ClockTower) {
		UE_LOG(LogTemp, Error, TEXT("Morph(): ClockTower is NULL, make sure it's initialized."));
		return;
	}
	//Get the current time of the Clock Tower
	FString Time = ClockTower->GetTime();
	if (!Time.Compare("Morning"))
	{
		//Execute the Morning routine
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("It is %s, so FreakyAllenSon makes a bowl of cereal"), *Time));
	}
	else if (!Time.Compare("Midday"))
	{
		//Execute the Midday routine
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("It is %s, so FreakyAllenSon makes a sandwich"), *Time));
	}
	else if (!Time.Compare("Evening"))
	{
		//Execute the Evening routine
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("It is %s, so FreakyAllenSon makes a pizza"), *Time));
	}
}
