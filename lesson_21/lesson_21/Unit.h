#pragma once
#include <SFML/Graphics.hpp>

class Ammo;

class Unit
{
public:
	Unit(sf::RenderWindow* window);

	void update(float deltaTime);
	void draw();


private:

	sf::Texture m_texture;
	sf::Sprite m_sprite;

	sf::RenderWindow* m_window = nullptr;
	Ammo* ammo = nullptr;
};
