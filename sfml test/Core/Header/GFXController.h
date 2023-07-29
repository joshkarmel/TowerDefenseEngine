#pragma once
#include "../Header/EntityController.h"

#include "SFML/Graphics.hpp"
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include <iostream>
#include <string>
#include <vector>

class GFXController
{
public:
	GFXController(sf::RenderWindow& pWindowRef, EntityController& pEntityConRef);
	~GFXController();

	void loadAtlas(std::string pFilepath);

	void renderEntity();
	void update();

private:
	sf::Texture BGtextureAtlas;
	sf::Texture characterAtlas;
	sf::RenderWindow& windowRef;

	std::vector<sf::Sprite> entitySpriteStack;

	EntityController& EntityConRef;
};

