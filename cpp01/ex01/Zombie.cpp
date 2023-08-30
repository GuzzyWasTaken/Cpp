#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::addName(std::string str)
{
    _name = str;
}


Zombie::~Zombie()
{
    std::cout << "Zombie " << this->_name << "has been destroyed." << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

