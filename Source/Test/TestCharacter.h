// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestCharacter.generated.h"

UCLASS()
class TEST_API ATestCharacter : public ACharacter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, Category = "Enhanced Input")
	class UInputMappingContext* InputContext;

	UPROPERTY(EditAnywhere, Category = "Enhanced Input")
	class UInputAction* MovementAction;

	UPROPERTY(EditAnywhere, Category = "Enhanced Input")
	class UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category = "Enhanced Input")
	class UInputAction* LookAction;

public:
	// Sets default values for this character's properties
	ATestCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move(const FInputActionValue& InputValue);

	void Look(const FInputActionValue& InputValue);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
