#include "../Header/EntityController.h"

EntityController::EntityController(sf::RenderWindow& pWindowRef)
	:
	windowRef(pWindowRef)
{
	std::cout << "entitycon";
}

EntityController::~EntityController()
{
}

Vector2i EntityController::getPosition()
{
	return entPosition;
}
