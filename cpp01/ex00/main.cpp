#include "Zombie.hpp"

int main()
{
   Zombie *zombie = newZombie("john");

    zombie->announce();
    delete(zombie); 
}

 //delete zombies
 