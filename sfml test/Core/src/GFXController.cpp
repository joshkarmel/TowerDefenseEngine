#include "../Header/GFXController.h"

GFXController::GFXController(sf::RenderWindow& pWindowRef, EntityController& pEntityConRef)
	:
	windowRef(pWindowRef),
	EntityConRef(pEntityConRef)
{
	std::cout << "GFXCon" << std::endl;

	loadAtlas("Resources/Image/Tilemap/test1.png");
}

GFXController::~GFXController()
{

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
	BGtextureAtlas = tempTexture;
}

void GFXController::renderEntity()
{
	for (auto& entity : entitySpriteStack) 
	{
		//entity->update(deltaTime);
		//get entitytype
		//use that to reference prper gfx
		//update image
	}
}

void GFXController::update()
{
	
}
