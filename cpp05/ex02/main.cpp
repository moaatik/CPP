#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat intern("Intern", 150);

		ShrubberyCreationForm form("home");

		intern.signForm(form);
		boss.signForm(form);

		intern.executeForm(form);
		boss.executeForm(form);

		std::cout << "Check file: home_shrubbery" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat intern("Intern", 150);

		RobotomyRequestForm form("JAWAD");

		intern.signForm(form);
		boss.signForm(form);

		intern.executeForm(form);
		boss.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat intern("Intern", 150);

		PresidentialPardonForm pardon("Abdul");

		intern.signForm(pardon);
		boss.signForm(pardon);

		intern.executeForm(pardon);
		boss.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
