// Fill out your copyright notice in the Description page of Project Settings.


#include "Estrategia_Zombie_Curacion.h"
#include "Zombie_Explosivo.h"


// Sets default values
AEstrategia_Zombie_Curacion::AEstrategia_Zombie_Curacion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategia_Zombie_Curacion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategia_Zombie_Curacion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategia_Zombie_Curacion::Curacion(AZombie_Explosivo* ZombieActual)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie esta curandose"));
	
	AZombie_Explosivo* ZombieExplosivo = Cast <AZombie_Explosivo>(ZombieActual);
	
	
		ZombieExplosivo->energia += 10;
	


}

