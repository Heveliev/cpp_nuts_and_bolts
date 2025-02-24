// lesson_21.cpp -- 
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Unit.h"


int main()
{
	sf::RenderWindow window(sf::VideoMode{ {1280, 720} }, "SFML APP");

	sf::Clock frameRateClock;

	Unit unit(&window);

	while (window.isOpen())
	{
		float deltaTimeSec = frameRateClock.restart().asSeconds();

		while (const std::optional event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
			{
				window.close();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
			{
				window.close();
			}

			if (const auto* resized = event->getIf<sf::Event::Resized>())
			{
				sf::FloatRect visibleArea({ 0.f, 0.f }, sf::Vector2f(resized->size));
				window.setView(sf::View(visibleArea));
			}

		}

		window.clear(sf::Color::Black);

		unit.update(deltaTimeSec);

		unit.draw();

		window.display();
	}

}