#include "sed.hpp"
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>


//todo; file protection shit. and no new line eof
void replaceStringInFile(const std::string filename, const std::string s1, const std::string s2)
{
    std::ifstream fileIn(filename);
    std::ofstream fileOut(filename + ".replace");
    std::string   line;
    size_t pos = 0;

    std::cout << filename << std::endl;
    if (!fileIn.is_open())
    {
        std::cout << "Something went wrong opening the ource file" << std::endl;
        return ;
    }
    while (std::getline(fileIn, line))
    {
        pos = line.find(s1);
        if (pos != std::string::npos)
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length(), line.length());
        fileOut << line;
        if(!fileIn.eof())
           fileOut << std::endl;
    }
    //std::cout << fileOut << std::endl;
}

int main(int ac, char **av)
{
    if (ac != 4)
        std::cout << "bad try again" << std::endl;
    replaceStringInFile(av[1], av[2], av[3]);
}

