#include "Bureaucrat.hpp"


 //throw exception class
int Bureaucrat::getGrade() const
{
    return (_Grade);
}

std::string Bureaucrat::getName() const
{
    return(_Name);
}

void    Bureaucrat::incrementGrade()
 {
    if ( _Grade - 1 < 1 )
        throw Bureaucrat::GradeTooHighException();
    _Grade--;
}

void    Bureaucrat::decrementGrade() 
{
    if ( _Grade + 1 > 150 )
        throw Bureaucrat::GradeTooLowException();
    _Grade++;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "operator overloaded" << std::endl;
    _Grade = other._Grade;
    return *this;
}

void Bureaucrat::signForm(Form& form);

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bur deconstructor called" << std::endl;

}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _Name(name), _Grade(grade) 
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat& src ) : _Name(src._Name), _Grade(src._Grade)
{
     std::cout << "Bur constructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &other)
{
    os << other.getName() << ", bureaucrat grade " << other.getGrade();
    return os;
}