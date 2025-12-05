#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hit_points	  = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "default constructor for FragTrap " << name << " called"
			  << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hit_points	  = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "parameterized constructor for FragTrap " << name << " called"
			  << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "copy constructor for FragTrap " << name << " called"
			  << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "destructor for FragTrap " << this->name << " called"
			  << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	hit_points	  = copy.hit_points;
	energy_points = copy.energy_points;
	attack_damage = copy.attack_damage;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	if (hit_points > 0)
		std::cout << "FragTrap " << this->name << " requests a high five!"
				  << std::endl;
	else
		std::cout << "Poor FragTrap " << name << " is already dead!"
				  << std::endl;
}
