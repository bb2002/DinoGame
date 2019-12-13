#include "Level.h"
#include "../ConsoleFunctions.h"

Level::Level(std::string LevelName) : LevelName(LevelName = "")
{
	// Level is created.

}


Level::~Level()
{
}

void Level::Run()
{
	DrawLevel();
	while (!isLevelDestory) {
		Tick();
	}
	DestoryLevel();
}

void Level::Stop()
{
	isLevelDestory = true;
}

void Level::Tick()
{
}

void Level::DestoryLevel()
{
	clearConsole();
}
