#pragma once
#include "../Level.h"
#include <iostream>

class MainLevel : public Level
{
public:
	MainLevel(std::string);

	// DrawLevel
	void DrawLevel();
	void Tick();
};

