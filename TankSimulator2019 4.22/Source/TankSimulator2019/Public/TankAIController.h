// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h" // Must be last to include


UCLASS()
class TANKSIMULATOR2019_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
private:
	virtual void BeginPlay() override;
	ATank* GetControlledTank() const;
	ATank* GetPlayerTank() const;
};
