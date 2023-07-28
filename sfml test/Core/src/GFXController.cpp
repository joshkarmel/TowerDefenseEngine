#include "../Header/GFXController.h"

GFXController::GFXController(sf::RenderWindow& pWindowRef)
	:
	windowRef(pWindowRef)
{
	std::cout << "GFXCon" << std::endl;
}

GFXController::~GFXController()
{

}