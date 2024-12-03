// ex_3.cpp --

#include <iostream>
#include <iomanip>

using namespace std;

static void ex_3()
{
	double num_fractional = 25.12345678901;

	cout << "Standard Notation:" << endl;
	cout << "Precision: 2" << " " << setprecision(2) << "-" << " " << num_fractional << endl;
	cout << "Precision: 5" << " " << setprecision(5) << "-" << " " << num_fractional << endl;
	cout << "Precision: 10" << " " << setprecision(10) << "-" << " " << num_fractional << endl;


	cout << "E Notation:" << endl;
	cout << "Precision: 2" << " " << setprecision(2) << "-" << " " << num_fractional << endl;
	cout << "Precision: 5" << " " << setprecision(5) << "-" << " " << num_fractional << endl;
	cout << "Precision: 10" << " " << setprecision(10) << "-" << " " << num_fractional << endl;
}