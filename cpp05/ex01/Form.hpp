#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form
{

  private:
	const std::string name;
	bool			  IsSigned;
	int				  gradeToSign;
	int				  gradeToExecute;

  public:
	Form();
	Form(const Form &other);
	Form(std::string name, bool IsSigned, int gradeToSign, int gradeToExecute);
	Form &operator=(const Form &other);
	~Form();
	const std::string &getName() const;
	int				   getGradeToSign() const;
	int				   getGradeToExecute() const;
	bool			   getIsSigned() const;
	class GradeTooHighException : public std::exception
	{
	  public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	  public:
		const char *what() const throw();
	};
	void	beSigned(Bureaucrat &object);
};
std::ostream &operator<<(std::ostream &os, const Form &object);

#endif
