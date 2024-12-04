// ex_3.cpp -- function for outputting different formats and different number of decimal places

#include <iostream>
#include <iomanip>

using namespace std;

static void ex_3()
{
	double num_fractional = 2555.120000000000000000;

	cout << "Standard Notation:" << endl;
	cout << "Precision: 2" << " " << fixed << setprecision(2) << "-" << " " << num_fractional << endl;
	cout << "Precision: 5" << " " << fixed << setprecision(5) << "-" << " " << num_fractional << endl;
	cout << "Precision: 10" << " " << fixed << setprecision(10) << "-" << " " << num_fractional << endl;


	cout << "E Notation:" << endl;
	cout << "Precision: 2" << " " << scientific << setprecision(2) << "-" << " " << num_fractional << endl;
	cout << "Precision: 5" << " " << scientific << setprecision(5) << "-" << " " << num_fractional << endl;
	cout << "Precision: 10" << " " << scientific << setprecision(10) << "-" << " " << num_fractional << endl;
}