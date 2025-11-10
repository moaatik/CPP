#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cerr << "Not a valid number to allocate" << std::endl;
		return NULL;
	}

	Zombie *Zombies = new(std::nothrow) Zombie[N];
	if (!Zombies)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		return NULL;
	}

	for (int i = 0; i < N; i++)
		Zombies[i].set_name(name);
	return (Zombies);
}
