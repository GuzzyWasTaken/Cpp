#include "Fixed.hpp"

Fixed::Fixed(void) : value(0)
{
   // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num) : value(num << fractionalBits)
{
   // std::cout << "constructer made" << std::endl;
}
Fixed::Fixed(const float flNumber) : value (roundf(flNumber *(1 << fractionalBits)))
{
   // std::cout << "Float constructor called" << std::endl;
}
            
Fixed::~Fixed()
{
   // std::cout << "Deconstructing" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
   // std::cout << "copy constructor made" << std::endl;
    if (this->value != other.value)
        this->value = other.value;
}
int Fixed::toInt(void) const
{
   return(this->value >> fractionalBits);
}

float Fixed::toFloat(void) const
{
    return static_cast<float>( this->getRawBits() ) / ( 1 << fractionalBits );
}

Fixed& Fixed::operator=( const Fixed &other ) 
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if ( this != &other )
        this->value = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
  //  std::cout << "returned raw bits:" << this->value << std::endl;
    return(this->value);
}

std::ostream &operator<<(std::ostream &out, const Fixed& fixed)
{
  //  std::cout << "operator << overloaded" << std::endl;
    out << fixed.toFloat();
    return out;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "set raw bits to:" << raw << std::endl;
    this->value = raw;
}
bool Fixed::operator>(const Fixed& other) const  
{
    return this->value > other.value;
}

bool Fixed::operator<(const Fixed& other) const 
{
    return this->value < other.value;
}

bool Fixed::operator>=(const Fixed& other) const 
{
    return this->value >= other.value;
}

bool Fixed::operator<=(const Fixed& other) const 
{
    return value <= other.value;
}

bool Fixed::operator==(const Fixed& other) const 
{
    return this->value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const 
{
    return value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) const 
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const 
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const 
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const 
{
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed&   Fixed::operator++( void ) 
{
    ++this->value;
    return *this;
}

Fixed   Fixed::operator++( int ) 
{
    Fixed tmp( *this );
    tmp.value = this->value++;
    return tmp;
}

Fixed& Fixed::operator--( void ) 
{
    --this->value;
    return *this;
}

Fixed Fixed::operator--( int ) 
{
    Fixed tmp( *this );
    tmp.value = this->value--;
    return tmp;
}

Fixed& Fixed::min( Fixed &a, Fixed &b ) 
{
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b ) 
{
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) 
{
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) 
{
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}