#pragma once

class Config
{
public:
	static constexpr int END_PROGRAM = -1;
	static constexpr int START_PROGRAM = 1;

    static constexpr int SIZE = 10;

    static constexpr int ROWS = 10;
    static constexpr int COLUMNS = 10;

    static constexpr int SMALL_ROWS = 4;
    static constexpr int SMALL_COLUMNS = 4;

    static constexpr int small_2d_array[SMALL_ROWS][SMALL_COLUMNS] =
    {
        {3, 7, 2, 5},
        {6, 8, 4, 9},
        {1, 3, 5, 7},
        {4, 6, 0, 8}
    };


	static constexpr int sorted_array[ROWS][COLUMNS] =
	{
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {10, 20, 30, 40, 50, 60, 70, 80, 90, 100},
        {-10, -9, -8, -7, -6, -5, -4, -3, -2, -1},
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000},
        {40, 30, 20, 10, 0, -10, -20, -30, -40, -50},
        {20, 18, 16, 14, 12, 10, 8, 6, 4, 2},
        {34, 21, 13, 8, 5, 3, 2, 1, 1, 0},
        {10, 9, 9, 7, 5, 5, 3, 2, 1, 1},
        {90, 80, 70, 60, 50, 40, 30, 20, 10, 1}
	};

    static constexpr int unsorted_arrays[ROWS][COLUMNS] =
    {
        {10, 3, 8, 2, 5, 7, 6, 9, 1, 4},
        {50, 20, 90, 70, 40, 60, 30, 10, 80, 100},
        {-3, -7, -1, -9, -2, -10, -4, -6, -8, -5},
        {5, 9, 2, 3, 10, 7, 6, 1, 4, 8},
        {500, 100, 900, 300, 700, 800, 400, 600, 200, 1000},
        {-10, 20, -40, 30, -50, 10, 0, -20, 40, -30},
        {9, 2, 5, 8, 1, 6, 4, 10, 7, 3},
        {13, 2, 5, 8, 21, 34, 1, 1, 3, 0},
        {5, 9, 2, 3, 10, 7, 6, 1, 4, 8},
        {30, 10, 90, 70, 80, 20, 50, 60, 40, 100}
    };
};