#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
   Zombie *zombo = new Zombie;
   zombo->addName(name);
   return(zombo);
}
