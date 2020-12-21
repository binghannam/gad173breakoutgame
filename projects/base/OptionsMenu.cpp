#include "example.h"
#include "OptionsMenu.h"


OptionsMenu::OptionsMenu() : App()
{

}

OptionsMenu::~OptionsMenu()
{
}

bool OptionsMenu::start()
{
	cat = kage::TextureManager::getSprite("./data/cat.png");
	return true;
}

void OptionsMenu::update(float deltaT)
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

void OptionsMenu::render(sf::RenderWindow& m_window)
{

	m_window.draw(*cat);
}

void OptionsMenu::cleanup()
{
	delete cat;
}

