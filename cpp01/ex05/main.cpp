#include "harl.hpp"

int main(void)
{
    Harl *guy = new Harl;
    std::string level;

    std::cout << "Enter a level [DEBUG] [INFO] [WARNING] [ERROR]:";
    std::getline(std::cin, level);
    guy->complain(level);
}




