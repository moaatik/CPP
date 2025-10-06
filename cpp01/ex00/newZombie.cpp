#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* Heapi = new Zombie(name);
	return (Heapi);
}
