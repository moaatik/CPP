#include "Bureaucrat.hpp"
#include "Intern.hpp"
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
	{
		Intern	   Intern_1;
		Bureaucrat boss("Boss", 1);

		AForm *f1;
		AForm *f2;
		AForm *f3;

		f1 = Intern_1.makeForm("shrubbery creation", "home");
		f2 = Intern_1.makeForm("robotomy request", "Bender");
		f3 = Intern_1.makeForm("presidential pardon", "Ford");

		boss.signForm(*f1);
		boss.executeForm(*f1);

		boss.signForm(*f2);
		boss.executeForm(*f2);

		boss.signForm(*f3);
		boss.executeForm(*f3);

		delete f1;
		delete f2;
		delete f3;

		Intern_1.makeForm("unknown form", "test");
	}
	return 0;
}
