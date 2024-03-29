#ifndef FIXED_HPP
# define FIXED_HPP

# include <cstdlib>
# include <string>
# include <iomanip>
# include <fstream>
# include <iostream>
# include <cmath>

class Fixed
{
private:
    int value;
    static const int fractionalBits = 8;

public:
    Fixed(void);
    Fixed(const int num);
    Fixed(const float flNumber);
    Fixed(const Fixed &other);

    Fixed &operator<<(const Fixed &other);
    
    float toFloat(void) const;
    int toInt(void) const;

    Fixed& operator=( const Fixed &other);

    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    Fixed operator+(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;


    Fixed&  operator++( void );
    Fixed   operator++( int );
    Fixed&  operator--( void );
    Fixed   operator--( int );

    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed& fixed);


#endif