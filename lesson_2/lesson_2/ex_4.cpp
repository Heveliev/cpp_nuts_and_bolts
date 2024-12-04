// ex_4 -- demonstration of the class "enum", days of the week in numbers

#include <iostream>

using namespace std;

const enum class WeekDay
{
	Monday = 1,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday,
};

static void ex_4()
{
	cout << "Days of the week in numbers:" << endl;
	cout << "Monday:" << " " << static_cast<int>(WeekDay::Monday) << endl;
	cout << "Tuesday:" << " " << static_cast<int>(WeekDay::Tuesday) << endl;
	cout << "Wednesday:" << " " << static_cast<int>(WeekDay::Wednesday) << endl;
	cout << "Thursday:" << " " << static_cast<int>(WeekDay::Thursday) << endl;
	cout << "Friday:" << " " << static_cast<int>(WeekDay::Friday) << endl;
	cout << "Saturday:" << " " << static_cast<int>(WeekDay::Saturday) << endl;
	cout << "Sunday:" << " " << static_cast<int>(WeekDay::Sunday) << endl;
}