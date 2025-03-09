// lesson_24.cpp --

#include <iostream>

#include "Data.h"
#include "StringValidation.h"
#include "VisualStudio_2025.h"


int main()
{
	StringValidation validator;

	std::cout << "uniqueWordsCount():" << std::endl;
	for (int i = 0; i < arr1.size(); i++)
	{
		std::cout << "Line: " << arr1[i] << std::endl;
		std::cout << "Number of unique words in a line : " << validator.uniqueWordsCount(arr1[i]) << std::endl;
		std::cout << "--------------------------------------" << std::endl;
	}
	std::cout << std::endl << std::endl;

	std::cout << "mostOccuredWord({if two are the same, the first one counts}):" << std::endl;
	for (int i = 0; i < arr2.size(); i++)
	{
		std::cout << "Line: " << arr2[i] << std::endl;
		std::cout << "The most frequently encountered word: " << validator.mostOccuredWord(arr2[i]) << std::endl;
		std::cout << "--------------------------------------" << std::endl;
	}
	std::cout << std::endl << std::endl;


	VisualStudio_2025 VS2025;

	std::cout << "VS2025.parenthesisValidation():" << std::endl;
	for (int i = 0; i < parentheses.size(); i++)
	{
		std::cout << "Line: " << parentheses[i] << std::endl;
		std::cout << "Output: ";
		std::cout << (VS2025.parenthesisValidation(parentheses[i]) ?
			"Well done, we can run your code" :
			"An incomprehensible error, and that we cannot run the code. (Reason - unknown)") << std::endl;
		std::cout << "--------------------------------------" << std::endl;
	}
	std::cout << std::endl << std::endl;




	std::cout << "VS2025.has_cycle():" << std::endl;

	Node* withoutCycle = new Node(1);
	withoutCycle->next = new Node(2);
	withoutCycle->next->next = new Node(3);

	Node* cycle = new Node(1);
	cycle->next = new Node(2);
	cycle->next->next = new Node(3);
	cycle->next->next->next = cycle;

	Node* withoutCycle2 = new Node(10);

	Node* cycle2= new Node(1);
	cycle2->next = new Node(2);
	cycle2->next->next = cycle->next;


	std::cout << "withoutCycle: " << (VS2025.has_cycle(withoutCycle) ? "cycle" : "without Cycle") << std::endl;
	std::cout << "cycle: " << (VS2025.has_cycle(cycle) ? "cycle" : "without Cycle") << std::endl;
	std::cout << "withoutCycle: " << (VS2025.has_cycle(withoutCycle2) ? "cycle" : "without Cycle") << std::endl;
	std::cout << "cycle: " << (VS2025.has_cycle(cycle2) ? "cycle" : "without Cycle") << std::endl;

	return 0;
}