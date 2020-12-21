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
	

	if (!font.loadFromFile("./data/ProggyClean.ttf"))
	{
		std::cout << "font does not exist" << std::endl;
	}

	for (size_t i = 0; i < TEXTS_ARRAY_SIZE; i++)
		texts[i].setFont(font);

	texts[0].setPosition(sf::Vector2f(480, 120));
	texts[1].setPosition(sf::Vector2f(10, 100));
	texts[2].setPosition(sf::Vector2f(480, 140));
	texts[1].setString("The following options are available:");
	texts[2].setString("Whatever");
	texts[0].setString("Exit");

	return true;
}

void OptionsMenu::update(float deltaT)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) && m_window.hasFocus())
	{
		m_running = false;
	}

}

void OptionsMenu::render(sf::RenderWindow& m_window)
{

	m_window.draw(*cat);

	for (size_t i = 0; i < TEXTS_ARRAY_SIZE; i++)
		m_window.draw(texts[i]);
}

void OptionsMenu::cleanup()
{
	delete cat;
}

