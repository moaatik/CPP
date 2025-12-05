#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap a;
	ScavTrap b("Serena");
	ScavTrap c(b);
	ScavTrap d;
	d = b;

	b.attack("enemy-1");
	b.takeDamage(20);
	b.beRepaired(10);

	b.guardGate();
	b.guardGate();

	for (int i = 0; i < 55; i++)
		b.attack("target");

	a.takeDamage(150);
	a.attack("anyone");
	a.beRepaired(10);

	c.takeDamage(30);
	c.beRepaired(15);
	c.attack("boss");

	return 0;
}
