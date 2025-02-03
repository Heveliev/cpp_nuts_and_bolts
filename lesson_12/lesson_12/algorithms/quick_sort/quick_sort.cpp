// quick_sort -- array sorting function (using quicksort algorithm) O(nlogn)

#include "../../Config.h"

#include "../algorithms.h"


namespace algorithms
{

    int partition(int arr[], int low, int high, Sort::SortingDirection direction = Sort::SortingDirection::ascending) {
        int pivot = arr[high];
        int index = low - 1;

        for (int j = low; j < high; j++)
        {
            if (direction == Sort::SortingDirection::ascending && arr[j] <= pivot ||
                direction == Sort::SortingDirection::descending && arr[j] >= pivot) 
            {
                index++;
                swap(&arr[index], &arr[j]);
            }
        }
        swap(&arr[index + 1], &arr[high]);
        return index + 1;
    }

    void quick_sort(int arr[], int low, int high, Sort::SortingDirection direction) 
    {
        if (low < high) 
        {
            int partition_index = partition(arr, low, high, direction);

            quick_sort(arr, low, partition_index - 1, direction);
            quick_sort(arr, partition_index + 1, high, direction);
        }
    }
}