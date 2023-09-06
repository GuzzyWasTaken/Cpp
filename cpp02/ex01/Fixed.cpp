#include "Fixed.hpp"

//Roundf just rounds a nmber
//

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) : value(num << fractionalBits)
{
    std::cout << "constructor made" << std::endl;
}
Fixed::Fixed(const float flNumber) : value (roundf(flNumber *(1 << fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>( this->getRawBits() ) / ( 1 << fractionalBits );
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

int Fixed::toInt(void) const
{
   return(value / (1 << fractionalBits));
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

std::ostream &operator<<(std::ostream &out, const Fixed& fixed)
{
    std::cout << "operator << overloaded" << std::endl;
    out << fixed.toFloat();
    return out;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "set raw bits to:" << raw << std::endl;
    this->value = raw;
}