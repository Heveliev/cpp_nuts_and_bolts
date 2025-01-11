#pragma once

class Config
{
public:
	static constexpr int END_PROGRAM = -1;
	static constexpr int START_PROGRAM = 1;

	static constexpr char END_STRING = '\0';

	static constexpr int AMOUNT_VOWELS = 6;
	static constexpr char VOWELS[AMOUNT_VOWELS] = { 'A', 'E', 'I', 'O', 'U', 'Y' };
};