#ifndef ROBOTOMY_HPP
# define ROBOTOMY_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
    	const std::string &target; 
		void execute(Bureaucrat const &executor);
		
    public:
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		//Public Member Functions

};

#endif