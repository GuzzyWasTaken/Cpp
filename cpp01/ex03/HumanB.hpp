#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    public:
        Weapon weapon;
        HumanB(std::string str)
        {
            name = str;
        };
        void setWeapon(Weapon club)
        {
            weapon = club;
        }
        std::string name;
        void attack();
        ~HumanB();
};