#include "Cat.hpp"


Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    _Type = "Cat";
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat deconstructor called" << std::endl;
}