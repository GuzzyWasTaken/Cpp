#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <cstdlib>
# include <string>
# include <iomanip>
# include <fstream>
# include <iostream>

class ClapTrap
{
    private:
        std::string _Name;
        int         _HP;
        int         _AD;
        int         _Mana;
    
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &Clap);
        ClapTrap &operator=(const ClapTrap &other);
        ClapTrap(std::string Name);
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();
};

#endif