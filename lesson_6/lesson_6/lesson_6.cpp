// lesson_6.cpp -- general function to run all existing tasks

#include <iostream>

#include "ex_1.cpp"
#include "ex_2.cpp"
#include "ex_3.cpp"
#include "ex_4.cpp"
#include "ex_5.cpp"

int main()
{
    std::cout << "Lesson 6\n" << std::endl;

    std::cout << "Exercise 1\n" << std::endl;
    ex_1();
    std::cout << std::endl;

    std::cout << "Exercise 2\n" << std::endl;
    ex_2();
    std::cout << std::endl;

    std::cout << "Exercise 3\n" << std::endl;
    ex_3();
    std::cout << std::endl;

    std::cout << "Exercise 4\n" << std::endl;
    ex_4();
    std::cout << std::endl;

    std::cout << "Exercise 5\n" << std::endl;
    ex_5();
    std::cout << std::endl;

    return 0;
}