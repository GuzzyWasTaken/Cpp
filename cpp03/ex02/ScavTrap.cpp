#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->_HP = 150;
    this->_AD = 5;
    this->_Mana = 100;
    std::cout << "ScavTrap " << Name << " has been constructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap) 
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavTrap) 
{
    if (this == &scavTrap)
        return *this;

    ClapTrap::operator=(scavTrap); // Call the base class's assignment operator
    std::cout << "ScavTrap Assignment operator overloaded" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target)
 {
    if (_HP <= 0 || _Mana <= 0) 
    {
        return;
    }
    std::cout << _Name << " attacks " << target << " causing " << _AD << " points of damage" << std::endl;
}

void ScavTrap::guardGate() 
{
    std::cout << _Name << " is now in Gatekeeper mode!" << std::endl;
}