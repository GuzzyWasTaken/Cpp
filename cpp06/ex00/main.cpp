#include "ScalarConverter.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> tests = {
        "0",
        "42",
        "-42",
        "4.2f",
        "-4.2f",
        "4.2",
        "-4.2",
        "inf",
        "+inf",
        "-inf",
        "inff",
        "+inff",
        "-inff",
        "nan",
        "nanf",
        "'a'",
        "'0'",
        "2147483647",  
        "-2147483648", 
        "2147483648",  
        "-2147483649", 
        "0.0f",
        "0.0",
        "invalid",
        ""
    };

    Converter converter;

    for (const auto& test : tests) {
        std::cout << "\nTesting input: \"" << test << "\"" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        converter.set_arg(test);
        converter.print_conversions();
        std::cout << "----------------------------------------" << std::endl;
    }

    return 0;
}
