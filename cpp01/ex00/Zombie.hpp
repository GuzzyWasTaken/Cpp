#include <iostream>
#include <string>

class Zombie 
{
    private:
        std::string name;
    
    public:
        void announce(void);
    
    Zombie(std::string str)
    {
        name = str;
    }

    ~Zombie();
};

Zombie* newZombie(std::string name);