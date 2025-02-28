#pragma once

#include <SFML/Graphics.hpp>

class Ammo
{
public:
	Ammo(sf::RenderWindow* window, sf::Sprite* unit);

	void update();
	void draw();


private:

	sf::Texture m_texture;
	sf::Sprite m_sprite;

	sf::RenderWindow* m_window = nullptr;
	sf::Sprite* m_unit = nullptr;
};