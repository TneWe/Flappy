#include "InputManager.h"

bool toni::InputManager::isSpriteClicked(sf::Sprite obj, sf::Mouse::Button but, sf::RenderWindow &window)
{
	if (sf::Mouse::isButtonPressed (but))
	{
		sf::IntRect tempRect(obj.getPosition().x, obj.getPosition().y, obj.getGlobalBounds().width, obj.getGlobalBounds().height);
		if (tempRect.contains(sf::Mouse::getPosition(window)))
		{
				return true;
		}
		return false;
	}

}

sf::Vector2i toni::InputManager::getMousePosition(sf::RenderWindow window)
{
	return sf::Mouse::getPosition(window);
}
