// lesson_9.cpp -- general function to run all existing tasks

#include <iostream>

#include "ex.h"

int main()
{
    std::cout << "Lesson 9\n" << std::endl;

    std::cout << "Exercise 1\n" << std::endl;
    ex_1();
    std::cout << std::endl << std::endl;

    std::cout << "Exercise 2\n" << std::endl;
    ex_2();
    std::cout << std::endl << std::endl;

    std::cout << "Exercise 3\n" << std::endl;
    ex_3();
    std::cout << std::endl << std::endl;

    std::cout << "Exercise 4\n" << std::endl;
    ex_4();
    std::cout << std::endl << std::endl;

    std::cout << "Exercise 5\n" << std::endl;
    ex_5();
    std::cout << std::endl << std::endl;

    std::cout << "The end!" << std::endl << std::endl << std::endl;

    return 0;
}