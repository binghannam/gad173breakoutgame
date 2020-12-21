#pragma once

#include "app.h"

class Game : public App
{
public:
	Game();
	 ~Game();
	 bool start();
	 void update(float deltaT);
	void render(sf::RenderWindow& m_window);
	 void cleanup();

	sf::Sprite* frost;
	sf::Sprite* bar;
	sf::Sprite* tiles;
	sf::Sprite* rock;
};
