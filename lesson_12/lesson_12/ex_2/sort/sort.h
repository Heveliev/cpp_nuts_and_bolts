#pragma once 

#include "../../Config.h"

void sort(int arr[Config::ROWS][Config::COLUMNS], 
	Table::SortingDirection table_direction = Table::SortingDirection::by_rows,
	Sort::SortingDirection sort_direction = Sort::SortingDirection::ascending);