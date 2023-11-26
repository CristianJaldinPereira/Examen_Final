// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Estados.h"

#include "Planta_Estados.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API APlanta_Estados : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APlanta_Estados();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//The No Dollars State of this Slot Machine
	IEstados* Estado1Vida;
	//The No Coin State of this Slot Machine
	IEstados* Estado2Vida;
	//The Coin Inserted State of this Slot Machine
	IEstados* Estado3Vida;

	//The State of this Slot Machine
	IEstados* Estado;

	//The amount of Dollars of this Slot Machine
	int Contador = 0;

public:

	//Initialize this Slot Machine
	void Inicializar(int NumeroDeVidas);
	//Insert a Coin
	void Atacar();
	//Reject a Coin
	void Defender();
	//Pull the lever of this Slot Machine
	void Recolectar();
	//Get the current State of this Slot Machine
	IEstados* GetEstado();
	//Get the No Dollars State of this Slot Machine
	IEstados* GetEstado1Vida();
	//Get the No Coin State of this Slot Machine
	IEstados* GetEstado2Vida();
	//Get the Coin Inserted State of this Slot Machine
	IEstados* GetEstado3Vida();

	//Get the String of the current State
	FString GetEstadoActual();

	//Set the Current State with the passed one
	void DefinirEstado(IEstados* myEstado);

	//Emit Dollars from this Slot Machine
	void EmitirMensaje();

	//Get the amount of dollars in this Slot Machine
	int GetContador();

	//Refill the dollars by the passed amount
	void CurarVida(int mycontador);

	



};
