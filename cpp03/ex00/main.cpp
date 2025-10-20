#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "=== Creating ClapTraps ===" << std::endl;
	ClapTrap a;
	ClapTrap b("Serena");
	ClapTrap c(b);
	ClapTrap d;                          
	d = b;

	std::cout << "\n=== Testing actions ===" << std::endl;
	b.attack("enemy-1");
	b.takeDamage(3);
	b.beRepaired(5);

	std::cout << "\n=== Testing energy exhaustion ===" << std::endl;
	for (int i = 0; i < 11; i++)
		b.attack("dummy target");

	std::cout << "\n=== Testing hit point exhaustion ===" << std::endl;
	a.takeDamage(15);
	a.attack("nobody");
	a.beRepaired(2);

	std::cout << "\n=== Testing chained behavior ===" << std::endl;
	c.takeDamage(5);
	c.beRepaired(2);
	c.attack("Boss");

	std::cout << "\n=== Destroying ClapTraps ===" << std::endl;
	return 0;
}
