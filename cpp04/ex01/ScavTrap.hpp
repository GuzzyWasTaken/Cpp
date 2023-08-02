#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <cstdlib>
# include <string>
# include <iomanip>
# include <fstream>
# include <iostream>
# include "ScavTrap.hpp"

class ScavTrap : public ClapTrap 
{
public:
    ScavTrap(std::string Name);
    ScavTrap(const ScavTrap& scavTrap); 
    virtual ~ScavTrap(); 
    ScavTrap& operator=(const ScavTrap& scavTrap);
    void attack(const std::string& target) override;
    void guardGate(); 

private:
    std::string _Name;

};

#endif