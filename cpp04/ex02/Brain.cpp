#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "default constructor for Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "idea";
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "copy constructor for Brain called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "destructor for Brain called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = copy.ideas[i];
	return (*this);
}
