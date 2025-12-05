#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "default constructor for AMateria called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "parameterized constructor for AMateria called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
	std::cout << "copy constructor for AMateria called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "destructor for AMateria called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
	this->type = copy.type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* AMateria used on " << target.getName() << std::endl;
}
