#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {std::cout << "Zombie " << name << " slayed" << std::endl;}

void	Zombie::announce()
{
	if (name!="Foo")
		std::cout << '<'<<name<<'>';
	else
		std::cout<<name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main()
{
	Zombie *Zombie_in_heap = newZombie("Heapi");
	Zombie_in_heap->announce();
	delete Zombie_in_heap;

	randomChump("Staicka");

	return (0);
}
