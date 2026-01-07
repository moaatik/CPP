#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150)
{
	std::cout << "Bureaucrat Default constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	std::cout << "Bureaucrat Parameterized constructor called\n";
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat Copy constructor called\n";
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "Bureaucrat Copy assignment operator called\n";
	if (this != &other)
		this->grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called\n";
}

const std::string Bureaucrat::getName() const
{
	return name;
}
int Bureaucrat::getGrade() const
{
	return grade;
}

void Bureaucrat::incrementGrade()
{
	if (grade <= 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade()
{
	if (grade >= 150)
		throw GradeTooLowException();
	grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Too High grade";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Too Low grade";
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &object)
{
	os << object.getName() << ", bureaucrat grade " << object.getGrade();
	return os;
}

void Bureaucrat::signForm(Form &object)
{
	try
	{
		object.beSigned(*this);
	}
	catch (std::exception &a)
	{
		std::cout << this->name << " couldn’t sign " << object.getName()
				  << " because " << a.what() << std::endl;
		return;
	}
	std::cout << this->name << " signed " << object.getName() << std::endl;
}
