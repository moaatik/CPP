#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("ShrubberyCreation", 0, 72, 45), target("Unknown")
{
	std::cout << "RobotomyRequestForm Default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("ShrubberyCreation", 0, 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm Parameterized constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: AForm("ShrubberyCreation", 0, 72, 45)
{
	std::cout << "RobotomyRequestForm Copy constructor called\n";
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called\n";
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called\n";
	if (this != &other)
	{
		AForm::operator=(other);
		this->target = other.target;
	}
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::cout << "ZZzzzzz ZZZzzzz (drilling noises)" << std::endl;

	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << target << " has been robotomized successfully"
				  << std::endl;
	else
		std::cout << "Robotomy failed to robotomize " << target << std::endl;
}
