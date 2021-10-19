// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "PaperSpriteComponent.h"
#include "Ball.generated.h"

class APaddle;

UCLASS(Blueprintable)
class PONG_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABall();

protected: 
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Hit Response", meta = (BlueprintProtected))
	void HitPaddle(APaddle* Paddle);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Hit Response", meta = (BlueprintProtected))
	void HitBoundary();

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Sprite", meta = (AllowPrivateAccess = "true"))
	UPaperSpriteComponent* Sprite;

	UPROPERTY(VisibleDefaultsOnly,BlueprintReadOnly, Category = "Collison",meta = (AllowPrivateAccess = "true"))
	USphereComponent* Sphere; 

	/*UFUNCTION(BlueprintImplementableEvent)
	void ImplementableExample();

	UFUNCTION(BlueprintNativeEvent)
	void NativeExample();

	void ABall::NativeExample_Implementation()
	{

	}  

	UFUNCTION(BlueprintPure)
	float PureExample();
	
	float ABall::PureExample()
	{
		return 0.0f;
	}*/

};
