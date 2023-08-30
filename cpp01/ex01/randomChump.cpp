#include "Zombie.hpp"

void randomChump( std::string name)
{
    Zombie zombo;
    zombo.addName(name);
    zombo.announce();
}