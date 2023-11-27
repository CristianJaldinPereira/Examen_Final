// Fill out your copyright notice in the Description page of Project Settings.


#include "Estrategia_Zombie_Principal.h"

// Add default functionality here for any IEstrategia_Zombie_Principal functions that are not pure virtual.

FString IEstrategia_Zombie_Principal::GenerateRandomStrategy()
{
		// Elige una estrategia al azar
		int32 NumeroAleatorio = RandomStream.RandRange(0, Strategies.Num());

		// Devuelve la estrategia correspondiente
		return Strategies[NumeroAleatorio];
	
}
