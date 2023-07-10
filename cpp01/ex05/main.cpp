#include "Harl.hpp"
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>




int main(int ac, char **av)
{
    Harl guy;



}

void Harl::complain(std::string level)
{
    int state = 0;
    t_func funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    while(level.compare(levels[state]) != 0)
    {
        state++;
        if (state > 4)
        {
            std::cout << "something went wrong" << std::endl;
            return;
        }
    }

    switch (state)
    {
        case 0:
                this->*funcs[state]();
        case 1:
                this->*funcs[state]();
        case 2:
                this->*funcs[state]();
        case 3:
                this->*funcs[state]();
                break;
    }
    

}

void Harl::debug(void)
{
    State currentState = DEBUG;
    std::cout << currentState.message << std::endl;
}

void Harl::info(void)
{
    State currentState = INFO;
    std::cout << currentState.message << std::endl;
}

void Harl::warning(void)
{
    State currentState = WARNING;
    std::cout << currentState.message << std::endl;
}

void Harl::error(void)
{
    State currentState = DEBUG;
    std::cout << currentState.message << std::endl;
}
