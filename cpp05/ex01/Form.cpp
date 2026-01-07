#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Unkown")
{
	IsSigned	   = 0;
	gradeToSign	   = 150;
	gradeToExecute = 150;
	std::cout << "Form Default constructor called\n";
}

Form::Form(std::string name, bool IsSigned, int gradeToSign, int gradeToExecute)
	: name(name)
{
	std::cout << "Form Parameterized constructor called\n";
	this->IsSigned = IsSigned;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	this->gradeToSign	 = gradeToSign;
	this->gradeToExecute = gradeToExecute;
}

Form::Form(const Form &other)
{
	std::cout << "Form Copy constructor called\n";
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form Copy assignment operator called\n";
	if (this != &other)
	{
		this->IsSigned		 = other.IsSigned;
		this->gradeToSign	 = other.gradeToSign;
		this->gradeToExecute = other.gradeToExecute;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Form Destructor called\n";
}

const std::string &Form::getName() const
{
	return name;
}

int Form::getGradeToSign() const
{
	return gradeToSign;
}

int Form::getGradeToExecute() const
{
	return gradeToExecute;
}

bool Form::getIsSigned() const
{
	return IsSigned;
}

std::ostream &operator<<(std::ostream &os, const Form &object)
{
	os << "Form " << object.getName();
	if (object.getIsSigned())
		os << " is signed, ";
	else
		os << " is not signed, ";
	os << "grade required to sign is " << object.getGradeToSign()
	   << " and grade required to execute is " << object.getGradeToExecute();
	return os;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Too High grade";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Too Low grade";
}

void	Form::beSigned(Bureaucrat &object)
{
	if (object.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	IsSigned = 1;
}
