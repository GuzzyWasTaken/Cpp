#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private: 
            std::string _name;
            Weapon *_weapon;

    public:
        ~HumanB();
        HumanB(std::string str);
        void setWeapon(Weapon& club);
        void attack();
};