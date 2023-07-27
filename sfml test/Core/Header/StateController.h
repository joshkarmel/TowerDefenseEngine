#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include <iostream>

class StateController
{
public:
	enum eState
	{
		MAIN,
		TOWERMAIN,
		TOWER
	};


	StateController(sf::RenderWindow& pWindowRef);
	~StateController();

private:


	sf::RenderWindow& windowRef;

	eState currentState;
};

