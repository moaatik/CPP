#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *Heapi = new (std::nothrow) Zombie(name);
	if (!Heapi)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		return NULL;
	}
	return (Heapi);
}
