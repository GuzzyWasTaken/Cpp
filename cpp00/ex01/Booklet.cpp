
#include <sstream>
#include "Phonebook.hpp"
#include "Booklet.hpp"
#include <cstdlib>
#include <cstring>
#include <iomanip>

t_Booklet::t_Booklet()
    : Name(""), LastName(""), nickname(""), PhoneNumber(""), DarkSecret(""), index(-1)
{
}

t_Booklet::t_Booklet(const std::string& name, const std::string& lastName,
                     const std::string& nickname, const std::string& phoneNumber,
                     const std::string& darkSecret, int index)
    : Name(name), LastName(lastName), nickname(nickname),
      PhoneNumber(phoneNumber), DarkSecret(darkSecret), index(index)
{
}

void t_Booklet::PrintContact() 
{
    std::cout << "\033[1;34mName:\033[0m" << Name << std::endl;
    std::cout << "\033[1;34mLast name:\033[0m" << LastName << std::endl;
    std::cout << "\033[1;34mNickame:\033[0m" << nickname << std::endl;
    std::cout << "\033[1;34mIndex:\033[0m" << index + 1 << std::endl;
    std::cout << "\033[1;34mPhone Number:\033[0m" << PhoneNumber << std::endl;
    std::cout << "\033[1;34mDarkest Secret:\033[0m" << DarkSecret << std::endl;
}

void t_Booklet::PrintLine(int Index) 
{
    std::cout << "\033[1;38;5;208m|    \033[0m";
    std::cout << Index + 1;
    std::cout << "\033[1;38;5;208m     |\033[0m";
    FormatPrint(Name);
    std::cout << "\033[1;38;5;208m|\033[0m";
    FormatPrint(LastName);
    std::cout << "\033[1;38;5;208m|\033[0m";
    FormatPrint(nickname);
    std::cout << "\033[1;38;5;208m|\033[0m" << std::endl;
}

void t_Booklet::FormatPrint(const std::string str)
{
	if (str.length() < 10)
		std::cout << std::setw(10) << std::right << str;
	else if (str.length() > 10)
	{
		std::string modifiedStr = str.substr(0, 10);
		modifiedStr.replace(9, 1, ".");
		std::cout << modifiedStr;
	}
	else
		std::cout << str;
}