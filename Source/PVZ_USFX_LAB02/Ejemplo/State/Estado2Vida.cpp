// Fill out your copyright notice in the Description page of Project Settings.


#include "Estado2Vida.h"
#include "Planta_Estados.h"
// Sets default values
AEstado2Vida::AEstado2Vida()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstado2Vida::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstado2Vida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstado2Vida::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Atacar Estado2Vida"));

}

void AEstado2Vida::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Defender Estado2Vida"));
	PlantaEstados->EmitirMensaje();
	PlantaEstados->DefinirEstado(PlantaEstados->GetEstado1Vida());

}

void AEstado2Vida::Recolectar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Recolectar Estado2Vida"));
	PlantaEstados->CurarVida(1);
	PlantaEstados->DefinirEstado(PlantaEstados->GetEstado3Vida());

}

FString AEstado2Vida::ToString()
{
	return "Estado 2";
}

void AEstado2Vida::DefinirPlanta_Estados(APlanta_Estados* PlantaDeEstados)
{
	//Set the Slot Machine of this state
	PlantaEstados = PlantaDeEstados;

}

