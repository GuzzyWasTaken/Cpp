#include "Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
   // std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Deconstructing" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "copy constructor made" << std::endl;
    if (this->value != other.value)
        this->value = other.value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "operator overloaded" << std::endl;
    this->value = other.value;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "returned raw bits:" << this->value << std::endl;
    return(this->value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "set raw bits to:" << raw << std::endl;
    this->value = raw;
}