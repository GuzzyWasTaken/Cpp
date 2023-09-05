#include <iostream>
#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed b(42);
    Fixed c(42.42f);
    Fixed d(b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;

    std::cout << "a as integer: " << a.toInt() << std::endl;
    std::cout << "b as integer: " << b.toInt() << std::endl;
    std::cout << "c as integer: " << c.toInt() << std::endl;
    std::cout << "d as integer: " << d.toInt() << std::endl;

    std::cout << "a as float: " << a.toFloat() << std::endl;
    std::cout << "b as float: " << b.toFloat() << std::endl;
    std::cout << "c as float: " << c.toFloat() << std::endl;
    std::cout << "d as float: " << d.toFloat() << std::endl;

    a = c;
    std::cout << "a after assignment: " << a << std::endl;

    return 0;
}