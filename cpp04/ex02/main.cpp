#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int    main(void)
{
    ClapTrap axton("Axton");
    ClapTrap krieg("Krieg");

    axton.attack("Krieg");
    krieg.takeDamage(5);
    krieg.attack("Axton");
    axton.takeDamage(0);
    krieg.beRepaired(3);
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");
    krieg.attack("Axton");


    return (0);
}