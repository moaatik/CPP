#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "=== Creating DiamondTraps ===" << std::endl;
	DiamondTrap a;                    // default constructor
	DiamondTrap b("Shiny");           // parameterized constructor
	DiamondTrap c(b);                 // copy constructor
	DiamondTrap d;                    
	d = b;                            // assignment operator

	std::cout << "\n=== Testing actions ===" << std::endl;
	b.attack("enemy-1");              // inherited from ScavTrap
	b.takeDamage(20);                 // inherited from ClapTrap
	b.beRepaired(15);                 // inherited from ClapTrap

	//std::cout << "\n=== Testing identity ===" << std::endl;
	//b.whoAmI();                       // special function

	std::cout << "\n=== Testing energy exhaustion ===" << std::endl;
	for (int i = 0; i < 55; i++)
		b.attack("target-" + std::to_string(i));

	std::cout << "\n=== Testing hit point exhaustion ===" << std::endl;
	a.takeDamage(150);
	a.attack("nobody");
	a.beRepaired(10);
	//a.whoAmI();

	std::cout << "\n=== Destroying DiamondTraps ===" << std::endl;
	return 0;
}
