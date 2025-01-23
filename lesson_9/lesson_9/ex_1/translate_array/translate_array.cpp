// translate_array.cpp -- function to validate and write a number to an array

#include <iostream>

#include "../ConfigEx_1.h"

#include "validation_number/validation_number.h"

void translate_array(int numbers[], int size)
{
	for (int i = 0; i < size; i++) 
	{
		numbers[i] = validation_number(numbers[i]);
	}
}