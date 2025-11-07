#include "Zombie.hpp"

int main()
{
	int		N	= 10;
	Zombie *Zombies = zombieHorde(N, "Heapi");
	for (int i = 0; i < N; i++)
		Zombies[i].announce();
	delete[] Zombies;
	return (0);
}
