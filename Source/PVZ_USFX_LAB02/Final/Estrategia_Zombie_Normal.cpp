// Fill out your copyright notice in the Description page of Project Settings.


#include "Estrategia_Zombie_Normal.h"
#include "Zombie_Explosivo.h"
#include "PVZ_USFX_LAB02/Zombie.h"

// Sets default values
AEstrategia_Zombie_Normal::AEstrategia_Zombie_Normal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategia_Zombie_Normal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategia_Zombie_Normal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategia_Zombie_Normal::Normal(AZombie_Explosivo* ZombieActual)
{

}

