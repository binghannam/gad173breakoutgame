#pragma once

#include "app.h"
#define TEXTS_ARRAY_SIZE 3
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

	sf::Font font;
	sf::Text texts[3];

};
