#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "default constructor for Dog called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "copy constructor for Dog called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "destructor for Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Haw Haw" << std::endl;
}
