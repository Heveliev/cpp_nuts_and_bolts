// get_students_by_percent.cpp -- function to find best/worst n% of students
#include <iostream>

#include "../Config.h"

#include "../compare_by_average_grade/compare_by_average_grade.h"

void get_students_by_percent(Student* in_students, unsigned& in_size, Student* out_students, unsigned& out_size, unsigned& percent,
    Compare compare)
{
    Student* sorted = new Student[in_size];

    compare_by_average_grade(in_students, in_size, sorted, compare);

    out_size = in_size * percent / 100;

    for (unsigned i = 0; i < out_size; i++)
    {
        out_students[i] = sorted[i];
    }
    delete[] sorted;
}