#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    public:
        Weapon sword;
        HumanA(std::string str, Weapon club)
        {
            name = str;
            Weapon club = Weapon();
            sword.setType("crude spiked club");
        };
        std::string name;
        void attack();
        ~HumanA();
};