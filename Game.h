#pragma once
#include<memory>
#include<string>
#include"SFML/Graphics.hpp"
#include"StateMachine.h"
#include"AssetManager.h"
#include"InputManager.h"
#include"SplashState.h"
namespace toni {
	
	struct GameData
	{
		StateMachine machine;
		sf::RenderWindow window;
		AssetManager AssetManager;
		InputManager input;
	};
	
	typedef std::shared_ptr<GameData> GameDataRef;

	class Game
	{
	public:
		Game(int width, int height, std::string title);
		~Game()=default;
		GameDataRef _data= std::make_shared<GameData>();
	private:
		const float dt = 1.f / 60.0f;
		sf::Clock _clock;
		void run();
	};
}

