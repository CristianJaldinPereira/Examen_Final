// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estrategia_Zombie_Principal.h"
#include "Estrategia_Zombie_Normal.generated.h"
class AZombie_Explosivo;
UCLASS()
class PVZ_USFX_LAB02_API AEstrategia_Zombie_Normal : public AActor, public IEstrategia_Zombie_Principal
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategia_Zombie_Normal();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Normal(AZombie_Explosivo* ZombieActual) override;

	virtual void Curacion(AZombie_Explosivo* ZombieActual) override {};

	virtual void Inmune(AZombie_Explosivo* ZombieActual) override {};

};
