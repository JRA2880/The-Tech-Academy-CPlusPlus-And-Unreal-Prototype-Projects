// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PrototypeGameModeBase.generated.h"


/**
 * 
 */
UCLASS()
class PLAGUEPROTOTYPE_API APrototypeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public: 
  UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void IncreasePlayerScore();
  UFUNCTION(BlueprintImplementableEvent,BlueprintCallable, Category = "Logic")
	void SpawnNewZombie();


};
