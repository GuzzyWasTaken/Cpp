#include "Polymorph.hpp"


Animal::Animal()
{

}

Animal::~Animal()
{
    std::cout << "Base Animal Deconstructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "operator overloaded" << std::endl;
    _Type = other._Type;
    return *this;
}

Animal::Animal(const Animal &Clap)
{
    std::cout << "copy constructor made" << std::endl;
    *this = Clap;
}
Dog::Dog() : _Type ("Dog")
{}

Cat::Cat() : _Type ("Cat")


void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}

void Cat::makeSound() const
{
     std::cout << "Meow!" << std::endl;
}