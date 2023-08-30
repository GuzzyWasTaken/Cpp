#include <iostream>
#include <string>

int main()
{
    std::string str1 = "HI THIS IS BRAIN";
    std::string *stringPTR = &str1;
    std::string &stringREF = str1;

    std::cout << "the string is:" << str1 << std::endl;
    std::cout << "the pointer address of str1 is: " << stringPTR << std::endl;
    std::cout << "the Ref address of str1 is: " << stringREF << std::endl;
    std::cout << "___________________________________________" << std::endl;
    std::cout << "the value of the pointer 1 is: " << *stringPTR << std::endl;
    std::cout << "the value of the ref is: " << &stringREF << std::endl;

}