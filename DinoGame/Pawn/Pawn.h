#pragma once
#include "../DinoEngine/EventHandler/OnKeyListener.h"
#include <map>

typedef std::map<const int, OnKeyListener*> KeyEventListenerMap;
typedef std::pair<const int, OnKeyListener*> KeyEventListenerPair;

class Pawn
{
public:
	Pawn(int, int);
	~Pawn();

	virtual void DrawPawn() = 0;			// Draw Pawn
	virtual void ClearPawn() = 0;			// Clear Pawn
	virtual void Tick();				// Pawn Tick
	virtual void Destory();				// When Pawn Destory.

	// System Key Event Listener
	void AddKeyEventHandler(const int KeyCode, OnKeyListener* EventListener);

private:
	// Listener Array.
	KeyEventListenerMap KeyMap;

protected:
	// Player Location.
	int x;
	int y;
};

