#ifndef BOOKLET_H
#define BOOKLET_H

#include <string>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <sstream>


class PhoneBook;

class t_Booklet 
{
public:
    t_Booklet();
    t_Booklet(const std::string& name, const std::string& lastName,
              const std::string& nickname, const std::string& phoneNumber,
              const std::string& darkSecret, int index);
    void PrintContact(); 
    void PrintLine(int Index);
    void FormatPrint(const std::string str);
    
private:
    std::string Name;
    std::string LastName;
    std::string nickname;
    std::string PhoneNumber;
    std::string DarkSecret;
    int index;
};

#endif // T_BOOKLET_H