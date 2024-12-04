// lesson_2.cpp -- general function to run all existing tasks

#include <iostream>

#include "ex_1.cpp"
#include "ex_2.cpp"
#include "ex_3.cpp"
#include "ex_4.cpp"
#include "ex_5.cpp"

using namespace std;


int main()
{
    cout << "Lesson 2\n" << endl;

    cout << "Exercise 1\n" << endl;
    ex_1();
    cout << endl;

    cout << "Exercise 2\n" << endl;
    ex_2();
    cout << endl;

    cout << "Exercise 3\n" << endl;
    ex_3();
    cout << endl;

    cout << "Exercise 4\n" << endl;
    ex_4();
    cout << endl;

    cout << "Exercise 5\n" << endl;
    ex_5();
    cout << endl;
    
    return 0;
}