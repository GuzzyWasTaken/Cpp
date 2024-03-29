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
    float toFloat(void) const;
    int toInt(void) const;
    Fixed &operator=(const Fixed &other);
    ~Fixed();


    int getRawBits(void) const;
    void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed& fixed);

#endif