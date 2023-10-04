#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    this->_AD = 30;
    this->_HP = 100;
    std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap) : ClapTrap(fragTrap)
{
    std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap) 
{
    if (this == &fragTrap) 
    {
        return *this;
    }

    ClapTrap::operator=(fragTrap); // Call the base class's assignment operator

    std::cout << "FragTrap Assignment operator overloaded" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    if (_HP <= 0 || _Mana <= 0) 
    {
        return;
    }
    std::cout << _Name << " attacks " << target << " causing " << (_AD) << " points of damage" << std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << _Name << " requests a positive high five!" << std::endl;
}