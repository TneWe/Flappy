#include "MainMenuState.h"
#include"Definitions.h"
#include<sstream>
namespace toni {
	toni::MainMenuState::MainMenuState(GameDataRef data) : _data(data)
	{
	}

	void toni::MainMenuState::init()
	{
		_data->AssetManager.loadTexture("MainMenu Background", mainMenuBack);
		_data->AssetManager.loadTexture("Playbutton Background", playButton);
		_data->AssetManager.loadTexture("GameTitle Background", gametitle);

		_background.setTexture(_data->AssetManager.getTexture("MainMenu Background"));
		_title.setTexture(_data->AssetManager.getTexture("title Background"));
		_play.setTexture(_data->AssetManager.getTexture("play Background"));

	}

	void toni::MainMenuState::handleInput()
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

	void toni::MainMenuState::update(float dt)
	{
		
	}

	void toni::MainMenuState::draw(float dt)
	{
		_data->window.clear();
		_data->window.draw(_background);
		_data->window.draw(_title);
		_data->window.draw(_play);

		_data->window.display();
	}
}
