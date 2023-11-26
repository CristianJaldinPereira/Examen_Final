// Fill out your copyright notice in the Description page of Project Settings.


#include "Strategy_Principal.h"
#include "EstrategiaAtaque.h"
#include "EstrategiaOfensiva.h"
#include "Estrategia_Retirada.h"
#include "Zombie_Estrategico.h"

// Sets default values
AStrategy_Principal::AStrategy_Principal()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AStrategy_Principal::BeginPlay()
{
	Super::BeginPlay();

	//Spawn del zombie
	AZombie_Estrategico* ZombieEstrategico = GetWorld()->SpawnActor<AZombie_Estrategico>(AZombie_Estrategico::StaticClass());

	//Spawn de las estrategias
	AEstrategiaAtaque* EstrategiaAtaque = GetWorld()->SpawnActor<AEstrategiaAtaque>(AEstrategiaAtaque::StaticClass());
	AEstrategia_Retirada* EstrategiaRetirada = GetWorld()->SpawnActor<AEstrategia_Retirada>(AEstrategia_Retirada::StaticClass());
	AEstrategiaOfensiva* EstrategiaOfensiva = GetWorld()->SpawnActor<AEstrategiaOfensiva>(AEstrategiaOfensiva::StaticClass());

	//Asignacion de las estrategias al zombie
	ZombieEstrategico->AlterarEstrategia(EstrategiaAtaque);
	ZombieEstrategico->Realizar();

	//ZombieEstrategico->AlterarEstrategia(EstrategiaRetirada);
	//ZombieEstrategico->Realizar();

	//ZombieEstrategico->AlterarEstrategia(EstrategiaOfensiva);
	//ZombieEstrategico->Realizar();


}

// Called every frame
void AStrategy_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

