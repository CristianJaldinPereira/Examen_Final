// Fill out your copyright notice in the Description page of Project Settings.


#include "State_Principal.h"
#include "Planta_Estados.h"

// Sets default values
AState_Principal::AState_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AState_Principal::BeginPlay()
{
	Super::BeginPlay();

	//Create the Slot Machine and set its Dollars Amount to 100
	APlanta_Estados* PlantaEstados = GetWorld()->SpawnActor<APlanta_Estados>(APlanta_Estados::StaticClass());

	PlantaEstados->Inicializar(3);

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *PlantaEstados->GetEstado()->ToString()));

	PlantaEstados->Atacar();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *PlantaEstados->GetEstado()->ToString()));


	PlantaEstados->Defender();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *PlantaEstados->GetEstado()->ToString()));

	PlantaEstados->Recolectar();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *PlantaEstados->GetEstado()->ToString()));

	PlantaEstados->Recolectar();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *PlantaEstados->GetEstado()->ToString()));


	//PlantaEstados->DefinirEstado(PlantaEstados->GetEstado2Vida());
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Estado Actual: %s"), *PlantaEstados->GetEstado()->ToString()));
}

// Called every frame
void AState_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

