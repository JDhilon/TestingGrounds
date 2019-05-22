// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"

/**
* A component to allow setting patrol points for an actor to move between
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTINGGROUNDS_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:
	// Returns Patrol Points
	TArray<AActor*> GetPatrolPoints() const;

protected:

private:
	// Points that the character patrols through
	UPROPERTY(EditAnywhere, Category = "Patrol")
	TArray<AActor*> PatrolPoints;
};
