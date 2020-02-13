#include"SFML/Graphics.hpp"
#include"State.h"
#include"Game.h"
#include"Definitions.h"
namespace toni {
	class MainMenuState:public State
	{
	public:
		MainMenuState(GameDataRef data);
		void init();
		void handleInput();
		void update(float dt);
		void draw(float dt);
	private:
		GameDataRef _data;
		sf::Clock _clock;
		sf::Texture _backroungTexture;
		sf::Sprite _background;
		sf::Sprite _title;
		sf::Sprite _play;
	};

}