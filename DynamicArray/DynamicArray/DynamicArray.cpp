#include <iostream>
#include <vector>
#include "DynamicArray.h"

int main()
{

	//Testing of ALL methods, c-tors, d-tors goes here
	int arr[3] = { 4, 5, 6 };
	float arr2[3] = { 1.0f, 2.0f, 3.0f };

	DynamicArray<int> myArray;
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

	DynamicArray<int> myArray2(3);
	myArray2[0] = 1;
	myArray2[1] = 2;
	myArray2[2] = 3;
	std::cout << "array 2: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << myArray2[i] << std::endl;
	}
	std::cout << std::endl << std::endl;

	DynamicArray<int> myArray3(arr,3);
	std::cout << "array 3: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << myArray3[i] << std::endl;
	}
	std::cout << std::endl << std::endl;


	DynamicArray<float> myArrayFloat(arr2, 3);
	std::cout << "array float: " << std::endl;
	for (int i = 0; i < 3; i++)
	{
		std::cout << myArrayFloat[i] << std::endl;
	}
	std::cout << std::endl << std::endl;



	DynamicArray<int> myArray4 = myArray3;
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
	for (int i = 0; i < myArray.getSize(); i++)
	{
		std::cout << myArray[i] << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "pop_back(): myArray" << std::endl;
	myArray.pop_back();

	std::cout << "array 1: " << std::endl;
	std::cout << "array 1: getCapacity - ";
	std::cout << myArray.getCapacity() << std::endl;

	for (int i = 0; i < myArray.getSize(); i++)
	{
		std::cout << myArray[i] << std::endl;
	}
	std::cout << std::endl << std::endl;


	std::cout << "array 1: getCapacity - ";
	std::cout << myArray.getCapacity() << std::endl;
	std::cout << "array 1: getsize - ";
	std::cout << myArray.getSize() << std::endl;
	std::cout << "array 1: back - ";
	std::cout << myArray.back() << std::endl;


	std::cout << "array 1: shrinkToFit()" << std::endl;
	myArray.shrinkToFit();

	std::cout << "array 1: getCapacity - ";
	std::cout << myArray.getCapacity() << std::endl;
	std::cout << "array 1: getsize - ";
	std::cout << myArray.getSize() << std::endl;
	std::cout << "array 1: back - ";
	std::cout << myArray.back() << std::endl;

	return 0;
}