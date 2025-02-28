#pragma once
#include <iostream>
#include <cstdlib>


template<class T>
class DynamicArray
{
public:
    //MAIN HW PART
        //default c-tor
    DynamicArray() = default;

    //c-tor with size
    DynamicArray(std::size_t size);

    //c-tor with values and size
    DynamicArray(const T* initValues, std::size_t size);

    //copy c-tor
    DynamicArray(const DynamicArray<T>& other);



    //free allocated memory
    ~DynamicArray();

    T& operator[](std::size_t index);

    //Clear internal memory, set size to 0
    void clear();

    //Comparison operators
    bool operator==(const DynamicArray<T>& other) const;
    bool operator!=(const DynamicArray<T>& other) const;

    std::size_t getSize() const;

    //ADDITIONAL HW

    //assignment operator
    DynamicArray<T>& operator=(const DynamicArray<T>& other);

    //delete previous memory, create new inner array with updated size saving old content if possible
    void setSize(std::size_t newSize);

    // Allocate new memory (old memory + 1 new element)
    // Copy old content to new inner array
    // insert new element at the last index
    // update size
    void push_back(const T& element);
	void pop_back();
	T& back() const;

	// new functions

	void reserve(std::size_t reservedSpace);
	std::size_t getCapacity() const;
	void shrinkToFit();

private:
    T* m_data = nullptr;
    std::size_t m_size = 0;
	std::size_t m_capacity = 0;
};



template<class T>
DynamicArray<T>::DynamicArray(std::size_t size) : m_size(size), m_capacity(size)
{
	m_data = new T[m_size];
}

template<class T>
DynamicArray<T>::DynamicArray(const DynamicArray<T>& other) : m_size(other.m_size), m_capacity(other.m_capacity)
{
	m_data = new T[m_capacity];

	std::copy(other.m_data, other.m_data + m_size, m_data);
}

template<class T>
DynamicArray<T>::DynamicArray(const T* initValues, std::size_t size) : m_size(size), m_capacity(m_size)
{
	m_data = new T[m_size];

	for (std::size_t i = 0; i < m_size; i++)
	{
		m_data[i] = initValues[i];
	}
}

template<class T>
DynamicArray<T>::~DynamicArray()
{
	delete[] m_data;
}

template<class T>
T& DynamicArray<T>::operator[](std::size_t index)
{
	if (index >= m_size || index < 0)
	{
		throw std::out_of_range("Index out of range");
	}
	return m_data[index];
}

template<class T>
void DynamicArray<T>::clear()
{
	delete[] m_data;
	m_data = nullptr;
	m_size = 0;
	m_capacity = 0;
}

template<class T>
bool DynamicArray<T>::operator==(const DynamicArray<T>& other) const
{
	if (m_size != other.m_size) return false;

	for (std::size_t i = 0; i < m_size; i++)
	{
		if (m_data[i] != other.m_data[i]) return false;

	}
	return true;
}

template<class T>
bool DynamicArray<T>::operator!=(const DynamicArray<T>& other) const
{
	return !(*this == other);
}

template<class T>
std::size_t DynamicArray<T>::getSize() const
{
	return m_size;
}

template<class T>
DynamicArray<T>& DynamicArray<T>::operator=(const DynamicArray<T>& other)
{
	if (this != &other)
	{
		delete[] m_data;
		m_size = other.m_size;
		m_capacity = other.m_capacity;
		m_data = new T[m_capacity];

		std::copy(other.m_data, other.m_data + m_size, m_data);
	}

	return *this;
}

template<class T>
void DynamicArray<T>::setSize(std::size_t newSize)
{
	if (newSize <= 0)
	{
		throw std::out_of_range("Size is less or equal 0");
	}
	T* newData = new T[newSize];

	std::copy(m_data, m_data + std::min(m_size, newSize), newData);
	delete[] m_data;

	m_data = newData;
	m_size = newSize;
	m_capacity = newSize;
}

template<class T>
void DynamicArray<T>::push_back(const T& element)
{
	if (m_size == m_capacity)
	{
		size_t capacity = (m_capacity == 0) ? 1 : (m_capacity * 2);
		reserve(capacity);
	}
	m_data[m_size] = element;
	m_size++;
}

template<class T>
void DynamicArray<T>::pop_back()
{
	if (m_size == 0)
	{
		throw std::out_of_range("Empty array");
	}
	m_size--;

	//or this but we need to create new memory to transfer values
	//T* newData = new T[m_size];
	//std::copy(m_data, m_data + m_size, newData);
	//delete[] m_data;
	//m_data = newData;

	//or
	//shrinkToFit()
}

template<class T>
T& DynamicArray<T>::back() const
{
	if (m_size == 0)
	{
		throw std::out_of_range("Empty array");
	}
	return m_data[m_size - 1];
}

template<class T>
void DynamicArray<T>::reserve(std::size_t reservedSpace)
{
	if (reservedSpace <= 0)
	{
		throw std::out_of_range("Size is less or equal 0");
	}
	if (reservedSpace < m_capacity)
	{
		throw std::out_of_range("Less than the current value");
	}

	T* newData = new T[reservedSpace];
	std::copy(m_data, m_data + m_size, newData);
	delete[] m_data;
	m_data = newData;
	m_capacity = reservedSpace;
}

template<class T>
std::size_t DynamicArray<T>::getCapacity() const
{
	return m_capacity;
}

template<class T>
void DynamicArray<T>::shrinkToFit()
{
	if (m_size < m_capacity)
	{
		T* newData = new T[m_size];
		std::copy(m_data, m_data + m_size, newData);
		delete[] m_data;
		m_data = newData;
		m_capacity = m_size;
	}
}