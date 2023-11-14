#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <cstdlib>
# include <string>
# include <iomanip>
# include <fstream>
# include <iostream>

class Brain
{
    private:
       
    public:
    Brain();
    Brain(const Brain& obj);
    Brain& operator=(const Brain& obj);
    ~Brain();
    std::string ideas[100];
};

#endif