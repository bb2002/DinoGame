#include "GameoverLevel.h"
#include "../../ConsoleFunctions.h"

GameoverLevel::GameoverLevel(std::string LevelName, int highScore) : Level(LevelName), MyScore(highScore)
{
}

void GameoverLevel::DrawLevel() {
	gotoxy(0, 0);
	std::cout << "============================================================================" << std::endl;
	std::cout << "         _____           __  __ ______    ______         _______   _____" << std::endl;
	std::cout << "	/ ____|    /\\   |  \\/  |  ____|  / __  \\ \\    / /  ____\\  |  __ \\" << std::endl;
	std::cout << "	| |  __   /  \\  |  \\ / | |__    | |  |  \\ \\  / /| |__     | |__) |" << std::endl;
	std::cout << "	| | |_ | / /\\ \\ | |\\/| |  __|   | |  | | \\ \\/ / |  __|    |  _  /" << std::endl;
	std::cout << "	| |__| |/ ____ \\| |  | | |____  | |__| |  \\  /  | |____   | | \\ \\" << std::endl;
	std::cout << "	\\_____ / _ /    \\_|  \\_|______\\ \\_____ |   \\/   |______|  |_|  \\_\\" << std::endl;
	std::cout << "========================  =-=-=    SCORE : " << MyScore << "    =-=-=  =========================" << std::endl;
	gotoxy(29, 16);

	std::cout << "Press R key to return." << std::endl;
}

void GameoverLevel::Tick() {
	if (_getch() == 114) {
		Stop();
	}
}

