#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include <iostream>
#include <string>

using namespace sf;

class Entity
{
public:
	Entity(int Id, Vector2i pos);
	//~Entity();

	Vector2i getPosition();
	Vector2i setPosition(Vector2i newPos);

	int Id;

private:
	Vector2i position;
	std::string tilesetPath;
	int speed;
};

