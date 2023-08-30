#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA womanA("Sarah", club);
    //wakes up with weapon
    HumanB womanB("Hannah");
    //picks up weapon
    womanB.setWeapon(club);


    // std::cout << "A is :" << womanA._name << std::endl;
    // std::cout << "B is :" << womanB._name << std::endl;
  
    std::cout << "A has a:" << club.getType() << std::endl;
    womanA.attack();
}