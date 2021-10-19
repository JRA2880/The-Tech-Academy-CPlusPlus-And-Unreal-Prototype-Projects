// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "PongGameMode.generated.h"

class ABall;
class UGameHUD;



/**
 * 
 */
UCLASS()
class PONG_API APongGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable, Category = "Score")
	void IncreasePlayerScore();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Score")
	void IncreaseAIScore();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Logic")
    void SpawnNewBall();

	UPROPERTY(BlueprintReadWrite, Category = "References")
	ABall* BallRef;

	UFUNCTION(BlueprintPure,BlueprintCallable)
    float SumTest(float A, float B);
protected:
	UPROPERTY(BlueprintReadWrite, Category = "References", meta = (BlueprintProtected))
	UGameHUD* GameHUDRef;


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
	float Direction = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Float", meta = (BlueprintProtected))
	float BallSpeed = 2000.0f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int PlayerScore = 0;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Score", meta = (BlueprintProtected))
	int AIScore = 0;
};
