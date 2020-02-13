#include "Assets.h"
namespace toni {
	void toni::Assets::loadTexture(std::string name, std::string filename)
	{
		sf::Texture tex;
		if(tex.loadFromFile(filename))
		{
			this->textures[name] = tex;
		}
	}
	sf::Texture& Assets::getTexture(const std::string name)
	{
		this->textures.at(name);
	}
	void Assets::loadFont(std::string name, std::string filename)
	{
		sf::Font font;
		if(font.loadFromFile(filename))
		{
			this->fonts[name] = font;
		}
	}
	sf::Font& Assets::getFont(std::string name)
	{
		this->fonts.at(name);
	}
}