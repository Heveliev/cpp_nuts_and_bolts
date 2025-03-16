#include <cstddef>
#include <cmath>
#include <iostream>

#include "Vector2d.h"

 std::size_t Vector2d::m_instances = 0;


Vector2d::Vector2d() : m_x0(0), m_y0(0), m_x1(0), m_y1(0)
{
	m_instances++;
}

Vector2d::Vector2d(float x1, float y1) : Vector2d(0, 0, x1, y1) {}

Vector2d::Vector2d(float x0, float y0, float x1, float y1) : m_x0(x0), m_y0(y0), m_x1(x1), m_y1(y1)
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
		m_x0 = other.m_x0;
		m_y0 = other.m_y0;
		m_x1 = other.m_x1;
		m_y1 = other.m_y1;
	}

	return *this;
}

Vector2d Vector2d::operator+(const Vector2d& secondVector)
{
	return Vector2d(m_x0 + secondVector.m_x0, m_y0 + secondVector.m_y0, m_x1 + secondVector.m_x1, m_y1 + secondVector.m_y1);
}


Vector2d Vector2d::operator-(const Vector2d& secondVector)
{
	return Vector2d(m_x0 - secondVector.m_x0, m_y0 - secondVector.m_y0, m_x1 - secondVector.m_x1, m_y1 - secondVector.m_y1);
}

float& Vector2d::operator[](std::size_t idx)
{
	static float invalid = -1.0f;

	switch (idx)
	{
	case 0:
		return m_x0;
	case 1:
		return m_y0;
	case 2:
		return m_x1;
	case 3:
		return m_y1;
	default:
		return invalid;
	}
}

void Vector2d::operator*=(float scalar)
{
	m_x0 *= scalar;
	m_y0 *= scalar;
	m_x1 *= scalar;
	m_y1 *= scalar;
}

void Vector2d::operator/=(float scalar)
{
	if (scalar == 0) return;
	m_x0 /= scalar;
	m_y0 /= scalar;
	m_x1 /= scalar;
	m_y1 /= scalar;
}

float Vector2d::operator()() const
{
	return std::sqrt(getX() * getX() + getY() * getY());
}

float Vector2d::dotProduct(const Vector2d& other) const
{
	return getX() * other.getX() + getY() * other.getY();
}

Vector2d Vector2d::negate() const
{
	return Vector2d(m_x1, m_y1, m_x0, m_y0);
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
		&& std::fabs(getX() * other.getY() - getY() * other.getX()) < EPSILON
		&& dotProduct > EPSILON)
	{
		return VectorRelativeState::Identical;
	}

	float cos = dotProduct / (magnitudeThis * magnitudeOther);
	cos = std::max(-1.0f, std::min(1.0f, cos));


	if (std::fabs(cos - 1.0f) < EPSILON)
	{
		return VectorRelativeState::coDirected;
	}
	if (std::fabs(cos + 1.0f) < EPSILON)
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
	m_x0 *= factorX;
	m_y0 *= factorY;
	m_x1 *= factorX;
	m_y1 *= factorY;
}



std::ostream& operator<<(std::ostream& os, const Vector2d& vec)
{
	os << '{' << vec.m_x0 << ';' << ' ' << vec.m_y0 << '}' << ',' << '{' << vec.m_x1 << ';' << ' ' << vec.m_y1 << '}';

	return os;
}

std::istream& operator>>(std::istream& is, Vector2d& vec)
{
	is >> vec.m_x0 >> vec.m_y0 >> vec.m_x1 >> vec.m_y1;
	return is;
}

Vector2d operator+(const Vector2d& leftVector, const Vector2d& rightVector)
{
	return Vector2d(leftVector.m_x0 + rightVector.m_x0, leftVector.m_y0 + rightVector.m_y0,
		leftVector.m_x1 + rightVector.m_x1, leftVector.m_y1 + rightVector.m_y1);
}

Vector2d operator-(const Vector2d& leftVector, const Vector2d& rightVector)
{
	return Vector2d(leftVector.m_x0 - rightVector.m_x0, leftVector.m_y0 - rightVector.m_y0,
		leftVector.m_x1 - rightVector.m_x1, leftVector.m_y1 - rightVector.m_y1);
}