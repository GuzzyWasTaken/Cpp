#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form 
{
private:
    const std::string name;
    bool isSigned;
    const int gradeToSign;
    const int gradeToExecute;

public:
    Form(const std::string& n, int signGrade, int executeGrade);
    bool isFormSigned() const;
    void signForm(int bureaucratGrade);
    Form &operator=(const Form &copy);
    ~Form();
    void executeForm(int bureaucratGrade) const;

    // Getter functions
    std::string getName() const;
    bool getIsSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

    void        beSigned( const Bureaucrat& bureaucrat );
    
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

std::ostream& operator<<(std::ostream& os, const Form& form);
#endif // FORM_HPP
