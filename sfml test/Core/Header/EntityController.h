#pragma once


#include "../Header/Entity.h"
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

