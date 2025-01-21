#include <iostream>
#include "Array.hpp"

#define MAX_VAL 20

int main()
{
    std::cout << std::endl;
    std::cout << "-------------------- TEST 1 ---------------------" << std::endl;
    try
    {
        Array<int> numbers(MAX_VAL);
        numbers[MAX_VAL] = 10;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "-------------------- TEST 2 ---------------------" << std::endl;
    try
    {
        Array<int> numbers(MAX_VAL);
        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = i;
            std::cout << numbers[i] << ",";
        }
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "-------------------- TEST 3 ---------------------" << std::endl;
    try
    {
        Array<int> numbers(MAX_VAL);
        Array<int> copy(numbers);
        copy[12] = 666;
        for (size_t i = 0; i < MAX_VAL; i++)
        {
            std::cout << numbers[i] << ",";
        }
        std::cout << std::endl;
        for (size_t i = 0; i < MAX_VAL; i++)
        {
            std::cout << copy[i] << ",";
        }
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     std::cout << std::endl;
    
    std::cout << std::endl;
    std::cout << "-------------------- Check Array Sizes ---------------------" << std::endl;
    std::cout << std::endl;

	std::cout << "size: " << Array<char>(0).size() << std::endl;
	std::cout << "size: " << Array<long>(20).size() << std::endl;
	std::cout << "size: " << Array<void*>(666).size() << std::endl;
    std::cout << std::endl;
    return 0;
}