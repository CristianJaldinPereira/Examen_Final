// Fill out your copyright notice in the Description page of Project Settings.


#include "Estrategia_Retirada.h"

// Sets default values
AEstrategia_Retirada::AEstrategia_Retirada()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategia_Retirada::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstrategia_Retirada::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategia_Retirada::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie se defendera en esta estrategia"));

}

void AEstrategia_Retirada::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie no atacara en esta estrategia"));

}

