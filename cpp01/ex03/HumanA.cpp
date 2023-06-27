#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanA::attack()
{
    std::cout << _name << "attacks with their" << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon club)
{
    _name = name;
    _weapon = club;
}

HumanA::~HumanA()
{
}