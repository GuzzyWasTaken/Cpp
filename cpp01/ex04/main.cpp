#include "sed.hpp"
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
        std::cout << "bad try again" << std::endl;
    
}

//replace S1 with s2

void replaceStringInFile(const std::string filename, const std::string s1, const std::string s2)
{
    ifstream fileIn;

    fileIn.open(filename);

}