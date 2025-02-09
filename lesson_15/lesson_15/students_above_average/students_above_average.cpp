// students_above_average.cpp -- function that counts the number of students whose average 
// grade is greater than the input parameter N

#include "../Config.h"

#include "../average_mark/average_mark.h"

int students_above_average(Student students[], const int& size, const double& N)
{
	int quantity_studets = 0;

	for (int i = 0; i < size; i++)
	{
		double average = average_mark(students[i], students[i].quantity_marks);

		if (N <= average) quantity_studets++;

	}

	return quantity_studets;
}