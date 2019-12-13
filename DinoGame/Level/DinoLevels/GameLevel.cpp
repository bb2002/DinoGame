#include "GameLevel.h"
#include <ctime>
#include "../../ConsoleFunctions.h"


GameLevel::GameLevel(std::string LevelName) : Level(LevelName)
{
	Player = new PlayerDino(5, 15);
}

void GameLevel::DrawLevel()
{
	gotoxy(0, 15);
	for (int i = 0; i < 80; ++i) {
		std::cout << "=";
	}

	DrawPlayer();
}

unsigned long PlayTime = 0;
void GameLevel::Tick()
{
	++PlayTime;

	// Player Tick
	Player->Tick();
	if (Player->bIsPlayerDead) {
		Stop();
		clearConsole();
	}
	else {
		score = PlayTime / 1000;
		gotoxy(1, 1);
		std::cout << "SCORE : " << score << std::endl;
	}

	int percent = rand() % 10000;

	if (percent < score / 10 + 1) {
		Enemy* newEnemy = new Enemy(79, 15, Player);
		Enemies.push_back(newEnemy);
	}

	for (int i = 0; i < Enemies.size(); ++i) {
		auto e = Enemies[i];
		if (e == nullptr) {
			continue;
		}

		if (!e->isEnemyKilled()) {
			e->Tick();
		}
	}
}

void GameLevel::DrawPlayer()
{
	Player->DrawPawn();
}
