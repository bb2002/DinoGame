#pragma once
#include "../Level.h"
class GameoverLevel : public Level
{
public:
	GameoverLevel(std::string, int highScore = 0);

	// DrawLevel
	void DrawLevel();
	void Tick();

	int MyScore;
};

