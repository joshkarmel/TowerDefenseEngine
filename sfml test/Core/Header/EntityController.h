#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include <iostream>

using namespace sf;

class EntityController
{
public:
	EntityController(RenderWindow& pWindowRef);
	~EntityController();

	void updatePosition(Vector2i newPos);

	Vector2i getPosition();

private:
	RenderWindow& windowRef;

	Vector2i entPosition;

	
};

