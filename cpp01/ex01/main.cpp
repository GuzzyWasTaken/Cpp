#include "Zombie.hpp"


 void Zombie :: addName(std::string str)
 {
    name = str;
 }

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *Horde = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        Horde[i].addName(name);
    }
    return (Horde);
}

int main()
{
    Zombie* horde = zombieHorde(3, "john");

    for(int i = 0; i < 3; i++)
    {
        horde[i].announce();
    }
    delete[] horde; 
}
