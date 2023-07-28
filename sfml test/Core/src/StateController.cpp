
#include "..\Header\StateController.h"

StateController::StateController(sf::RenderWindow& pWindowRef)
	:
	windowRef(pWindowRef),
	currentState(MAIN)
{

	std::cout << "statecon" << std::endl;;
}

StateController::~StateController()
{
}

void StateController::update(Vector2i& pMousePosition)
{
	mousePositionRef = pMousePosition;

	switch (currentState)
	{
	case MAIN:
		updateMainMenu();
		break;

	case TOWERMAIN:
		updateTowerMenu();
		break;

	case TOWER:
		updateTower();
		break;

	default:
		break;
	}
}

void StateController::updateMainMenu()
{
}

void StateController::updateTowerMenu()
{
	
}

void StateController::updateTower()
{
	//std::cout << "TOWER" << std::endl;
}

void StateController::changeState(eState pStateChange)
{
	currentState = pStateChange;
}

StateController::eState StateController::getState()
{
	return currentState;
}
