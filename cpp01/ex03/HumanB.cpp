#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::attack()
{
    if (this->_weapon != NULL && this->_weapon->getType() != "")
        std::cout << _name << "attacks with their" << _weapon->getType() << std::endl;
    else
    {
        std::cout << _name << " does not have a weapon" << std::endl;
    }
}

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

void HumanB::setWeapon(Weapon& club)
{
    this->_weapon = &club;
}