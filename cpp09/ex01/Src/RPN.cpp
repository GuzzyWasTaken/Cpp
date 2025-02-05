#include "RPN.hpp"

RPN::RPN(std::string input) : _input(input) {}

RPN::RPN(const RPN &old_obj) : _input(old_obj._input) {}

RPN& RPN::operator=(const RPN &old_obj)
{
    _input = old_obj._input;
    return (*this);
}

RPN::~RPN(){}

bool RPN::isOperater(char check)
{
    if (check == '+' || check == '-' || check == '/' || \
        check == '*')
        return (true);
    return (false);
}

bool RPN::isNumber(const std::string &token) {
    for (size_t i = 0; i < token.size(); i++) {
        if (!isdigit(token[i]))
            return false;
    }
    return true;
}
int RPN::convertNum(char check)
{
    int value;
    value = check - '0';
    return value;
}

int RPN::calculation(int a, int b, char op)
{
    if (op == '+')
        return b + a;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return b * a;
    else
    {
        if (a == 0)  
            return INT_MAX;
        return a / b; 
    }
}
