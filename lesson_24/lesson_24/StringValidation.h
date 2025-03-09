#pragma once
#include <string>

class StringValidation
{
public:
	StringValidation() = default;
	unsigned int uniqueWordsCount(const std::string& line);
	std::string mostOccuredWord(const std::string& line);
};

