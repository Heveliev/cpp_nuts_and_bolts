// average_mark.cpp -- function to calculate average grade of a student

#include <iomanip>

#include "../Config.h"

double average_mark(const Student& student, const int& quantity_marks)
{
	double result = 0.0;

	for (short i = 0; i < quantity_marks; i++)
	{
		result += student.marks[i];
	}

	result /= quantity_marks;

	return result;
}