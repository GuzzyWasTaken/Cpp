#include "Span.hpp"

int main()
{

    std::cout << std::endl;
    std::cout << "_____________ TEST 1 _____________" << std::endl;
    try
    {
        Span s1 = Span(5);
        s1.addNumber(100);
        s1.addNumber(1);
        s1.addNumber(17);
        s1.addNumber(9);
        s1.addNumber(11);

        std::cout << "Shortes span: " << s1.shortestSpan() << std::endl;
        std::cout << "Longest span: " << s1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "_____________ TEST 2 _____________" << std::endl;
    try
    {
        Span s1 = Span(10);
        s1.fillSpan(10);

        std::cout << "Shortes span: " << s1.shortestSpan() << std::endl;
        std::cout << "Longest span: " << s1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "_____________ TEST 3 _____________" << std::endl;
    try
    {
        Span s1 = Span(5);
        s1.fillSpan(6);

        std::cout << "Shortes span: " << s1.shortestSpan() << std::endl;
        std::cout << "Longest span: " << s1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;


    std::cout << std::endl;
    std::cout << "_____________ TEST 4 _____________" << std::endl;
    try
    {
        Span s1 = Span(1);
        s1.fillSpan(1);

        std::cout << "Shortes span: " << s1.shortestSpan() << std::endl;
        std::cout << "Longest span: " << s1.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    return (0);
}
