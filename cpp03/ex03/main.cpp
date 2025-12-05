#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap dt1;
	dt1.whoAmI();
	dt1.attack("Target1");

	DiamondTrap dt2("Shiny");
	dt2.whoAmI();
	dt2.attack("Target2");

	DiamondTrap dt3(dt2);
	dt3.whoAmI();
	dt3.attack("Target3");

	dt1 = dt3;
	dt1.whoAmI();
	dt1.attack("Target4");

	dt1.guardGate();
	dt1.highFivesGuys();

	return 0;
}
