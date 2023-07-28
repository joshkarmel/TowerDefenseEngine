#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include <iostream>

using namespace sf;

class StateController
{
public:
	enum eState
	{
		MAIN,
		TOWERMAIN,
		TOWER
	};


	StateController(RenderWindow& pWindowRef);
	~StateController();

	void update(Vector2i& pMousePosition);
	void updateMainMenu();
	void updateTowerMenu();
	void updateTower();
	
	void changeState(eState pStateChange);
	eState getState();

private:


	RenderWindow& windowRef;

	eState currentState;
	Vector2i mousePositionRef;
};

