// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaOfensiva.h"

// Sets default values
AEstrategiaOfensiva::AEstrategiaOfensiva()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaOfensiva::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstrategiaOfensiva::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaOfensiva::Defender()
{

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie se defendera parcialmente en esta estrategia"));

}

void AEstrategiaOfensiva::Atacar()
{

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie atacara parcialmente en esta estrategia"));

}

