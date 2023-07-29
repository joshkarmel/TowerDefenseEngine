#include "../Header/EntityController.h"

using namespace sf;

EntityController::EntityController(RenderWindow& pWindowRef)
	:
	windowRef(pWindowRef)
{
	std::cout << "entitycon";
}

EntityController::~EntityController()
{
}

list<Entity> EntityController::addEntity(Entity newEnt) {
	entities.push_back(newEnt);
	return entities;
}

list<Entity> EntityController::setEntities(list<Entity> newEnts) {
	entities = newEnts;
	return entities;
}

Entity EntityController::getEntity()
{
	return entities.front();
}
