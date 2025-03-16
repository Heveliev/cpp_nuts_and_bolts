#pragma once

#include <SFML/Graphics.hpp>
class Vector2d;





class Vector
{
public:
	Vector(sf::RenderWindow* window, Vector2d* vector);
	~Vector() { delete m_window; delete m_vector; m_instances--; }

	void draw();

private:
	sf::RenderWindow* m_window = nullptr;

	Vector2d* m_vector = nullptr;
	sf::RectangleShape m_line;
	sf::ConvexShape m_triangle;

	static int m_instances;
	sf::Text m_text;
	sf::Font m_font;
};

