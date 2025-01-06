#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>

class ScalarConverter {
public:
    static void convert(const std::string& literal);

private:
    ScalarConverter();                              // Prevent instantiation
    ScalarConverter(const ScalarConverter& other); // Prevent copy-construction
    ScalarConverter& operator=(const ScalarConverter& other); // Prevent copy-assignment
    ~ScalarConverter();                             // Prevent destruction

    static void convertToChar(double value);
    static void convertToInt(double value);
    static void convertToFloat(double value);
    static void convertToDouble(double value);

    static bool isCharLiteral(const std::string& literal);
    static bool isFloatLiteral(const std::string& literal);
    static bool isDoubleLiteral(const std::string& literal);
    static bool isIntLiteral(const std::string& literal);
};

#endif