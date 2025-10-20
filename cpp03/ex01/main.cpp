#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "=== Creating ScavTraps ===" << std::endl;
	ScavTrap a;
	ScavTrap b("Serena");
	ScavTrap c(b);
	ScavTrap d;                      
	d = b;

	std::cout << "\n=== Testing actions ===" << std::endl;
	b.attack("enemy-1");
	b.takeDamage(20);
	b.beRepaired(10);

	std::cout << "\n=== Testing ScavTrap special ability ===" << std::endl;
	b.guardGate();
	b.guardGate();

	std::cout << "\n=== Testing energy exhaustion ===" << std::endl;
	for (int i = 0; i < 55; i++)
		b.attack("target-" + std::to_string(i));

	std::cout << "\n=== Testing hit point exhaustion ===" << std::endl;
	a.takeDamage(150);
	a.attack("anyone");
	a.beRepaired(10);

	std::cout << "\n=== Testing chained behavior ===" << std::endl;
	c.takeDamage(30);
	c.beRepaired(15);
	c.attack("Final Boss");

	std::cout << "\n=== Destroying ScavTraps ===" << std::endl;
	return 0;
}
