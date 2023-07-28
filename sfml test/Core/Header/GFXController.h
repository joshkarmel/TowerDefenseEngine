#pragma once
#include "SFML/Graphics.hpp"
#include "SFML/Main.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

#include <iostream>

class GFXController
{
public:
	GFXController(sf::RenderWindow& pWindowRef);
	~GFXController();

private:
	sf::Texture textureAtlas;
	sf::RenderWindow& windowRef;
};

