#include <iostream>
#include <vector>
#include "DynamicIntArray.h"

int main()
{
	//Testing of ALL methods, c-tors, d-tors goes here
	int arr[3] = { 4, 5, 6 };

	DynamicIntArray myArray;
	myArray.setSize(3);
	myArray[0] = 1;
	myArray[1] = 2;
	myArray[2] = 3;
	std::cout << "array 1: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << myArray[i] << std::endl; 
	}
	std::cout << std::endl << std::endl;

	DynamicIntArray myArray2(3);
	myArray2[0] = 1;
	myArray2[1] = 2;
	myArray2[2] = 3;
	std::cout << "array 2: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << myArray2[i] << std::endl;
	}
	std::cout << std::endl << std::endl;

	DynamicIntArray myArray3(arr,3);
	std::cout << "array 3: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << myArray3[i] << std::endl;
	}
	std::cout << std::endl << std::endl;

	DynamicIntArray myArray4 = myArray3;
	std::cout << "array 4: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << myArray4[i] << std::endl;
	}
	std::cout << std::endl << std::endl;


	std::cout << "getSize: myArray4" << std::endl;
	std::cout << myArray4.getSize() << std::endl << std::endl;

	std::cout << "clear and getSize: myArray4" << std::endl;
	myArray4.clear();
	std::cout << myArray4.getSize() << std::endl << std::endl;



	std::cout << "myArray == myArray2 ?" << std::endl;
	std::cout << (myArray == myArray2 ? "YES" : "NO") << std::endl;

	std::cout << "myArray == myArray3 ?" << std::endl;
	std::cout << (myArray == myArray3 ? "YES" : "NO") << std::endl;

	std::cout << "myArray != myArray2 ?" << std::endl;
	std::cout << (myArray != myArray2 ? "YES" : "NO") << std::endl;

	std::cout << "myArray != myArray3 ?" << std::endl;
	std::cout << (myArray != myArray3 ? "YES" : "NO") << std::endl;
	std::cout << std::endl << std::endl;

	std::cout << "myArray = myArray3" << std::endl;
	myArray = myArray3;
	std::cout << "array 1: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << myArray[i] << std::endl;
	}
	std::cout << std::endl << std::endl;


	std::cout << "setSize(5): myArray" << std::endl;
	myArray.setSize(5);
	myArray[3] = 1;
	myArray[4] = 2;

	std::cout << "array 1: " << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << myArray[i] << std::endl;
	}
	std::cout << std::endl << std::endl;


	std::cout << "push_back(3): myArray" << std::endl;
	myArray.push_back(3);

	std::cout << "array 1: " << std::endl;
	for (int i = 0; i < 6; i++)
	{
		std::cout << myArray[i] << std::endl;
	}
	std::cout << std::endl << std::endl;


	return 0;
}