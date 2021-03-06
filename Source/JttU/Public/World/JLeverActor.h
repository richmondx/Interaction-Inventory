// Copyright 2019, KamikazeXeX. All rights reserverd.

#pragma once

#include "CoreMinimal.h"
#include "JUsableActor.h"
#include "JLeverActor.generated.h"

class USkeletalMeshComponent;

UCLASS()
class JTTU_API AJLeverActor : public AJUsableActor
{
	GENERATED_BODY()

public:
	AJLeverActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh", meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* SkeletalMeshComp;

protected:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lever")
	uint8 bEnabled : 1;

public:
	UFUNCTION(BlueprintCallable)
	void SetEnabled(const bool bEnable);

public:
	// Usable Interface
	void OnBeginFocus_Implementation(APawn* InstigatorPawn) override;
	void OnEndFocus_Implementation(APawn* InstigatorPawn) override;
	bool Interact_Implementation(APawn* InstigatorPawn, FName Action) override;

public:
	FORCEINLINE USkeletalMeshComponent* GetSkeletalMeshComponent() const { return SkeletalMeshComp; }

};
