#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <cstdlib>
# include <string>
# include <iomanip>
# include <fstream>
# include <iostream>

class Bureaucrat
{
    private:
        const std::string _Name;
        int _Grade;
    public:
        void GradeTooHighException();
        void GradeTooLowException();

        Bureaucrat(std::string name, int grade);

        void IncrementGrade();
        void DecrementGrade();

        std::string getName();
        int          getGrade();
        
        ~Bureaucrat();
};