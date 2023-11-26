// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta_Estados.h"
#include "Estado1Vida.h"
#include "Estado2Vida.h"
#include "Estado3Vida.h"

// Sets default values
APlanta_Estados::APlanta_Estados()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlanta_Estados::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlanta_Estados::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	//if (Contador <= 3) {
	//	Estado = Estado3Vida;
	//}
	//if (Contador <= 2) {
	//	Estado = Estado2Vida;
	//}
	//if (Contador <= 1) {
	//	Estado = Estado1Vida;
	//}

}

void APlanta_Estados::Inicializar(int NumeroDeVidas)
{
	//Spanw the No Dollars State and set this Slot Machine to it
	Estado1Vida = GetWorld()->SpawnActor<AEstado1Vida>(AEstado1Vida::StaticClass());
	Estado1Vida->DefinirPlanta_Estados(this);
	//Spanw the No Coin State and set this Slot Machine to it
	Estado2Vida = GetWorld()->SpawnActor<AEstado2Vida>(AEstado2Vida::StaticClass());
	Estado2Vida->DefinirPlanta_Estados(this);
	//Spanw the Coin Inserted State and set this Slot Machine to it
	Estado3Vida = GetWorld()->SpawnActor<AEstado3Vida>(AEstado3Vida::StaticClass());
	Estado3Vida->DefinirPlanta_Estados(this);

	//Set the amount of dollars
	Contador = NumeroDeVidas;
	//If its greater than 0, set the current State to No Coin State

	if (NumeroDeVidas <= 3) {
		Estado = Estado3Vida;
	}
	if (NumeroDeVidas <= 2) {
		Estado = Estado2Vida;
	}
	if (NumeroDeVidas <= 1) {
		Estado = Estado1Vida;
	}
}

void APlanta_Estados::Atacar()
{
	Estado->Atacar();
}

void APlanta_Estados::Defender()
{
	Estado->Defender();
}

void APlanta_Estados::Recolectar()
{
	Estado->Recolectar();
}

void APlanta_Estados::EmitirMensaje()
{
	FString myString = "Tienes Vidas ";
	myString += FString::FromInt(Contador);

	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, *myString);

	Contador--;

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, *myString);


}

IEstados* APlanta_Estados::GetEstado()
{
	return Estado;
}

IEstados* APlanta_Estados::GetEstado1Vida()
{
	return Estado1Vida;
}

IEstados* APlanta_Estados::GetEstado2Vida()
{
	return Estado2Vida;
}

IEstados* APlanta_Estados::GetEstado3Vida()
{
	return Estado3Vida;
}

FString APlanta_Estados::GetEstadoActual()
{
	return "Estado Actual de la Planta:" + Estado->ToString();
}

void APlanta_Estados::DefinirEstado(IEstados* myEstado)
{
	Estado = myEstado;
}

int APlanta_Estados::GetContador()
{
	return Contador;
}

void APlanta_Estados::CurarVida(int mycontador)
{
	//Add the passed count to the Dollars amount and log it
	Contador += mycontador;
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Las vidas de la planta ahora son: % i"), Contador));
	//Then execute the Restock Dollars routine based on the current state

	//Estado->Recolectar();

}
