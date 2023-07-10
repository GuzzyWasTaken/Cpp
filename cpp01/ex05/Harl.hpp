#ifndef HARL_HPP
# define  HARL_HPP

# include <cstdlib>
# include <string>
# include <iomanip>
# include <fstream>
# include <iostream>


struct State 
{
    std::string code;
    std::string message;
};

State DEBUG = {"DEBUG", "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"};
State INFO = {"INFO", "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! if you did, I wouldn't be asking for it!"};
State WARNING = {"WARNING", "I think I desertve to have some extra bacon for free. I've been coming for years you started working since last month"};
State ERROR = {"ERROR", "This is unnacceptable, I want to speak to the manager now!"};


class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public:
        void complain(std::string level);
        ~Harl();
        Harl();
};

typedef void (Harl::*t_func) (void);
#endif
