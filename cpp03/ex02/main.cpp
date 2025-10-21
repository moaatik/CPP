#include "FragTrap.hpp"

int main(void)
{
	std::cout << "=== Creating FragTraps ===" << std::endl;
	FragTrap a;
	FragTrap b("Jack");
	FragTrap c(b);

	std::cout << "\n=== Testing actions ===" << std::endl;
	b.attack("target-1");
	b.takeDamage(20);
	b.beRepaired(15);
	b.highFivesGuys();

	std::cout << "\n=== Testing exhaustion ===" << std::endl;
	b.takeDamage(200);
	b.highFivesGuys();

	std::cout << "\n=== Destroying FragTraps ===" << std::endl;
	return 0;
}
