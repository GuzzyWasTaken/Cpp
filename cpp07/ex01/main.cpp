#include <iostream>
#include "iter.hpp"

// Function Templates
template <typename T>
void print(T& element) {
    std::cout << element << " ";
}

template <typename T>
void increment(T& element) {
    element++;
}


int main() {
    // Testing with an int array
    int arr1[] = {1, 2, 3, 4, 5};
    size_t len1 = sizeof(arr1) / sizeof(arr1[0]);

    std::cout << "Original int array: ";
    iter(arr1, len1, print<int>);
    std::cout << std::endl;

    std::cout << "Incremented int array: ";
    iter(arr1, len1, increment<int>);
    iter(arr1, len1, print<int>);
    std::cout << std::endl;

    // Testing with a double array
    double arr2[] = {1.5, 2.5, 3.5, 4.5};
    size_t len2 = sizeof(arr2) / sizeof(arr2[0]);

    std::cout << "Original double array: ";
    iter(arr2, len2, print<double>);
    std::cout << std::endl;

    std::cout << "Incremented double array: ";
    iter(arr2, len2, increment<double>);
    iter(arr2, len2, print<double>);
    std::cout << std::endl;

    return 0;
}
