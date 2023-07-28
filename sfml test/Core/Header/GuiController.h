#pragma once

#include "imgui/imgui.h"
#include "imgui/imgui-SFML.h"
#include "imgui/imgui_impl_opengl3.h"
#include "SFML/System.hpp"

#include "..\Header\StateController.h"

#include <iostream>


class GuiController
{
public:
	GuiController(sf::RenderWindow& pWindowRef, StateController& pStateConRef);
	~GuiController();

	void renderFrame(sf::Clock pDeltaTime);
	void renderMainMenu();
	void renderTowerMenu();

private:

	sf::RenderWindow& windowRef;
	StateController& stateConRef;

};

