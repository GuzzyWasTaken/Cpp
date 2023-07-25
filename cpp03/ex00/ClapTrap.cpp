#include "ClapTrap.hpp"


void ClapTrap::attack(const std::string &target)
{
    if (_HP <= 0  || _Mana <= 0)
        return;
    std::cout << _Name << " Attacks " << target << " causing " << _AD << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_HP <= 0)
    {
        std::cout << _Name << " Got dropped xd" << std::endl;
        return;
    }
    std::cout << _Name <<  "Has taken " << amount << " amount of damage!" << std::endl;
    _HP -= amount;
}

ClapTrap::ClapTrap(std::string Name): _Name(Name), _HP(10), _AD(0), _Mana(10)
{

}

ClapTrap::ClapTrap(): _Name("john"), _HP(10), _AD(0), _Mana(10)
{

}

ClapTrap::~ClapTrap()
{
    std::cout << "Deconstructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "operator overloaded" << std::endl;
    _Name = other._Name;
    _HP   = other._HP;
    _AD   = other._AD;
    _Mana = other._Mana;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &Clap)
{
    std::cout << "copy constructor made" << std::endl;
    *this = Clap;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_HP <= 0 || _Mana <= 0)
        return;
    std::cout << _Name << " Has been healed for " << amount << std::endl;
    _HP += amount;
    _Mana -= 1;
}

