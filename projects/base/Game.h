#pragma once

#include "app.h"
#include <vector>

#define LINE_THICKNESS 3

#define GRID_OFFSET_X 0

#define GRID_OFFSET_Y 0


#define CELL_WIDTH 192

#define CELL_HEIGHT 64


#define TOTAL_CELLS_X 5 + 1

#define TOTAL_CELLS_Y 5 + 1

#define TILES_ARRAY_SIZE (TOTAL_CELLS_X - 1)  * (TOTAL_CELLS_Y - 1)

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
	sf::Sprite* sprites[3];
	sf::Sprite* rock;
	sf::Texture* bar;
	sf::Sprite* smallrock;
	sf::Sprite tiles[TILES_ARRAY_SIZE];
	sf::Texture smallrocks;
	sf::RectangleShape hLine[TOTAL_CELLS_Y];

	sf::RectangleShape vLine[TOTAL_CELLS_X];


};
