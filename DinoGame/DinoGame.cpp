#include <iostream>
#include "ConsoleFunctions.h"
#include "./Level/DinoLevels/MainLevel.h"
#include "./Level/DinoLevels/GameLevel.h"
#include "./Level/DinoLevels/GameoverLevel.h"

void InitGame() {
	setCursorType(CursorInvisible);
	setSize(80, 20);
}

int main()
{
	while (true) {
		// Game Init...
		InitGame();

		// Open MainLevel
		{
			MainLevel PrimaryLevel = MainLevel("MainLevel");
			PrimaryLevel.Run();
		}

		// Open GameLevel
		int playScore = 0;
		{
			GameLevel Game = GameLevel("GameLevel");
			Game.Run();
			playScore = Game.getScore();
		}

		// GameOver
		{
			GameoverLevel OverLevel = GameoverLevel("GameOver", playScore);
			OverLevel.Run();
		}
	}
}
