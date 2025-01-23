#ifndef EASYFIND_H

#define EASYFIND_H

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

class NoElementFound: public std::exception
{
    public:
        const char *what() const throw();
};

template<typename T>
typename T::iterator easyfind(T container, int find);

#include "easyfind.tpp"

#endif