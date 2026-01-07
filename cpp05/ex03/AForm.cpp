#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Unkown")
{
	IsSigned	   = 0;
	gradeToSign	   = 150;
	gradeToExecute = 150;
	std::cout << "AForm Default constructor called\n";
}

AForm::AForm(std::string name, bool IsSigned, int gradeToSign, int gradeToExecute)
	: name(name)
{
	std::cout << "AForm Parameterized constructor called\n";
	this->IsSigned = IsSigned;
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	this->gradeToSign	 = gradeToSign;
	this->gradeToExecute = gradeToExecute;
}

AForm::AForm(const AForm &other)
{
	std::cout << "AForm Copy constructor called\n";
	*this = other;
}

AForm &AForm::operator=(const AForm &other)
{
	std::cout << "AForm Copy assignment operator called\n";
	if (this != &other)
	{
		this->IsSigned		 = other.IsSigned;
		this->gradeToSign	 = other.gradeToSign;
		this->gradeToExecute = other.gradeToExecute;
	}
	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called\n";
}

const std::string &AForm::getName() const
{
	return name;
}

int AForm::getGradeToSign() const
{
	return gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return gradeToExecute;
}

bool AForm::getIsSigned() const
{
	return IsSigned;
}

std::ostream &operator<<(std::ostream &os, const AForm &object)
{
	os << "AForm " << object.getName();
	if (object.getIsSigned())
		os << " is signed, ";
	else
		os << " is not signed, ";
	os << "grade required to sign is " << object.getGradeToSign()
	   << " and grade required to execute is " << object.getGradeToExecute();
	return os;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Too High grade";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Too Low grade";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "Form Not Signed";
}

void	AForm::beSigned(Bureaucrat &object)
{
	if (object.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	IsSigned = 1;
}
