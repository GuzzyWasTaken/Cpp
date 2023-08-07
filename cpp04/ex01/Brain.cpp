#include "Polymorph.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        _Ideas[i] = "Idea number " + std::to_string(i);
    } 
}

Brain::~Brain()
{
    std::cout << "Brain deconstructor called" << std::endl;
}