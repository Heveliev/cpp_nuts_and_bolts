#include "VectorDraw.h"

#include "Vector2d.h"

int VectorDraw::m_instances = 0;



VectorDraw::VectorDraw(sf::RenderWindow* window, Vector2d* vector)
    : m_window(window), m_vector(vector), m_font(sf::Font("roboto.ttf")), m_text(m_font)
{
    const sf::Vector2u windowSize = m_window->getSize();
    const sf::FloatRect lineSize = m_line.getGlobalBounds();
    sf::Vector2f direction(m_vector->getX(), m_vector->getY());
    float angle = std::atan2(direction.y, direction.x);

    //triangle
    m_triangle.setFillColor(sf::Color::Green);
    m_triangle.setPointCount(3);
    m_triangle.setPoint(0, sf::Vector2f(0, -1));
    m_triangle.setPoint(1, sf::Vector2f(-5, 10));
    m_triangle.setPoint(2, sf::Vector2f(5, 10));
    m_triangle.setPosition({ windowSize.x / 2.0f + direction.x, windowSize.y / 2.0f + direction.y });
    m_triangle.setRotation(sf::radians(angle));

    // number
    m_text.setString(std::to_string(m_instances));
    m_text.setCharacterSize(14);
    m_text.setFillColor(sf::Color::Blue);
    m_text.setPosition({ windowSize.x / 2.0f + direction.x, windowSize.y / 2.0f + direction.y });

    //line
    m_line.setFillColor(sf::Color::Red);
    m_line.setSize(sf::Vector2f{ 1, m_vector->operator()() });
    m_line.setRotation(sf::radians(angle));
    sf::Vector2f newPosition = sf::Vector2f{ windowSize.x / 2.0f + direction.x , windowSize.y / 2.0f + direction.y};
    m_line.setPosition(newPosition);

    m_instances++;
}

void VectorDraw::draw()
{
    m_window->draw(m_line); 
    m_window->draw(m_triangle);
    m_window->draw(m_text);
}