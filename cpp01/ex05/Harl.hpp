#ifndef SED_HPP
# define  SED_HPP

# include <cstdlib>
# include <cstring>
# include <iomanip>
# include <fstream>

typedef enum e_state
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
};

typedef class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    public:
        ~Harl();
        Harl();
        voi complain(std::string level);
};

#endif
