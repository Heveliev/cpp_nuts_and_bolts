// lesson_1.cpp -- function for printing nice words for c++ and print triangle 

#include <iostream>

using namespace std;

int main()
{
	cout << "I love C++!\n" << endl;
	
	cout << "Simple method for print triangle:" << endl;
	cout << "*\n"
		 << "**\n"
		 << "***\n"
		 << "****\n"
		 << "*****\n"
		 << "******\n"
		 << "*******\n"
		 << "********\n"
		 << "*********\n"
		 << endl;


	cout << "More difficult method for print triangle:" << endl;
	char s[15] = "*";

	for (int count = 1; count < 10; ++count)
		{
			cout << s << endl;
			s[count] = '*';
		}

	return 0;
}



