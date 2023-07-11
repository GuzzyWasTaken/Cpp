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
