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
	frost = kage::TextureManager::getSprite("data/frost.png");
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
}

void Game::render(sf::RenderWindow& m_window)
{
	m_window.draw(*frost);
}

void Game::cleanup()
{
	delete frost;
}

