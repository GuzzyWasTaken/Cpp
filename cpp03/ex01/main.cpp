#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int    main(void)
{
        ClapTrap clap("Clap");
        ScavTrap scav("Scav");

        // Calling the ClapTrap attack function
        clap.attack("Target1");
        clap.takeDamage(5);
        clap.beRepaired(3);

        // Calling the ScavTrap attack and guardGate functions
        scav.attack("Target2");
        scav.takeDamage(10);
        scav.beRepaired(2);
        scav.guardGate();

        // Polymorphism: Using a ScavTrap object as a ClapTrap
        ClapTrap* ptrToClapTrap = &scav;
        ptrToClapTrap->attack("Target3");

    return (0);
}