#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " slayed" << std::endl;
}

void Zombie::announce()
{
	if (name != "Foo")
		std::cout << '<' << name << '>';
	else
		std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
