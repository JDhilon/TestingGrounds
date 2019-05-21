// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingThirdPersonCharacter.generated.h"

/**
 * Class for third person character who patrol around a set of waypoints
 */
UCLASS()
class TESTINGGROUNDS_API APatrollingThirdPersonCharacter : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()

public:
	// Returns Patrol Points
	TArray<AActor*> GetPatrolPoints();

protected:
	// Points that the character patrols through
	UPROPERTY(EditAnywhere, Category = "Patrol")
	TArray<AActor*> PatrolPoints;

private:
};
