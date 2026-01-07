#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern Default constructor called\n";
}

Intern::Intern(const Intern &other)
{
	std::cout << "Intern Copy constructor called\n";
	*this = other;
}

Intern &Intern::operator=(const Intern &other)
{
	std::cout << "Intern Copy assignment operator called\n";
	(void) other;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor called\n";
}

AForm *Intern::makeForm(std::string name, std::string target)
{

	std::string Forms[] = {"presidential pardon", "robotomy request",
						   "shrubbery creation"};

	int i = 0;
	for (; i < 3 && name != Forms[i]; i++)
		;
	switch (i)
	{
	case 0:
		std::cout << "Intern creates presidential pardon" << std::endl;
		return new PresidentialPardonForm(target);
	case 1:
		std::cout << "Intern creates robotomy request" << std::endl;
		return new RobotomyRequestForm(target);
	case 2:
		std::cout << "Intern creates shrubbery creation" << std::endl;
		return new ShrubberyCreationForm(target);
	default:
		std::cerr << "Intern couldn't find form: " << name << std::endl;
		return NULL;
	}
}
