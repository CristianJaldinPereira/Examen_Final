// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaAtaque.h"

// Sets default values
AEstrategiaAtaque::AEstrategiaAtaque()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaAtaque::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstrategiaAtaque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaAtaque::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie no se defendera en esta estrategia"));

}

void AEstrategiaAtaque::Atacar()
{

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie atacara en esta estrategia"));

}

