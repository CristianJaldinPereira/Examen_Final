// Fill out your copyright notice in the Description page of Project Settings.


#include "Estado3Vida.h"
#include "Planta_Estados.h"

// Sets default values
AEstado3Vida::AEstado3Vida()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstado3Vida::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEstado3Vida::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstado3Vida::Atacar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Atacar Estado3Vida"));

	PlantaEstados->EmitirMensaje();

	PlantaEstados->DefinirEstado(PlantaEstados->GetEstado2Vida());

}

void AEstado3Vida::Defender()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Defender Estado3Vida"));
	//PlantaEstados->EmitirMensaje();

}

void AEstado3Vida::Recolectar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("Recolectar Estado3Vida"));
	//PlantaEstados->EmitirMensaje();

}

FString AEstado3Vida::ToString()
{
	return "Estado 3";
}

void AEstado3Vida::DefinirPlanta_Estados(APlanta_Estados* PlantaDeEstados)
{
	//Set the Slot Machine of this state
	PlantaEstados = PlantaDeEstados;


}



