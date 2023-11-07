#include "Animal.hpp"


Animal::Animal()
{
    std::cout << "Base Animal constructor called" << std::endl;
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

Animal::Animal(const Animal &other)
{
    std::cout << "copy constructor made" << std::endl;
    *this = other;
}

std::string Animal::getType()
{
    return(this->_Type);
}