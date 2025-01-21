#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <array>

template <typename T>
void iter(T *array, size_t len, void (*func)(T&))
{
    if (!array)
        return ;
    for (size_t i = 0; i < len; ++i) 
    {
        func(array[i]);
    }
}

template <typename T>
void call(T &elem)
{
    std::cout << "Call element: ";
    std::cout << elem << std::endl;
}

#endif
