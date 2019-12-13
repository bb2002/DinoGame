#include "Pawn.h"
#include <windows.h>
#include "winuser.h"


Pawn::Pawn(int x = 0, int y = 0) : x(x), y(y)
{
}


Pawn::~Pawn()
{
}

void Pawn::Tick()
{
	if (!KeyMap.empty()) {
		// 등록된 키 이벤트가 있읍니다.
		for (KeyEventListenerMap::iterator KeyMapIter = KeyMap.begin(); KeyMapIter != KeyMap.end(); ++KeyMapIter) {
			const int KeyCode = KeyMapIter->first;
			OnKeyListener* EventListener = KeyMapIter->second;

			if (GetAsyncKeyState(KeyCode) & 0x8000) {
				(*EventListener)(KeyCode);
			}
		}
	}
}

void Pawn::Destory()
{
}

void Pawn::AddKeyEventHandler(const int KeyCode, OnKeyListener* EventListener)
{
	// Add KeyEvent Listener.
	KeyMap.insert(KeyEventListenerPair(KeyCode, EventListener));
}
