#include "FragTrap.hpp"

int main(void)
{
	FragTrap a;
	FragTrap b("Jack");
	FragTrap c(b);

	b.attack("target-1");
	b.takeDamage(20);
	b.beRepaired(15);
	b.highFivesGuys();

	b.takeDamage(200);
	b.highFivesGuys();

	return 0;
}
