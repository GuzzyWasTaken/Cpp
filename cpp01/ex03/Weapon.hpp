#include <iostream>
#include <string>

class Weapon
{
    private:
            std::string Type;
    public:
            ~Weapon();
            Weapon(std::string weapontype);
            const std::string &getType();
            void setType(std::string newType);
};