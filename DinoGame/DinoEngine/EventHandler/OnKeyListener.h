#pragma once
class OnKeyListener
{
public:
	OnKeyListener();
	~OnKeyListener();

	const virtual void operator()(const int KeyCode) = 0;
};

