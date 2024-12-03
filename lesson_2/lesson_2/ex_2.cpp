// ex_2.cpp -- function for outputting "double", converting "double" to "int", and also special output

#include <iostream>
#include <iomanip>

using namespace std;

static void ex_2()
{
	double num_fractional = 4.123456789;
	int num = 0;

	cout << "Fractional number:" << " "
		 << num_fractional << endl;
	num = static_cast<int>(num_fractional);

	cout << "Integer:" << " "
		 << num << endl;

	cout << "Width: 20, padding: \'$\'" << endl;

	cout << setw(20) << setfill('$') << right << num_fractional << endl;	 
	cout << setw(20) << setfill('$') << right << num << endl;
}