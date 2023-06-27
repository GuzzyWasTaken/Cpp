#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon& _weapon;
        HumanA();

    public:
        HumanA(std::string str, Weapon& club);
        ~HumanA();
        void attack();
};