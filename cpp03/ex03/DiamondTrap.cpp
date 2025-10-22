#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "default constructor for DiamondTrap " << name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	hit_points = FragTrap::hit_points;
	energy_points = ScavTrap::energy_points;
	attack_damage = FragTrap::attack_damage;
	std::cout << "parameterized constructor for DiamondTrap " << name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ScavTrap(copy), FragTrap(copy)
{
	std::cout << "copy constructor for DiamondTrap " << name << " called" << std::endl;
}

DiamondTrap::~DiamondTrap() {std::cout << "destructor for DiamondTrap " << this->name << " called" << std::endl;}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &copy)
{
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	return (*this);
}
