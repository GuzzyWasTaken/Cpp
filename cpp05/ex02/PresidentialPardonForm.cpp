#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
    //std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target)
{
    //std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    // std::cout << "Copy PresidentialPardonForm assignment operator called" << std::endl;
    if (this == &other)
        return *this;
	
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
    if (executor.getGrade() <= this->getGradeExecute())
    {
        std::cout << this->target << " has been pardoned by Zaphod Beeblebrox."<< std::endl;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}