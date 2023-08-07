#include "Bureaucrat.hpp"

int Bureaucrat::getGrade()
{
    return (_Grade);
}

std::string Bureaucrat::getName()
{
    return(_Name);
}

void Bureaucrat::GradeTooHighException()
{
    return "grade too high!";
}

void Bureaucrat::incrementGrade()
{
    if (_Grade == 150)
        throw GradeTooHighException();

    _grade++;
}

void Bureaucrat::decrementGrade()
{
    if (_grade == 1)
        throw GradeTooLowException();

    _grade--;
}

void Bureaucrat::GradeTooLowException()
{
    return "grade too low!";
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : _Name (name)
{
    std::cout << "Bur constructor called" << std::endl;
    try
    {
        if (grade < 1)
            throw GradeTooHighException();
        else if (grade > 150)
            throw GradeTooLowException();
        else
            _Grade = grade;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bur deconstructor called" << std::endl;

}

