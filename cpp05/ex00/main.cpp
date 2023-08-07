#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("John Doe", 3);
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;

        // This will throw an exception since the grade cannot go below 1
        bureaucrat.decrementGrade();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}