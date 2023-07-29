#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "./Models/Entity.cpp";

#include <iostream>
#include <list>

using namespace std;

class EntityController
{
public:
	EntityController(RenderWindow& pWindowRef);
	~EntityController();

	list<Entity> addEntity(Entity newEnt);
	list<Entity> setEntities(list<Entity> newEnts);
	Entity getEntity();

private:
	RenderWindow& windowRef;

	list<Entity> entities;
};

