#include "ScalarConverter.hpp"

int main() {
    ScalarConverter::convert("67765432234564321");
    ScalarConverter::convert("42.0f");
    ScalarConverter::convert("-inf");
    ScalarConverter::convert("'A'");
    ScalarConverter::convert("nan");

    return 0;
}
