// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieAbanderado.h"

AZombieAbanderado::AZombieAbanderado()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AZombieAbanderado::BeginPlay()
{
	Super::BeginPlay();
}

void AZombieAbanderado::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AZombieAbanderado::EstadoCambiado()
{
	//Cuando el estado a cambiado, este Zombie Abanderado (que es un Publicador) notifica a todos los suscriptores que el estado a cambiado
	NotificarSuscriptores();

}

void AZombieAbanderado::DefinirEstado(FString myEstado)
{
	//Define el estado del zombie según un parametro pasado y advierte que el estado a cambiado
	Estado = myEstado;
	EstadoCambiado();
}
