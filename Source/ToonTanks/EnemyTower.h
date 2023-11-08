

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "EnemyTower.generated.h"




UCLASS()
class TOONTANKS_API AEnemyTower : public ABasePawn
{
	GENERATED_BODY() //must remain on line 15
	
	public:
		virtual void Tick(float DeltaTime) override;

		AEnemyTower();
	
	protected:
		virtual void BeginPlay() override;

	private:
		class ATank* Tank;

		UPROPERTY(EditDefaultsOnly, Category = "Combat")
		float FireRange = 20.f;
};
