#include "Form.hpp"

Form::Form(const std::string& n, int signGrade, int executeGrade)
    : name(n), isSigned(false), gradeToSign(signGrade), gradeToExecute(executeGrade) 
{
    std::cout << "Form constructor called" << std::endl;
}


Form&   Form::operator=(const Form &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->_signed = copy.getSigned();
        // didn't assign other attributes because 
        // they are constant and can't be changed
    }
    return (*this);
}

Form::Form(const Form &copy) : _name(copy._name), _signed(copy._signed), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
    std::cout << "Form Copy constructor called" << std::endl;
}

bool Form::isFormSigned() const 
{
    return isSigned;
}

Form::~Form()
{
    std::cout << "Form Destructor called" << std::endl;
}

void Form::signForm(int bureaucratGrade) 
{
    if (bureaucratGrade <= gradeToSign) 
    {
        isSigned = true;
        std::cout << "Form has been signed by bureaucrat." << std::endl;
    }
    else 
    {
        throw Form::GradeTooLowException();
    }
}



void    Form::beSigned(const Bureaucrat& bureaucrat) 
{
    if ( bureaucrat.getGrade() > gradeToSign )
        throw Form::GradeTooLowException();
    isSigned = true;
}

std::string Form::getName() const 
{
    return name;
}

bool Form::getIsSigned() const 
{
    return isSigned;
}

int Form::getGradeToSign() const 
{
    return gradeToSign;
}

int Form::getGradeToExecute() const 
{
    return gradeToExecute;
}

bool Form::isFormSigned() const 
{
    return isSigned;
}


std::ostream& operator<<(std::ostream &out, const Form &form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Grade to execute: " << form.getGradeToExecute() << std::endl;
    out << "Signed: " << form.getSigned() << std::endl;
    return (out);
}