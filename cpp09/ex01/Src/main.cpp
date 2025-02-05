#include "RPN.hpp"
#include <cstdlib> 
#include <sstream>

int error_message(std::string string)
{
    std::cout << string << std::endl;
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
    if (argc != 2)
        error_message("Error: Wrong amount of arguments");

    RPN prog(argv[1]);
    std::stack<int> stack;
    std::stringstream ss(prog._input);
    std::string token;

    while (ss >> token)
    {
        if (token.size() == 1 && prog.isOperater(token[0]))
        {
            if (stack.size() < 2)
                error_message("Error: Need two numbers for operation");

            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();

            int result = prog.calculation(b, a, token[0]); 
            if (result == INT_MAX)
                error_message("Error: Cannot divide by zero");

            stack.push(result);
        }
        else if (prog.isNumber(token))
        {
            char *end;
            long num = std::strtol(token.c_str(), &end, 10);
            if (*end != '\0' || num > INT_MAX || num < INT_MIN)
                error_message("Error: Invalid number");
            stack.push(static_cast<int>(num));
        }
        else
        {
            error_message("Error: Invalid character in input");
        }
    }

    if (stack.size() != 1)
        error_message("Error: More than one element left on Stack");

    std::cout << stack.top() << std::endl;
    return EXIT_SUCCESS;
}
