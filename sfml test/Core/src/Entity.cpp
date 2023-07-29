//#include "../../Header/Models/Entity.h"
//#include "../sfml test/Core/Header/Models/Entity.h"

#include "../Header/Entity.h"
using namespace sf;

Entity::Entity(int newId, Vector2i pos)
{
	Id = newId;
	position = pos;
}

//Entity::~Entity() {}

Vector2i Entity::setPosition(Vector2i newPos) 
{
	position = newPos;
	return position;
}

Vector2i Entity::getPosition() 
{
	return position;
}