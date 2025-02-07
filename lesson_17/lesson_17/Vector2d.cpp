#include <cstddef>
#include <cmath>
#include <iostream>

#include "Vector2d.h"

 std::size_t Vector2d::m_instances = 0;


Vector2d::Vector2d() 
{
	m_instances++;
}

Vector2d::Vector2d(float x, float y)
{
	m_instances++;
	m_x = x;
	m_y = y;
}

Vector2d::~Vector2d()
{
	m_instances--;
}


Vector2d& Vector2d::operator=(const Vector2d& other)
{
	if (this != &other)
	{
		m_x = other.m_x;
		m_y = other.m_y;
	}

	return *this;
}



Vector2d Vector2d::operator+(const Vector2d& secondVector)
{
	return Vector2d(m_x + secondVector.m_x, m_y + secondVector.m_y);
}


Vector2d Vector2d::operator-(const Vector2d& secondVector)
{
	return Vector2d(m_x - secondVector.m_x, m_y - secondVector.m_y);
}

float& Vector2d::operator[](std::size_t idx)
{
	static float invalid = -1.0f;

	switch (idx)
	{
	case 0:
		return m_x;
	case 1:
		return m_y;
	default:
		return invalid;
	}
}

void Vector2d::operator*=(float scalar)
{
	m_x *= scalar;
	m_y *= scalar;
}

float Vector2d::operator()()
{
	return std::sqrt(m_x * m_x + m_y * m_y);
}



std::ostream& operator<<(std::ostream& os, const Vector2d& vec)
{
	os << '{' << vec.m_x << ';' << ' ' << vec.m_y << '}';
	return os;
}

std::istream& operator>>(std::istream& is, Vector2d& vec)
{
	is >> vec.m_x >> vec.m_y;
	return is;
}

Vector2d operator+(const Vector2d& leftVector, const Vector2d& rightVector)
{
	return Vector2d(leftVector.m_x + rightVector.m_x, leftVector.m_y + rightVector.m_y);
}

Vector2d operator-(const Vector2d& leftVector, const Vector2d& rightVector)
{
	return Vector2d(leftVector.m_x - rightVector.m_x, leftVector.m_y - rightVector.m_y);
}