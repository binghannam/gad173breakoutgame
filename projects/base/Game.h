#pragma once

#include "app.h"

class Game : public App
{
public:
	Game();
	virtual ~Game();
	virtual bool start();
	virtual void update(float deltaT);
	virtual void render(sf::RenderWindow& m_window);
	virtual void cleanup();

	sf::Sprite* frost;


};
