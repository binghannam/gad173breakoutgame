#pragma once
#include "OptionsMenu.h"
#include "Game.h"

class SceneManager {

private:
	OptionsMenu optionsMenu;
	Game game;
	int m_index = 0;

public :
	
	void Run(int index);
	void Start(); 

	void Update(float deltaTime);
	void Render(sf::RenderWindow& m_window);

};