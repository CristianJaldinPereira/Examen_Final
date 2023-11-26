// Fill out your copyright notice in the Description page of Project Settings.


#include "State_Main.h"
#include "OldSchoolSlotMachine.h"

// Sets default values
AState_Main::AState_Main()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AState_Main::BeginPlay()
{
	Super::BeginPlay();

	//Create the Slot Machine and set its Dollars Amount to 100
	AOldSchoolSlotMachine* OldSchoolSlotMachine = GetWorld()->SpawnActor<AOldSchoolSlotMachine>(AOldSchoolSlotMachine::StaticClass());

	OldSchoolSlotMachine->Initialize(100);

	//Log the current Slot Machine state
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *OldSchoolSlotMachine->GetState()->ToString()));
	//Insert coin and Pull the lever
	OldSchoolSlotMachine->InsertCoin();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *OldSchoolSlotMachine->GetState()->ToString()));

	OldSchoolSlotMachine->PullLever();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *OldSchoolSlotMachine->GetState()->ToString()));


	OldSchoolSlotMachine->InsertCoin();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *OldSchoolSlotMachine->GetState()->ToString()));

	OldSchoolSlotMachine->PullLever();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *OldSchoolSlotMachine->GetState()->ToString()));



	OldSchoolSlotMachine->InsertCoin();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *OldSchoolSlotMachine->GetState()->ToString()));

	OldSchoolSlotMachine->PullLever();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *OldSchoolSlotMachine->GetState()->ToString()));

	OldSchoolSlotMachine->RestockDollars(100);

	OldSchoolSlotMachine->InsertCoin();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *OldSchoolSlotMachine->GetState()->ToString()));

	OldSchoolSlotMachine->PullLever();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *OldSchoolSlotMachine->GetState()->ToString()));


}

// Called every frame
void AState_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

