#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Mohamed", 1);
		Bureaucrat b("Hamid", 150);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat c("Jamal", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat d("Ossama", 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat e("Abdullah", 2);
		std::cout << e << std::endl;
		e.incrementGrade();
		std::cout << e << std::endl;
		e.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat f("mouarar Too Low grade", 149);
		std::cout << f << std::endl;
		f.decrementGrade();
		std::cout << f << std::endl;
		f.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
