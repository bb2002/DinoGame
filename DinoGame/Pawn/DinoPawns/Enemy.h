#pragma once
#include "../Pawn.h"
#include "../DinoPawns/PlayerDino.h"

class Enemy : public Pawn
{
public:
	Enemy(int, int, PlayerDino*);

	void DrawPawn();
	void ClearPawn();
	void Tick();

	bool isEnemyKilled() {
		return this->bIsEnemyKilled;
	}

	~Enemy();

private:
	PlayerDino* CurrentPlayer;
	bool bIsEnemyKilled = false;
};

