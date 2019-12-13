#include "Enemy.h"
#include "../../ConsoleFunctions.h"


Enemy::Enemy(int x, int y, PlayerDino* Player) : Pawn(x, y), CurrentPlayer(Player)
{
}

void Enemy::DrawPawn() {
	gotoxy(x, y-3);
	std::cout << "\\" << std::endl;
	gotoxy(x, y - 2);
	std::cout << "\\" << std::endl;
	gotoxy(x, y - 1);
	std::cout << "\\" << std::endl;
}

void Enemy::ClearPawn() {
	gotoxy(x, y - 3);
	std::cout << " " << std::endl;
	gotoxy(x, y - 2);
	std::cout << " " << std::endl;
	gotoxy(x, y - 1);
	std::cout << " " << std::endl;
}

const int FORWARD_DELAY = 50;
int forwardedDelay = FORWARD_DELAY;
void Enemy::Tick() {
	if (x <= 0) {
		bIsEnemyKilled = true;
		return;
	}
	else {
		// Is Player Killed
		if (x >= 7 && x <= 9) {
			if (!CurrentPlayer->isNowJumping()) {
				// Killed.
				CurrentPlayer->bIsPlayerDead = true;
			}
		}
	}

	DrawPawn();
	if (forwardedDelay <= 0) {
		ClearPawn();

		x--;
		forwardedDelay = FORWARD_DELAY;
	}
	else {
		forwardedDelay--;
	}
}

Enemy::~Enemy()
{
}
