#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::attack()
{
    std::cout << name << "attacks with their" << sword.getType() << std::endl;
}