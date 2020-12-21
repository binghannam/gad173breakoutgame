#pragma once

#include "app.h"
#include "kage2dutil/physics.h"
#include "rabbit.h"

class OptionsMenu : public App
{
public:
	OptionsMenu();
	virtual ~OptionsMenu();
	virtual bool start();
	virtual void update(float deltaT);
	virtual void render();
	virtual void cleanup();
	static OptionsMenu &inst();

	sf::Sprite *m_backgroundSprite;
};
