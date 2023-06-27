#include <iostream>
#include <string>

class Weapon
{
    private:
            std::string Type;
    public:
            const std::string &getType();
            void setType(std::string newType);
            ~Weapon();
            Weapon(std::string weapontype)
            {
                setType(weapontype);
            };
};