#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type	  = "Dog";
	dog_brain = new Brain();
	std::cout << "default constructor for Dog called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	dog_brain = NULL;
	*this	  = copy;
	std::cout << "copy constructor for Dog called" << std::endl;
}

Dog::~Dog()
{
	delete dog_brain;
	std::cout << "destructor for Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
	if (this == &copy)
		return *this;

	this->type = copy.type;
	delete dog_brain;
	dog_brain = new Brain(*copy.dog_brain);
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Haw Haw" << std::endl;
}
