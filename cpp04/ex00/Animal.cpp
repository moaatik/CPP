#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "default constructor for Animal called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "copy constructor for Animal called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "destructor for Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "(a weird sound)" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
