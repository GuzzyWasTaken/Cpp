#include "Dog.hpp"

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    _Type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called" << std::endl;
}
