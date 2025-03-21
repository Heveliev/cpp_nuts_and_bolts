#include "sum.h"
#include <thread>
#include <numeric>
#include <iostream>
#include <functional>

long long sumOneThread(const std::vector<int>& arr)
{
    return std::accumulate(arr.begin(), arr.end(), 0LL);
}

long long sumParallelThreads(const std::vector<int>& arr, int num_threads)
{

    size_t length = arr.size();
    size_t block_size = length / num_threads;
    size_t remainder = length % num_threads;

    std::vector<std::thread> threads;
    std::vector<long long> results(num_threads, 0);

    auto worker = [&](size_t start, size_t end, size_t index)
        {
        results[index] = std::accumulate(arr.begin() + start, arr.begin() + end, 0LL);
        };

    size_t start = 0;

    for (unsigned int i = 0; i < num_threads; ++i)
    {
        size_t end = start + block_size + (i < remainder ? 1 : 0);
        threads.emplace_back(worker, start, end, i);
        start = end;
    }

    for (auto& t : threads)
        t.join();

    return std::accumulate(results.begin(), results.end(), 0LL);
}