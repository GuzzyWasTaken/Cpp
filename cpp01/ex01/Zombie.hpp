#include <iostream>
#include <string>

class Zombie 
{
    private:
        std::string name;
    
    public:
        void addName(std::string str);
        void announce(void);
    
    Zombie();

    ~Zombie();
};

Zombie* newZombie(std::string name);