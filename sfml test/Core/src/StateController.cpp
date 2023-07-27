
#include "..\Header\StateController.h"

StateController::StateController(sf::RenderWindow& pWindowRef)
	:
	windowRef(pWindowRef)
{

	std::cout << "statecon";
}

StateController::~StateController()
{
}
