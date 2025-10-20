#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	in_guard = false;
	std::cout << "default constructor for ScavTrap " << name << " called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	in_guard = false;
	std::cout << "parameterized constructor for ScavTrap " << name << " called" << std::endl;
}

ScavTrap::~ScavTrap() {std::cout << "destructor for ScavTrap " << this->name << " called" << std::endl;}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	hit_points = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	in_guard = copy.in_guard;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (hit_points <= 0)
		return (void)(std::cout << "ScavTrap " << this->name << " already dead!" << std::endl);
	if (energy_points <= 0)
		return (void)(std::cout << "ScavTrap " << this->name << " has no energy!" << std::endl);
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
	energy_points--;
}

void ScavTrap::guardGate()
{
	if (in_guard == true)
	{
		in_guard = false;
		std::cout << "ScavTrap " << this->name <<  " no longer guards the Gate" << std::endl;
	}
	else
	{
		in_guard = true;
		std::cout << "ScavTrap " << this->name <<  " guarding the Gate!" << std::endl;
	}
}
