#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "default constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "copy constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destructor for WrongAnimal called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "(a weird sound)" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}
