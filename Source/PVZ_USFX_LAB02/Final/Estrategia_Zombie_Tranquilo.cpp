// Fill out your copyright notice in the Description page of Project Settings.


#include "Estrategia_Zombie_Tranquilo.h"

// Sets default values
AEstrategia_Zombie_Tranquilo::AEstrategia_Zombie_Tranquilo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategia_Zombie_Tranquilo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategia_Zombie_Tranquilo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategia_Zombie_Tranquilo::Explotar(AZombie_Explosivo* ZombieActual)
{

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie esta tranquilo no explotara"));

}

void AEstrategia_Zombie_Tranquilo::Curacion(AZombie_Explosivo* ZombieActual)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie esta tranquilo no se curara"));

}

void AEstrategia_Zombie_Tranquilo::Inmune(AZombie_Explosivo* ZombieActual)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie es inmune"));
}

void AEstrategia_Zombie_Tranquilo::Normal(AZombie_Explosivo* ZombieActual)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie recibira daño"));
}

