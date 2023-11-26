// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FreakyAllen.h"
#include "FreakyAllenSon.generated.h"

/**
 *
 */
UCLASS()
class PVZ_USFX_LAB02_API AFreakyAllenSon : public AFreakyAllen
{
	GENERATED_BODY()

public:

	//Execute this Subscriber routine
	virtual void Morph() override;

};
