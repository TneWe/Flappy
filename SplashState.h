#include"SFML/Graphics.hpp"
#include"State.h"
#include"Game.h"
#include"Definitions.h"
#include"MainMenuState.h"
namespace toni {
	class SplashState:public State
	{
	public:
		SplashState(GameDataRef data);
		void init() ;
		void handleInput();
		void update(float dt) ;
		void draw(float dt) ;
	private:
		GameDataRef _data;
		sf::Clock _clock;
		sf::Texture _backroungTexture;
		sf::Sprite _background;

	};

}

