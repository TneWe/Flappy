#include "Game.h"
namespace toni {
	toni::Game::Game(int width, int height, std::string title)
	{
		_data->window.create(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);
		_data->machine.addState((StateRef)new SplashState(_data));
		//data->machine.AddState((StateRef)new IntroState(data));

		this->run();
	}

	void toni::Game::run()
	{
		float newTime, frameTime, interpolation;
		float currentTime = _clock.getElapsedTime().asMilliseconds();
		float accumulator = 0.0f;
		while (this->_data->window.isOpen())
		{
			this->_data->machine.proccesState();

			newTime = this->_clock.getElapsedTime().asMilliseconds();
			frameTime = newTime - currentTime;
			if (frameTime > 0.25f)
			{
				frameTime = 0.25f;
			}
			currentTime = newTime;
			accumulator += frameTime;
			while (accumulator >= dt)
			{
				this->_data->machine.getActiveState()->handleInput();
				this->_data->machine.getActiveState()->update(dt);
				accumulator -= dt;
			}
			interpolation = accumulator / dt;
			this->_data->machine.getActiveState()->draw(interpolation);
		}
	}
}