#ifndef PRESIDENT_HPP
# define PRESIDENT_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

	private:
    	const std::string &target; 
		void execute(Bureaucrat const &executor);
		
    public:
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
		~PresidentialPardonForm();

		//Public Member Functions
};

#endif