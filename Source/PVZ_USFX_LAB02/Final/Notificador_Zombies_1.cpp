// Fill out your copyright notice in the Description page of Project Settings.


#include "Notificador_Zombies_1.h"

void ANotificador_Zombies_1::EstadoCambiado()
{
	NotificarZombie();
}

void ANotificador_Zombies_1::DefinirEstado(FString myEstado)
{
	Estado = myEstado;
	EstadoCambiado();
}
