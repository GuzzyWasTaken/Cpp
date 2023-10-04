#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    {
        ClapTrap clap("Clap");
        ScavTrap scav("Scav");
        FragTrap frag("Frag");

        clap.attack("Target1");
        clap.takeDamage(5);
        clap.beRepaired(3);

        scav.attack("Target2");
        scav.takeDamage(10);
        scav.beRepaired(2);
        scav.guardGate();

        frag.attack("Target3");
        frag.highFiveGuys();
    } // Objects go out of scope here and will be destructed

    std::cout << "Objects have gone out of scope and have been destructed." << std::endl;

    return 0;
}