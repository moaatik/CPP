#include "Zombie.hpp"

int main()
{
	Zombie *Zombie_in_heap = newZombie("Heapi");
	Zombie_in_heap->announce();

	randomChump("Staicka");

	delete Zombie_in_heap;
	return (0);
}
