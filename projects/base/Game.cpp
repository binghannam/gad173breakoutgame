#include "example.h"
#include "Game.h"

Game::Game() : App()
{

}

Game::~Game()
{
}

bool Game::start()
{
	for (size_t i = 0; i < TOTAL_CELLS_X; i++)
	{
		vLine[i] = sf::RectangleShape(sf::Vector2f(LINE_THICKNESS, CELL_HEIGHT * TOTAL_CELLS_Y));
		vLine[i].setFillColor(sf::Color::Green);
		vLine[i].setPosition(sf::Vector2f(GRID_OFFSET_X + CELL_WIDTH * i, GRID_OFFSET_Y));

	}
	for (size_t i = 0; i < TOTAL_CELLS_X; i++)
	{
		hLine[i] = sf::RectangleShape(sf::Vector2f( CELL_WIDTH * TOTAL_CELLS_X, LINE_THICKNESS));
		hLine[i].setFillColor(sf::Color::Green);
		hLine[i].setPosition(sf::Vector2f(GRID_OFFSET_X, GRID_OFFSET_Y + CELL_HEIGHT * i ));

	}
	bar = kage::TextureManager::getSprite("data/bar.png");
	frost = kage::TextureManager::getSprite("data/frost.png");
	smallrock = kage::TextureManager::getSprite("data/smallrock.png");
	sf::Sprite tiles; 

	sf::Sprite smallrock;
	sf::Texture smallrocks;

	
	return true;

	
}

void Game::update(float deltaT)
{


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) && m_window.hasFocus())
	{
		m_running = false;
	}

	ImGui::Begin("Kage2D");
	if (ImGui::Button("Exit"))
	{
		m_running = false;
	}
	ImGui::End();

	sf::Vector2i mousePosition = sf::Mouse::getPosition(m_window);


	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) 
	
	{
		sf::Sprite rockSprite;
		rockSprite.setPosition(sf::Vector2f(mousePosition.x, 500));
	
	}
}

void Game::render(sf::RenderWindow& m_window)
{
	
	m_window.draw(*frost);
	m_window.draw(*smallrock);

	for (size_t i = 0; i < TOTAL_CELLS_X; i++)
	{
		m_window.draw(vLine[i]);

	}
	for (size_t i = 0; i < TOTAL_CELLS_Y; i++)
	{
		m_window.draw(hLine[i]);

	}
	for (size_t i = 0; i < TILES_ARRAY_SIZE; i++)
	{
		m_window.draw(tiles[i]);

	}

}

void Game::cleanup()
{
	delete frost;
	delete bar;
	delete tiles;
}

void drawSprite()
{
	
}

