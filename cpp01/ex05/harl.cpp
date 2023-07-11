#include "harl.hpp"

static State DEBUG = {"DEBUG", "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"};
static State INFO = {"INFO", "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! if you did, I wouldn't be asking for it!"};
static State WARNING = {"WARNING", "I think I desertve to have some extra bacon for free. I've been coming for years you started working since last month"};
static State ERROR = {"ERROR", "This is unnacceptable, I want to speak to the manager now!"};
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
Harl::Harl()
{}
Harl::~Harl()
{}
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
            ((*this).*funcs[state])();
        case 1:
            state = 1;
            ((*this).*funcs[state])();
        case 2:
            state = 2;
            ((*this).*funcs[state])();
        case 3:
            state = 3;
            ((*this).*funcs[state])();
    }
}