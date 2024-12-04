// ex_5.cpp -- function to convert number to boolean

#include <iostream>
#include <iomanip>

using namespace std;

static void ex_5()
{
	int num_entered = 0;
	bool num_bool = false;

	cout << "Please, enter any number:" << " ";
	cin >> num_entered;

	num_bool = static_cast<bool>(num_entered);

	cout << "You entered:" << " ";
	cout << boolalpha << num_bool << endl;
}