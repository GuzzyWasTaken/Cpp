#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) : value(num << fractionalBits)
{
    std::cout << "constructer made" << std::endl;
}
Fixed::Fixed(const float flNumber) : value (std::roundf(flNumber *(1 << fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl
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
   return(value / (1 << fractionalBits))
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "operator overloaded" << std::endl;
    this->value = other.value;
    return *this;
}

int toInt(void) const
{
    return(value << fractionalBits)
}

int Fixed::getRawBits(void) const
{
    std::cout << "returned raw bits:" << this->value << std::endl;
    return(this->value);
}

Fixed &Fixed::operator<<(std::ostream &out, const Fixed& fixed))
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

bool operator>(const Fixed& other) const 
{
    return value > other.value;
}

bool operator<(const Fixed& other) const 
{
    return value < other.value;
}

bool operator>=(const Fixed& other) const 
{
    return value >= other.value;
}

bool operator<=(const Fixed& other) const 
{
    return value <= other.value;
}

bool operator==(const Fixed& other) const 
{
    return value == other.value;
}

bool operator!=(const Fixed& other) const 
{
    return value != other.value;
}

Fixed operator+(const Fixed& other) const 
{
    return Fixed(toFloat() + other.toFloat());
}

Fixed operator-(const Fixed& other) const 
{
    return Fixed(toFloat() - other.toFloat());
}

Fixed operator*(const Fixed& other) const 
{
    return Fixed(toFloat() * other.toFloat());
}

Fixed operator/(const Fixed& other) const 
{
    return Fixed(toFloat() / other.toFloat());
}

int Fixed::min(int &A, int &B)
{
    return A > B ? B : A;
}

int Fixed::min(const int &A, const int &B)
{
    return A > B ? B : A;
}

int Fixed::max(int &A, int &B)
{
    return A < B ? B : A;
}

int Fixed::max(const int &A, const int &B)
{
    return A < B ? B : A;
}