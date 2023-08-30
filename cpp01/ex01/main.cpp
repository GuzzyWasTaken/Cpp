#include "Zombie.hpp"

int main()
{
    Zombie* horde = zombieHorde(3, "john");

    for(int i = 0; i < 3; i++)
    {
        horde[i].announce();
    }
    delete horde; 
}
