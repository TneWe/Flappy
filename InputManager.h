#pragma once
#include"SFML/Graphics.hpp"
namespace toni
{
class InputManager
{
public:
	InputManager()=default;
	~InputManager()=default;
	bool isSpriteClicked(sf::Sprite obj, sf::Mouse::Button but, sf::RenderWindow & window);
	sf::Vector2i getMousePosition(sf::RenderWindow window);



};

}
