#include "../Header/GFXController.h"

GFXController::GFXController(sf::RenderWindow& pWindowRef)
	:
	windowRef(pWindowRef)
{
	std::cout << "GFXCon" << std::endl;

	loadAtlas("Resources/Image/Tilemap/test1.png");
}

GFXController::~GFXController()
{

}

void GFXController::debugAtlasLoad()
{
	sf::Texture tempTexture;
	if (!tempTexture.loadFromFile("Resources/Image/Tilemap/Test1.png"))
	{
		std::cout << "error loaduing textire" << std::endl;
	}

	if (tempTexture.getSize() == sf::Vector2u(0, 0))
	{
		std::cout << "Texture size is 0, 0" << std::endl;
	}
}

void GFXController::loadAtlas(std::string pFilepath)
{
	sf::Texture tempTexture;
	if (!tempTexture.loadFromFile(pFilepath))
	{
		std::cout << "error loaduing textire" << std::endl;
	}

	if (tempTexture.getSize() == sf::Vector2u(0, 0))
	{
		std::cout << "Texture size is 0, 0" << std::endl;
	}
	textureAtlas = tempTexture;
}
