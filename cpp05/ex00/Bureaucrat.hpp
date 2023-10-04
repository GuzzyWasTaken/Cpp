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
        std::string GradeTooHighException();
        std::string GradeTooLowException();

        Bureaucrat &operator=(const Bureaucrat &other);
        Bureaucrat(std::string name, int grade);
        Bureaucrat();
        void IncrementGrade();
        void DecrementGrade();

        std::string getName();
        int          getGrade();
        
        ~Bureaucrat();

        class SomeException: public std::exception {
            public:
            const char* what() { return "oof!"; }
        }
};

#endif