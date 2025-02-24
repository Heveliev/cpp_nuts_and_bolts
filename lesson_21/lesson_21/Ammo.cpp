#include "Ammo.h"

Ammo::Ammo(sf::RenderWindow* window, sf::Sprite* unit)
	: m_window(window), m_unit(unit), m_texture("resources/ammo.png"), m_sprite(m_texture)
{
	m_sprite.setScale({ 5.0f, 5.0f });

	sf::FloatRect spriteLocalBounds = m_sprite.getLocalBounds();


	//m_sprite.setOrigin({ spriteLocalBounds.size.x / 2.0f, spriteLocalBounds.size.y / 2.0f});

	//const sf::Vector2u windowSize = m_window->getSize();
	const sf::Vector2f unitPos = m_unit->getPosition();
	const sf::FloatRect unitSize = m_unit->getGlobalBounds();

	const sf::FloatRect spriteSize = m_sprite.getGlobalBounds();

	sf::Vector2f newPosition = sf::Vector2f{ unitPos.x - spriteSize.size.x / 2.0f,
		unitPos.y - unitSize.size.y / 2.0f - spriteSize.size.y};

	m_sprite.setPosition(newPosition);
}

void Ammo::update()
{
	constexpr float SPEED = 0.1f;

	float deltaX = 0.f;
	float deltaY = -0.2f;

	sf::Vector2f newPosition = m_sprite.getPosition() + sf::Vector2f{ deltaX, deltaY };
	m_sprite.setPosition(newPosition);

}

void Ammo::draw()
{
	m_window->draw(m_sprite);
	Ammo::update();
}
