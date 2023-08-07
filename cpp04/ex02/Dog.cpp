#include "Polymorph.hpp"

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    _brain = new Brain;
    _Type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called" << std::endl;
    delete _brain;
}