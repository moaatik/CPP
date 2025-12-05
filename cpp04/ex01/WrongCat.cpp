#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "default constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	*this = copy;
	std::cout << "copy constructor for WrongCat called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "destructor for WrongCat called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	this->type = copy.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "moew moew" << std::endl;
}
