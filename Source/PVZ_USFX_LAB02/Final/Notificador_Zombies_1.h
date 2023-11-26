// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publicador_Zombies.h"
#include "Notificador_Zombies_1.generated.h"

/**
 * 
 */
UCLASS()
class PVZ_USFX_LAB02_API ANotificador_Zombies_1 : public APublicador_Zombies
{
	GENERATED_BODY()
	
private:
	FString Estado;

public:

	void EstadoCambiado();

	void DefinirEstado(FString myEstado);

	FORCEINLINE FString GetEstado() { return Estado; };

};
