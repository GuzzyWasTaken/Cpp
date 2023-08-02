#include "ScavTrap.h"
#include "ClapTrap.hpp"


ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name), _HP(100), _AD(20) 
{
    std::cout << "ScavTrap Constructor called" << std::endl;
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
    if (this == &scavTrap) {
        return *this;
    }

    ClapTrap::operator=(scavTrap); // Call the base class's assignment operator

    std::cout << "ScavTrap Assignment operator overloaded" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target)
 {
    if (_HP <= 0 || _Mana <= 0) {
        return;
    }
    std::cout << _Name << " attacks " << target << " causing " << (_AD + _AD_ScavTrap) << " points of damage" << std::endl;
}

void ScavTrap::guardGate() 
{
    std::cout << _Name << " is now in Gatekeeper mode!" << std::endl;
}