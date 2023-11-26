// Fill out your copyright notice in the Description page of Project Settings.


#include "Estrategia_Zombie_Explocion.h"
#include "Zombie_Explosivo.h"
#include "PVZ_USFX_LAB02/Zombie.h"


// Sets default values
AEstrategia_Zombie_Explocion::AEstrategia_Zombie_Explocion()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategia_Zombie_Explocion::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategia_Zombie_Explocion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategia_Zombie_Explocion::Explotar(AZombie_Explosivo* ZombieActual)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, TEXT("El zombie esta al limite de explotar"));
	
	AZombie_Explosivo* ZombieExplosivo = Cast<AZombie_Explosivo>(ZombieActual);
	IEstrategia_Zombie_Principal* ZombieExplosivo1 = Cast<IEstrategia_Zombie_Principal>(ZombieActual);

  
	FVector Tamano = ZombieExplosivo->MeshZombie->GetRelativeScale3D() + FVector(0.5f, 0.5, 0.5f);
	ZombieExplosivo->MeshZombie->SetRelativeScale3D(Tamano);
	if (Tamano.X > 3 && Tamano.Y > 3 && Tamano.Z > 3)
	{
		ZombieExplosivo->Destroy();
	}
}

