#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& n, int signGrade, int executeGrade)
    : name(n), _isSigned(false), gradeToSign(signGrade), gradeToExecute(executeGrade) 
{
    std::cout << "Form constructor called" << std::endl;
}


Form&   Form::operator=(const Form &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->_isSigned = copy.getIsSigned();
        // didn't assign other attributes because 
        // they are constant and can't be changed
    }
    return (*this);
}


Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

void Form::signForm(int bureaucratGrade) 
{
    if (bureaucratGrade <= gradeToSign) 
    {
        _isSigned = true;
        std::cout << "Form has been signed by bureaucrat." << std::endl;
    }
    else 
    {
        throw Form::GradeTooLowException();
    }
}


void    Form::beSigned(const Bureaucrat& bureaucrat) 
{
    if (bureaucrat.getGrade() > gradeToSign)
        throw Form::GradeTooLowException();
    _isSigned = true;
}

std::string Form::getName() const 
{
    return name;
}

bool Form::getIsSigned() const 
{
    return _isSigned;
}

int Form::getGradeToSign() const 
{
    return gradeToSign;
}

int Form::getGradeToExecute() const 
{
    return gradeToExecute;
}

std::ostream& operator<<(std::ostream &out, const Form &form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Grade to execute: " << form.getGradeToExecute() << std::endl;
    out << "Signed: " << form.getIsSigned() << std::endl;
    return (out);
}