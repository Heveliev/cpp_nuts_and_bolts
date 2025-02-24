#include "Unit.h"
#include "Ammo.h"
#include <algorithm>

Unit::Unit(sf::RenderWindow* window)
	: m_window(window), m_texture("resources/unit.png"), m_sprite(m_texture)
{
	m_sprite.setScale({ 5.0f, 5.0f });

	sf::FloatRect spriteLocalBounds = m_sprite.getLocalBounds();

	m_sprite.setOrigin({ spriteLocalBounds.size.x / 2.0f, spriteLocalBounds.size.y / 2.0f });

	const sf::Vector2u windowSize = m_window->getSize();
	const sf::FloatRect spriteSize = m_sprite.getGlobalBounds();

	sf::Vector2f newPosition = sf::Vector2f{ windowSize.x / 2.0f, windowSize.y - spriteSize.size.y / 2.0f };

	m_sprite.setPosition(newPosition);
}

void Unit::update()
{
	constexpr float SPEED = 0.05f;
	
	float deltaX = 0.0f;
	float deltaY = 0.0f;


	sf::Vector2f spritePos = m_sprite.getPosition();
	const sf::Vector2u windowSize = m_window->getSize();
	const sf::FloatRect spriteSize = m_sprite.getGlobalBounds();
	spritePos.x = std::clamp(spritePos.x, spriteSize.size.x / 2.0f , windowSize.x - spriteSize.size.x / 2.0f);
	spritePos.y = std::clamp(spritePos.y, spriteSize.size.y / 2.0f, windowSize.y - spriteSize.size.y / 2.0f);
	m_sprite.setPosition(spritePos);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
	{
		deltaY += -SPEED;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
	{
		deltaY += SPEED;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
	{
		deltaX += -SPEED;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
	{
		deltaX += SPEED;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
	{
		ammo = new Ammo(m_window, &m_sprite);
	}


	sf::Vector2f newPosition = m_sprite.getPosition() + sf::Vector2f{ deltaX, deltaY };
	m_sprite.setPosition(newPosition);
	//m_sprite.setRotation(sf::degrees(90));
}

void Unit::draw()
{
	m_window->draw(m_sprite);

	if (ammo != nullptr)
	{
		ammo->draw();
	}

}
