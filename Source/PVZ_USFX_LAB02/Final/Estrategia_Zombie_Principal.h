// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Estrategia_Zombie_Principal.generated.h"

class AZombie_Explosivo;
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UEstrategia_Zombie_Principal : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB02_API IEstrategia_Zombie_Principal
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	TArray<FString> Strategies = { "Estrategia_Zombie_Curacion", "Estrategia_Zombie_Explocion", "Estrategia_Zombie_Inmune", "Estrategia_Zombie_Normal", "Estrategia_Zombie_Tranquilo" };
	FRandomStream RandomStream;


	FString GenerateRandomStrategy() ;
	

	



	virtual void Explotar(AZombie_Explosivo* ZombieActual) = 0;

	virtual void Curacion(AZombie_Explosivo* ZombieActual) = 0;

	virtual void Inmune(AZombie_Explosivo* ZombieActual) = 0;

	virtual void Normal(AZombie_Explosivo* ZombieActual) = 0;
};
