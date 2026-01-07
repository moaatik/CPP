#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat intern("Intern", 150);
		Form	   f1("Contract", false, 10, 20);

		std::cout << f1 << std::endl;

		intern.signForm(f1);
		boss.signForm(f1);

		std::cout << f1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
