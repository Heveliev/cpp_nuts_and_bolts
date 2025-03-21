// lesson_27.cpp -- 

#include <iostream>
#include <thread>

#include <chrono>

#include "numbers.h"
#include "sum.h"


int main()
{
	size_t size = 1'000'000;
	//size_t size = 10'000'000;
	//size_t size = 100'000'000;
	//size_t size = 1'000'000'000;
	//size_t size = 10'000'000'000;


	std::vector<int> array(size, 1);

	int threads = 1;
	//int threads = 2;
	//std::thread::hardware_concurrency()
	//std::thread::hardware_concurrency()*2
	//int threads = std::thread::hardware_concurrency();

	std::cout << "arr size: " << array.size() << std::endl;

	std::cout << "threads: " << threads << std::endl;

	auto start = std::chrono::high_resolution_clock::now();
	std::cout << "time start(ms): " << start.time_since_epoch().count() << std::endl;

	sumOneThread(array);
	//sumParallelThreads(array, threads);

	
	auto end = std::chrono::high_resolution_clock::now();

	std::cout << "time end(ms): " << end.time_since_epoch().count() << std::endl;

	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

	std::cout << "duration time(ms): " << duration.count() << std::endl;

	std::cout << "duration time(s): " << (duration.count() / 1000.0) << std::endl;
}