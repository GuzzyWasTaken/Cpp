#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string Name);
        FragTrap(const FragTrap &other);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();
        
        void attack(const std::string &target);
        void highFiveGuys();
    private:
};

#endif