#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") 
{
    std::cout << "WrongAnimal default constructor called." << std::endl;
}


WrongAnimal::WrongAnimal(std::string type) : _type(type) 
{
    std::cout << "WrongAnimal parameterized constructor called." << std::endl;
}


WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal& src) 
{
    std::cout << "WrongAnimal copy constructor called." << std::endl;
    _type = src._type;
}


WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) 
{
    std::cout << "WrongAnimal assignment operator called." << std::endl;
    if (this == &rhs) 
        return *this;
    _type = rhs._type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a generic sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}