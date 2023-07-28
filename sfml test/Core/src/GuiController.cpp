#include "../Header/Guicontroller.h"

GuiController::GuiController(sf::RenderWindow& pWindowRef)
	:
	windowRef(pWindowRef)
{
	ImGui::SFML::Init(windowRef);
	std::cout << "guiCon" << std::endl;
}

GuiController::~GuiController()
{
}

void GuiController::renderFrame(sf::Clock pDeltaTime)
{
	ImGui::SFML::Update(windowRef, pDeltaTime.getElapsedTime());
}

void GuiController::renderMainMenu()
{
}

void GuiController::renderTowerMenu()
{
}
