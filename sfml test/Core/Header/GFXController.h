#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include <iostream>
#include <string>

class GFXController
{
public:
	GFXController(sf::RenderWindow& pWindowRef);
	~GFXController();

	void debugAtlasLoad();

	void loadAtlas(std::string pFilepath);

private:
	sf::Texture textureAtlas;
	sf::RenderWindow& windowRef;
};

