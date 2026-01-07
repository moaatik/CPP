#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm
{

  private:
	const std::string name;
	bool			  IsSigned;
	int				  gradeToSign;
	int				  gradeToExecute;

  public:
	AForm();
	AForm(const AForm &other);
	AForm(std::string name, bool IsSigned, int gradeToSign, int gradeToExecute);
	AForm &operator=(const AForm &other);
	virtual ~AForm();
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
	class FormNotSignedException : public std::exception
	{
	  public:
		const char *what() const throw();
	};
	void		 beSigned(Bureaucrat &object);
	virtual void execute(Bureaucrat const &executor) const = 0;
};
std::ostream &operator<<(std::ostream &os, const AForm &object);

#endif
