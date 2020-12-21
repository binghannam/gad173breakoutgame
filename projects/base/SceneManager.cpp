#include "SceneManager.h"


void SceneManager::Run(int index)
{
	m_index = index;

}

void SceneManager::Start()
{
	
		optionsMenu.start();


		game.start();

	
	}


void SceneManager::Update(float deltaTime)
{
	switch (m_index)
	{
	case 0:
		optionsMenu.update(deltaTime);

		break;
	case 1:
		game.update(deltaTime);

		break;


	default:
		break;

	}
}

void SceneManager::Render(sf::RenderWindow& m_window)
{
	switch (m_index)
	{
	case 0:
		optionsMenu.render(m_window);

		break;
	case 1:
		game.render(m_window);

		break;


	default:
		break;

	}

}
