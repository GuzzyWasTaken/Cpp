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
    const std::string   _Name;
    int                 _Grade;


public:
    Bureaucrat(const std::string& name, int grade) ;
    Bureaucrat(const Bureaucrat& src);
    ~Bureaucrat();
    
    Bureaucrat &operator=(const Bureaucrat &other);



    std::string getName() const;
    int         getGrade() const;

    void        incrementGrade();
    void        decrementGrade();

    void        signForm( Form& form );
    
    class GradeTooHighException : public std::exception 
    {
        public:
            virtual const char* what() const throw() { return "Grade too high"; }
    };
    class GradeTooLowException : public std::exception 
    {
        public:
            virtual const char* what() const throw() { return "Grade too low"; }
    };

};

   std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif 