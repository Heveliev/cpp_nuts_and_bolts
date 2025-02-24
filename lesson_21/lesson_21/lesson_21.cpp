// lesson_21.cpp -- 
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Unit.h"


int main()
{
	sf::RenderWindow window(sf::VideoMode{ {1280, 720} }, "SFML APP");

	Unit unit(&window);

	while (window.isOpen())
	{
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

		//sf::Vector2f playerPos = player.getPosition();
		//playerPos.x = std::clamp(playerPos.x, 0.f, windowWidth - player.getSize().x);
		//playerPos.y = std::clamp(playerPos.y, 0.f, windowHeight - player.getSize().y);
		//player.setPosition(playerPos);



		window.clear(sf::Color::Black);

		unit.update();

		unit.draw();

		window.display();
	}

}