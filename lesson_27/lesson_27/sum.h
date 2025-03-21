#pragma once
#include <vector>

long long sumOneThread(const std::vector<int>& arr);

long long sumParallelThreads(const std::vector<int>& arr, int num_threads);

