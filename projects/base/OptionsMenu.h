#pragma once

#include "app.h"

class OptionsMenu : public App
{
public:
	OptionsMenu();
	virtual ~OptionsMenu();
	virtual bool start();
	virtual void update(float deltaT);
	virtual void render(sf::RenderWindow& m_window);
	virtual void cleanup();

	sf::Sprite* cat;


};
