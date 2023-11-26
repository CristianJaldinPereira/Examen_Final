// Fill out your copyright notice in the Description page of Project Settings.


#include "Estado1Vida.h"
#include "Planta_Estados.h"

// Sets default values
AEstado1Vida::AEstado1Vida()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstado1Vida::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstado1Vida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstado1Vida::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Atacar Estado1Vida"));

}

void AEstado1Vida::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Defender Estado1Vida"));
}

void AEstado1Vida::Recolectar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Recolectar Estado1Vida"));

	//Set the state to "No Coin State"
	PlantaEstados->CurarVida(1);
	PlantaEstados->DefinirEstado(PlantaEstados->GetEstado2Vida());


}

FString AEstado1Vida::ToString()
{
	return "Estado 1";

}

void AEstado1Vida::DefinirPlanta_Estados(APlanta_Estados* PlantaDeEstados)
{
	//Set the Slot Machine of this state
	PlantaEstados = PlantaDeEstados;

}


