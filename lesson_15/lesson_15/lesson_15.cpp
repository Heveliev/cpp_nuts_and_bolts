// lesson_15.cpp --

#include <iostream>

#include "Config.h"

#include "./average_mark/average_mark.h"
#include "./best_student/best_student.h"
#include "./students_above_average/students_above_average.h"
#include "./get_students_by_percent/get_students_by_percent.h"

int main()
{
    std::cout << "lesson_15" << std::endl << std::endl;


    std::cout << "Start of test \"average_mark\":" << std::endl << std::endl;
    for (short i = 0; i < Config::STUDENTS_SIZE; i++)
    {
        double mark = average_mark(students[i], students[i].quantity_marks);

        std::cout << "Student:" << ' ' << students[i].name << ' ' << "Mark:" << ' ' << mark << std::endl;
    }
    std::cout << std::endl;

    std::cout << "End of test \"average_mark\"." << std::endl;
    std::cout << std::endl << std::endl;


    std::cout << "Start of test \"best_student\":" << std::endl << std::endl;

    Student& student = best_student(const_cast<Student*>(students), Config::STUDENTS_SIZE);

    double* mark = new double(average_mark(student, student.quantity_marks));

    std::cout << "The best student is:" << ' ' << student.name << ' ' << "Mark:" << ' ' << *mark << std::endl;

    std::cout << std::endl;

    delete mark;
    std::cout << "End of test \"best_student\"." << std::endl;
    std::cout << std::endl << std::endl;



    std::cout << "Start of test \"students_above_average\":" << std::endl << std::endl;
    int* arr_N = new int[4] { 95, 90, 85, 80 };
    int* quantity_students = new int(-1);

    for (short i = 0; i < 4; i++)
    {
        *quantity_students = students_above_average(const_cast<Student*>(students), Config::STUDENTS_SIZE, arr_N[i]);
        std::cout << "Number of students with a score above" << ' ' << arr_N[i] << ':' << ' ' << *quantity_students << std::endl;
    }
    std::cout << std::endl;

    delete[] arr_N;
    delete quantity_students;
    std::cout << "End of test \"students_above_average\"." << std::endl;
    std::cout << std::endl << std::endl;




    unsigned arr_percent[] = { 5, 10, 15, 20, 25, 30, 35, 40 };
    unsigned size = static_cast<unsigned>(Config::STUDENTS_SIZE);
    std::cout << "Start of test \"get_best_students && compare_by_average_grade::Descending\":" << std::endl << std::endl;

	for (short i = 0; i < 8; i++)
	{
        unsigned* out_size = new unsigned(0);

        Student* out_students = new Student[size];

        get_students_by_percent(const_cast<Student*>(students), size, out_students, *out_size, arr_percent[i]);

        std::cout << "Get:" << ' ' << arr_percent[i] << '%' << std::endl;
		for (unsigned j = 0; j < *out_size; j++)
		{
			double mark = average_mark(out_students[j], Config::QUANTITY_MARKS);

			std::cout << "Student:" << ' ' << out_students[j].name << ';' << ' ' << "Mark:" << ' ' << mark << ';' << std::endl;
		}

		delete[] out_students;
	}
	std::cout << std::endl;

    std::cout << "End of test \"get_best_students && compare_by_average_grade::Descending\"." << std::endl;
    std::cout << std::endl << std::endl;




    std::cout << "Start of test \"get_best_students && compare_by_average_grade::Ascending\":" << std::endl << std::endl;

    for (short i = 0; i < 8; i++)
    {
        unsigned* out_size = new unsigned(0);

        Student* out_students = new Student[size];

        get_students_by_percent(const_cast<Student*>(students), size, out_students, *out_size, arr_percent[i], Compare::Ascending);

        std::cout << "Get:" << ' ' << arr_percent[i] << '%' << std::endl;
        for (unsigned j = 0; j < *out_size; j++)
        {
            double mark = average_mark(out_students[j], Config::QUANTITY_MARKS);
 

            std::cout << "Student:" << ' ' << out_students[j].name << ';' << ' ' << "Mark:" << ' ' << mark << ';' << std::endl;
        }

        delete[] out_students;
    }
    std::cout << std::endl;

    std::cout << "End of test \"get_best_students && compare_by_average_grade::Ascending\"." << std::endl;
    std::cout << std::endl << std::endl;

}