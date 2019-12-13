#include "MainLevel.h"
#include "../../ConsoleFunctions.h"


MainLevel::MainLevel(std::string LevelName) : Level(LevelName)
{
}

void MainLevel::DrawLevel()
{
	gotoxy(0, 0);
	std::cout << "============================================================================" << std::endl;
	std::cout << "_____     _____   _   _    ____       _____              __  __   ______   _" << std::endl;
	std::cout << "|  __ \\  |_   _| | \\ | |  / __ \\     / ____|     /\\     |  \\/  | |  ____| | |" << std::endl;
	std::cout << "| |  | |   | |   |  \\| | | |  | |   | |  __     /  \\    | \\  / | | |__    | |" << std::endl;
	std::cout << "| |  | |   | |   | . ` | | |  | |   | | |_ |   / /\\ \\   | |\\/| | |  __|   | |" << std::endl;
	std::cout << "| |__| |  _| |_  | |\\  | | |__| |   | |__| |  / ____ \\  | |  | | | |____  |_|" << std::endl;
	std::cout << "|_____/  |_____| |_| \\_| \\____ /     \\_____| /_ /   \\_\\ |_|  |_| |______| (_)" << std::endl;
	std::cout << "============================================================================" << std::endl;
	gotoxy(29, 16);

	std::cout << "Press any key to start." << std::endl;
}

void MainLevel::Tick() {
	_getch();
	Stop(); // 레벨을 정지 한다.
}
