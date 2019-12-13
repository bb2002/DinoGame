#pragma once
#include "../Pawn.h"
#include <iostream>

class PlayerDino : public Pawn, OnKeyListener
{
public:
	PlayerDino(int, int);
	~PlayerDino();

	void DrawPawn();
	void ClearPawn();
	void Tick();

	bool isNowJumping();
	
	const virtual void operator()(const int KeyCode);

	bool bIsPlayerDead = false;
};

