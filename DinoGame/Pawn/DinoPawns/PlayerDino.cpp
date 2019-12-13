#include "PlayerDino.h"
#include "../../DinoEngine/EventHandler/OnKeyListener.h"
#include "../../ConsoleFunctions.h"
#include <windows.h>

PlayerDino::PlayerDino(int x, int y) : Pawn(x, y)
{
	AddKeyEventHandler(0x20, this);
}


PlayerDino::~PlayerDino()
{
}

void PlayerDino::DrawPawn() {
	gotoxy(x, y - 3);
	std::cout << "###" << std::endl;

	gotoxy(x, y - 2);
	std::cout << "##.." << std::endl;

	gotoxy(x, y - 1);
	std::cout << "###" << std::endl;

}

void PlayerDino::ClearPawn()
{
	gotoxy(x, y - 3);
	std::cout << "   " << std::endl;

	gotoxy(x, y - 2);
	std::cout << "    " << std::endl;

	gotoxy(x, y - 1);
	std::cout << "   " << std::endl;
}

bool isJumping = false;
const int JUMP_HEIGHT = 4;
const int JUMPING_TIME = 700;
int jumpedTime = JUMPING_TIME;

void PlayerDino::Tick()
{
	Pawn::Tick();
	
	if (isJumping) {
		ClearPawn();

		if (jumpedTime >= 0) {
			if (jumpedTime == JUMPING_TIME) {
				y -= JUMP_HEIGHT;
			}

			jumpedTime--;
		}
		else {
			ClearPawn();
			isJumping = false;
			jumpedTime = JUMPING_TIME;
			y += JUMP_HEIGHT;
		}

		DrawPawn();
	}
}

bool PlayerDino::isNowJumping()
{
	return isJumping;
}

const void PlayerDino::operator()(const int KeyCode)
{
	if (KeyCode == 0x20) {
		// SpaceBar
		isJumping = true;
		Beep(823, 100);
	}
}
