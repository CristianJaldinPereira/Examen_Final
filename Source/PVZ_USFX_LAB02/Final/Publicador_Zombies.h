// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Suscriptores_Zombies.h"
#include "Publicador_Zombies.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API APublicador_Zombies : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APublicador_Zombies();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY()
	TArray<AActor*> SuscriptoresZombies = TArray<AActor*>();

public:

	void SuscribirZombie(AActor* Suscriptor);

	void DesuscribirZombie(AActor* SuscriptorARemover);

	void NotificarZombie();

};
