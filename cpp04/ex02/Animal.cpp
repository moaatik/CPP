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

std::string Animal::getType() const
{
	return type;
}
