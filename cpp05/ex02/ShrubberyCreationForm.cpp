#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreation", 0, 145, 137), target("Unknown")
{
	std::cout << "ShrubberyCreationForm Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreation", 0, 145, 137), target(target)
{
	std::cout << "ShrubberyCreationForm Parameterized constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm("ShrubberyCreation", 0, 145, 137)
{
	std::cout << "ShrubberyCreationForm Copy constructor called\n";
	*this = other;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called\n";
	if (this != &other)
	{
		AForm::operator=(other);
		this->target = other.target;
	}
	return *this;
}

const char *ShrubberyCreationForm::FailedToOpenException::what() const throw()
{
	return "Failed to open File";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();

	std::ofstream outfile;
	outfile.open((target + "_shrubbery").c_str());
	if (!outfile.is_open())
		throw FailedToOpenException();

	outfile << "                      ___\n"
			   "                _,-'\"\"   \"\"\"\"`--.\n"
			   "             ,-'          __,,-- \\\n"
			   "           ,'    __,--\"\"\"\"dF      )\n"
			   "          /   .-\"Hb_,--\"\"dF      /\n"
			   "        ,'       _Hb ___dF\"-._,-'\n"
			   "      ,'      _,-\"\"\"\"   \"\"--..__\n"
			   "     (     ,-'                  `.\n"
			   "      `._,'     _   _             ;\n"
			   "       ,'     ,' `-'Hb-.___..._,-'\n"
			   "       \\    ,'\"Hb.-'HH`-.dHF\"\n"
			   "        `--'   \"Hb  HH  dF\"\n"
			   "                \"Hb HH dF\n"
			   "                 \"HbHHdF\n"
			   "                  |HHHF\n"
			   "                  |HHH|\n"
			   "                  |HHH|\n"
			   "                  |HHH|\n"
			   "                  |HHH|\n"
			   "                  dHHHb\n"
			   "                .dFd|bHb.               o\n"
			   "      o       .dHFdH|HbTHb.          o /\n"
			   "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y\n"
			   "##########################################\n"
			   "------------------------------------------------\n";

	outfile.close();
}
