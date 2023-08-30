#include <iostream>
#include <string>

class Zombie 
{
    private:
        std::string _name;
    
    public:
        void addName(std::string str);
        void announce(void);
    
    Zombie();
    ~Zombie();
};

Zombie* newZombie(std::string name);
Zombie *zombieHorde(int N, std::string name);