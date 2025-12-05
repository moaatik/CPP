#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type	  = "Cat";
	cat_brain = new Brain();
	std::cout << "default constructor for Cat called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	cat_brain = NULL;
	*this	  = copy;
	std::cout << "copy constructor for Cat called" << std::endl;
}

Cat::~Cat()
{
	delete cat_brain;
	std::cout << "destructor for Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this == &copy)
		return *this;

	this->type = copy.type;
	delete cat_brain;
	cat_brain = new Brain(*copy.cat_brain);
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "moew moew" << std::endl;
}
