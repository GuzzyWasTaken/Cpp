#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() 
{
    std::cout << "Scalar constructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) 
{
    if (this != &other) 
    {
        this = &other;
        return *this;
    }
    return *this;
}

ScalarConverter::~ScalarConverter() 
{
    std::cout << "Scalar deconstructor called" << std::endl;
}

static void ScalarConverter::Convert(std::string num)
{

    int j = num.find('.');
    if (j != num.length())
    {
        double dub = 0.0;
        try
        {
            dub = std::stod(num);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::<< "shi was a double:" << " " << dub << std::endl;
        return;
    }
    j = num.find('f');
    if (j != num.length())
    {
        float flo = 0;
        try
        {
            flo = std::stof(num);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::<< "shi was a float:" << " " << flo << std::endl;
        return;
    }
    else 
    {
        int inty = 0;
        try
        {
            inty = std::stoi(num);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::<< "shi was a int:" << " " << inty << std::endl;
        return;
    }
    //inplement chars too ie; 'e' 'c'
}