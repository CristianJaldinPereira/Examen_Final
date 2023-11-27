// Fill out your copyright notice in the Description page of Project Settings.


#include "Estrategia_Zombie_Inmune.h"
#include "Zombie_Explosivo.h"
#include "PVZ_USFX_LAB02/Zombie.h"

// Sets default values
AEstrategia_Zombie_Inmune::AEstrategia_Zombie_Inmune()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategia_Zombie_Inmune::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategia_Zombie_Inmune::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategia_Zombie_Inmune::Inmune(AZombie_Explosivo* ZombieActual)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie es inmune"));
	
	AZombie_Explosivo* ZombieExplosivo = Cast<AZombie_Explosivo>(ZombieActual);
	IEstrategia_Zombie_Principal* ZombieExplosivo1 = Cast<IEstrategia_Zombie_Principal>(ZombieActual);

	//ZombieExplosivo -> energia = -1.f;

	ZombieExplosivo->energia = -1.f;

}

