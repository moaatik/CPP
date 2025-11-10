#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {std::cout << "Zombie " << name << " slayed" << std::endl;}

void	Zombie::set_name(std::string name) {this->name = name;}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
