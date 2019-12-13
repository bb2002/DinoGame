#pragma once
#include <iostream>

class Level
{
public:
	Level(std::string);
	~Level();

	void Run();
	void Stop();

protected:
	virtual void DrawLevel() = 0;
	virtual void Tick();
	virtual void DestoryLevel();

private:
	std::string LevelName;
	bool isLevelDestory = false;
};

