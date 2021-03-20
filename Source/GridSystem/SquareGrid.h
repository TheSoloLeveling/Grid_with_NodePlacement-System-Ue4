// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SquareNode.h"
#include "SquareGrid.generated.h"

UCLASS()
class GRIDSYSTEM_API ASquareGrid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASquareGrid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Node)
	ASquareNode* MainNode;

	void ComputeH(ASquareNode n1, ASquareNode n2);
	//void ConstructGrid();
	

};
