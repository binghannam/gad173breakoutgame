#include "example.h"


Example::Example(): App()
{
	
}

Example::~Example()
{
}


bool Example::start()
{  
	sceneManager.Start();

	return true;
}

void Example::update(float deltaT)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) && m_window.hasFocus())
	{
		m_running = false;
	}

	ImGui::Begin("Kage2D");
	if(ImGui::Button("Options Menu"))
	{ 
		sceneManager.Run(0);
	}
	if (ImGui::Button("Game"))
	{
		sceneManager.Run(1);
	}

	ImGui::End();


	sceneManager.Update(deltaT);
}

void Example::render()
{
	sceneManager.Render();
}

void Example::cleanup()
{
}

