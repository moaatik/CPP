#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name")
{
	name		  = "default";
	hit_points	  = 100;
	energy_points = 50;
	attack_damage = 30;
	std::cout << "default constructor for DiamondTrap " << name << " called"
			  << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->name	  = name;
	hit_points	  = 100;
	energy_points = 50;
	attack_damage = 30;
	std::cout << "parameterized constructor for DiamondTrap " << name
			  << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
	: ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "copy constructor for DiamondTrap " << name << " called"
			  << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "destructor for DiamondTrap " << this->name << " called"
			  << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
	name		  = copy.name;
	hit_points	  = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name : " << name << std::endl
			  << "ClapTrap name : " << ClapTrap::name << std::endl;
}
