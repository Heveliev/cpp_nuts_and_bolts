// best_student.cpp -- function to find the best student

#include "../Config.h"

#include "../average_mark/average_mark.h"

Student& best_student(Student students[], const int& size)
{
	int index = -1;
	double highest_average = -1;

	for (int i = 0; i < size; i++)
	{
		double average = average_mark(students[i], students[i].quantity_marks);

		if (average > highest_average)
		{
			index = i;
			highest_average = average;
		}
	}

	return students[index];
}