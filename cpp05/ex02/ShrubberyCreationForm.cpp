#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), target(target)
{
    //std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old_obj) : AForm(old_obj), target(old_obj.target)
{
    //std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
    *this = old_obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old_obj)
{
    //std::cout << "Copy ShrubberyCreationForm assignment operator called" << std::endl;
    (void) old_obj;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
    std::ofstream	outfile;
	const std::string	outfileName = this->target + "_shrubbery";
	outfile.open(outfileName.c_str());
	if (!outfile)
	{
        std::cout << "Cannot create outfile" << std::endl;
        return;
    }
    std::string			shrubbery =	"               ,@@@@@@@,\n"
							   						"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
							   						"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
							   						"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
							   						"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
							   						"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
							   						"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
							   						"       |o|        | |         | |\n"
							   						"       |.|        | |         | |\n"
							   						"    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
    if (executor.getGrade() <= this->getGradeExecute())
        outfile << shrubbery;
    else
        throw AForm::GradeTooLowException();
}