#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    return(Type);
}


void Weapon::setType(std::string newType)
{
    Type = newType;
}
