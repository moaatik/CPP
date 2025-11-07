#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cerr << "Not a valid number to allocate" << std::endl;
		return nullptr;
	}

	Zombie *Zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		Zombies[i].set_name(name);
	return (Zombies);
}
