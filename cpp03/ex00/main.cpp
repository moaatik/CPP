#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap a;
	ClapTrap b("Serena");
	ClapTrap c(b);
	ClapTrap d;
	d = b;

	b.attack("enemy-1");
	b.takeDamage(3);
	b.beRepaired(5);

	for (int i = 0; i < 11; i++)
		b.attack("target");

	a.takeDamage(15);
	a.attack("nobody");
	a.beRepaired(2);

	c.takeDamage(5);
	c.beRepaired(2);
	c.attack("Boss");

	return 0;
}
