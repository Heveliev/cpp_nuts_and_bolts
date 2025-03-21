#include <cstddef>
#include <cmath>
#include <iostream>

#include "Vector2d.h"

 std::size_t Vector2d::m_instances = 0;


Vector2d::Vector2d() : m_x(0), m_y(0)
{
	m_instances++;
}

Vector2d::Vector2d(float x, float y) : m_x(x), m_y(y) 
{
	m_instances++;
}

Vector2d::Vector2d(float x0, float y0, float x1, float y1) : m_x(x1 - x0), m_y(y1 - y0)
{
	m_instances++;
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

void Vector2d::operator/=(float scalar)
{
	if (scalar == 0) return;
	m_x /= scalar;
	m_y /= scalar;

}

float Vector2d::operator()() const
{
	return std::sqrt(m_x * m_x + m_y * m_y);
}

float Vector2d::dotProduct(const Vector2d& other) const
{
	return m_x * other.m_x + m_y * other.m_y;
}

Vector2d Vector2d::negate() const
{
	return Vector2d(-m_x, -m_y);
}

VectorRelativeState Vector2d::getRelativeState(const Vector2d& other) const
{
	float magnitudeThis = this->operator()();
	float magnitudeOther = other.operator()();

	if (magnitudeThis == 0 && magnitudeOther == 0)
	{
		return VectorRelativeState::Invalid;
	}

	float dotProduct = this->dotProduct(other);
	if (std::fabs(magnitudeThis - magnitudeOther) < EPSILON
		&& std::fabs(m_x * other.m_y - m_y * other.m_x) < EPSILON
		&& dotProduct > EPSILON)
	{
		return VectorRelativeState::Identical;
	}

	float cos = dotProduct / (magnitudeThis * magnitudeOther);

	if (std::fabs(cos - 1.0f) <= EPSILON)
	{
		return VectorRelativeState::coDirected;
	}
	if (std::fabs(cos + 1.0f) <= EPSILON)
	{
		return VectorRelativeState::OppositeDirected;
	}

	if (std::fabs(cos) < EPSILON)
	{
		return VectorRelativeState::RightAngle;
	}
	if (cos > 0)
	{
		return VectorRelativeState::AcuteAngle;
	}
	if (cos < 0)
	{
		return VectorRelativeState::ObtuseAngle;
	}

	return VectorRelativeState::Invalid;
}

void Vector2d::scale(float factorX, float factorY)
{
	m_x *= factorX;
	m_y *= factorY;

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
	return Vector2d(leftVector.m_x - rightVector.m_x, leftVector.m_y- rightVector.m_y);
}