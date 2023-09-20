#include "ClapTrap.hpp"


int main() 
{
    ClapTrap clap1("Player1");
    ClapTrap clap2;

    // Perform actions
    clap1.attack("Enemy1");
    clap2.attack("Enemy2");

   // clap1.takeDamage(5);
    clap2.takeDamage(5);
   // clap1.takeDamage(5);
    clap2.takeDamage(5);
    clap2.attack("clappy");

    clap1.beRepaired(3);
    clap2.beRepaired(2);


    return 0;
}