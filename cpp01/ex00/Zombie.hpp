#include <iostream>
#include <string>
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
    private:
        std::string _name;
    
    public:
        void announce(void);
        Zombie(std::string name);
        Zombie* newZombie(std::string name);
        void randomChump( std::string name);
        ~Zombie();
};

Zombie *newZombie(std::string name);
void randomChump( std::string name);

#endif