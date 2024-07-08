#ifndef SHRUBBERY_HPP
# define SHRUBBERY_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
    	const std::string &target; 
		void execute(Bureaucrat const &executor);

    public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		~ShrubberyCreationForm();

		//Public Member Functions

		class OpenFileExeption : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif