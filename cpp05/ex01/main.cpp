#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(void)
{
	std::cout << "\033[33m" << std::endl << "Test ex01" << "\033[0m" << std::endl;

	std::cout << "\033[33m" << std::endl << "Test too high and too low creation" << "\033[0m" << std::endl;
	try
	{
		Bureaucrat Sleeper1("Bernd", 1500);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Sleeper2("Olaf", -10);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	std::cout << "\033[33m" << std::endl << "Test increasing" << "\033[0m" << std::endl;
	Bureaucrat bob("Bob", 2);
	std::cout << bob;
    std::cout << "\n";
	try
	{
		bob.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << bob;
    std::cout << "\n";
	
	try
	{
	bob.incrementGrade();
	}
	catch(const std::exception& e)
	{
	std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << bob;

	std::cout << "\033[33m" << std::endl << "Test decreasing" << "\033[0m" << std::endl;
	Bureaucrat tim("Tim", 149);
	std::cout << tim;
    std::cout << "\n";
	try
	{
		tim.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << tim;
	std::cout << "\n";
	try
	{
	tim.decrementGrade();
	}
	catch(const std::exception& e)
	{
	std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << tim;
    std::cout << "\n";

	std::cout << "\033[33m" << std::endl << "Test ex01" << "\033[0m" << std::endl;

	Form id_form("ID FORM", 100, 90);
	Bureaucrat mr_slow("mr_slow",120);
	Bureaucrat mr_id("MR_ID", 100);
	std::cout << id_form;
	
	mr_slow.signForm(id_form);
	std::cout << id_form;

	mr_id.signForm(id_form);
	std::cout << id_form;
	
	return (0);
}