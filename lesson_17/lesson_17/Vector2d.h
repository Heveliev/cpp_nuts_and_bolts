#pragma once

#include <cstddef>
#include <iostream>


class Vector2d
{
public:
	Vector2d();

	Vector2d(float x, float y);

	~Vector2d();


public:
	Vector2d& operator=(const Vector2d& other);

	Vector2d operator+(const Vector2d& secondVector);

	Vector2d operator-(const Vector2d& secondVector);

	float& operator[](std::size_t idx);

	void operator*=(float scalar);

	float operator()();


public:

	static const std::size_t getInstances() { return m_instances; }

	friend std::ostream& operator<<(std::ostream& os, const Vector2d& vec);


	friend std::istream& operator>>(std::istream& is, Vector2d& vec);


public:

	friend Vector2d operator+(const Vector2d& leftVector, const Vector2d& rightVector);

	friend Vector2d operator-(const Vector2d& leftVector, const Vector2d& rightVector);


private:
	float m_x = 0.0f;
	float m_y = 0.0f;
	static std::size_t m_instances;
};

