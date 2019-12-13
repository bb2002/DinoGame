#pragma once
#include "../Level.h"
#include <vector>
#include "../../Pawn/DinoPawns/PlayerDino.h"
#include "../../Pawn/DinoPawns/Enemy.h"

class GameLevel : public Level
{
public:
	GameLevel(std::string);

	int getScore() {
		return score;
	}

protected:
	void DrawLevel();
	void Tick();

	void DrawPlayer();

private:
	PlayerDino* Player;
	std::vector<Enemy*> Enemies;
	int score = 0;
};

