#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <cstdlib>
# include <string>
# include <iomanip>
# include <fstream>
# include <iostream>
# include "ScavTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap(std::string Name);
    virtual ~ScavTrap(); 
    void attack(const std::string& target) override; 
    void guardGate(); 

};

#endif