#include "../Header/Guicontroller.h"

GuiController::GuiController(sf::RenderWindow& pWindowRef, StateController& pStateConRef)
	:
	windowRef(pWindowRef),
	stateConRef(pStateConRef)
{
	ImGui::SFML::Init(windowRef);
	std::cout << "guiCon" << std::endl;
}

GuiController::~GuiController()
{
}

void GuiController::renderFrame(sf::Clock pDeltaTime)
{
	switch (stateConRef.getState())
	{
	case StateController::MAIN:
		renderMainMenu();
		break;

	case StateController::TOWERMAIN:
		renderTowerMenu();
		break;

	case StateController::TOWER:
		break;

	default:
		break;
	}

	

	ImGui::SFML::Render();
}

void GuiController::renderMainMenu()
{
	ImGui::Begin("MainMenu");
	if (ImGui::Button("TowerMenu"))
	{

		stateConRef.changeState(StateController::TOWERMAIN);

	}
	if (ImGui::Button("Tower"))
	{
		
		stateConRef.changeState(StateController::TOWER);

	}
	ImGui::End();
}

void GuiController::renderTowerMenu()
{
	ImGui::Begin("TowerMenu");
	if (ImGui::Button("MainMenu"))
	{

		stateConRef.changeState(StateController::MAIN);

	}
	if (ImGui::Button("Tower"))
	{

		stateConRef.changeState(StateController::TOWERMAIN);

	}
	ImGui::End();
}
