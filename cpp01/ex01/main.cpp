#include "Zombie.hpp"

int main()
{
	Zombie *Zombies = zombieHorde(10, "staicka");
	for (int i = 0; i < 10; i++)
		Zombies[i].announce();
	delete[] Zombies;
	return (0);
}
