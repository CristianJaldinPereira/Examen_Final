// Fill out your copyright notice in the Description page of Project Settings.


#include "Publicador_Zombies.h"

// Sets default values
APublicador_Zombies::APublicador_Zombies()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APublicador_Zombies::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APublicador_Zombies::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APublicador_Zombies::SuscribirZombie(AActor* Suscriptor)
{
	SuscriptoresZombies.Add(Suscriptor);
}

void APublicador_Zombies::DesuscribirZombie(AActor* SuscriptorARemover)
{
	SuscriptoresZombies.Remove(SuscriptorARemover);
}

void APublicador_Zombies::NotificarZombie()
{
	//Loop for each Subscriber
	for (AActor* Actor : SuscriptoresZombies)
	{
		//Cast each of them to a concrete Subscriber
		ISuscriptores_Zombies* Sub = Cast<ISuscriptores_Zombies>(Actor);
		if (Sub)
		{
			//Notify each of them that something has changed, so they can execute their own routine
			Sub->ActualizarZombies(this);
		}
	}
}