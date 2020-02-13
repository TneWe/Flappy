#include "SplashState.h"
#include"Definitions.h"
#include<sstream>
namespace toni {
	toni::SplashState::SplashState(GameDataRef data) : _data(data)
	{
	}

	void toni::SplashState::init()
	{
		_data->AssetManager.loadTexture("SplashState Background", SPLASH_SCENE);
		_background.setTexture(this->_data->AssetManager.getTexture("SplashState Background"));
	}

	void toni::SplashState::handleInput()
	{
		sf::Event event;
		while (_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				_data->window.close();
			}
		}
	}

	void toni::SplashState::update(float dt)
	{
		if (_clock.getElapsedTime().asMicroseconds() > splash_screen)
		{
			_data->machine.addState(StateRef(new MainMenuState(_data)), true);
		}
	}

	void toni::SplashState::draw(float dt)
	{
		_data->window.clear();
		_data->window.draw(_background);
		_data->window.display();
	}
}