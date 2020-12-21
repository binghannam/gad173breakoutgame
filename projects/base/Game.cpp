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
	frost = kage::TextureManager::getSprite("data/frost.png");
	smallrock = kage::TextureManager::getSprite("data/smallrock.png");
	bar = kage::TextureManager::getTexture("data/bar.png");

	sf::Sprite tiles; 
	sf::Sprite smallrock;

	smallrock.setPosition(sf::Vector2f(300, 600));
	
	return true;

	
}

void Game::update(float deltaT)
{
	sf::Vector2i mousePosition = sf::Mouse::getPosition(m_window);


	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))

	{

		sf::Sprite barSprite;
		barSprite.setTexture(*bar);
		barSprite.setPosition(sf::Vector2f(mousePosition.x * deltaT, 600));
	
		tiles[0] = barSprite;
	}


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
	delete tiles;
}

void drawSprite()
{
	
}

