#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class FragTrap : public ScavTrap 
{
    public:
        FragTrap(std::string Name);
        FragTrap(const Fragtrap &other);
        FragTrap &operator=(const FragTrap &other);
        ~FragTrap();
        
        void attack(const std::string &target) override;
        void highFiveGuys();
    private:
}

#endif