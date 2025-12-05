#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
	std::cout << "default constructor for Ice called" << std::endl;
}

Ice::Ice(std::string const &type)
{
	this->type = type;
	std::cout << "parameterized constructor for Ice called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
	*this = copy;
	std::cout << "copy constructor for Ice called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "destructor for Ice called" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
	this->type = copy.type;
	return (*this);
}

std::string const &Ice::getType() const
{
	return type;
}

AMateria *Ice::clone() const
{
	return new Ice(type);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
			  << std::endl;
}
