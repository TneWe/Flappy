#pragma once
#include <map>
#include <string>

#include <iostream>
#include <SFML/Graphics.hpp>
namespace toni {
	class Assets
	{

			std::map<std::string, sf::Texture> textures;
			std::map<std::string, sf::Font> fonts;
		public:
			Assets()=default;
			~Assets()=default;

			void loadTexture(std::string name, std::string filename);
			sf::Texture& getTexture(const std::string name);

			void loadFont(std::string name, std::string filename);
			sf::Font& getFont(std::string name);


				
		};
};
	

