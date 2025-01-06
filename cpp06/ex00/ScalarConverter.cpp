#include "ScalarConverter.hpp"
#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include <cmath>

void ScalarConverter::convert(const std::string& literal) {
    double value = 0.0;

    // Detect type
    if (isCharLiteral(literal)) {
        value = static_cast<double>(literal[1]); // Extract char value from 'c'
    } else if (isIntLiteral(literal)) {
        value = static_cast<double>(std::atoi(literal.c_str()));
    } else if (isFloatLiteral(literal)) {
        value = std::strtof(literal.c_str(), nullptr);
    } else if (isDoubleLiteral(literal)) {
        value = std::strtod(literal.c_str(), nullptr);
    } else {
        std::cerr << "Error: Invalid literal format.\n";
        return;
    }

    // Perform conversions
    convertToChar(value);
    convertToInt(value);
    convertToFloat(value);
    convertToDouble(value);
}

void ScalarConverter::convertToChar(double value) {
    if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max() || std::isnan(value)) {
        std::cout << "char: impossible\n";
        return;
    }
    char c = static_cast<char>(value);
    if (std::isprint(c)) {
        std::cout << "char: '" << c << "'\n";
    } else {
        std::cout << "char: Non displayable\n";
    }
}

void ScalarConverter::convertToInt(double value) {
    if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max() || std::isnan(value)) {
        std::cout << "int: impossible\n";
        return;
    }
    std::cout << "int: " << static_cast<int>(value) << '\n';
}

void ScalarConverter::convertToFloat(double value) {
    std::cout << std::fixed << std::setprecision(1);
    if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max() || std::isnan(value)) {
        std::cout << "float: impossible\n";
        return;
    }
    std::cout << "float: " << static_cast<float>(value) << "f\n";
}

void ScalarConverter::convertToDouble(double value) {
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "double: " << value << '\n';
}

bool ScalarConverter::isCharLiteral(const std::string& literal) {
    return literal.length() == 3 && literal.front() == '\'' && literal.back() == '\'' && std::isprint(literal[1]);
}

bool ScalarConverter::isFloatLiteral(const std::string& literal) {
    return literal.find('f') == literal.length() - 1 && std::strtof(literal.c_str(), nullptr) != 0;
}

bool ScalarConverter::isDoubleLiteral(const std::string& literal) {
    char* end = nullptr;
    std::strtod(literal.c_str(), &end);
    return *end == '\0' && literal.find('.') != std::string::npos;
}

bool ScalarConverter::isIntLiteral(const std::string& literal) {
    char* end = nullptr;
    std::strtol(literal.c_str(), &end, 10);
    return *end == '\0' && literal.find('.') == std::string::npos;
}
