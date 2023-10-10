#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
    std::cout << this->_type << " constructor for wrong cat called" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << this->_type << " destructor for wrong cat called" << std::endl;
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}