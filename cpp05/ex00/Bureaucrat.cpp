#include "Bureaucrat.hpp"


 //throw exception class
int Bureaucrat::getGrade()
{
    return (_Grade);
}

std::string Bureaucrat::getName()
{
    return(_Name);
}

std::string Bureaucrat::GradeTooHighException()
{
    return "grade too high!";
}

std::string Bureaucrat::GradeTooLowException()
{
    return "grade too low!";
}
void Bureaucrat::IncrementGrade()
{
    if (_Grade == 150)
        throw GradeTooHighException();

    _Grade++;
}

void Bureaucrat::DecrementGrade()
{
    if (_Grade == 1)
        throw GradeTooLowException();

    _Grade--;
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

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "operator overloaded" << std::endl;
    _Grade = other._Grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bur deconstructor called" << std::endl;

}

Bureaucrat::Bureaucrat()
{
     std::cout << "Bur constructor called" << std::endl;
}

