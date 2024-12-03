// ex_1.cpp -- the program to check: "Are you a programmer?"

#include <iostream>

using namespace std;

static void ex_1()
{
	int num_1, num_2, num_temporary;
	char user_answer;


	cout << "Please enter first number:" << " ";
	cin >> num_1;

	cout << "Please enter second number:" << " ";
	cin >> num_2;

	num_temporary = num_1;
	num_1 = num_2;
	num_2 = num_temporary;

	cout << "Please check the numbers you entered:\n"
		<< "first =" << " " << num_1 << endl
		<< "second =" << " " << num_2 << endl;

	cout << "Right?\n" << "Press: y/n" << endl;

	cin >> user_answer;

	if (user_answer == 'y')
		cout << "Congratulations, you have passed the test!!!\n"
					<< "*:O)\n"
					<< "You are a programmer." 
					<< endl;
	else cout << "Unfortunately, you have not passed the test.\n" << ":-<" << endl;
}