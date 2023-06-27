#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"


int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA womanA("Sarah", );
    HumanB womanB;

    womanA.name = "Sarah";
    womanB.name = "Lauren";
    
    std::cout << "A is :" << womanA.name << std::endl;
    std::cout << "B is :" << womanB.name << std::endl;
  
    std::cout << "A has a:" << womanA.sword.getType() << std::endl;
    womanA.attack();
}