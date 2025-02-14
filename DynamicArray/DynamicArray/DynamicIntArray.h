#pragma once

#include <cstdlib>

class DynamicIntArray
{
public:
    //MAIN HW PART
        //default c-tor
    DynamicIntArray() = default;

    //c-tor with size
    DynamicIntArray(std::size_t size);

    //c-tor with values and size
    DynamicIntArray(const int* initValues, std::size_t size);

    //copy c-tor
    DynamicIntArray(const DynamicIntArray& other);



    //free allocated memory
    ~DynamicIntArray();

    int& operator[](std::size_t index);

    //Clear internal memory, set size to 0
    void clear();

    //Comparison operators
    bool operator==(const DynamicIntArray& other);
    bool operator!=(const DynamicIntArray& other);

    std::size_t getSize() const;

    //ADDITIONAL HW

    //assignment operator
    DynamicIntArray& operator=(const DynamicIntArray& other);

    //delete previous memory, create new inner array with updated size saving old content if possible
    void setSize(std::size_t newSize);

    // Allocate new memory (old memory + 1 new element)
    // Copy old content to new inner array
    // insert new element at the last index
    // update size
    void push_back(int element);

private:
    int* m_data = nullptr;
    std::size_t m_size = 0;
};