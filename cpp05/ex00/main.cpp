#include "Bureaucrat.hpp"

int main() {
    try {
        // Create Bureaucrat objects with valid and invalid grades
        Bureaucrat bureaucrat1("Alice", 75); // Valid grade
        //Bureaucrat bureaucrat2("Bob", 0);   // Invalid grade (too low)
        //Bureaucrat bureaucrat3("Charlie", 160); // Invalid grade (too high)

        // Display bureaucrat information
        std::cout << "Bureaucrat 1 - Name: " << bureaucrat1.getName() << ", Grade: " << bureaucrat1.getGrade() << std::endl;
        //std::cout << "Bureaucrat 2 - Name: " << bureaucrat2.getName() << ", Grade: " << bureaucrat2.getGrade() << std::endl;
        //std::cout << "Bureaucrat 3 - Name: " << bureaucrat3.getName() << ", Grade: " << bureaucrat3.getGrade() << std::endl;

        // Increment and decrement grades
        std::cout << "incrementing" << std::endl; 
        bureaucrat1.incrementGrade();
        //bureaucrat2.decrementGrade();

        // Display updated grades
        std::cout << "\nUpdated Grades:" << std::endl;
        std::cout << "Bureaucrat 1 - Name: " << bureaucrat1.getName() << ", Grade: " << bureaucrat1.getGrade() << std::endl;
        //std::cout << "Bureaucrat 2 - Name: " << bureaucrat2.getName() << ", Grade: " << bureaucrat2.getGrade() << std::endl;

    } 
    catch (const std::string &e)
    {
        std::cerr << "Exception: " << e << '\n';
    }

    return 0;
}