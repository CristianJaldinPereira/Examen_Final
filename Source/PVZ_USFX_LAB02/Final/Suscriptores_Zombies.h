// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Suscriptores_Zombies.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USuscriptores_Zombies : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class PVZ_USFX_LAB02_API ISuscriptores_Zombies
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void ActualizarZombies(class APublicador_Zombies* Publicador_Zombies) = 0;
};
