#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "default constructor for Cat called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "copy constructor for Cat called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "destructor for Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "moew moew" << std::endl;
}
