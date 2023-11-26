// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Estados.h"
#include "Estado2Vida.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AEstado2Vida : public AActor, public IEstados
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AEstado2Vida();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	//The Slot Machine of this State
	UPROPERTY()
	class APlanta_Estados* PlantaEstados;

public:

	//The pure virtual functions of the State
	virtual void Atacar() override;
	virtual void Defender() override;
	virtual void Recolectar() override;
	virtual FString ToString() override;
	virtual void DefinirPlanta_Estados(class APlanta_Estados* PlantaDeEstados) override;

};
