#pragma once

#include <cstddef>
#include <iostream>
#include <limits>

const float EPSILON = std::numeric_limits<float>::epsilon();


enum class VectorRelativeState
{
	Identical,
	coDirected,
	OppositeDirected,
	AcuteAngle,
	ObtuseAngle,
	RightAngle,
	Invalid
};


class Vector2d
{
public:
	Vector2d();


	Vector2d(float x1, float y1);

	Vector2d(float x0, float y0, float x1, float y1);

	~Vector2d();


public:
	Vector2d& operator=(const Vector2d& other);

	Vector2d operator+(const Vector2d& secondVector);

	Vector2d operator-(const Vector2d& secondVector);

	float& operator[](std::size_t idx);

	void operator*=(float scalar);
	void operator/=(float scalar);

	float operator()() const;


	float dotProduct(const Vector2d& other) const;

	Vector2d negate() const;

	VectorRelativeState getRelativeState(const Vector2d& other) const;

	void scale(float factorX, float factorY);

public:

	static const std::size_t getInstances() { return m_instances; }

	friend std::ostream& operator<<(std::ostream& os, const Vector2d& vec);


	friend std::istream& operator>>(std::istream& is, Vector2d& vec);


public:

	friend Vector2d operator+(const Vector2d& leftVector, const Vector2d& rightVector);

	friend Vector2d operator-(const Vector2d& leftVector, const Vector2d& rightVector);

	float getX() const { return (m_x1 - m_x0); }
	float getY() const { return (m_y1 - m_y0); }
	Vector2d normalize() const;

private:
	float m_x0 = 0.0f;
	float m_y0 = 0.0f;
	float m_x1 = 0.0f;
	float m_y1 = 0.0f;
	static std::size_t m_instances;
};

