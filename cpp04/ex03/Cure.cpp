#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
	std::cout << "default constructor for Cure called" << std::endl;
}

Cure::Cure(std::string const &type)
{
	this->type = type;
	std::cout << "parameterized constructor for Cure called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
	*this = copy;
	std::cout << "copy constructor for Cure called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "destructor for Cure called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
	this->type = copy.type;
	return (*this);
}

std::string const &Cure::getType() const
{
	return type;
}

AMateria *Cure::clone() const
{
	return new Cure(type);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
